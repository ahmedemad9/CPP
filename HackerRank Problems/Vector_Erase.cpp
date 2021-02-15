#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, queries,mono,duo1,duo2,input;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input;
        vec.push_back(input);
    }
    cin>>mono>>duo1>>duo2;

    vec.erase((vec.begin()+mono-1));
    vec.erase(vec.begin()+duo1-1,vec.begin()+duo2-1);
    cout<<vec.size()<<"\n";
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    return 0;
}
