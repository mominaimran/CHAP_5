#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 20;
    int array[SIZE];

    srand(time(0));
    for(int i=0; i<SIZE; i++){
        array[i] = rand() % 50 + 1;
    }

    cout << "Random Array: ";
    for(int i=0; i<SIZE; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    int num;
    cout << "Enter the element from 1 t0 50 that you want to find in the array: ";
    cin >> num;

    bool found = false;
    for(int i=0; i<SIZE; i++){
        if(num==array[i]){
            cout << num << " found at index " << i <<  endl;
            found = true;
        }
    }
    if(!found)
        cout << "Element not found!" << endl;

    return 0;
}