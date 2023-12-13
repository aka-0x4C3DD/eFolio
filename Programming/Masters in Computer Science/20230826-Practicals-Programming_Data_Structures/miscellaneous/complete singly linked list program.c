// Implementation of complete singly linked list program







#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node* START = NULL;
struct node
{
	int data;
	struct node* next;
};
int main()
{
	int choice;
	while(1)
	{
	    printf("\n*****\n");
	    printf("0. Create\n");
	    printf("1. display\n");
	    printf("2. Insert Node at beginning\n");
	    printf("3. Insert Node in specific position\n");
	    printf("4. Insert Node at end of LinkedList\n");
	    printf("5. Delete Node at beginning\n");
	    printf("6. Delete Node at end\n");
	    printf("7. Delete Node at position\n");
	    printf("8. ** To exit **");
	    
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: create();
					break;
			case 1: display();
					break;
			case 2: insert_begin();
					break;
			case 3: insert_pos();
					break;
			case 4: insert_end();
					break;
			case 5: delete_begin();
					break;
			case 6: delete_end();
					break;
			case 7: delete_pos();
					break;
			case 8: exit(0);
			default:printf("\n Wrong Choice");
                    break;
		}
	}
}
//creates a node
void create()
{
	struct node* new_node;
        //creating new node
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&new_node->data); 
	new_node->next = NULL;
	if(START==NULL)	{
		START = new_node;
	}
	else{
		struct node* ptr = START;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node; //inserting at end of List
	}
}
// prints the entire LinkedList
void display()
{
	if(START==NULL)
	{
		printf("Linked List is Empty\n");
		return;
	}
        printf("LinkedList: ");
	struct node* ptr = START;
	while(ptr!=NULL) // start from first node
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
    printf("\n");
}
// to insert node at start of LinkedList
void insert_begin()
{
	struct node* new_node;
        // creating a new node
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	if(START==NULL)
	{
		START = new_node;
		return;
	}
	else
	{
		new_node->next = START; //point it to old START node
		START = new_node; //point START to new first node
	}
}
// to insert node at given position
void insert_pos()
{
	struct node* new_node;
        // creating a new node
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&new_node->data);
	new_node->next = NULL;
	if(START==NULL) // if list empty we return
	{
		START = new_node;
	        return;
	}
	else
	{
		int i;
		struct node* prev_ptr;
		struct node* ptr = START;
		int pos;
		printf("Enter position: ");
		scanf("%d",&pos);
		for(i=0;i<pos;i++)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
                //new node pointing to node in that pos
		new_node->next = ptr;
                //prevptr pointing to new node
		prev_ptr->next = new_node;
	}
}
// to insert node at end of LinkedList
void insert_end()
{
	struct node* new_node;
        //creating new node
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&new_node->data); 
	new_node->next = NULL;
	if(START==NULL)
	{
		START = new_node; //if list is empty, we return
	        return;
	}
	else{
		struct node* ptr = START;  
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
               // tail node pointing to new node
		ptr->next = new_node;
	}
}
// to delete first node of LinkedList
void delete_begin()
{ 
	if(START==NULL) //if List is empty we return
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else
	{
		struct node* ptr = START; 
		START = START->next; // START node pointing to second node
		free(ptr); // deleting prev START node
		printf("Node Deleted \n");
	}
}
// to delete last node of LinkedList
void delete_end()
{
	if(START==NULL) //if List is empty we return
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else if(START->next==NULL) 
	{
		struct node* ptr = START;
		START = ptr->next;
		free(ptr);
	}
	else
	{
		struct node* ptr = START;
		struct node* prev_ptr = NULL;
		while(ptr->next!=NULL)// traverse till last but one node
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = NULL; // next field of last but one field is made as NULL
		free(ptr); // deleting last node
	}	
}
// to delete node at given position
void delete_pos()
{
	int pos;
	printf("Enter node position to delete: ");
	scanf("%d",&pos);     
	struct node* ptr=START;                                                                               
	if(START==NULL) //we return if List is empty
	{
		printf("Linked List is empty \n"); 
		return;
	}
	else if(pos == 0) 
	{
		ptr = START;
		START=ptr->next; // START pointing to second node
		free(ptr); // deleting old first node
	}
	else
	{   int i;
		struct node* prev_ptr;
		for(i=0;i<pos;i++)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = ptr->next; //prev node pointing to pos+1 node
		free(ptr); //deleting node at pos
	}
}