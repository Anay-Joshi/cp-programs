#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
 
    cin >> T;
 
    for (int i=0; i<T; i++)
    {
        vector<int> A;
 
        int R;
        cin >> R;
         
        for (int j=0; j<R; j++)
        {
            int T;
            cin >> T;
            A.push_back(T);
        }
        sort(A.begin(), A.end());
        int d;
 
        d = A[ A.size()/2 ];
             
        long long int result=0;
        for (int j=0; j<A.size(); j++) result += abs(d - A[j]);
        cout << result;
        cout << endl;
    }
 
    return 0;
}