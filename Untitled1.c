#include<stdio.h>

int main ()

{   int n,i;
    float a,b,c,media;

    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);

        media=(2*a+3*b+5*c)/10;

        printf("%.1f\n",media);
    }

    return 0;
}
