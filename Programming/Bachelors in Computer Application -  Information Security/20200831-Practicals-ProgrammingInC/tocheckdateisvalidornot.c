#include <stdio.h>
main()
{
    int dd,mm,yy;
    printf("\nC program to output the next date for a given date (else-if). -By Suman Garai "); 
    printf("\nEnter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    switch(yy)
    {
        case yy>=1900 && yy<=9999:
        switch(mm)
        {
            case (mm>=1 && mm<=12):
            switch(dd)
            {
                case ((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)):
                    printf("Date is valid.\n"); break;
                case ((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11)):
                    printf("Date is valid.\n"); break;
                case ((dd>=1 && dd<=28) && (mm==2)):
                    printf("Date is valid.\n"); break;
                case (dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0))):
                    printf("Date is valid.\n"); break;
                default:
                    printf("Date is invalid. Check Date.\n"); break;
            }
            default:
                printf("Date is invalid. Check Month.\n"); break;
        }
        default:
            printf("Date is not valid. Check Year.\n"); break;
    }
    
}
