#include<bits/stdc++.h>
using namespace std;
 
struct job
{
    int S,T, pos;
};
 
 
bool compareJobs(job a, job b)
{
    double r1 = (double)a.S/a.T;
    double r2 = (double)b.S/b.T;
    if (r1 != r2) return r1 > r2;
 
    return a.pos < b.pos;
}
 
 
int main()
{
 
    int N;
 
    scanf("%d",&N);
 
    for (int i=0; i<N; i++)
    {
        int n;
        scanf("%d", &n);
        vector<job> jobs;
 
        for (int i=0; i<n; i++)
        {
            job j;
            scanf("%d %d", &j.T, &j.S);
            j.pos = i+1;
            jobs.push_back(j);
        }
        sort(jobs.begin(), jobs.end(), compareJobs);
 
        for (int i=0; i<n; i++)
            {
                cout << jobs[i].pos;
 
                if (i != n-1) cout << " ";
            }
            cout << endl;
 
        if (i != N-1) cout << endl;
 
    }
    return 0;
}