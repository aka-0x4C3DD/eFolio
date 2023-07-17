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
    printf("\nSo, your mentioned date is: %d/%d/%d", d, m, y);
    if ( d >= 1 && d <= 27 ) { nd = d + 1; }
    else if ( y % 400 == 0 || y % 100 == 0 && y % 4 == 0 ) { if ( d == 28 && m == 2 ) { nd = d + 1; } }
    else if ( y % 400 != 0 || y % 100 != 0 && y % 4 != 0 ) { if ( d == 28 && m == 2 ) { nd = 1; nm = m + 1; } }
    else if ( d <= 28 && d >= 29 ) { if ( m >= 1 && m <= 12 && m != 2) { nd = d + 1; }}
    else if ( d == 30 ) { if ( m == 4 || m == 6 || m == 9 || m == 11 ) { nd = 1; nm = m + 1; } else if ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ) { nd = d + 1; }}
    else if ( d == 31 && m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ) { nd = 1; nm = m + 1; }
    else if ( d == 31 && m == 12 ) { nd = 1; nm = 1; ny = y + 1; }
    else { printf("\n Enter a Valid Date !!");}
    printf("\n\nThe next date of your desired date is:\t%d/%d/%d\n", nd, nm, ny);
    system("pause");
    }