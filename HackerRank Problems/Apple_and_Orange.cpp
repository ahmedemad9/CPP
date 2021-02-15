#include<iostream>
#include<vector>
using namespace std;

//prototype for the function
int countApplesAndOranges();

int main(){
    int house_init , house_final; //house dimensions
    int apple_tree_loc , orange_tree_loc; //trees locations
    int apple_count , orange_count; //number of fruit
    vector<int>apple_loc;
    vector<int>orange_loc;
    int temp;
    int apple_inRange =0, orange_inRange=0;
    cin>>house_init>>house_final>>apple_tree_loc>>orange_tree_loc>>apple_count>>orange_count;

    for(int i=0;i<apple_count;i++){
        cin>>temp;
        apple_loc.push_back(temp+apple_tree_loc);
        if(apple_loc.at(i) >=house_init && apple_loc.at(i) <=house_final){
            apple_inRange+=1;
        }
    }
    for(int i=0;i<orange_count;i++){
        cin>>temp;
        orange_loc.push_back(temp+orange_tree_loc);
        if(orange_loc.at(i) >=house_init && orange_loc.at(i) <=house_final){
            orange_inRange+=1;
        }
    }
    cout<<apple_inRange<<endl<<orange_inRange;
    return 0;
}
