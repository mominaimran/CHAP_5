#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3];  
    int matrix2[3][3];  
    int diff[3][3];

    cout << "Enter values for Matrix 1 (3x3):" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Enter value for [" << i << "][" << j << "] : ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter values for Matrix 2 (3x3):" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Enter value for [" << i << "] [" << j << "] : ";
            cin >> matrix2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "Difference Matrix" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << diff[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}