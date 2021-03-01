#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

int main()
{
    ll n;
    while (1)
    {
        cin>>n;
        if(n==0) break;
        vector<ll> a;
        a.push_back(1);
        a.push_back(2);
        a.push_back(2);
        for(ll i=3; i<n; i++)
        {
            while(a[i-1]--)
            {
                a.push_back(i);
            }
        }
        cout<<a[n]<<endl;
    }
    
    
}
  
