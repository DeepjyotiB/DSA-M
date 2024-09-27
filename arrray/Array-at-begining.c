#include<stdio.h>
int main(){
    int i,num,size,a[50];
    printf("Enter the array size");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Enter the new number\n");
    scanf("%d",&num);
    for(i=size-1;i>=0;i--){
        a[i+1]=a[i];
    }
        a[0]=num;
        size++;

    for(i=0;i<size;i++){
    
    printf("%d\t",a[i]);
    }

}