#include <stdio.h>
int main() {
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>100){
printf("The number is greater than 100");
}
else if(n<100){

printf("The number is smaller than 100");
}
else{

printf("The number is equal to 100");
}
    return 0;
}
