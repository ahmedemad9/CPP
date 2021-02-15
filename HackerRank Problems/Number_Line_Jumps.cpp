#include<iostream>
using namespace std;

int main(){
    int x1,v1,x2,v2,x11,x22;
    float i;
    cin>>x1>>v1>>x2>>v2;
    if( ((v2>v1)) || (v1==v2) ){
        cout<<"NO";
    }
    // x1+i(v1)=x2+i(v2)    x1-x2=i(v2-v1)      i=(x1-x2)/(v2-v1)
    else{
        i=(x1-x2)%(v2-v1);
        if(i!=0) cout<<"NO";
        else cout<<"YES";
    }

    return 0;
}
