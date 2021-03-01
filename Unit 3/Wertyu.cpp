
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c="1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char b[100];
    gets(b);
    for(int i=0;i<strlen(b);i++)
    {
        int Index=c.find(b[i]);
        if(Index==-1)
            cout<<b[i];
        else
            cout<<c[Index-1];
    }
    cout<<endl;
}
