#include <iostream>
#include <vector>
using namespace std;

int main(){
    int matches_count;
    int temp;
    int max=0,min=0;
    int max_count=0,min_count=0;
    cin>>matches_count;
    vector<int>scores;
    for(int i=0;i<matches_count;i++){ 
        cin>>temp;
        scores.push_back(temp);
        if(i==0){
        max=temp;   min=temp;}
        if(temp>max){
            max=temp;
            max_count+=1;
        }
        if(temp<min){
            min=temp;
                        min_count+=1;

        }

    }
    cout<<max_count<<" "<<min_count;
    return 0;
}
