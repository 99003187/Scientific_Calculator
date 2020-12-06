#include "calculator_operations.h"
#include <stdio.h>
int main()
{
    int choice;
    double input1,input2;
    double result;
    int res1;
    int in1,out;
    double triginput,trigoutput;
    int a=0;
    int b=0;
    int c=0;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Square Root\n");
    printf("6.Modulus\n");
    printf("7.Factorial\n");
    printf("8.Temperature\n");
    printf("9.Power\n");
    printf("10.log value\n");
    printf("11.log10 value\n");
    printf("12.Exponential\n");
    printf("13.To Find a number is even or odd\n");
    printf("14.To find a area of a square\n");
    printf("15. To find a area of a rectangle\n");
    printf("16. To find volume of a cone\n");
    printf("17. To find volume of a cylinder\n");
    printf("18. To find BMI\n");
    printf("\nEnter you choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter two number to add");
            scanf("%lf %lf",&input1,&input2);
            result = add(input1,input2);
            printf("%lf",result);
            break;
            
        case 2:
            printf("\nEnter two number to subtract");
            scanf("%lf %lf",&input1,&input2);
            result = subtract(input1,input2);
            printf("%lf",result); 
            break;
            
        case 3:
            printf("\nEnter two number to multiply");
            scanf("%lf %lf",&input1,&input2);
            result = multiply(input1,input2);
            printf("%lf",result);
            break;

        case 4:
            printf("\nEnter two number to Divide");
            scanf("%lf %lf",&input1,&input2);
            result = divide(input1,input2);
            printf("%lf",result);
            break;

        case 5:
            printf("\nEnter a number for squareroot");
            scanf("%lf",&triginput);
            trigoutput =squareroot(triginput);
            printf("%lf",trigoutput);
            break;

        case 6:
            printf("\nEnter the operators to perform modulus operation");
            scanf("%d %d",a,b);
            result =modulo(a,b);
            printf("%d",result);
            break;


        case 7:
            printf("\nEnter a number for factorial");
            scanf("%d",&in1);
            out = fact(in1);
            printf("%d",out);
            break;

        case 8:
            temperature();
            break;
        case 9:
            printf("Enter the base number: ");
            scanf("%lf", &input1);
            printf("Enter the power raised: ");
            scanf("%lf",&input2);
            result=power(input1,input2);
            printf("%d\n",result);
            break;
        case 10:
            printf("Enter the number to find log value\n");
            scanf("%lf",&input1);
            result=logvalue(input1);
            printf("%lf",result);
            break;
        case 11:
            printf("Enter the number to find log10 value\n");
            scanf("%lf",&input1);
            result=log10value(input1);
            printf("%lf",result);
            break;
        case 12:
            printf("Enter the number to find Exponential value\n");
            scanf("%lf",&input1);
            result=exp(input1);
            printf("%lf",result);
            break;
        case 13:
            printf("Enter the number to find  even or odd\n");
            scanf("%d",&a);
            c=even_or_odd(a);
            if(c==0)
            {
            printf("Number is Even");
            break;
            }
            else
            {
            printf("Number is Odd");
            break;
            }
       case 14:
        printf("enter the side:\n");
        scanf("%lf",&input1);
        printf("The area of square = %0.2lf",square(input1));
        break;
    case 15:
        printf("Enter the length and breadth:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The area of rectangle = %0.2lf",rectangle(input1,input2));
        break;
    case 16:
        printf("Enter the radius and height:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The volume of a cone = %0.2lf",cone(input1,input2));
        break;
    case 17:
        printf("Enter the radius and height:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The volume of a cone =%0.2lf",cylinder(input1,input2));
        break;
    case 18:
        printf("Enter the weight and height:\n");
        scanf("%lf%lf",&input1,&input2);
        printf("The BMI is %0.2lf",BMI(input1,input2));
        break;
           
        default :
            printf("Please choose valid choice to perform respective operation");

    }
}

   void temperature()
    {
        int choice;
        double result,input1;
        printf("please the respective operation for different temperature conversions\n");
        printf("1.fahrenheit to celsius\n");
        printf("2.celsius to fahrenheit\n");
        printf("3.fahrenheit to kelvin\n");
        printf("4.kelvin to fahrenheit\n");
        printf("5.celsius to kelvin\n");
        printf("6.kelvin to celsius\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
             printf("\nEnter  temp to convert fahrenheit into celsius");
             scanf("%lf",&input1);
             result=fahrenheit_to_celsius(input1);
             printf("%lf",result);
             break;

        case 2:
            printf("\nEnter  temp to convert celsius into fahrenheit");
            scanf("%lf",&input1);
            result=celsius_to_fahrenheit(input1);
            printf("%lf",result);
            break;
        case 3:
            printf("\nEnter  temp to convert fahrenheit into kelvin");
            scanf("%lf",&input1);
            result=fahrenheit_to_kelvin(input1);
            printf("%lf",result);
            break;
        case 4:
            printf("\nEnter  temp to convert kelvin into fahrenheit");
            scanf("%lf",&input1);
            result=kelvin_to_fahrenheit(input1);
            printf("%lf",result);
            break;
        case 5:
            printf("\nEnter  temp to convert celsius into kelvin");
            scanf("%lf",&input1);
            result=celsius_to_kelvin(input1);
            printf("%lf",result);
            break;
        case 6:
            printf("\nEnter  temp to convert kelvin into celsius");
            scanf("%lf",&input1);
            result=kelvin_to_celsius(input1);
            printf("%lf",result);
            break;
    }

    return 0;
}

