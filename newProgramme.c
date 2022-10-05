#include <stdio.h>
#include <conio.h>
#define MAX 10

void main(){
    float x[MAX],y[MAX],k=0,z,nr,dr;
    int i,j,m;
    // clrscr();
    printf("\n enter the range ");
    scanf ("%d",&m);
    for (i = 1; i <= m; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }
    // printf("Enter the x value ");
    // for (i=0; i<m; i++)
    //     scanf("%f",&x[i]);
    // printf("Enter the y value ");
    // for (i = 0; i < m; i++)
    //     scanf("%f", &y[i]);

    printf("\n Enter value OF Z to be calculated ");
    scanf("%f", &z);

    for (i=1; i<m; i++){
        nr=1,dr=1;
        for (j=1; j<m; j++){
            if (i!=j){
                nr = nr * (z-x[j]);
                dr = dr * (x[i] - x[j]);

            }
        }
        k = k + ((nr / dr) * y [i]);
    }
    printf("\n final result = %f\n", k);
    getch();
}