#include <fnmatch.h>
#include <string>
#include <iostream>

#include <emscripten/bind.h>
using namespace emscripten;

int fnmatch_wrapped(std::string pattern, std::string input, int flags) {
    return fnmatch(pattern.c_str(), input.c_str(), flags);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("fnmatch", &fnmatch_wrapped);
    constant("FNM_PATHNAME", FNM_PATHNAME);
    constant("FNM_NOESCAPE", FNM_NOESCAPE);
    constant("FNM_PERIOD", FNM_PERIOD);
    
    constant("FNM_NOMATCH", FNM_NOMATCH);
    
    // constant("FNM_FILE_NAME", FNM_FILE_NAME);
    // constant("FNM_LEADING_DIR", FNM_LEADING_DIR);
    // constant("FNM_CASEFOLD", FNM_CASEFOLD);
    // constant("FNM_EXTMATCH", FNM_EXTMATCH);
}
