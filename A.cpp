#include <bits/stdc++.h>
 
using namespace std;
 
size_t find_longest_str2_o_str(const std::string &_str1, const std::string &_str2)
{
    size_t index{}, last_str2_index{}, count{}, longest_count{};
    while ((index = _str1.find(_str2, index)) != std::string::npos)
    {
        if (last_str2_index == index) {
            if (count > longest_count)
            {
                longest_count = count;
            }
            count = 1;
            if (count > longest_count)
            {
                longest_count = count;
            }
        }
        else if (last_str2_index == index - 1 || last_str2_index == 0)
        {
            count++;
            if (count > longest_count)
            {
                longest_count = count;
            }
        }
        else
        {
            if (count > longest_count)
            {
                longest_count = count;
            }
            count = 1;
        }
        index += _str2.length() - 1;
        last_str2_index = index;
    }
    return longest_count;
}
 
int main(void)
{
    string a;
    getline(cin, a);
    cout << find_longest_str2_o_str(a, "uwu") << '\n';
    return 0;
}