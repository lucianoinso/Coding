#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string choice;
    int strSizes[4];
    int greatChoice[4];
    int dcount;
    int hcount;
    int greatChoices = 0;

    for (int i = 0; i < 4; i++) {
        cin >> choice;
        strSizes[i] = choice.size() - 2;
    }

    for (int i = 0; i < 4; i++) {
        int dcount = 0;
        int hcount = 0;
        for (int j = 0; j < 4; j++) {
            if (i != j) {
                if (strSizes[i]*2 <= strSizes[j]) {
                    hcount++;
                }
                if (strSizes[i] >= strSizes[j]*2) {
                    dcount++;
                }
            }
        }
        if (hcount == 3 || dcount == 3) {
            greatChoice[i] = 1;
            greatChoices++;
        } else {
            greatChoice[i] = 0;
        }
    }

    if (greatChoices != 1) {
        cout << "C";
    } else {
        for (int i = 0; i < 4; i++) {
            if (greatChoice[i]) {
                if (i == 0) cout << "A";
                if (i == 1) cout << "B";
                if (i == 2) cout << "C";
                if (i == 3) cout << "D";
            }
        }
    }
}

