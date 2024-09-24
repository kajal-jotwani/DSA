// given two 2-D martices add them to produce 1 resultant matrix

#include<iostream>
using namespace std;

void Printcol(int arr[][4], int row, int col){
    for(int j = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            cout << arr[i][j];
        }
    }
}

int main()
{
    // create 2d arrays
    int arr1[3][4] = {2,4,6,8,10,12,14,16,18,20,22,24};
    int arr2[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int ans[3][4];

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++){
            ans[row][col] = arr1[row][col] + arr2[row][col]; 
            cout << ans[row][col] << " ";
        }
    }
   
}