#include <iostream>
using namespace std;

int main() {
    int M1[2][2] = {{2, 4}, {1, 3}};
    int M2[2][2] = {{6, 8}, {5, 7}};
    int M3[2][2];

    // Matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            M3[i][j] = 0;  // Initialize
            for (int k = 0; k < 2; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    // Display the result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << M3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
