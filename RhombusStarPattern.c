#include<stdio.h>
#include<stdlib.h>

int main(){

int n,i;
printf("enter the number of rows");
scanf("%d",&n);
for (int i=0;i<n;i++){
    for(int k=0;k<i;k++){
        printf(" ");
      }
    for(int j=0;j<n;j++){

        printf("*");
    }
    printf("\n");
    
}
return 0;
}
