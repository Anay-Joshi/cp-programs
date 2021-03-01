#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char a[1001];
    char b[1001];
    while(gets(a))
    {
 
        gets(b);
 
        string subSequence="";
 
        for (int i=0; i < strlen(a); i++) 
            for (int j=0; j<strlen(b); j++) if (a[i] == b[j])subSequence += a[i],a[i] = '*', b[j] = '&';
 
        sort(subSequence.begin(),subSequence.end());
        cout << subSequence << endl;
    }
 
    return 0;
}