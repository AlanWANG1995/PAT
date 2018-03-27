#include <iostream>
using namespace std;
void exchange(int *a, int *b) {
  *a = (*a) + (*b);
  *b = (*a) - (*b);
  *a = (*a) - (*b);
}
void rshift(int *arr, int size) {
  for (auto i = size - 1; i >= 0; i--) {
    if (i != 0) {
      exchange(arr + i, arr + i - 1);
    } 
  }
}
int main() {
  int size, shift;
  cin >> size >> shift;
  shift = shift % size;
  int *arr = new int[size];
  for (auto i = 0; i < size; i++) {
    cin >> *(arr + i);
  }
  for (auto i = 0; i < shift; i++) {
    rshift(arr, size);
  }
  for (auto i = 0; i < size; i++) {
    cout << *(arr + i);
    if(i != size - 1){
      cout << " ";
    }
  }
  cout << endl;
  delete[] arr;
  return 0;
}