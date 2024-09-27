#include<stdio.h>
int main(){
    int i,size,num,pos,a[40];
    printf("Enter the size of array:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the new number:");
    scanf("%d",&num);
    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    size++;
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    
}