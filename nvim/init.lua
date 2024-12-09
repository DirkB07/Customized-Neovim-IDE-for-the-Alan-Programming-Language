-- Ensure Packer is installed
vim.cmd [[packadd packer.nvim]]

-- Configure and load plugins
require('packer').startup(function(use)
  -- Packer can manage itself
  use 'wbthomason/packer.nvim'

  -- nvim-cmp for autocompletion
  use 'hrsh7th/nvim-cmp'
  use 'hrsh7th/cmp-nvim-lsp'
  use 'hrsh7th/cmp-buffer'
  use 'hrsh7th/cmp-path'
  use 'hrsh7th/cmp-cmdline'
  use 'saadparwaiz1/cmp_luasnip'
  -- Snippets plugin
  use 'L3MON4D3/LuaSnip'
  use 'rafamadriz/friendly-snippets'
  -- LSP Configurations
  use 'neovim/nvim-lspconfig'
  --File Explorer
  use 'nvim-tree/nvim-tree.lua'
  use 'nvim-tree/nvim-web-devicons'

  -- nvim-treesitter for syntax highlighting
  use {
    'nvim-treesitter/nvim-treesitter',
    run = ':TSUpdate'
  }
end)

vim.g.loaded_netrw = 1
vim.g.loaded_netrwPlugin = 1

-- optionally enable 24-bit colour
vim.opt.termguicolors = true

-- Set up the custom parser for Alan
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.alan = {
  install_info = {
    url = "/home/dirk/tree-sitter-alan",  -- Local path to your tree-sitter-alan directory
    files = {"src/parser.c", "src/scanner.c"},  -- Adjust based on your actual file extensions
    generate_requires_npm = false,  -- Assuming no npm dependencies
    requires_generate_from_grammar = false,  -- Assuming pre-generated parser files
  },
  filetype = "alan",
}

-- Configure Treesitter
require'nvim-treesitter.configs'.setup {
  ensure_installed = {"alan"},  -- Ensure 'alan' is included in the list of installed parsers
  highlight = {
    enable = true,
    additional_vim_regex_highlighting = false,
  },
  parser_install_dir = vim.fn.stdpath("config") .. "/tree-sitter-parsers",  -- Directory for installed parsers
}

-- Append custom parser install directory to runtime path
vim.opt.runtimepath:append(vim.fn.stdpath("config") .. "/tree-sitter-parsers")

-- Set filetype for Alan files
vim.api.nvim_command("autocmd BufEnter,BufWinEnter,TabEnter *.alan set ft=alan")

-- Setup nvim-cmp
local cmp = require("cmp")
local luasnip = require("luasnip")

cmp.setup({
  snippet = {
    expand = function(args)
      luasnip.lsp_expand(args.body)
    end,
  },
  mapping = cmp.mapping.preset.insert({
    ['<C-b>'] = cmp.mapping.scroll_docs(-4),
    ['<C-f>'] = cmp.mapping.scroll_docs(4),
    ['<C-Space>'] = cmp.mapping.complete(),
    ['<C-e>'] = cmp.mapping.abort(),
    ['<CR>'] = cmp.mapping.confirm({ select = true }),
    ['<Tab>'] = cmp.mapping.select_next_item(),
    ['<S-Tab>'] = cmp.mapping.select_prev_item(),
  }),
  sources = cmp.config.sources({
    { name = 'luasnip' },  -- Ensure LuaSnip is included
    { name = 'buffer' },
  }),
  experimental = {
    ghost_text = true,  -- Show inline completion preview
  }
})

-- Setup luasnip
require("luasnip.loaders.from_vscode").lazy_load()

-- Define your custom snippets
luasnip.add_snippets('all', {
  luasnip.snippet('source', {
    luasnip.text_node('source program_name begin relax end'),
  }),
  luasnip.snippet('function', {
    luasnip.text_node('function func_name() begin relax end'),
  }),
  luasnip.snippet('if', {
    luasnip.text_node('if expr then statements end'),
  }),
  luasnip.snippet('while', {
    luasnip.text_node('while expr do statements end'),
  }),
})
-- Formatter function

local function get_node_text(node)
    local start_row, start_col, end_row, end_col = vim.treesitter.get_node_range(node)
    local lines = vim.api.nvim_buf_get_lines(0, start_row, end_row + 1, false)
    if #lines == 0 then return "" end
    lines[#lines] = string.sub(lines[#lines], 1, end_col)
    lines[1] = string.sub(lines[1], start_col + 1)
    return table.concat(lines, "\n")
end

local function format_alan_code()
    local parser = vim.treesitter.get_parser(0, "alan")
    local tree = parser:parse()[1]
    local root = tree:root()

    local formatted_lines = {}
    local keywords = { "begin", "relax", "end", "function" }

    local function split_and_format_line(line)
        -- Split line into words
        local words = vim.split(line, " ")
        for _, word in ipairs(words) do
            -- Check if the word is a keyword and add it as a new line
            if vim.tbl_contains(keywords, word) then
                table.insert(formatted_lines, word)
            else
                -- Combine non-keyword words into the same line
                if #formatted_lines == 0 or vim.tbl_contains(keywords, formatted_lines[#formatted_lines]) then
                    table.insert(formatted_lines, word)
                else
                    formatted_lines[#formatted_lines] = formatted_lines[#formatted_lines] .. " " .. word
                end
            end
        end
    end

    for node in root:iter_children() do
        local node_text = get_node_text(node)
        local lines = vim.split(node_text, "\n")
        for _, line in ipairs(lines) do
            split_and_format_line(line)
        end
    end

    -- Insert formatted lines into buffer
    vim.api.nvim_buf_set_lines(0, 0, -1, false, formatted_lines)
end

-- Create command
vim.api.nvim_create_user_command('FormatAlan', function()
    format_alan_code()
end, {})

require("nvim-web-devicons").setup{
	default = true;
}

require'nvim-tree'.setup()

-- Automatically open nvim-tree when opening Neovim
vim.cmd([[
  augroup NvimTree
    autocmd!
    autocmd VimEnter * NvimTreeOpen
  augroup END
]])

-- Keybinding to toggle nvim-tree
vim.api.nvim_set_keymap('n', '<leader>e', ':NvimTreeToggle<CR>', { noremap = true, silent = true })
