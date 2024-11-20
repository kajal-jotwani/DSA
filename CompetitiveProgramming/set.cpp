#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    vector<int> arr;
    while(T--)
    {   
        int L, R, K;
        cin >> L >> R >> K;

        for(int i = L; i <= R; i++){
            arr.push_back(i);
        }
        int count = 0;
        for(int i = L; i <= R; i++){
            int num = 0;
            for(int j = i; j <= R; j++){
                int x = arr[i];
                if(arr[j] % x == 0) num++;
            }  
            if(num == K) count++;
        }
        cout << count << endl; 
    }
    return 0;
}