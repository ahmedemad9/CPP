#include<iostream>
using namespace std;

int rounder(int mark){
    int rounded_mark=mark;
    if(mark<38) goto alpha;
    if((mark%5)==3){
        rounded_mark+=2;
    }
    else if((mark%5)==4){
        rounded_mark+=1;
    }
    alpha:;
    return rounded_mark;
}

int main(){
    int students_no;
    cin>> students_no;
    int *grades=new int[students_no];
    for(int i=0;i<students_no;i++){
        cin>>grades[i];
    }
    for(int i=0;i<students_no;i++){
        cout<<rounder(grades[i])<<"\n";
    }
    return 0;
}
