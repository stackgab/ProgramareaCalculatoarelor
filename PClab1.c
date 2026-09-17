#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float x1,x2,px,a,b,c; //input data
    float x,F;
    int n;

    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input px: ");
    scanf("%f", &px);
    printf("Input a: ");
    scanf("%f", &a);
    printf("Input b: ");
    scanf("%f", &b);
    printf("Input c: ");
    scanf("%f", &c);
    x=x1;
    n=0;
    printf("\n\t Results: \n");
    while (x < x2)
    {
        n ++;
        if ((x<b)|| (c!=0)) //prima conditie
        {
            if ((b-x-c) == 0)
            {
                printf("se imparte la 0\n");// evitarea impartirii la zero
                x += px;
                continue;
            }
            else
            {
                F = (sin(x)+1)/(b-x-c);
            }
        }
        else if ((x>b) && c == 0) // a doua conditie
        {
            if (sin(x) == 0)//evitarea impartirii la zero
            {
                printf("sin(x) = 0 si se imparte la 0\n ");
                x += px;
                continue;
            }
            else
            {
            F = ((a*x*x-b*x*c)/sin(x));
            }
        }
        else
        {
            F = (log(x)+c)/(2*b); // a treia conditie
        }
    printf("%i: x = %.3f \t F = %.3f \n", n,x,F); // se scrie la fiecare ciclu outputul . \t tab pentru aliniare
    x += px; // se adauga la x pasul la fiecare iteratie
    }
getch();  //citeste un simbol de la claviatura
return 0;
}

