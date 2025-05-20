//Create A muitilevel inheritance structure with:
//1. Student to input student name.
//2. Mark - to input marks of 3 subject using array.
//3. Result to calculate and display total and percentage. 

#include<iostream>
#include<string>
using namespace std;

class Student{
public:
string name;

public:
 void setstudent()
    {
            cout<<"ENTER STUDENT NAME :";
            getline(cin,this->name);
       
    }  
 void getstudent()    
    {
        cout<<endl;
        cout<<"Student Marksheet"<<endl;
        cout<<"Student Name:"<<this->name<<endl;
    }

};
class Marks : public Student
{
public:
    int marks[3],total;
    void setmarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter marks For Each Subject["<<i<<"]:";
            cin>>this->marks[i];
            this->total += this->marks[i];
        }
        
    }
    void getmarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter marks For Each Subject["<<i<<"]:"<<this->marks[i]<<endl;

        }
        
    }

};

class Result : public Marks{
    public:
    int avg;

    void calculateResult()
    {
        this->avg = this->total/3;
    }

    void getAvg()
    {
        cout<<"Percentage:"<<this->avg<<"%"<<endl;
    }
};

int main()
{
    Result obj;

    obj.setstudent();
    obj.setmarks();
    obj.calculateResult();
    obj.getstudent();
    obj.getmarks();
    obj.getAvg();
    return 0;
}


