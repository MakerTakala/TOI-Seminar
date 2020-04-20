#include <cstdio>
using namespace std;
int main()
{
    int m,n;
    scanf("%d",&m);
    while(scanf("%d",&n)&&n)
        printf("%d\n",(n%m?m-n%m:n/m));
return 0;
}
