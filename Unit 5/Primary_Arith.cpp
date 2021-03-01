#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    while(1)
    {
        int m,n;
        cin >> m >> n;
        if (m == 0 && n == 0) break;
        int carry=0, ncarries =0;
        while( m > 0 || n > 0)
        {
            carry =  (m%10 + n%10 + carry)/10;
            m/= 10;
            n /= 10;
            if (carry) ncarries++;
        }
 
        if (ncarries == 0) cout << "No carry operation.\n";
        else cout << ncarries << " carry operation" << ((ncarries > 1) ? ("s.\n") : (".\n"));
    }
    return 0;
}