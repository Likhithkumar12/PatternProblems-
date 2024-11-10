#include<stdio.h>
#include<stdlib.h>

int main(){

int n,i;
printf("enter the number of rows");
scanf("%d",&n);
int cnt=1;
for (int i=1;i<=n;i++){
    cnt=cnt+i;
    int k=cnt;
    for(int j=1;j<=i;j++){
        printf("%d",k);
        k--;
    
    }
    printf("\n");
    
}
for (int i=n;i>=0;i--){
    for(int j=1;j<=i;j++){
        printf("%d",cnt);
        cnt--;
    
    }
    printf("\n");
    
}


return 0;
}
