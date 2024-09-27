#include<stdio.h>
int main(){
    int i,size,a[30],pos;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array\n");
    for(i=0;i<size;i++){
        scanf("%d\n",&a[i]);
    }
    printf("the array is\n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);

    }
    printf("Enter the position which will be deleted\n");
    scanf("%d",&pos);
    for(i=size-1;i>=pos;i--){
        a[i-1]=a[i];
    }
    size--;
    printf("the new array is\n");
    for(i=0;i<size;i++){
    printf("%d\t",a[i]);
    }
}