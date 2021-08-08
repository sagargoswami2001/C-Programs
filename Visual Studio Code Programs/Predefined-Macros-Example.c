#include<stdio.h>  
 int main(){    
   printf("\nFile :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   printf("STDC :%d\n\n", __STDC__ );      
   return 0;  
 }