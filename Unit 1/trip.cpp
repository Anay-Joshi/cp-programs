#include<bits/stdc++.h>
using namespace std;
int n;
float costs[1000];

int main() {
    int sum=0;
    while (std::cin >> n && n != 0)
    {  
        for (int i = 0; i < n; i++) 
        {
            cin>>costs[i];
            costs[i] *= 100;
            sum+=costs[i];     
        }
        
        double avg = ((double) sum) / n;
        double spend_less = 0;
        double spend_more = 0;
        
        for (int i = 0; i < n; i++) 
        {
            double difference = costs[i] - avg;
            if (difference < 0) 
            {
                spend_less += -((int) difference) / 100.0;
            } 
            else 
            {
                spend_more += ((int) difference) / 100.0;
            }
        }
        
        printf("$%.2f\n", spend_less > spend_more ? spend_less : spend_more);
    }
    return 0;
}