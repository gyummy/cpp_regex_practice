//
// Created by 조인겸 on 2021/02/14.
//

#include "Matcher.h"

#include <utility>

Matcher::Matcher(std::string s, std::string pattern) : _s(std::move(s)), _pattern(std::move(pattern)) {
    _regex = std::regex(_pattern);  //FIXME regex 자체를 인수로 받으면 매칭이 안 되는 문제. 성능 문제가 걱정..
}

bool Matcher::find() {
    return std::regex_search(_s, _regex);
}

std::string Matcher::group() {
    return group(0);
}

std::string Matcher::group(int i) {
    std::string matched;
    if (std::regex_search(_s, _match, _regex) && _match.size() > i)
        matched = _match[i].str();
    return matched;
}

int Matcher::groupCount() {
    if (std::regex_search(_s, _match, _regex))
        return _match.size();
    return 0;
}
