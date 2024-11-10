#include<stdio.h>
#include<stdlib.h>

int main(){

int n,i;
printf("enter the number of rows");
scanf("%d",&n);
for (int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        if(j==0 || j==2 || i==0 || i==n-1){
            printf("3");
        }
        else{
        printf("%d",i);
        }
    }
    printf("\n");
}
return 0;
}
