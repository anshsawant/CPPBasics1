#include <iostream>

using namespace std;

void swapInts(int* num1ptr, int* num2ptr) {
    int temp1, temp2;
    
    temp1 = *num1ptr;
    temp2 = *num2ptr;
    
    *num1ptr = temp2;
    *num2ptr = temp1;
}

int main()  {
    int num1, num2;
    cout << "Enter Integer 1:";
    cin >> num1;
    cout << "Enter Integer 2:";
    cin >> num2;
    swapInts(&num1,&num2);
    cout << "New number 1:";
    cout << "\n";
    cout << num1;
    cout << "\n";
    cout << "New number 2:";
    cout << "\n";
    cout << num2;
}