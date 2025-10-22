#include <stdio.h>
//collection of similar data types stored at a contigous memory location
//|22|23|45|

/*int main(){
    int marks1=90;
    int marks2=95;
    int marks2=98;
    int marks[] = {90,95,98};
    return 0;
}*/

/*int main(){
    int marks[3];
    printf("enter physics: ");
    scanf("%d",&marks[0]);

    printf("enter maths: ");
    scanf("%d", &marks[1]);

    printf("enter chem: ");
    scanf("%d", &marks[2]);

    printf("phy=%d,chem=%d,math=%d",marks[0],marks[1],marks[2]); //out of index error is a runtime error
    return 0;       //compiler doesnt recognise runtime error only found at runtime ,max index is length of array-1
}
*/

int main(){
    float prices[3];
    printf("enter 3 prices");
    scanf("%f",&prices[0]);
    scanf("%f",&prices[1]);
    scanf("%f",&prices[2]);

    printf("total price 1: %f\n",prices[0]+(prices[0]+prices[0]*0.18));
    printf("total price 2: %f\n",prices[1]+(prices[1]+prices[1]*0.18));
    printf("total price 3: %f\n",prices[2]+(prices[2]+prices[2]*0.18));
    return 0;
}

// syntax
/*
int marks[3]; 1 int is equal to 4 bytes --> 3*4 is equal to 12 bytes array indexing start from 0 (0 base indexing)
char name[10];
float price[2]


*/


/*
scanf("%d",&marks[0]) --> marks[0] acts as a variable &marks[0]= value at address of mark[0] is input from user

printf("%d",marks[0])
*/


//initialisation of array
// int marks[]={97,98,89}
// int marks[3]={97,98,89}

//character = 1 byte
//int = 4 byte