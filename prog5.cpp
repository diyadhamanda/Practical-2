//Create a Menu Driven program the Following using a vector of string 
//Add a student name
//View all student names
// Delete Student Name by index.//

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<string> v1;
    string name;
    int index , size, choice;

    do
    {
        cout<<endl<<"**********************"<<endl;
        cout<<"Enter 1 For Add Student."<<endl;
        cout<<"Enter 2 for View All Student Name."<<endl;
        cout<<"Enter 3 for Delete Student Name By Index."<<endl;
        cout<<"Enter 0 for Exit."<<endl;
        cout<<"Enter Your Choice.";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the Size of vector: ";
            cin>>size;

           for (int i = 0; i < size; i++)
           {
                cout<<"Enter Student Name:["<<i<<"] ";
                cin>>name;
                v1.push_back(name);
           }   
        break;

        case 2:
            for (int i = 0; i <v1.size(); i++)
            {
                cout<<"Student Name:["<<i<<"] "<<v1.at(i)<<endl;
            }
        break;


        case 3:

            cout<<"Enter index for delete :";
            cin>>index;
            if (index >= 0 && index < v1.size())
            {
                v1.erase(v1.begin() + index);
                cout << " deleted." << endl;
            } 
            else
            {
                cout<<"Out of bound ";
            }
        break;

        case 0:
            cout << "Exiting program." << endl;
        break;


        default:

            cout<<"Wrong Choice !";  
        
        break;
        }


    } while (choice!=0);
    

    return 0;
}