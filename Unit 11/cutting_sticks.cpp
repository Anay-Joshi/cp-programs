#include<stdio.h>
#define MIN(x,y) ( (x) >= (y) ? (y) : (x) ) 
int main(){
	int L;
	while(scanf("%d",&L)==1&&L!=0){
		int DP[52][52];
		int m[52];
		int n;
		int i,j,k,min;

		scanf("%d",&n);
		m[0]=0;
		m[n+1]=L;
		for(i=1;i<=n;i++)
			scanf("%d",&m[i]);
		for(i=0;i<=n;i++)
			DP[i][i+1]=0;

		for(j=2;j<=n+1;j++)
			for(i=j-2;i>=0;i--){
				min=2e9;
				for(k=i+1;k<j;k++)
					min=MIN(min,DP[i][k]+DP[k][j]+m[j]-m[i]);
				DP[i][j]=min;
			}
		printf("The minimum cutting is %d.\n",DP[0][n+1]);
	}
	return 0;
}