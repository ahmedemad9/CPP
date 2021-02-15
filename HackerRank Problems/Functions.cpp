#include<iostream>
using namespace std;

int maxima(int a,int b,int c ,int d){
    int max1,max2,max;
    if (a>b) max1=a;
    else max1=b;
    if(c>d) max2=c;
    else max2=d;
    if(max1>max2) max=max1;
    else max=max2;
    return max;
}
int main(){
    int a,b,c,d,maxno;
    cin>>a>>b>>c>>d;
    maxno=maxima(a,b,c,d);
    cout<<maxno;
    return 0;
}

