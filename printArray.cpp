#include <iostream>
using namespace std;

//random test num.
const int SIZE = 60;

class printArray {

  void print1DArray(const char arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
    cout << endl;
  }
  

  void print2Darray(const char arr[][SIZE], int rows, int cols){
    for(int r = 0; r < rows; r++){
        print1DArray(arr[r], cols);
    }
  }
  
};

