#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define ll long long int
#define vll vector<ll>
#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define all(v) v.begin(),v.end()
#define sortall(x) sort(all(x))

ll egcd(ll a,ll b,ll &x,ll &y)
{
 ll gcd , x1,y1;
 
 if(a==0)
 {
  x=0;
  y=1;
  
  return b;
 }
 
 gcd = egcd(b%a,a,x1,y1);
 
 x=y1-(b/a)*x1;
 y=x1;
 
 return gcd;
}

int main()
{
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  
  ll a,b,x,y,d;
 
   while(cin>>a)
   {
    cin>>b;
    
    d = egcd(a,b,x,y);
    
    if(a==b)
    {
     x=0;
     y=1;
    }
    
    cout<<x<<" "<<y<<" "<<d<<endl;
   }
   
 return 0;
}