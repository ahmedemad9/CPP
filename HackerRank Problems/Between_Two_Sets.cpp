#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a;
    vector<int>b;
    vector<int>r; //result
    int a_size,b_size;
    int temp=0;
    cin>>a_size>>b_size;
    //inpuut first vector
    for(int i=0;i<a_size;i++){
        cin>>temp;
        a.push_back(temp);
    }

    //input second vector
    for(int i=0;i<b_size;i++){
        cin>>temp;
        b.push_back(temp);
    }
    //sort data ascendingly
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    /*next for loop has booundaries   from   largest no.in first set   to    smallest no. in second set
    as common factor must exist there */
    for(int i=a.back();i<=b.front();i++){
/*next for loop is to check values from previous for
loop whether they are factored by first set or not
j is an iterator for first loop*/
temp=0;
        for(int j=0;j<a_size;j++){
            if (i % a.at(j)==0)
                temp+=1;   
            else 
                temp=0;    
        }
        if(temp==a_size) r.push_back(i);    
    }
int r_size=r.size();
/*next for loop is to check if the results we got 
from the previous for loop whether they are factors 
of second data set or not*/    
    for(int y=0;y<r_size;y++){
        for(int k=0;k<b_size;k++){

            if( b.at(k) % r.at(y) !=0){
                r.erase(r.begin()+y);
                r_size-=1;
                y-=1;

                break;
            }

        }
    }
    cout<<r.size();
    return 0;
}
