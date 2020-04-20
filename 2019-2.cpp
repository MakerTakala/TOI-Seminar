#include <cstdio>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(2500<n&&n<=7500){
        a=2;
        n-=2500;
        b=(n-1)/50+1;
        c=(n%50?n%50:50);
    }
    else{
        a=(n<=2500?1:3);
        n-=(7500<n)*7500;
        b=(n-1)/25+1;
        c=(n%25?n%25:25);
    }
    printf("%d %d %d",a,b,c);
return 0;
}
