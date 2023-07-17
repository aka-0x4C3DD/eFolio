#include <stdio.h>
int main()
{
    int dd,mm,yy;
    printf("\nC program to output the next date for a given date (else-if). -By Suman Garai");
    printf("\nEnter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if ( dd==31 ) 
    {
        if ( (mm==1) || (mm==3) || (mm==5) || (mm==7) || (mm==8) || (mm==10) ) 
        {
            dd = 1;
            mm = mm + 1;
        }
        else if ( mm==12 ) 
        {
            dd = 1;
            mm = 1;
            yy = yy + 1;
        }
        else 
            printf("\nDate is invalid.\n");
    }
    else if ( dd==30 ) 
    {
        if ( (mm==1) || (mm==3) || (mm==5) || (mm==7) || (mm==8) || (mm==10) ) 
            dd = dd + 1;
        
        else if ( (mm==4) ||(mm==6) ||(mm==9) ||(mm==11) ) 
        {
            dd = 1;
            mm = mm + 1;
        }
        else
            printf("\nDate is invalid.\n");
    }
    else if ( (dd==29) && (mm==2) ) 
    {
        if ( (yy%400==0) || (yy%100==0 && yy%4==0) ) 
        {
            dd = 1;
            mm = mm + 1;
        }
        else
            printf("\nDate is invalid.\n");       
    }
    else if ( (dd==28) && (mm==2) ) 
    {
        if ( (yy%400==0) || (yy%100==0 && yy%4==0) ) 
            dd = dd + 1;
        
        else  
        {
            dd = 1;
            mm = mm + 1; 
        }
    }
    else if ( ((dd>=1) && (dd<=29)) && ((mm!=2) && (mm>=1 && mm<=12)) ) 
        dd = dd + 1;
    else if ( ((dd>=1) && (dd<=27)) && mm==2 )
        dd = dd + 1;
    else
        printf("\nDate is invalid.\n"); 
    printf("\nThe Next Date: %d/%d/%d\n", dd, mm, yy );
    return 0;
}
     