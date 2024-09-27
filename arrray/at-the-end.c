#include<stdio.h>
int main(){
    int a[30],i,size,num;
    printf("Enter the size of an array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Enter the new number ");
    scanf("%d",&num);
    for(i=0;i<size+1;i++){
        a[size]=num;
    }
    size++;
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }

}