#include <stdio.h>

int add(int a,int b,int c);
int subtract(int a,int b,int c);
int multiply(int a,int b,int c); 
float divide(int a,int b);

int main()
{
    int choice,a,b,c;
    float result;
   do{
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            /*for addition*/
            printf("Enter three integers for addition: ");
            scanf("%d %d %d",&a,&b,&c);
            result=add(a,b,c);
            printf("Sum is: %d\n",(int)result);
            break;
        
        case 2:
            /*for substractio*/
            printf("Enter three integers for subtraction: ");
            scanf("%d %d %d",&a,&b,&c);
            result=subtract(a,b,c);
            printf("Subtraction result is: %d\n",(int)result);
            break;
        
        case 3:
            /*for multiplication*/ 
            printf("Enter three integers for multiplication: ");
            scanf("%d %d %d",&a,&b,&c);
            result=multiply(a,b,c);
            printf("Multiplication result is: %d\n",(int)result);
            break;
        
        case 4: 
            /*for division*/
            printf("Enter two integers for division: ");
            scanf("%d %d",&a,&b);
            result=divide(a,b);
            if (b!=0)
                printf("Division result is: %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
            break;
    }
    return 0;
   }
   while(choice!=4);
}

int add(int a,int b,int c)
{
    return a+b+c;
}

int subtract(int a,int b,int c)
{
    return a-b-c;
}

int multiply(int a,int b,int c)
{
    return a*b*c;
}

float divide(int a,int b)
{
    if (b==0) 
    {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return (float)(a / b);
}