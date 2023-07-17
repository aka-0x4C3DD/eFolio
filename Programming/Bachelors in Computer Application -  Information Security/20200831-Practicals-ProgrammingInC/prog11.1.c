#include<stdio.h>
int main()
{
    int d, m, y, nd, nm, ny;
    printf("Enter the year: ");
    scanf("%d", &y);
    printf("\nEnter the month: ");
    scanf("%d", &m);
    printf("\nEnter the date: ");
    scanf("%d", &d);
    printf("\nSo, your desired date is: %d/%d/%d", d, m, y);
    if (m%2!=0 && m<=7)
    {
        if (d==31)
        {
            nd=1;
            nm=m+1;
            ny=y;
        }
    }
    else if (m%2==0 && 8<=m<=12)
    {
        if (d==31)
        {
            nd=1;
            nm=m+1;
            ny=y;
        }
    }
    else if (m%2==0 && 4<=m<=6)
    {
        if (d==30)
        {
            nd=1;
            nm=m=1;
            ny=y;
        }
    }
    else if (m%2!=0 && 9<=m<=11)
    {
        if (d==30)
        {
            nd=1;
            nm=m+1;
            ny=y;
        }
    }
    else if (m==2 && y%4==0)
    {
        if (d==29)
        {
            nd=1;
            nm=m+1;
            ny=y;
        }
    }
    else if (m==2 && y%4!=0)
    {
        if (d==28)
        {
            nd=1;
            nm=m+1;
            ny=y;
        }
    }
    else if (m==12 && d==31)
    {
        nd=1;
        nm=1;
        ny=y+1;
    }
    else
    {
        nd=d+1;
        nm=m;
        ny=y;
    }
    printf("\n\nThe next date of your desired date is:\t%d/%d/%d\n", nm, nm, ny);
}