#include<stdio.h>
int main(){
    int a[40],i,size;
    printf("Enter the size of array \n");
    scanf("%d",&size);
    printf("Enter the array");
    for(i=0;i<size;i++)
    {
        
        scanf("%d",&a[i]);

    }
    printf("the array is");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    for(i=0;i<=size-1;i++){
        a[i]=a[i+1];
        
    }
    size--;
    printf("The new array is:\n");
    for(i=0;i<size;i++){
    printf("%d\n",a[i]);
    }
}