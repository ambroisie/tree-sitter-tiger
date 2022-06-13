package.path = package.path .. ";" .. vim.env.NVIM_TREESITTER .. "/?.lua"

local Runner = require("tests.indent.common").Runner
local XFAIL = require("tests.indent.common").XFAIL

local runner = Runner:new(it, "./test/indent/", {
    tabstop = 2,
    shiftwidth = 2,
    softtabstop = 0,
    expandtab = true,
})

describe("indent Tiger:", function()
    describe("whole file:", function()
        runner:whole_file("../highlight/", {
            expected_failures = {
                -- NOTE: none for now
            },
        })
        runner:whole_file("../tags/", {
            expected_failures = {
                -- NOTE: none for now
            },
        })
        runner:whole_file(".", {
            expected_failures = {
                -- NOTE: none for now
            },
        })
    end)

    describe("new line:", function()
        runner:new_line("classes.tig", { on_line = 1, text = "var a := 0", indent = 2 }, "class declaration beginning", XFAIL)
        runner:new_line("classes.tig", { on_line = 2, text = "var a := 0", indent = 2 }, "class declaration after field")
        runner:new_line("classes.tig", { on_line = 4, text = "var a := 0", indent = 2 }, "class declaration after method")
        runner:new_line("classes.tig", { on_line = 5, text = "var a := 0", indent = 0 }, "after class declaration")
        runner:new_line("classes.tig", { on_line = 7, text = "var a := 0", indent = 2 }, "class type beginning", XFAIL)
        runner:new_line("classes.tig", { on_line = 8, text = "var a := 0", indent = 2 }, "class type after field")
        runner:new_line("classes.tig", { on_line = 10, text = "self.a := 0", indent = 4 }, "inside method", XFAIL)
        runner:new_line("classes.tig", { on_line = 13, text = "var a := 0", indent = 2 }, "class type after method")
        runner:new_line("classes.tig", { on_line = 14, text = "var a := 0", indent = 0 }, "after class type")

        runner:new_line("groupings.tig", { on_line = 2, text = "var b := 0", indent = 2 }, "let declarations")
        runner:new_line("groupings.tig", { on_line = 3, text = "a := a + 1", indent = 2 }, "after 'in'", XFAIL)
        runner:new_line("groupings.tig", { on_line = 4, text = "a := a + 1;", indent = 4 }, "sequence", XFAIL)
        runner:new_line("groupings.tig", { on_line = 8, text = "a := a + 1;", indent = 2 }, "after sequence")
        runner:new_line("groupings.tig", { on_line = 10, text = "+ 1", indent = 0 }, "after 'end'")
    end)
end)
