#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,x,num[998][2]={{0}},i,l=0,maxx=0;
    scanf("%d",&n);
    while(n--&&scanf("%d",&x)){
        for(i=0;i<l;i++)
            if(num[i][0]==x){
                num[i][1]++;
                break;
            }
        if(i==l){
            num[l][0]=x;
            l++;
        }
    }
    printf("%d\n",l);
    for(i=0;i<l;i++)
        maxx=max(maxx,num[i][1]);
    if(maxx==0)
        printf("NO");
    else
        for(i=0;i<l;i++)
            if(num[i][1]==maxx)
                printf("%d ",num[i][0]);
return 0;
}
