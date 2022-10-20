#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    uint64_t n;
    cin >> n;
    uint64_t res{1};
    if (n <= 2)
    {
        cout << n << '\n';
        return 0;
    }
    const uint64_t MOD = static_cast<uint64_t>(std::llround(1e9 + 7));
    for (uint64_t i = 1; i <= n - 1; i++) {
        res *= 2;
        res %= MOD;
    }
    cout << res % MOD + 1 << '\n';
    return 0;
}