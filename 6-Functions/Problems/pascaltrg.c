#include<stdio.h>
int factorial(int x ){
    int fact =1;
    for(int i=1;i<=x;i++)
    {
fact=fact*i;
    }
    return fact;
}
int crn(int a,int b){
    int facto =factorial(a)/(factorial(b)*factorial(a-b));
    return facto;
}
int main(){
    int n;
    printf("ENter no. of lines");
    scanf("%d",&n);
for(int c=4;c>=0;c--){
    for(int d = 1;d<=c;d++){
        printf(" ");
    }
    printf("\n");
}
    for(int j=0;j<=n;j++){
        for(int k=0;k<=j;k++){
            int icj = crn(j,k);
            printf("%d",icj);
        }
        printf("\n");
    }
}