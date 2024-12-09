# Alan Language Development Environment

This project provides a comprehensive development environment for the Alan programming language using Neovim. It includes syntax highlighting, autocompletion, and code formatting features tailored specifically for Alan.

## Features

- **Syntax Highlighting:** Enhanced syntax highlighting using Tree-sitter for better code readability.
- **Autocompletion:** Context-aware autocompletion with custom snippets for common Alan constructs.
- **Code Formatting:** Custom code formatter that ensures code consistency and readability.
- **File Tree and Icons:** Integrated file tree explorer with webdev icons for a visually appealing directory structure.

## Prerequisites

- **Neovim:** Version 0.10.0 or higher.
- **Python:** Ensure Python 3 is installed on your system.
- **NerdFont** (optional for Icons)

## Installation

### Step 1: Clone the Repository

git clone (repo)

Copy and paste into ~/.config the two folders

### Step 2: Install Neovim Plugins
Open Neovim and run the following command to install the required plugins:

nvim
:PackerInstall

Now you can start using the IDE by opening any alan file with nvim.

nvim test.alan

Autocompletion
Custom snippets for Alan are available as you type. For example, typing source will suggest the source . Press enter to use autocomplete.

Code Formatting
To format an Alan file, type :AlanFormat. This will run the custom Alan formatter and apply consistent formatting.

Syntax highlighting 
Done automatically.
