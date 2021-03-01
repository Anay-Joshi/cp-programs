#include <bits/stdc++.h>
using namespace std;
 
struct Candidate
{
    string Name;
    int Votes;
    bool Eleminated;
};
 
Candidate Cands[21];
int Ballots[1000][1001];
void initVotes()
{
    for (int i=1; i<=20; i++) Cands[i].Votes = 0;
}
 
void initeleminated()
{
    for (int i=1; i<=20; i++) Cands[i].Eleminated = false;
}
 
int checkAbove50(int nVoters, int nCandidates)
{
    for (int i=1; i<= nCandidates; i++) if ((double)Cands[i].Votes > nVoters/2.0) return i;
    return -1;
}
 
void countVotes(int nVoters)
{
    for (int i=0; i<nVoters; i++)
        for (int j=0; j<3; j++)
            if (!Cands[Ballots[i][j]].Eleminated)
            {Cands[Ballots[i][j]].Votes++; break;}
}
 
bool eleminate(int nCandidates)
{
    int Highest=-1, Lowest=10000;
 
    for (int i=1; i<=nCandidates; i++) 
    {
        if (Cands[i].Votes > Highest && !Cands[i].Eleminated) Highest = Cands[i].Votes;
        if (Cands[i].Votes < Lowest  && !Cands[i].Eleminated) Lowest = Cands[i].Votes;
    }
 
    if (Lowest == Highest) return false;
 
    for (int i=1; i<=nCandidates; i++) if (Cands[i].Votes == Lowest) Cands[i].Eleminated = true;
 
    return true;
}
int main()
{
 
    int N;
     
 
    cin >> N;
    cin.get();
    cin.get();
    int nCandidates;
 
    for (int f=0; f<N; f++)
    {
        cin >> nCandidates;
        cin.get();
 
        for (int i=1; i<=nCandidates; i++) getline(cin,Cands[i].Name);
         
        initeleminated();
         int nVoters=0;
        for (nVoters=0;nVoters <1000; nVoters++)
        {
            char input;
            input = cin.get();
            if (input == '\n') break;
            cin.putback(input);
             
            for (int i=0; i<nCandidates; i++) 
                cin >> Ballots[nVoters][i];
 
            cin.get();
        }
        int winner = -1;
        do
        {
            initVotes();
            countVotes(nVoters);
            winner = checkAbove50(nVoters,nCandidates);
            if (winner != -1) break;
 
        }
        while(eleminate(nCandidates));
 
        if (winner == -1)
        {   for (int i=1; i<=nCandidates; i++) 
                if (!Cands[i].Eleminated) cout << Cands[i].Name << endl;
        }
        else cout << Cands[winner].Name << endl;
        if (f < N-1) cout << endl;
    }
 
    return 0;
}

/*

#include<bits/stdc++.h>
#define fo(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin.get();
        char name[21][100];
        int voter[1000][21]; 
        cin>>n;
        vector<int> count(n, 0);
        fo(i,n)
        {
            gets(name[i]);
        }
        fo(v,1000)
        {
            char input;
            input = cin.get();
            if (input == '\n') break;
            cin.putback(input);
            fo(i,n)
            {
                cin>>voter[v][i];
            }
        }
        int m = sizeof voter / sizeof voter[0];
        fo(i,m)
        {
            int x = voter[i][0];
            count[x-1]+=1;
        }
 
    }

    return 0;

 }
    

*/