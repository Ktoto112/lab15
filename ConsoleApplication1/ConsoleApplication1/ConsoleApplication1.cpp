#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    const int size = 20;
    int a[size] = { 5, 12, 3, 8, 15, 7, 1, 19, 4, 10, 6, 2, 18, 13, 11, 9, 17, 14, 16, 20 };
    int b[size];

    
    for (int i = 0; i < size; i++) {
        b[i] = a[size - 1 - i];
    }

   
    cout << "Array b (reverse of a):" << endl;
    for (int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

   
    sort(b, b + size);

    
    cout << "Sorted array b:" << endl;
    for (int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
