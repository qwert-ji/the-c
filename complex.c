#include <stdio.h>
struct complex{
    float real;
    float imag;
};
void input(struct complex *t){
    printf("\nEnter value in\n");
    printf("real part : ");
    scanf("%f", &t->real);
    printf("imaginary part : ");
    scanf("%f", &t->imag);
} 
void display(struct complex c){
    printf("\n%0.2f + %0.2f i", c.real, c.imag);
} 
struct complex sum(struct complex t1, struct complex t2){
    struct complex t;
    t.real = t1.real + t2.real;
    t.imag = t1.imag + t2.imag;
    return t;
} 
struct complex product(struct complex t1, struct complex t2){
    struct complex t;
    t.real = t1.real * t2.real - t1.imag * t2.imag;
    t.imag = t1.real * t2.imag + t1.imag * t2.real;
    return t;
}
void main(){
    struct complex complex1, complex2, result;
    int dis;
    printf("\n1 ADDITION \n2 MULTLIPLICATION\n Enter Choice : ");
    scanf("%d",&dis);
    printf("\nEnter Complex Number 1: ");
    input(&complex1);
    printf("\nEnter Complex Number 2: ");
    input(&complex2);
    printf("\nComplex number 1 is ");
    display(complex1);
    printf("\nComplex number 2 is ");
    display(complex2);
    if(dis==1)
        result = sum(complex1, complex2);
    else   
        result = product(complex1, complex2);
    printf("\nResult : ");
    display(result);
} 

