//random test num. 
const int SIZE = 60;

class rotateLeft {
  
  // Requires: The size of array arr is size && size > 0 && size <= SIZE
  // Modifies: The array arr
  // Effects:  Rotates the array by one element to the left 
  //           e.g., Array:  abcde when rotated left becomes: bcdea
  
  void rotateLeft1DArray(char arr[], int size){
     for(int i = 1; i < size; i++){
         char temp = arr[i-1];
         arr[i-1] = arr[i];
         arr[i] = temp;
     }
  }
  
  
  void rotateLeft2DArray(char arr[][SIZE], int rows, int cols){
     for(int r = 0; r < rows; r++){
         rotateLeft1DArray(arr[r], cols);
     }
  } 
  
};
