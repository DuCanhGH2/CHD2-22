#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
    int l = 1, r = 1000000000, count{};
    while (l != r && count < 32)
    {
        int mid = (l + r) / 2;
        printf("? %d %d\n", l, r);
        fflush(stdout);
        char response[5];
        scanf("%s", response);
        if (strcmp(response, "Yes") == 0)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
        count++;
    }
    printf("! %d\n", (l + r) / 2);
    fflush(stdout);
    return 0;
}