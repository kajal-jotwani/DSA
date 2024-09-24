// print sum of diagonal matrix

#include<iostream>
using namespace std;

int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row = 4;
    int col = 4;
    int Firstsum = 0;
    int Secondsum = 0;

    for(int i = 0; i < 4; i++){
        Firstsum += arr[i][i];
    }
    cout << Firstsum;
    int i = 0;
    int j = col - 1;
    while(j >=0){
        Secondsum += arr[i][j];
        i++;
        j--;
    }
    cout << endl;
    cout <<Secondsum;
}