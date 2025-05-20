//Create a base class shape.Derive two class
//circle to create area of circle 
//rectangle to calculate area of rectangle
//Use hierarcal inheritance and call approprate area fuction//

#include<iostream>
using namespace std;

class Shape{
    public:
    float area;
};

class Circle : public Shape{
    public:
    float PIE=3.14, r;

    void setArea()
    {
        cout<<"Enter Area Of Circle ";
        cin>>r;
        area = this->PIE*r*r;
    }
    void getArea()
    {
        cout<<"---------------------"<<endl;
        cout<<"Area of Circle "<<this->area<<endl;
        cout<<"********************"<<endl;
        cout<<endl;
    }
};

class Rectangle :public Shape{
    public:
    float l,b;

    void setArea()
{
        cout<<"Enter Length of Rectangle ";
        cin>>l;
        cout<<"Enter Breath of Rectangle ";
        cin>>b;
        area = this->l + this->b;
}

    void getArea()
    {
        
        cout<<"---------------------"<<endl;
        cout<<"Area of Rectangle: "<<this->area<<endl;
        cout<<"********************"<<endl;
        cout<<endl;
    }

};

int main()
{
    Circle C;
    Rectangle R;

    C.setArea();
    C.getArea();

    R.setArea();
    R.getArea();

    return 0;
}