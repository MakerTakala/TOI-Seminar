#include <iostream>
using namespace std;
int main()
{
    string in;
    int len,maxx=0,out;
    cin>>in;
    for(int i=0;i<in.size();i++)
        while(in[i+1]==in[i]+1){
            i++,len++;
        }
        if(len>=maxx){
            maxx=len;
            out=i-len+1;
        }
    cout<<maxx<<" ";
    for(int i=0;i<maxx;i++)
        cout<<in[out+i];
return 0;
}
