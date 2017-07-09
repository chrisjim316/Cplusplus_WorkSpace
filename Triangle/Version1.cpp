/* 
 * This method prints a triangle of asterisks in this way. 
 *//*
 *//**
 *//***
 */

#include <iostream>
using namespace std;
 
class Triangle1{


  void printTriangle1(int n){
  
      if(n > 0){
     
	        for (int i = 1; i <= n; i++){
		          for (int x = 0; x < i; x++){
			            cout << "*";
		          }     
		        cout << endl;
	        }
          
      } // end if
      
  }


};




