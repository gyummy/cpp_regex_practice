#include <iostream>
#include <Pattern.h>
#include <vector>

int main() {
    std::string patternString = "(\\d+)e";
    std::string s = "h123eloo";

    Pattern *pattern = Pattern::compile(patternString);
    Matcher matcher = pattern->matcher(s);
    if(matcher.find()) {
        for(int i = 0; i < matcher.groupCount(); i++)
            std::cout << "#" << i << ":" << matcher.group(i) << std::endl;
    }
}