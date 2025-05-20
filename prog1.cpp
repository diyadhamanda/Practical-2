//Create a Class Student to store 5 Student name using array.Create a Derived class. Display that show All Student name using single inheritance//

#include<iostream> 
#include<string>
using namespace std;

class Student{
public:
    string name [5];
    void setstudent()
    {
       for (int i = 0; i < 5; i++)
       {
            cout<<"ENTER STUDENT NAME["<<i<<"]:";
            getline(cin,this->name[i]);
       }
       
    }    
};

class Name : public  Student{
public:
    void getstudent()
    {
        cout<<endl;
        cout<<"View All Student Name."<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<"Student Name ["<<i<<"]:"<<this->name[i]<<endl;
        }
        
    }

};


int main()
{
    Name name;
    name.setstudent();
    name.getstudent();
    return 0;
}