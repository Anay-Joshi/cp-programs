#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

ll combi(ll n, int r)
{
    ll res=1;
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    for(ll i=0; i<r; i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}

int main()
{
    int s;
    cin>>s;
    while(s--)
    {
        ll n;
        cin>>n;
        cout<<combi(n,4)+combi(n,2)+1<<endl;
    }
}