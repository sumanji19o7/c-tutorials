#include <stdio.h>
void square(int n);     //declaring the function which is called by value
void refsquare(int *n); //declaring the function which is called by the address of value (refrencing)

int main(){
    int number = 4;
    square(number);
    printf("number= %d\n",number);
    refsquare(&number);
    printf("number= %d\n",number);
    return 0;
}

void square(int n){

    n=n*n;
    printf("number is %d\n",n);

}

void refsquare(int *n){

    *n = (*n) * (*n);
    printf("number is %d\n",*n);

}