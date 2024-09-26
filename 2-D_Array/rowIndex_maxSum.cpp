// print row index with maximum sum

#include<iostream>
using namespace std;



int main()
{
    int arr[4][4] = {5,6,7,8,2,4,5,9,2,4,7,5,1,9,4,7};
    int row = 4;
    int col = 4;
    int index = -1;
    int maxsum = INT16_MIN;
    for(int i = 0; i < row; i++){
        int total = 0;

        for(int j = 0; j < col; j++){
        total += arr[i][j];
        }
            if(total > maxsum){
                index = i;
                maxsum = total;
            } 
    }

    cout << "Row with the maximum sum is: " << index << endl;
    cout << "Maximum sum: " << maxsum << endl;

    return 0;

}