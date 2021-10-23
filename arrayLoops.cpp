#include <iostream>

#include <array> 

using namespace std;

bool greaterThan(int a, int b) { //Method to check whether integer b is greater than integer a
  if (b > a) {
    return true;
  } else {
    return false;
  }
}

bool lessThan(int a, int b) { //Method to check whether integer b is less than integer a
  if (a > b) {
    return true;
  } else {
    return false;
  }
}

bool sorted(int array[10]) { //Method to check whether entries are sorted *DOES NOT WORK*
  bool temp = false;
  if (array[0] <= array[1] <= array[2] <= array[3] <= array[4] <= array[5] <= array[6] <= array[7] <= array[8] <= array[9]) {
    temp = true;
  }
  return temp;
}

int main() {

  int array[10]; //Creates an array to store entries
  for (int i = 0; i < 10; i++) { //Loop to collect entries
    int j = 0;
    cout << "Please enter integer: "; //Prompt to enter integer
    cin >> j;
    array[i] = j; //Store entries in array
  }
  cout << "Reversed Entries:";
  cout << "\n";
  for (int i = 0; i < 10; i++) { //Loop to display entires in reverse order
    cout << array[9 - i];
    if (i < 9) {
      cout << ", ";
    }
  }
  int temp1;
  int temp2;

  cout << "\n";

  for (int i = 0; i < 100; i++) { //Code to sort entries
    if (greaterThan(array[0], array[1])) {
      temp1 = array[0];
      temp2 = array[1];
      array[0] = temp2;
      array[1] = temp1;
    }
    if (greaterThan(array[1], array[2])) {
      temp1 = array[1];
      temp2 = array[2];
      array[1] = temp2;
      array[2] = temp1;
    }
    if (greaterThan(array[2], array[3])) {
      temp1 = array[2];
      temp2 = array[3];
      array[2] = temp2;
      array[3] = temp1;
    }
    if (greaterThan(array[3], array[4])) {
      temp1 = array[3];
      temp2 = array[4];
      array[3] = temp2;
      array[4] = temp1;
    }
    if (greaterThan(array[4], array[5])) {
      temp1 = array[4];
      temp2 = array[5];
      array[4] = temp2;
      array[5] = temp1;
    }
    if (greaterThan(array[5], array[6])) {
      temp1 = array[5];
      temp2 = array[6];
      array[5] = temp2;
      array[6] = temp1;
    }
    if (greaterThan(array[6], array[7])) {
      temp1 = array[6];
      temp2 = array[7];
      array[6] = temp2;
      array[7] = temp1;
    }
    if (greaterThan(array[7], array[8])) {
      temp1 = array[7];
      temp2 = array[8];
      array[7] = temp2;
      array[8] = temp1;
    }
    if (greaterThan(array[8], array[9])) {
      temp1 = array[8];
      temp2 = array[9];
      array[8] = temp2;
      array[9] = temp1;
    }

  }
  cout << "Sorted Entries:";
  cout << "\n";
  for (int i = 0; i < 10; i++) { //Loop to display sorted entries
    cout << array[9 - i];
    if (i < 9) {
      cout << ", ";
    }
  }

}