#include<stdio.h>
int main(){
      int a[50],size,i;
      printf("Enter the size of arrray");
      scanf("%d",&size);
      printf("Enter the array");
      for(i=0;i<size;i++){
             scanf("%d",&a[i]);

      }
      printf("The new array  is:");
      for(i=0;i<=size;i++){

            a[size-1]=0;

      }
      size--;
      for(i=0;i<size;i++){
            printf("%d",a[i]);
      }
}