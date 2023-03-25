#include<iostream>

using namespace std;

class piant
{
   private:
    string name , address;
    string Size,color;
    int gallons, code;
    float price, total;

   public:
    void customer()
    {

    cout<<"Enter Name of Customer "<<endl;
    getline(cin,name);
    cout<<"Enter Address "<<endl;
    getline(cin,address);

    }

    void items()
    {

    cout<<"Enter Color to Buy "<<endl;
    getline(cin,color);
    cout<<"Enter Size of Paint "<<endl;
    getline(cin,Size);
    cout<<"Enter code of color "<<endl;
    cin>>code;
    cout<<"Type Number of Gallons/medium/drummy "<<endl;
    cin>>gallons;
    cout<<"Enter Price of Per Gallon/medium/drummy "<<endl;
    cin>>price;

    }

    void formula()
    {

    total=gallons*price;

    }

    void display()
    {

    cout<<"-----Customer Data--------"<<endl;
    cout<<"Name of Customer: "<<name<<endl;
    cout<<"Address Of Customer: "<<address<<endl;
    cout<<"--------------------------"<<endl;

    cout<<"-----Paint Data-----------"<<endl;
    cout<<"Color:  "<<color<<endl;
    cout<<"Size:   "<<Size<<endl;
    cout<<"Code:   "<<code<<endl;
    cout<<"Gallon: "<<gallons<<endl;
    cout<<"Per Gallon Price: "<<price<<endl;
    cout<<"Total Price of Your Products after sales tax is: "<<total<<endl;
    cout<<"--------------------------"<<endl;

    }
};
int main()
{
    piant object;
    object.customer();
    object.items();
    object.formula();
    object.display();

    return 0;
}
