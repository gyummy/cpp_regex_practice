//
// Created by 조인겸 on 2021/02/14.
//

#ifndef CPP_REGEX_TEST_MATCHER_H
#define CPP_REGEX_TEST_MATCHER_H

#include <string>
#include <regex>

class Matcher {
private:
    std::string _s;
    std::string _pattern;
    std::regex _regex;
    std::smatch _match;

public:
    Matcher(std::string s, std::string pattern);

    bool find();
    std::string group();
    std::string group(int i);
    int groupCount();
};


#endif //CPP_REGEX_TEST_MATCHER_H
