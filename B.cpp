#include <bits/stdc++.h>

using namespace std;

inline ptrdiff_t find_count_o_str(const std::vector<uint64_t> &_str1, const uint64_t &_str2, const size_t &end_pos)
{
    auto it = find(_str1.begin(), _str1.end(), _str2), cur_closest = it;
    auto cc_index = llabs(distance(_str1.begin() + end_pos, cur_closest)), start_pos = cc_index;
    while (it != _str1.end())
    {
        it = find(_str1.begin() + start_pos + 1, _str1.end(), _str2);
        auto it_index = llabs(distance(_str1.begin() + end_pos, it));
        if (it_index <= cc_index)
        {
            cur_closest = it;
            cc_index = it_index;
        }
        start_pos = it_index;
    }
    return distance(_str1.begin(), cur_closest);
}

int main(void)
{
    size_t t;
    cin >> t;
    while (t--)
    {
        size_t n, k;
        cin >> n >> k;
        vector<uint64_t> a(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (size_t i = 1; i <= k; i++)
        {
            auto center_pos = static_cast<uint64_t>(roundl(floorl(n / 2))) - 1;
            if (a[center_pos] == i)
            {
                cout << 0 << ' ';
                continue;
            }
            //auto find_x = find(a.begin(), a.end(), i);
            //auto dist = distance(a.begin(), find_x);
            std::cout << find_count_o_str(a, i, center_pos) << ' ';
        }
    }
    return 0;
}