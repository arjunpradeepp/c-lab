#include<stdio.h>
   int main()
   {
   int n1,n2,n3,a[1000],b[1000],c[2000],i;
   printf("\n Enter the size of first array in sorted order ");
      scanf("%d",&n1);
      
   printf("\n Enter the array elements ");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
      
   printf("\n Enter the size of second array in sorted order ");
      scanf("%d",&n2);
      
   printf("\n Enter the array elements ");
   for(i=0;i<n2;i++)
      scanf("%d",&b[i]);
      
   n3=n1+n2;
   
   for(i=0;i<n1;i++)
   
      c[i]=a[i];
      
   for(i=0;i<n2;i++)
   
      c[i+n1]=b[i];
      
   printf("\n The final array after sorting ");
   for(i=0;i<n3;i++)
      printf("  %d",c[i]);
   }
      
