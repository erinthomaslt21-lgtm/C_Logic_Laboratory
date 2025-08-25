//Simple Calculator using switch case using character choice
#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter two integer operands\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operation (+)Addition  (-)Substraction  (*)Multiplicaiton  (/)Division \n");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        printf("Sum= %d\n",a+b);
        break;
    
    case '-':
        printf("Sub= %d\n",a-b);
        break;

    case '*':
        printf("Prod= %d\n",a*b); 
        break;
    case '/':
        if(b!=0)
        {
            printf("Quotient= %f\n",(float)a/b);
        }
        else
        {
            printf("Number cannot be divided by zero\n");
        }
        break;
    default:
        printf("Invalid Choice\n");
    }
    return 0;
}