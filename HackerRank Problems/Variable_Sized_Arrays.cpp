#include <iostream>
using namespace std;

int main(){
    int n,q,h,i;
    //cout<<"please insert n   q"<<endl;
    cin>>n>>q;
    int **a=new int*[n];
    for(i=0; i<n ;i++){
      // cout<<"please insert h"<< endl;
       cin>>h;
       //cout<<"please enter no."<<j<<" array"<<endl;

       a[i]=new int[h];
       for(int j=0;j<h;j++){
           cin>>a[i][j];
       }
    }
    int m,v,arr[q];
    for(int i=0;i<q;i++){
        cin>>m>>v;
        arr[i]=a[m][v];
    }
    for(int i=0;i<q;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
