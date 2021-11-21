   #include<stdio.h>  
     int main()    
    {    
   int a;
   printf(" Enter a number \n");
   scanf("%ld", &a);
   if(a%5==0)
   {
   	printf("divisible ");
   }
   else
   {
   	printf("not divisible");
   }
   return 0;
}
