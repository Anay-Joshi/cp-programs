#include <stdio.h>
int main()
{
    long long int n,p;
    while(scanf("%lld",&n)!=EOF)
    {
        p=1;
        while(p<n)
        {
            p*=9;         ///9 162  
            if(p>=n)
            {
                puts("Stan wins.");
                break;
            }
            p*=2;      ///18  324
            if(p>=n)
            {
                puts("Ollie wins.");
                break;
            }
        }
    }
}