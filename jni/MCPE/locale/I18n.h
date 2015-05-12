#pragma once

#include <string>
#include <vector>

class I18n {
public:
    std::string get(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
};