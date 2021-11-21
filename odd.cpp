#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Odd numbers between 4 to 40\n");  
   
   counter = 4;
    while( counter <= 40 ) {  
      
        if(counter%2 == 1) { 
            /* counter is odd, print it */
            printf("%d ", counter);  
        }
		 counter++ ;
    }  
   
    return 0;  
} 
