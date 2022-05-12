#include<stdio.h>
main()
{
   int n,i,j;
   printf("enter the number of  rows:");
   scanf("%d",&n);
   for(i=0;i<n;i=i+1)
   {
   	for(j=0;j<=i;j++)
   	{
   		printf("01");
	   }
	printf("\n");     
   }
   
   	

}