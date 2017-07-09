// Requires: The size of array arr is size && size > 0 && size <= SIZE
// Modifies: The array arr
// Effects:  Adds val to each character in the array
//           If the array is: how now brown cow
//           and val = 5,
//           then result is:  mt|%st|%gwt|s%ht|
// Note:     Make sure the character remains in the ' ' MIN_PRINTABLE_ASCII
//           to '~' MAX_PRINTABLE_ASCII range (inclusive)
//           all printable characters are between this range
//           If character < MIN_PRINTABLE_ASCII, then add ASCII_PRINTABLE_RANGE
//           If character > MAX_PRINTABLE_ASCII, then subtract ASCII_PRINTABLE_RANGE
//            to put back within range,  repeat as needed
//           all printable characters are between this range
//           ' ' is the 1st printable character (ASCII 32)
//           '~' is the last printable character (ASCII 126)
// Note:     Do not do the addition on char's. It could cause an overflow

void add(char arr[], int size, int val) {

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
