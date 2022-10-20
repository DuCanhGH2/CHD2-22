#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int l = 1, r = 1000000000, x = (l + r + 1) / 2;
    while (l != r)
    {
        x = (l + r) / 2;
        printf("? %d\n", x);
        fflush(stdout);
        char response[5];
        scanf("%s", response);
        if (strcmp(response, "Yes") == 0)
        {
            r = (l + r + 1) / 2;
            x = (l + r) / 2;
        }
        else
        {
            l = (l + r + 1) / 2;
            x = (l + r) / 2;
        }
    }
    printf("! %d\n", x);
    fflush(stdout);
    return 0;
}