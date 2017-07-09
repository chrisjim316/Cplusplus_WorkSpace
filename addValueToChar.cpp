//random test num  
const int SIZE = 60;

const int MAX_PRINTABLE_ASCII = '~';
const int MIN_PRINTABLE_ASCII = ' ';
const int ASCII_PRINTABLE_RANGE = MAX_PRINTABLE_ASCII - MIN_PRINTABLE_ASCII + 1;

class addValueToChar {
    
    // Requires: The size of array arr is size && size > 0 && size <= SIZE
    // Modifies: The array arr
    // Effects:  Adds val to each character in the array
    //           If the array is: how now brown cow
    //           and val = 5,
    //           then result is:  mt|%st|%gwt|s%ht|
    
    void add1DArray(char arr[], int size, int val) {
      if(size > 0){
        int charInt = 0;
            for (int i = 0; i < size; i++) {
                charInt = ((int)arr[i] + val);
                while (charInt < MIN_PRINTABLE_ASCII) {
                    charInt += ASCII_PRINTABLE_RANGE;
                }
                while (charInt > MAX_PRINTABLE_ASCII) {
                    charInt -= ASCII_PRINTABLE_RANGE;
                }
                    arr[i] = ((char)charInt);
            }
       }
    }
    
    void add2DArray(char arr[][SIZE], int rows, int cols, int val){
       if(rows > 0 && cols > 0){
           for(int r = 0; r < rows; r++){
               add1DArray(arr[r], cols, val);
           }
       }
    }
    
};
