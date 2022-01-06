// WAP to check whether triangle is right angled triangled or not

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if((((a+b)>c)||((b+c)>a)||((c+a)>b))&&((a*a+b*b)==c*c)||((b*b+c*c)==a*a)||((c*c+a*a)==b*b)){
            printf("It is a right angled triangled.");
    }
    else{
        printf("It is not a right angled triangled.");
    }

    return 0;
}