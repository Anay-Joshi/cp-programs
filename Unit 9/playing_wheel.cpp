#include <bits/stdc++.h>
using namespace std;

struct data
{
    int a,b,c,d;
};
bool visited[10][10][10][10];
bool forbidden[10][10][10][10];
int level[10][10][10][10];


int mod(int a)
{
    if(a<0) a += 10;
    return a%10;
}

void modify(int &a,int &b,int &c,int &d)
{
    a = mod(a);
    b = mod(b);
    c = mod(c);
    d = mod(d);
}

void BFS(data root)
{
    memset(level,-1,sizeof(level));
    memset(visited,true,sizeof(visited));
    visited[root.a][root.b][root.c][root.d] = false;
    level[root.a][root.b][root.c][root.d] = 0;
    queue <data> Q;
    Q.push(root);
    while(!Q.empty())
    {
        data u = Q.front(); Q.pop();
        int a = u.a;
        int b = u.b;
        int c = u.c;
        int d = u.d;
        int w,x,y,z;
        int dis = level[a][b][c][d];
//        printf(" root %d %d %d %d dis is %d\n",a,b,c,d,dis);
        for(int i= 0; i < 4 ;i++)
        {
//            w = a; x = b; y = c; z = d;
            for(int j=-1;j<2;j++)
            {
                if(!j) continue;
                w = a; x = b; y = c; z = d;
                if(i==0) w += j;
                if(i==1) x += j;
                if(i==2) y += j;
                if(i==3) z += j;
                modify(w,x,y,z);
//                printf("   %d %d %d %d\n",w,x,y,z);
                if(forbidden[w][x][y][z] && visited[w][x][y][z])
                {
//                    printf("   %d %d %d %d  --> %d\n",w,x,y,z,level[w][x][y][z]);
                    visited[w][x][y][z] = false;
                    level[w][x][y][z] = dis + 1;
                    Q.push({w,x,y,z});
                }
            }
        }
    }
}



int main()
{
//    freopen("uva.txt", "w", stdout);
    int t,num;
    scanf("%d",&t);
    while(t--)
    {
        data start,end;
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        start = {a,b,c,d};
        scanf("%d %d %d %d",&a,&b,&c,&d);
        end = {a,b,c,d};
        scanf("%d",&num);
        memset(forbidden,true,sizeof(forbidden));
        for(int i=0;i<num;i++)
        {
            int a,b,c,d;
            scanf("%d %d %d %d",&a,&b,&c,&d);
            forbidden[a][b][c][d] = false;
        }
        BFS(start);
        printf("%d\n",level[end.a][end.b][end.c][end.d]);
    }
    return 0;
}