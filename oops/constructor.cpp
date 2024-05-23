#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

    public:
    // default constructor
    // customer(){
    //     name= "kajal";
    //     account_number = 5;
    //     balance = 1000;
    // }
    // parameterised constructor
    customer(string a, int b, int c){
        name= a;
        account_number = b ;
        balance = c;
    }

    void dispaly()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
     customer A2("kajal",50,100);
    // A1.dispaly();
    A2.dispaly();
    // A3.dispaly();
}