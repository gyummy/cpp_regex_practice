//
// Created by 조인겸 on 2021/02/14.
//

#include "Pattern.h"

#include <utility>

Pattern::Pattern(std::string pattern) : _pattern(std::move(pattern)) {
}

Pattern *Pattern::compile(std::string pattern) {
    return new Pattern(std::move(pattern));
}

Matcher Pattern::matcher(std::string s) {
    return Matcher(std::move(s), _pattern);
}

const std::string &Pattern::getPattern() const {
    return _pattern;
}
