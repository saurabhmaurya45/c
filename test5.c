// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
/*
fibonacci series

int fib( int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n;
    printf("Enter number to find fibonacci:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",fib(i));
    }
    printf("...\n");
    return 0;
}
*/

/*
find factorial using recursion

  

int factorial(int n){
    if (n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    int n;
    printf("Enter number to find factorial:\n");
    scanf("%d",&n);
    if (n<0){
        printf("Invalid input!!!\n Enter number greater than 0 \n");
    }
    else{
        printf("%d",factorial(n));    
    }
    return 0;
}
*/

/*
To find GCD using recursion

int gcd(int a, int b){
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    printf("Enter number to find GCD\n");
    scanf("%d %d",&a,&b);
    printf("The GCD of %d %d is %d\n",a,b,gcd(a,b) );
    return 0;
}
*/

/*
To check if a number is prime using recursion


int prime(int n, int i){
    if (n<=2)
    {
        return (n==2)?1:0;
    }
    if (n%i==0)
    {
        return 0;
    }
    if (i*i>n){
        return 1;
    }
    return prime(n,i+1); 

}

int main(){
    int n, i=2;
    printf("Enter number to check:\n");
    scanf("%d",&n);
    if(prime(n,i)){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }

    return 0;
}
*/

/*
int main(){
    int a[4][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,28,19,20}
    };
    printf("%d\n",*(*(a+**a+2)+3));
    return 0;
}*/
/*
static int i=0;
int Index(int num,int arr[],int len){
    for ( i=0; i<len;i++){
        if (arr[i]==num){}
        {
            return i;
        }

    }
}
*/


int main(){
    int arr[100]={10,23,5,64,35,6,4,3,2,54};
    int n=10;
    int smaller[50],larger[50],i,j,k=0;
    for (int i = 0; i < n; i=i+2)
    {
        if (arr[i]>arr[i+1])
        {
            larger[k]=arr[i];
            smaller[k]=arr[i+1];
            k++;
        }
        else
        {
            larger[k]=arr[i+1];
            smaller[k]=arr[i];
            k++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", smaller[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", larger[i]);
    }
    

    return 0;
}




