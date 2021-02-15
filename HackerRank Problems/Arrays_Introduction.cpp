#include<iostream>
using namespace std;

int main(){
    int n;
    int c;
    cin>>n;
    int h=n-1;
    int arr[h];
    
    for(int c=0;c<=h;c++){
     cin>>arr[c];
    }
    
    for(int y=h;y>=0;y--){
     cout <<arr[y]<<" ";
    }
    return 0;
}
