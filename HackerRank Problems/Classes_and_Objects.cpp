

class Student{
    private:
         int totalScore=0;
         int input_value=0;

    public:
         void input();
         int calculateTotalScore();
};

void Student::input(){
    for(int i=0;i<5;i++){
         cin>>input_value;
         totalScore+=input_value;
    }
}
int Student::calculateTotalScore(){
    return totalScore;
}


