#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n; 

        vector<int> arr(n); 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }

        unordered_map<int, int>umap;

        for(int i = 0 ; i < n; i++){
            umap[arr[i]]++;
        }

        int score  = 0;

        for(auto &entry : umap){
            score += entry.second/2;
        }
        cout << score << endl;
    }
    return 0;
}