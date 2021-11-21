#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Odd numbers between 10 to 100\n");  
   counter = 10;
   
    while( counter <= 100 ) {  
      
        if(counter%2 == 0) { 
            /* counter is odd, print it */
            printf("%d ", counter);  
        }  counter++;
    }  
   
    return 0;  
} 
