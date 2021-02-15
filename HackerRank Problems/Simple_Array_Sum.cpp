#include<iostream>
using namespace std;

int main(){
    int n,total=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    cout<<total;

    return 0;
}
