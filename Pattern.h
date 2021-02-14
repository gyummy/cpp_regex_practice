//
// Created by 조인겸 on 2021/02/14.
//

#ifndef CPP_REGEX_TEST_PATTERN_H
#define CPP_REGEX_TEST_PATTERN_H


#include "Matcher.h"

class Pattern {
private:
    std::string _pattern;
public:
    explicit Pattern(std::string pattern);
    static Pattern *compile(std::string pattern);
    Matcher matcher(std::string s);

    const std::string &getPattern() const;
};


#endif //CPP_REGEX_TEST_PATTERN_H
