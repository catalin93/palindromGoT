// palindromGoT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>
#include <algorithm> 

bool isPalindrome(const std::string& str)
{
    std::string s = str;
    sort(s.begin(), s.end());
    std::cout << s << std::endl;
    bool ok = true;
    if (s.size() % 2 == 0)
        ok = false;
    for (int i = 0; i <= s.size() / 2; i += 2)
    {
        if (s[i] != s[i + 1])
        {
            if (ok == false)
                return false;
            ok = false;
            i--;
        }
    }
    return true;
}
int main()
{
    std::string s ;
    std::cout << "Dati un sir de caractere." << std::endl;
    std::cin >> s;  
    bool result = isPalindrome(s);
    if (result)
        std::cout << "Avem un palindrom\n";
    else
        std::cout << "Nu avem un palindrom\n";
    return 0;
}