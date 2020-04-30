#include <string>
#include <iostream>

char to_upper(char c)
{
    // between 97 and 122?
    if (c >= 'a' && c <= 'z')
        return c ^ 32; // unset 6th bit

    return c;
}

char to_lower(char c)
{
    // between 65 & 90?
    if (c >= 'A' && c <= 'Z')
        return c ^ 32; // set 6th bit

    return c;
}

int main() {
    std::string hexabet = "123456789ABCDEF";

    for(char& c : hexabet)
        std::cout << to_lower(c);
    std::cout << std::endl;
    std::cout << hexabet << std::endl;

    return 0;
}
