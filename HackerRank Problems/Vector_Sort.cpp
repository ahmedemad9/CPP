#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int usrIn;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        cin>>usrIn;
        input.push_back(usrIn);
    }
    sort(input.begin(),input.end());
    
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}
