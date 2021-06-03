#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define ll long long
#define int long long int
#define X first
#define Y second
#define RALL(x) rbegin(x), rend(x)

#define vll vector<ll>
using pii = pair<int,int>;
#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define all(v) v.begin(),v.end()
#define sortall(x) sort(all(x))
#define eb emplace_back
#define pb push_back


const int maxn = 3E5 + 5;
const int mod = 1E9 + 7;


bool cmp(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2)
{
    if(p1.first.first<p2.first.first)
        return true;
    return false;
}

void solve() {

    int w, iq;
    vector<pair<pair<int, int>, int> > v; // ((weight, iq), index_in_input)
    int i=1;
    while(cin>>w>>iq)
    {
        v.push_back(make_pair(make_pair(w, iq), i));
        i++;
    }
    sort(v.begin(), v.end(), cmp); //sort weight
    vector<int> dp(v.size(), 1);
    vector<int> s(v.size());
    for(int i=0;i<s.size();i++)
        s[i] = i;
    int max = 1;
    int maxi=0;
    int lmaxi = 0;

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i].first.first>v[j].first.first && v[i].first.second<v[j].first.second && dp[i]<=dp[j])
            {
                dp[i] = dp[j]+1;
                s[i] = j;
                if(dp[i]>max)
                {
                    max = dp[i];
                    maxi = i;
                }
            }
        }
    }
    cout<<max<<endl;
    stack<int> st;
 
    for(int i=0;i<max;i++)
    {
       st.push(v[maxi].second);
       maxi = s[maxi];
    }
    for(int i=0;i<max;i++)
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    solve();  
    return 0;
}
 
