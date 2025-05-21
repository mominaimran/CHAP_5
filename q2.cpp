#include <iostream>
using namespace std;

int main() {
    int array[10];
    cout << "Enter 10 Integers: " << endl;
    for(int i=0; i<10; i++){
        cout << "Element " << i+1 << ": ";
        cin >> array[i];
    }

    cout << "You entered" << endl;
    for(int i=0; i<10; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    int min = array[0];
    int max = array[0];
    for(int i=0; i<10; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    for(int i=0; i<10; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    cout << "Minimum element found: " << min << endl;
    cout << "Maximum element found: " << max << endl;

    for(int i=0; i<10; i++){
        for(int j=0; j<10-i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "Sorted Array In Ascending order" << endl;
    for(int i=0; i<10; i++){
        cout << array[i] << " ";
    } 
    

    return 0;
}