======================================
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
===========================================




======================================
// find the output
#include <stdio.h>

int main(){
    int a,b;
    a=10;                   //error
    b=20;
    printf("%d\n",a+++++b );
    return 0;
}

#include <stdio.h>

int main(){
    int a,b;
    a=10;                   //31
    b=20;
    printf("%d\n",a++ + ++b );
    return 0;
}

#include <stdio.h>

int main(){
    int a,b;
    a=10;                   //error
    b=20;
    printf("%d\n",a++ +++b );
    return 0;
}

#include <stdio.h>

int main(){
    int a,b;
    a=10;               //31
    b=20;
    printf("%d\n",a+++ ++b );
    return 0;
}
========================================
// floating point explanation to varun
#include <stdio.h>
int main(){
    
    float a=10.0;
    while(a<=10.5){
        printf("\n%f \n",a );
        a+=0.1;
    }
    return 0;
}

==================================
//
int main(){
    int a;
    a= fun1()+fun2();
    printf("%d\n",a );
    return 0;
}

Which function will be called first?
1: fun1()
2: fun2()
3: compiler dependent
3: Behaviour is undefined
=================================
// output: True
# include <stdio.h>

int main(){
    int a=10, b=20,c=30,d=40;
    if (a<=b==d>c)      
    {
        printf("%s\n","True" );
    }else{
        printf("%s\n","Flase" );
    }
}
========================================
// output 1: 5 4
# include <stdio.h>

int main(){
    int i=5;
    int var=sizeof(i++);
    printf("%d %d\n",i,var );
    return 0;
}

Find the output
1: 5 4
2: 6 4
3: 5 8
4: Compiler error 
======================================
// output 4: 1 1 0 1
# include <stdio.h>

int main(){
    int a = 1, b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    printf("%d %d %d %d\n",d,c,b,a );
    return 0;
}


Find the output
1: 1 1 1 1
2: 0 1 0 0
3: 1 0 0 1
4: 1 1 0 1 
=============================================
// output: b 11
# include <stdio.h>

int main(){
    int i=1024;
    for (; i ; i>>=1)
    {
        printf("Hello, World\n");
    }
    return 0;
}


How many times will "Hello, World" be printed on the screen?
1: 10
2: 11
3: Infinite
4: Compile time error
================================================
// output 4: 16 21
# include <stdio.h>

int main(){
   for(int i=0;i<20;i++){
        switch(i){
            case 0: i+=5;
            case 1: i+=2;
            case 5: i+=5;
            default: i+=4;
        }
        printf("%d ",i );
   }
    return 0;
}

What is the output of this program?
1: 5 10 15 20
2: 7 12 17 22
3: Compiler Error
4: 16 21
==================================================
// output: one
# include <stdio.h>

int main(){
    int i=0;
    for(printf("one\n");i<3 && printf("");i++){
        printf("Hi!\n " );
    }
    return 0;
}
======================================================
// output: 1
# include <stdio.h>

int main(){
    unsigned int i=200;
    while(i++ !=0);
    printf("%d\n",i );
    return 0;
}
Predict the output
1: Infinite Loop
2: 0
3: compiler error
4: 1
=========================================================
// output : 2
# include <stdio.h>

int main(){
    int x=3;
    if (x==2);x=0;
    if (x==3) x++;
    else x+=2;
    printf("%d\n",x );
    return 0;
}
Predict the output
1: 4 
2: 2
3: compiler error
4: 0
=================================================================




==============================================================


