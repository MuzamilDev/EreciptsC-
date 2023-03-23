#include<iostream>

using namespace std;

int main()
{

    string CustomerName , PerfumeName;
    float PerfumePrice, totalPrice;
    int quantity;

    cout<<"Enter Name of Customer "<<endl;
    getline(cin,CustomerName);

    cout<<"Enter Name of Perfume "<<endl;
    getline(cin,PerfumeName);

    cout<<" Enter Price of Perfume "<<endl;
    cin>>PerfumePrice;

    cout<<" How much Quantity "<<endl;
    cin>>quantity;

    totalPrice = quantity*PerfumePrice;

    cout<< endl;
    cout<<" -------------------------- "<<endl;
    cout<<" Customer Name "<<CustomerName<<endl;
    cout<<" Perfume Name  "<<PerfumeName<<endl;
    cout<<" Price Per bottle "<<PerfumePrice<<endl;
    cout<<" Quantity of Perfume"<<quantity<<endl;
    cout<<" Total Price of Perfume "<<totalPrice<<endl;
    cout<<" -------------------------- "<<endl;
    return 0;
}
