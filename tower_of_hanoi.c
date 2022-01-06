#include<stdio.h>
#include<stdlib.h>
void towerofHanoi(int n, char from_rod,
                    char to_rod, char aux_rod ){
	if (n==0)
	{
		printf("Invalid input!!! \n");
		exit(0);
	}
	if(n==1){
		printf("Move disk 1 from rod %c to rod %c\n",
			from_rod,to_rod );
		return;
	}
	towerofHanoi(n-1,from_rod,aux_rod,to_rod);
	printf("Move disk %d from rod %c to rod %c \n",
		n,from_rod,to_rod );
	towerofHanoi(n-1,aux_rod,from_rod,to_rod);

}

int main(){
	int n;
	scanf("%d",&n);
	towerofHanoi(n,'A','C','B');  
	return 0;
}