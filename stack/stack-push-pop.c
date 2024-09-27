#include<stdio.h>
#define N 5
int stack[5];
int top=-1;



int push(){
    int x;
    printf("Enter the data:");
    scanf("%d",&x);
    if(top==N-1){
        printf("stack is overflow");

    }
    else{
        top++;
        stack[top]=x;
    }

}
void pop(){
    int data;
    if(top==-1 ){
        printf("string is undre flow:");

    }
    else{
        data=stack[top];
        top--;

    }
}
int main(){
    int choice;
    do{
        printf("Enter your choice 1:push 2:pop 3:display 3:Exit \n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit();
            break;
            default :printf("Wrong choice");
        }
        while(choice!=0){
            
        }
        }
}
