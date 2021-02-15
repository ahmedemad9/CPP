#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int age;
    string first_name;
    string last_name;
    int standard;
    ~student(){
     cout<<age<<" "<<first_name<<" "<<last_name<<" "<<standard;
    }
};

int main() {
   student st1;
    cin>>st1.age;
    cin>>st1.first_name;
    cin>>st1.last_name;
    cin>>st1.standard;
    return 0;
}
