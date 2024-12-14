#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int numRow;
        cin >> numRow;
        vector<string> beatmap(numRow);

        for (int i = 0; i < numRow; i++) {
            cin >> beatmap[i];
        }

        for (int i = numRow - 1; i >= 0; i--) {
            for (int j = 0; j < 4; j++) { 
                if (beatmap[i][j] == '#') {
                    cout << j + 1 << " "; 
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}