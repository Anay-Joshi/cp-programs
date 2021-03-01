#include<bits/stdc++.h>
using namespace std;


long long int fact(int n)
{
    return ((n > 1) ? (n*fact(n-1)) : (1));
}
int main()
{
    int n,k;
    while(scanf("%d %d", &n, &k) == 2)
    {
        long long int T, output=1;
        for (int i=0; i<k; i++)
        {scanf("%lld", &T); output *= fact(T);}
 
        output = fact(n)/output;
        cout << output << endl;
    }
    return 0;
}