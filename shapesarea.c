#include <stdio.h>
float areasq(float side);
float areacirc(float radius);
float arearec(float length,float breadth);

int main(){
    char user;
    printf("enter c for circle, s for square and r for rectangle: ");
    scanf("%c",&user);

    if (user == 'c'){
        printf("enter radius: ");
        float radius;
        scanf("%f",&radius);
        printf("area of circle is: %f",areacirc(radius));
    }

    else if (user=='r'){
        float length;
        float breadth;
        printf("enter length :");
        scanf("%f",&length);
        printf("enter breadth");
        scanf("%f",&breadth);
        printf("area is %f: ",arearec(length,breadth));
    }

    else if(user=='s'){
    printf("enter side: ");
    float side;
    scanf("%f",&side);
    printf("area is %f",areasq(side));
    }

    else{
        printf("invlaid input!!");
    }
}

float areasq(float side){
    float area;
    area=side*side;
    return area;
}

float areacirc(float radius){
    float area;
    area=radius*radius*3.14;
    return area;
}

float arearec(float length , float breadth){
    float area;
    area=length*breadth;
    return area;
}