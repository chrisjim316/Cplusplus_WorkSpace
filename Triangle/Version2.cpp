/* 
 * This method prints a triangle of asterisks in this way. 
 *//***
 *// **
 *//  *
 */
 
class Triangle2{


 void printTriangle2(int n){
 
    if(n > 0) {
    
      for(int r = n; r >= 1; r--){
        cout << setw(n-r+1);
           for(int c = r; c > 0; c--){
              cout << "*";    
           }
        cout << endl; 
      }
      
   }//end if 
   
 }


};
