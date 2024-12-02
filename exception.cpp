#include <iostream>
using namespace std;

int main() 
    {
        int X ,Y ,Z;
        try{
            cout << "Enter first number: " << endl;
            cin >> X;
            cout << "Enter second number: " << endl;
            cin >> Y;
            cout << "Enter second number: " << endl;
            cin >> Z;
            int denom = X-Y;
            if(denom == 0){
                throw(denom);
            }
            else{
                cout << "Result is" << Z / (X - Y);
            }
        }
        catch(int e){
            cout << "Error: you have entered " << e << "Divide by zero is not allowed " << endl;
        }
    return 0;
    }
