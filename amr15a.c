#include <stdio.h>
int main()
{
    short N, a, lucky = 0;
    scanf("%d", &N);
    while(N--)
        {
            scanf("%d", &a);
            (a%2 == 0)?(lucky++):(lucky--);
        }
    (lucky > 0)?(printf("READY FOR BATTLE")):(printf("NOT READY"));
    return 0;
}   
