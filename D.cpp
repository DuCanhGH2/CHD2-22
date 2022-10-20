#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    size_t n, q;
    cin >> n >> q;
    while (q--)
    {
        uint64_t s{1};
        int64_t ai, bi;
        cin >> ai >> bi;
        bool skip = false;
        for (size_t i = 0; i < n; i++)
        {
            if (max(ai, bi) - min(ai, bi) == 1 && min(ai, bi) % 2 != 0)
            {
                cout << s << '\n';
                skip = true;
                break;
            }
            else
            {
                ai = (ai + 1) / 2;
                bi = (bi + 1) / 2;
                s++;
            }
        }
        if (!skip)
        {
            cout << s + 1 << '\n';
        }
    }
    return 0;
}