#include<stdio.h>
void larsm(int,int,int,int);
int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter total number of elements n :");
    scanf ("%d", &elem);
    printf ("Enter first number : ");
    scanf ("%d", &n);
    lar = n;
    sm=n;

    larsm(elem,n,lar,sm);
    return 0;
}
void larsm(int elem,int n,int lar,int sm)
{
    for (int i=1; i<= elem-1 ; i++)
    {
        printf ("Enter another number : ");
        scanf ("%d",&n);
        if (n>lar)
            lar=n;
        if (n<sm)
            sm=n;
    }
    printf ("\nThe largest number is %d", lar);
    printf ("\nThe smallest number is %d", sm);
}