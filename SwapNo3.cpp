    #include<stdio.h>  
     int main()    
    {    
   int a, b;a=b=0;
      printf("Enter first number: ");
      scanf("%ld", &a);
      printf("Enter second number: ");
      scanf("%ld", &b);
    printf("Before swap a=%d b=%d",a,b);      
    a=a+b;  
    b=a-b;
    a=a-b;
    printf("\nAfter swap a=%d b=%d",a,b);    
    return 0;  
    }   
