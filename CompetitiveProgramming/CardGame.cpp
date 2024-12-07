#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int count = 0;

        // Consider all 4 possible ways to flip the cards
        if ((a1 > b1) + (a2 > b2) > (b1 > a1) + (b2 > a2)) {
            count++;
        }
        if ((a1 > b2) + (a2 > b1) > (b2 > a1) + (b1 > a2)) {
            count++;
        }
        if ((a2 > b1) + (a1 > b2) > (b1 > a2) + (b2 > a1)) {
            count++;
        }
        if ((a2 > b2) + (a1 > b1) > (b2 > a2) + (b1 > a1)) {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
