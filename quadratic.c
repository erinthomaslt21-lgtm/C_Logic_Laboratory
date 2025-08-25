//Program to find roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,realPart,imagPart;
    printf("Enter coefficients a,b and c\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    if (discriminant>0)
    {  
       printf("Roots are real and distinct\n");
       root1=(-b+sqrt(discriminant))/(2*a);
       root2=(-b-sqrt(discriminant))/(2*a);
       printf("Root1 = %.2lf\n Root2 = %.2lf\n",root1,root2);
    }
    else if (discriminant==0)
    {
       printf("Roots are real and equal\n");
       root1=root2=-b/(2*a);
       printf("Root1 = %.2lf\n Root2 = %.2lf\n",root1,root2);
    }
    else
    {
        printf("Roots are complex\n");
        realPart=-b/(2*a);
        imagPart=sqrt(-discriminant)/(2*a);
        printf("Root1= %.2lf + %.2lfi\n",realPart,imagPart);
        printf("Root1= %.2lf - %.2lfi\n",realPart,imagPart);
    }
    return 0;
    
}
