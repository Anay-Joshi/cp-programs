#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"Enter no. of test cases: "<<endl;
    cin>>n;
    while(n!=0)
    {
        //cout<<"Enter sequence: "<<endl;
        vector <int> A;
        vector <int> dif;
        int x=0;
        cin>>x;
        A.push_back(x);
        for(int i=1; i<=A[0]; i++)
        {
            int j;
            cin>>j;
            A.push_back(j);

        }
        for(int i=1; i<=A[0]; i++)
        {
            int d;
            d = A[i+1]-A[i];
            dif.push_back(abs(d));
        }
        
        for(int i=1; i<=A[0]; i++)
        {
            if(find(dif.begin(),dif.end(),i)!=dif.end())
            {
                c++;
            }
            else
            {
                break;
            }  
        }
        if(c>=A[0]-1) 
        {
            cout<<"Jolly"<<endl;
        }
        else
        { 
            cout<<"Not Jolly"<<endl;
        }
        n--;
    }


}