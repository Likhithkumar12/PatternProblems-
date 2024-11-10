#include<stdio.h>
#include<stdlib.h>

int main(){

int n,i;
printf("enter the number of rows");
scanf("%d",&n);
for (int i=n;i>=0;i--){
    for(int k=n;k>=i;k--){
        printf(" ");
      }
    for(int j=0;j<=i*2;j++){
    if(j==0 || j==i*2 || i==n ||i==0)
{        printf("*");
}
else{
    printf(" ");
}
    }
    printf("\n");
    
}
return 0;
}
