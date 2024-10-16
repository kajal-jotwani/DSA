#include<bits/stdc++.h>
using namespace std;
// top down approach
int fibonacci(int n, vector<int> &dp)
{
    // base condition;
    if(n <= 1){
        return n;
    }
    // memorisation
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
}

// int fib(int n)
// {
//     vector<int> dp(n+1, -1);
//     return fibonacci(n, dp);
// }

// bottom up approach
/*
    int fib(int n){
    
        if(n <= 1){
            return n;
        }
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
*/

// space optimization
int fib(int n)
{
    if(n <= 1){
        return n;
    }
    int curr, prev = 1, prev2 = 0;

    for(int i = 2; i <= n; i++){
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return curr;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}