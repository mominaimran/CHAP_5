#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3] = {{2, 4, 1},{3, 1, 5},{6, 2, 3}};
    int matrix2[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int sum[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum Matrix" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << sum[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}