

class Rectangle{
    protected:
        float height,width;
    public:
        void display();

};

void Rectangle:: display(){
    cout<<height<<" "<<width<<"\n";
}

class RectangleArea:public Rectangle{
    private:

    public:
        void read_input();
        void display();
};

void RectangleArea::read_input(){
    cin>>Rectangle::height>>Rectangle::width;
}

void RectangleArea::display(){
    cout<<height*width;
}
