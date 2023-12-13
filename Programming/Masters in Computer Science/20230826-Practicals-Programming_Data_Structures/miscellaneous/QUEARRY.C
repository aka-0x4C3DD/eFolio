//Array representation of queue
//rear for r,front for f
#include<stdio.h>
#include<conio.h>
#define max 4
int isfull();
void push(int);
int pop();
void display();
int que[max];
int r=-1;
int f=-1;

void main()
{
     int ch=1,data,t;
     char ch1='y';
     clrscr();
       while(ch1=='y')
	{
	   clrscr();
	   printf("1.insert data into queue\n");
	   printf("2. poped element from queue\n");
	   printf("3.display data in an queue\n");
	   printf("4.exit\n");
	   printf("\n which operation want to do?");
	   scanf("%d",&ch);
	   switch(ch)
	      {
		case 1:
		       if(!isfull())
		       {
			 printf("enter data\n");
			 scanf("%d",&data);
			 push(data);
		       }
			 break;
		case 2:

		       t=pop();
		       if(t!=-1)
		       {
			 printf("poped element is %d",t);
			}
			else
			 {
			    printf("queue is empty\n");
			 }
			 break;
		case 3:
		       printf("display elements are \n");
		       display();
		       break;
		case 4:
		       exit(0);
	      }
	       printf("\n want to continue press y \n");
	       scanf("\n%c",&ch1);
     }
	 getch();
    }
  int isfull()
  {

       if(r==max-1)
	{
	  printf("queue is full\n");
	  return(1);
	 }
	 else
	   {
	    return(0);
	   }
     }
      void push(int no)
	 {
		  if((r==-1) && (f==-1))
		   {
		     r++;
		     f++;
		   }
		   else
		     {
		      r++;
		     }
		     que[r]=no;

	 }

  int pop()
  {
     int t;
    if(f==-1)
      {
	 return(-1);
      }
	 t=que[f];
	  if(f==r)
	   {
	     f=r=-1;
	   }
	  else
	  {
	   f++;
	  }

	 return(t);
  }

  void display()
  {
     int i;
     printf("queue value is\n");
     for(i=f;i<=r;i++)
      {
	 printf("%3d",que[i]);
       }
   }
