#define max 100
int push(int [],int);
int pop(int[],int);
int disp(int[],int);
#include<stdio.h>
#include<conio.h>
int main()
{
    int stack[max],top=-1,ch;
    do
    {
        printf("\n1.push 2.pop 3.display 4.exit");
        printf("\nenter your choice");
        scanf("%d",&ch);
    }
    switch(ch)
    {

    case 1:
        top=push(stack,top);
        break;
    case 2:
        top = pop(stack,top);
            break;
    case 3:
        disp(stack,top);
        break;
    }
}while(ch<=3);
}


int push(int stack[max],int top)
{

    if(top)
}
