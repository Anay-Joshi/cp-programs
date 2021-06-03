#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define ll long long
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


vector<pair<int,int> > ppl, tbl;
int pp[73];
int ppp[73][103], ttt[73];


void solve() {

    int N,M;
    while( cin >> M >> N ){
        if(N+M==0) break;
        ppl.clear();
        tbl.clear();
        for(int i=0;i<M;++i){
            int u;
            cin >> u;
            ppl.push_back(make_pair(u,i));
        }
        for(int i=0;i<N;++i){
            int u;
            cin >> u;
            tbl.push_back(make_pair(u,i));
        }
        sort(ppl.begin(), ppl.end());
        sort(tbl.begin(), tbl.end());
        reverse(ppl.begin(), ppl.end());
        reverse(tbl.begin(), tbl.end());
        for(int i=0;i<M;++i){
            pp[ppl[i].second] = i;
        }
        for(int i=0;i<N;++i){
            //tt[tbl[i].second] = i;
            ttt[i] = tbl[i].first;
        }
        bool ok = true;
        for(int i=0;i<M;++i){
            int sz = ppl[i].first;
            int k = 0;
            for(int j=0;j<sz;++j){
                bool found = false;
                for(;k<N;++k){
                    if(ttt[k] > 0){
                        found = true;
                        ppp[i][j] = tbl[k].second;
                        --ttt[k];
                        break;
                    }
                }
                if(!found){
                    ok = false;
                    break;
                }
                ++k;
            }
            if(!ok) break;
        }
        if(!ok) printf("0\n");
        else {
            printf("1\n");
            for(int i=0;i<M;++i){
                int sz = ppl[pp[i]].first;
                for(int j=0;j<sz;++j){
                    if(j != 0) printf(" ");
                    printf("%d", ppp[pp[i]][j]+1);
                }
                printf("\n");
            }
        }
    }

}


int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    solve();
    return 0;
}
