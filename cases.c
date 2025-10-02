#include <stdio.h>
int main(){
    printf("enter 1-mon,2-tue...: ");
    int day;
    scanf("%d",&day);
    switch (day){
        case 1:printf("monday");
        break;
        case 2:printf("tuesday");
        break;
        case 3:printf("wednesday");
        break;
        case 4:printf("thursday");
        break;
        case 5:printf("friday");
        break;
        case 6: printf("saturday");
        break;
        case 7: printf("sunday");
        break;
        default: printf("out of range");


    }
}