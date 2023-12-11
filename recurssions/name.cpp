// #include <iostream>
// using namespace std;
 
// void function(int i, int n) {
//     if (i > n) {
//         return;
//     }

//     cout << "kajal" << endl;
//     function(i + 1, n);
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     function(1, n);

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

// Function to print numbers from 1 to x using recursion and store them in a vector
vector<int> printNos(int x) {
    // Base case: stop recursion when x is 0
    if (x == 0) {
        // Return an empty vector in the base case
        return vector<int>();
    }

    // Recursively print numbers from 1 to x-1
    vector<int> result = printNos(x - 1);

    // Append the current number to the vector
    result.push_back(x);

    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Call the function to get a vector of numbers from 1 to n
    vector<int> result = printNos(n);

    // Print the vector elements
    cout << "Generated vector: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
