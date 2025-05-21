#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    const int SIZE = 10;
    int matrix[SIZE][SIZE];
    double rowAvg[SIZE];
    double totalSum = 0;
    int totalElements = SIZE * SIZE;

    srand(time(0)); // Initialize random seed (for new values every run)

    // Fill matrix with random numbers from 1 to 100
    cout << "Random 10x10 Matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 100 + 1;
            cout << matrix[i][j] << "\t"; // Print matrix for reference
        }
        cout << endl;
    }

    // Calculate row averages and total sum
    for (int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; j++) {
            rowSum += matrix[i][j];
        }
        rowAvg[i] = static_cast<double>(rowSum) / SIZE;
        totalSum += rowSum;
    }

    // Print row averages
    cout << "\nAverage of each row:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Row " << i + 1 << ": " << rowAvg[i] << endl;
    }

    // Print overall average
    double overallAvg = totalSum / totalElements;
    cout << "\nOverall average of the matrix: " << overallAvg << endl;

    return 0;
}
