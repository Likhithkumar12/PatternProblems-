#include<stdio.h>
#include<stdlib.h>

int main(){

int n,i;
printf("enter the number of rows");
scanf("%d",&n);
for (int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
for (int i=n;i>=0;i--){
    for(int j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");
}

return 0;
}
