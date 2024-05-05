#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a no.");
    scanf("%d",&n);


    for( int i=1;i<=n;i++){    
    if(n%i==0){
        count++;
    }
    }

if (count ==2){
    printf("%d is a prime no.",n);
}
else{
printf(" %d is composite no.",n);
}

return 0;
    }

