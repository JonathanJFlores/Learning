#include<iostream>

using namespace std;

int main(){
    float price = 0.0;
    float product_iva = 0.0;
    float final_price = 0.0;

    cout<<"\n Write the price of product: "; cin>>price;
    cout<<"\n The price of product is: "<<price<<endl;
    product_iva = price*0.1;
    cout<<"\n The iva of product is: "<<product_iva<<endl;
    final_price = price + product_iva;
    cout<<"\n The price of product with iva is: "<<final_price<<endl;

    return 0;
}