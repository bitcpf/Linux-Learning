" Vim global plugin for capitalizing first letter of each word
"       in the current line
" Last Change: 2008-11-21 Fri 08:23 AM IST
" Maintainer: www.swaroopch.com/contact/
" License: www.opensource.org/licenses/bsd-license.php

" Make sure we run only once
if exists("loaded_capitalize")
        finish
        endif
        let loaded_capitalize = 1

        " Capitalize the first letter of each word
        function s:Capitalize() range
            for line_number in range(a:firstline, a:lastline)
                        let line_content = getline(line_number)
                         " Luckily, the Vim manual had the solution already!
                                        " Refer ":help s%" and see 'Examples' section
                        let line_content = substitute(line_content, "\\w\\+", "\\u\\0", "g")
                        call setline(line_number, line_content)
             endfor
          endfunction
