// Program for Checking Endianess of any Computer //
#include <stdio.h> 
int main()  
{ 
   unsigned int i = 1; 
   char *c = (char*)&i; 
   if (*c)     
       printf("Little endian"); 
   else
       printf("Big endian"); 
       printf("Thank You");
   getchar(); 
   return 0; 
} 

