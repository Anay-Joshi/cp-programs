#include<bits/stdc++.h>
using namespace std;
 
long long int reverInt(long long int x)
{
    long long int rn=0;
    while(x > 0)
    {
        rn*= 10;
        rn += x%10;
        x/= 10;
    }
 
    return rn;
}
int main()
{
    int N;
    cin >> N;
 
    for (int i=0; i<N; i++)
    {
 
        long long int n, rn=0, nreversals=0;
        cin >> n;
         
         
        while(reverInt(n) != n)
        {
            nreversals++;
            n += reverInt(n);
        }
 
        cout << nreversals << " " << n << endl;
 
    }
 
    return 0;
}