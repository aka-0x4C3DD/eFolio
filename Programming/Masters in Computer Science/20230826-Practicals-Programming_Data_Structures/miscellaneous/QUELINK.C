// queue implementation by using link list
// deletion from beginning
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct que
 {
    int info;
    struct que *next;
  };
  void inque(int);
  int deque();
  void display();
  struct que *rear=NULL,*front=NULL;

  void main()
  {

    int data,ch,t;
    char ch1='y';
    clrscr();
    while(ch1=='y')
       {
	  clrscr();
	  printf("1.insert\n");
	  printf("2.delete\n");
	  printf("3.display\n");
	  printf("4.exit\n");
	  printf("operation start\n");
	   scanf("%d",&ch);

	   switch(ch)
	      {
		 case 1:
			printf("enter data into que info part\n");
			scanf("%d",&data);
			inque(data);
			break;
		 case 2:

			   t=deque();
			   if(t!=-1)
			   {
			     printf("deleted element is %d\n",t);
			   }
			   break;
		 case 3:
			 display();
			 break;
		 case 4:
			 exit(0);
	       } //end of switch
	       printf("\n want to do more opt,press y\n");
	       scanf("\n%c",&ch1);
	    }// end of while
       getch();
     }// end of main

     // function start

     void inque(int no)
     {

	struct que *cur;
	cur=(struct que*)malloc(sizeof(struct que));
	cur->info=no;
	cur->next=NULL;
	if(rear==NULL)
	  {
	     printf("rear is the new node\n");
	     front=rear=cur;
	  }
       else
	  {
	     rear->next=cur;
	     rear=cur;
	  }
      }

      int deque()
       {
	 int i;
	 struct que *t;
	 t=front;
	 if(t==NULL)
	 {
	    printf("node not present\n");
	 }
	 else
	 {
	    if(front==rear)
	     {
	       i=t->info;
	       front=rear=NULL;
	     }
	     else
	     {
	      i=t->info;
	      front=front->next;
	     }
	      free(t);
	      return(i);
	   }
	   return(-1);
      }

     void display()
     {
	struct que *temp;
	temp=front;
	if(temp==NULL)
	 {
	    printf("que is empty\n");
	 }
	 else
	 {
		while(temp!=NULL)
		 {
		  printf("%3d",temp->info);
		  temp=temp->next;
		 }
	   }
	 }
