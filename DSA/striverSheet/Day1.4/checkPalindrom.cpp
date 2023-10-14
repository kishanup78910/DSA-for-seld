
#include<bits/stdc++.h>
bool palindrome(int n)
{
    string s = to_string(n);
    int x = s.length();
    
    for (int i = 0; i < x / 2; i++) {
        if (s[i] != s[x - i - 1]) {
            return false;
        }
    }
    return true;
}