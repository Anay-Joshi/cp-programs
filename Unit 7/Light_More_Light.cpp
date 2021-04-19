#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define ll long long int
#define vll vector<ll>
#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define all(v) v.begin(),v.end()
#define sortall(x) sort(all(x))


// void solve() {

// }

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll n;
  	while(1) {
  		cin>>n;
        if(n == 0) break;
        ll r = sqrt(n);
        r*r == n ? cout<<"yes\n" : cout<< "no\n";
    }
    return 0;
}