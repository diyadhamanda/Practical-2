///Create a product class with attribute name and price. Use a vector to store multiple product. Input and Display all product detail//

#include<iostream>
#include<vector>
using namespace std;
class Product{
public:
    vector<string> v1;
    vector<double> v2;
    string name;
    double price;
    int size;

    void setproduct()
    {
        cout<<"Enter the size of Vector ";
        cin>>size;

        for (int i = 0; i < size; i++)
        {
            cout<<"Enter Product Name["<<i<<"]:";
            cin>>name;
            v1.push_back(name);
            cout<<"Enter price ["<<i+1<<"]: ";
            cin>>price;
            v2.push_back(price);

        } 
    }
    void getproduct()
    {
        cout<<endl;
        cout<<"Display All product List "<<endl;

        for (int i = 0; i < size; i++)
        {
         cout<<"product Name["<<i+1<<"]"<<v1.at(i)<<endl;
         cout<<"Pirce["<<i+1<<"]:"<<v2.at(i)<<endl;   
        }
        
    }
};

int main()
{
    Product pro;

    pro.setproduct();
    pro.getproduct();
    
    return 0;
}