//Name: Pritesh Jagani

#include <stdio.h>
#include <stdlib.h>

float Substract(float x,float y)
{
    float result = 0;
    result = x - y;

    printf("The result of substraction is : %f",result);
    return result;
}

float Add(float x,float y)
{
    float result = 0;
    result = x + y;

    printf("The result addition is : %f",result);
    return result;
}

float Divide(float x,float y)
{
    float result = 0;
    result = x / y;

    printf("The result of division is : %f",result);
    return result;
}

float Multiply(float x,float y)
{
    float result = 0;
    result = x * y;

    printf("The result of multiplication is : %f",result);
    return result;
}


     float (*SUB)(float,float)=Substract;
     float (*DIV)(float,float) = Divide;
     float (*ADD)(float,float)=Add;
     float (*MUL)(float,float)=Multiply;

     
int main() { int i = 0;
     float u, v;
   float (*arr[4])(float,float)={Add,Substract,Divide,Multiply};

     printf("Enter Values:\n" );
     scanf("%f%f",&u,&v);
     for(i=0;i<=3;i++)
     {
        
	arr[i](u,v);
	printf("\n")  ;           
	
        
     }

    return 0;
}
