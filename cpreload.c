#include <stdio.h>

int main()
{
    int a,p,v,t,nptw=0;
    scanf ("%d\n",&a);
    for (int i=1; i <= a ; i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        if ((p,v,t)==0 || (p,v,t)==1)
        {
            if ((v==1 && t==1)||(p==1 && t==1)||(p==1 && v==1)||(p==1 && v==1 && t==1))
            {
                nptw++;
            }
        }
        else{
            printf("wrong statement");
        }

    }
    printf("%d\n",nptw);
    return 0;
}