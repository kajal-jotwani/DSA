#include <iostream>
#include <cmath>
using namespace std;

int CakeSlice(int A, int B) {
    int total = 0;

    while (A != B) {
        if (A > B) {
            int C = (A + 1) / 2; 
            A -= C;
            total += C;
        } else {
            int C = (B + 1) / 2; 
            B -= C;
            total += C;
        }
    }

    return total;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        cout << CakeSlice(A, B) << endl;
    }

    return 0;
}

