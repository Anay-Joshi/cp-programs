#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
  
int countFibs(int low, int high) 
{ 
    int f1 = 0, f2 = 1, f3 = 1; 
    int result = 0; 
    while (f1 <= high) 
    { 
        if (f1 >= low) 
           result++; 
        f1 = f2; 
        f2 = f3; 
        f3 = f1 + f2; 
    } 
  
    return result; 
} 
  
int main() 
{ 
    while (1)
    {
        int l,h;
        cin>>l>>h;
        if(l==0 && h==0) break;
        cout << countFibs(l, h) << endl;

    }
   
   return 0; 
} 