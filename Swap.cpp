class Swap {

   // Requires: arr1 to have size1 >= index1 + len  && size1 > 0 && size1 <= SIZE
   //           arr2 to have size2 >= index2 + len && size2 > 0 && size2 <= SIZE
   //           index1 must be within range of arr1
   //           len >= 0
   //           index1 + len - 1 must be within range of arr1
   //           index2 must be within range of arr2
   //           index2 + len - 1 must be within range of arr2
   // Modifies: The array arr1 and array arr2
   // Effects:  Swap elements of arr1 and elements of arr2 according to the following
   //           elements of arr1 from arr1[index1] to arr1[index1+len-1] are swapped with
   //           elements of arr2 from arr2[index2] to arr2[index2+len-1] inclusive
   // Example:  if arr1 is: 123456 index1 = 0, len = 3
   //              arr2 is: 789012 index2 = 3
   //           the result is:
   //           arr1 is: 012456       arr2 is: 789123
   void swapRange(char arr1[], int size1, int index1, char arr2[], int size2, int index2, int len) {
   
       for (int j = index2 + len - 1; j >= index2 ; j--) {
          for (int m = index1; m <= index1 + len - 1; m++) {
             char temp = arr1[m];
             arr1[m] = arr2[j];
             arr2[j] = temp;    
          }
       }
       
    }
   
   // Requires: The size of array arr is size &&  size > 0 && size <= SIZE && len > 0
   // Modifies: The array arr
   // Effects:  Exchanges len number of ch
   // Effects:  Exchanges len number of characters with the next len
   //           number of characters continueing across the row.
   //           If there isn't enough characters to do the exchange,
   //           then exchange nothing.
   // Example:  if the array is: batman$robin and len is 6, then batman is
   //           exchanged with $robin resulting in: $robinbatman
   //           if len is 3, then bat will exchange with man and
   //              $ro will exchange with bin resulting in: manbatbin$ro
   //           if len is 5, then batma will exchange with n$rob
   //              resulting in: n$robbatmain
   //           if len is 8, the exchange is not possible so do nothing
   // Note: be careful you don't go outside bounds of the array on this one
   // Calls: swapRange
   void swapWithinOneRow(char arr[], int size, int len) {
   
       if (len > 0 && size > 0 && len <= size/2 ) {
          for (int i = 0; i < size - len -1; i += len*2) {
             swapRange(arr, size, i , arr, size, i+len, len);
          }
       }
    
      if(size >= 2 && size % 2 == 0 && len == 1){
          char temp = arr[size-1];
          arr[size-1] = arr[size-2];
          arr[size-2] = temp;
      }
      
   }
   
   // Requires: The size of array arr is rows x cols && rows > 0 && rows <= SIZE
   //                                                && cols > 0 && cols <= SIZE
   // Modifies: The array arr
   // Effects:  Will swap the row with index 0 with row index 1,
   //                         row with index 2 with row index 3, etc
   //           If n is odd, the last row will not be swapped
   // Example:  if the array is
   //         a b c
   //         d e f
   //         g h i
   //       the result will be
   //         d e f
   //         a b c
   //         g h i
   // Calls: swapRange
   void swapRows(char arr[][SIZE], int rows, int cols) {
   
      if(rows > 0 && cols > 0){
         for (int i = 0; i < rows-1; i += 2){
            swapRange(arr[i], cols, 0, arr[i + 1], cols, 0,cols);
         }
      }
      
   }
   
   
};
