//random test num.
const int SIZE = 60;


class rotateRight {

   // Requires: The size of array arr is size && size > 0 && size <= SIZE
   // Modifies: The array arr
   // Effects:  Rotates the array by one element to the right 
   //           e.g., Array: abcdef   when rotated right becomes: fabcde
   
   void rotateRight1DArray(char arr[], int size){
      for(int i = size - 1; i > 0; i--){
         char temp = arr[i-1];
         arr[i-1] = arr[i];
         arr[i] = temp;
      }
   }
   
   void rotateRight2DArray(char arr[][SIZE], int rows, int cols){
      for(int r = 0; r < rows; r++){
         rotateRight1DArray(arr[r], cols);
      }
   } 
   
}; 
