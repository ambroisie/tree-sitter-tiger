vim.cmd([[set runtimepath+=$NVIM_PLENARY]])
vim.cmd([[set runtimepath+=$NVIM_TREESITTER]])

vim.cmd([[runtime! plugin/plenary.vim]])
vim.cmd([[runtime! plugin/nvim-treesitter.lua]])

vim.o.swapfile = false
vim.bo.swapfile = false

require("nvim-treesitter.configs").setup({
  indent = { enable = true },
  highlight = { enable = true },
})
