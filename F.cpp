#include <bits/stdc++.h>

using namespace std;

uint64_t count_reimpl(const map<int, string> &_m, const std::string &_c)
{
    uint64_t count{};
    for (auto i = _m.begin(); i != _m.end(); i++)
    {
        if (i->second == _c)
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    vector<int> vec_o_sat{1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    map<int, string> map_o_sat;
    for (auto &s : vec_o_sat)
    {
        printf("? %d\n", s);
        fflush(stdout);
        char response[7];
        scanf("%s", response);
        string str_n(response);
        map_o_sat.insert({s, str_n});
    }
    vector<string> vec_o_colors = {"white", "black", "red", "orange", "yellow"};
    for (auto &s : vec_o_colors)
    {
        auto count_o_s = count_reimpl(map_o_sat, s);
        if (count_o_s >= 3)
        {
            uint64_t count{};
            printf("! ");
            fflush(stdout);
            for (auto i = map_o_sat.begin(); i != map_o_sat.end(); i++)
            {
                if (count == 3)
                {
                    break;
                }
                if (i->second == s)
                {
                    printf("%d ", i->first);
                    fflush(stdout);
                    count++;
                }
            }
            break;
        }
    }
    return 0;
}