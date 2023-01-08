#include <stdio.h>

void increase (int ol, int ow, int factor, int* nl, int* nw)
{
    *nl = ol * factor;
    *nw = ow * factor;
}
int main ()
{

    int akk=1, n;
    printf("n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        akk = akk * i;
    }
    printf("%d! is %d\n",n,akk);

    for(int a=1;a<=akk;a++)
    {
        printf("%d",a);
    }

    /*
    int org_lenght = 10, org_width = 20, factor = 2, nl=0, nw=0;
    increase(org_lenght, org_width, factor, &nl, &nw);
    printf("nl = %d\nnw = %d", nl, nw);*/
    return 0;
}