/*
WAP tht accepts the marks of 5 subjects and 
finds the sum and percentage marks obtained ny the student.
*/

#include <stdio.h>

int main(){
    int sub1,sub2,sub3,sub4,sub5,total,max_marks;
    printf("Enter marks for five subjects: \n");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("Enter maximum marks: \n");
    scanf("%d",&max_marks);
    total=sub1+sub2+sub3+sub4+sub5;
    float percentage=total/(float)max_marks*100;
    printf("Total marks: %d\n Percentage obtained: %3.2f",total,percentage );
    return 0;
}
==============================================================
/*
WAP that calculates the Simple interest and compound interest.
The Principal, Amount,Rate of Interest and Time are entered through the keyboard.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float Principal,Rate,Time,n;
   	printf("Enter Principal amount, Rate, Time and Compounded interest per unit time respectively:\n");
    scanf("%f %f %f %f",&Principal,&Rate,&Time,&n);
    float si=(Principal*Rate*Time)/100;
    float amount=Principal*pow((1+Rate/(100*n)),(n*Time));
    printf("The Simple Interest is :%3.3f\n",si);
    printf("The Compound interest is :%3.3f\n",amount);

    return 0;
}
===========================================================
/*
WAP to calcualte area and circumference of the circle.

*/

#include <stdio.h>
#define PI 3.14

int main(){
    float r;
    printf("Enter Radius:\n");
    scanf("%f", &r);
    float area= PI*r*r;
    float circumference= 2*PI*r;
    printf("The area and circumference of circle is: %3.2f %3.2f \n",area, circumference );
    return 0;
}
===========================================================
/*
WAP that accepts the temperature in Centigrade and converts into Fahrenhite
using the formula C/5=(F-32)/9

*/

#include <stdio.h>


int main(){
    float C,F;
    printf("Enter temperature in Centigrade:\n");
    scanf("%f",&C);
    F= ((C/5)*9)+32;
    printf("The temperature in Fahrenhite is: %3.2f\n",F );

    return 0;
}
===============================================================
/*
WAP that swaps values of two variables using third variable.

*/

#include <stdio.h>


int main(){
    int a,b;
    printf("Enter two numbers to swap:\n");
    scanf("%d %d",&a,&b);
    printf("The entered values are: %d %d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("The swaped values are: %d %d\n",a,b);
    return 0;
}
===============================================================
/*
WAP that ckecks if the two numbers entered by the user are equal or not.
*/

#include <stdio.h>


int main(){
    int num1,num2;
    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    num1==num2?printf("Entered numbers are equal\n"):printf("Entered numbers are not equal\n");

    return 0;
}
========================================================
/*
WAP to find greatest of three numbers.

*/

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>=b)
		(a>=c)?printf("The maximum number is: %d\n", a):printf("The maximum number is: %d\n", c);
	else
		(b>=c)?printf("The maximum number is: %d\n", b):printf("The maximum number is: %d\n", c);
}
=========================================================
/*
WAP that finds whether a given number is even or odd

*/

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	(a%2==0)?printf("Even\n"):printf("Odd\n");
	return 0;
}
=========================================================
/*
WAP that tells whether the given year is leap year or not.

*/

#include <stdio.h>

int main()
{
	int year;
	printf("Enter Year:\n");
	scanf("%d",&year);
	(year%4==0)?printf("Leap Year\n"):printf("Not a Leap Year\n");

	return 0;
}
===================================================================
/*
WAP that accepts the marks of five subjects and finds percentage and 
print grades according to the following criteria:
Between 90-100%  print "A"
Between 80-90%  print "B"
Between 60-80%  print "C"
Below 60%  print "D"


*/

#include <stdio.h>

int main()
{
	int sub1,sub2,sub3,sub4,sub5,total,max_marks;
    printf("Enter marks for five subjects: \n");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("Enter maximum marks: \n");
    scanf("%d",&max_marks);
    total=sub1+sub2+sub3+sub4+sub5;
    float percentage=total/(float)max_marks*100;
    if (percentage>=90)
    {
    	printf("A\n");
    }
    else if (percentage>=80 &&percentage<90)
    {
    	printf("B\n");
    }
    else if (percentage>=60 &&percentage<80)
    {
    	printf("C\n");
    }
    else
    {
    	printf("D\n");
    }

    return 0;
}
============================================================
/*
WAP that takes two operands and one operator from the user and perform
the operation and print the result by using switch case statement.

*/

#include <stdio.h>
int main() {
  char op;
  float first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%f %f", &first, &second);

  switch (op) {
    case '+':
      printf("%.4f + %.4f = %.4f", first, second, first + second);
      break;
    case '-':
      printf("%.4f - %.4f = %.4f", first, second, first - second);
      break;
    case '*':
      printf("%.4f * %.4f = %.4f", first, second, first * second);
      break;
    case '/':
      printf("%.4f / %.4f = %.4f", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! Please Enter valid operation");
  }

  return 0;
}
==========================================================
/*
WAP to print the sum of all numbers up to given number.

*/

#include <stdio.h>
int main() {
  int num,sum=0;
  printf("Enter number till where you want the sum:\n");
  scanf("%d",&num);
  for (int i = 1; i <= num; i++)
  {
  	sum+=i;
  }
  printf("sum:%d \n",sum);
  return 0;
}
=============================================================
/*
WAP to find the factorial of a given number.

*/

#include <stdio.h>
int main() {
	int n, fact=1;
	printf("Enter number to find out factorial:\n");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d:\n",n,fact );
	return 0;
}
===========================================================
/*
WAP to print sum of even and odd numbers from 1 to N numbers.

*/

#include <stdio.h>
int main() {
	int num,even=0,odd=0;
	printf("Enter numbers till where you want the sum:\n");
	scanf("%d",&num);
	for (int i = 0; i <= num; i++)
	{
		if (i%2==0)
		{
			even+=i;
		}
		else
		{
			odd+=i;
		}
	}
	printf("sum of even numbers:%d\n",even );
	printf("sum of odd numbers:%d\n",odd );
	return 0;
}
=========================================================
/*
WAP to print fibonacci series.

*/

#include<stdio.h>    
void fib(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         fib(n-1);    
    }    
}    
int main(){    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    fib(n-2);//n-2 because 2 numbers are already printed    
  return 0;  
 }   
=========================================================
/*
WAP to check whether number is prime or not.

*/

#include<stdio.h> 

// check whether number is prime or not 
int prime(int number){
    int flag=0;
    for (int i = 2; i < number; i++)
    {
        if (number % i ==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return 1;
    }else{
        return 0;
    }
}

   
int main(){    
    int n;    
    printf("Enter the number to check for prime: ");    
    scanf("%d",&n); 
    int Prime=prime(n);
    (Prime==1)?printf("Entered number is prime\n"):printf("Entered number is not prime\n");   
     
  return 0;  
 }   
==========================================================
/*
WAP to find the sum of digits of entered numbers

*/

#include<stdio.h> 
   
int main(){    
	int num, sum=0;
	printf("Enter number:\n");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("sum of digits of %d is %d\n",temp,sum );

  	return 0;  
 }   
===========================================================
/*
WAP to find the reverse of a number

*/

#include <stdio.h>

int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
===============================================================
// check whether a number is armstrong number or not
#include <stdio.h>

// check whether number is prime or not 
int prime(int number){
    int flag=0;
    for (int i = 2; i < number; i++)
    {
        if (number % i ==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return 1;
    }else{
        return 0;
    }
}



// --main--

int main()
{
    int number;
    printf("Enter number greater than 3:\n");
    scanf("%d",&number);

    for (int i = 2; i < number; i++)
    {
        int x=i;
        int y=number-i;
        if (x==1 || y==1){
            continue;
        }
        if (prime(x)==1 && prime(y)==1 && (x+y)==number){
            printf("%d %d\n",x,y );
        }

    }
        return 0;
}
==========================================================
/* 
WAP that simply takes elements of the array from the user
and find the sum of these elements
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr; //declaration of integer pointer
    int n,i,sum=0; 

    printf("Enter number of elements you want in array: ");
    scanf("%d", &n);

    //declare memory dynamically
    ptr = (int*)malloc(n * sizeof(int));

    //read array elements
    for (i = 0; i < n; i++) {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    //print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d, ", *(ptr + i));
    }

    //calculate sum of all elements 
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("\nSum of array elements is: %d\n", sum);

    //free alloted memory 
    free(ptr); 

    return 0;
}
==========================================================
// matrix multiplication
#include <stdio.h>
#include <stdlib.h>
int main(){
    int row1,col1,row2,col2,i,j;
    printf("Enter row of 1st matrix: ");
    scanf("%d",&row1);
    printf("Enter column of 1st matrix: ");
    scanf("%d",&col1);
    printf("Enter row of 2st matrix: ");
    scanf("%d",&row2);
    printf("Enter column of 2st matrix: ");
    scanf("%d",&col2);
    if (row2!=col1)
    {
        printf("Enter valid value for row and column:\n");
        printf("column of 1st matrix must be equal to the row of 2nd matrix:\n");
        exit(0);
    }

    int m1[row1][col1],m2[row2][col2],m3[row1][col2];
    // enter elements for the first matrix
    printf("Enter elements in the first matrix:\n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    // Enter elements for 2nd matrix
    printf("Enter elements in the second matrix:\n");
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for ( i = 0; i < row1; i++)
    {
        
        for ( j = 0; j < col2; j++)
        {
            int sum=0;
            for (int k = 0; k < row2; k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            m3[i][j]=sum;
        }
    }
    // printing multiplied matrix
    for ( i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d\t",m3[i][j] );
        }printf("\n");
    }
    return 0;
}
=======================================================================================



