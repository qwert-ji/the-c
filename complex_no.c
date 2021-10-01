/* Complex number adding and substraction 
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct complex
{
    int a;
    float b;
} c;

/*Driver code*/
int main(void)
{
   
    c e[3];
    int choice;
    
    /*TAking the user inputs*/
    scanf("%d %f %d %f %d", &e[0].a, &e[0].b, &e[1].a, &e[1].b, &choice);
    
    /*Condition*/
    if (choice == 1)
    {   e[2].a = e[0].a - e[1].a;
        e[2].b = e[0].b - e[1].b;
       
        printf("%d + i%.2f", e[2].a, e[2].b);
       exit (0);
    }
    else if (choice == 2) 
    {  
        e[2].a = (e[0].a * e[1].a) - (e[0].b * e[1].b);
        e[2].b = (e[0].a * e[1].b) + (e[1].a * e[0].b);
        printf("%d + i%.2f", e[2].a, e[2].b);
        exit (0);
    }
    return (0);
}
