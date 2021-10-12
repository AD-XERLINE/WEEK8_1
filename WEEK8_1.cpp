#include <stdio.h>

int n;
void bar_SKA() {
	for(int i =1; i<=n; i++){
		for(int j=1;j<=n;j++){
		if(i==1||i==n){
			printf("*");
		}
		else if(j==1||j==n){
			printf("*");
		}
		else{
			printf(" ");
		}
	  }
     printf("\n");	  
	}
}

int main() { 
printf("Enter number : ");     
scanf("%d",&n);
   
   bar_SKA();
}
