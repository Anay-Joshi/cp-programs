#include<bits/stdc++.h>

using namespace std;

int cycle( long int n)
{
    long int i = 1;

    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n=n/2;
        }
        else
        {
            n= (3*n)+1;

        }
        i++;
    }
    return i;
}

int main()
{
    int low, high,ch,n;
     cout<<"Enter number of test cases: "<<endl;
     cin>>n;

    while(n!=0)
        {
        cin>>low>>high;

        int max = cycle(low);

        for(int i = low + 1; i <= high; i++)
        {
            int l = cycle(i);
            if(l > max)
            {
                max = l;
            }
        }

        cout<<low<<" "<<high<<" "<<max<<"\n";
        n--;
               }
    return 0;

}
