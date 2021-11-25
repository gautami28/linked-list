#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class node
{
	public:
	int data;
	struct node *next;
};

class linked
{
	node *head ,*p , *q, *r, *t;
	public:
	int n,a,i;
	
	void createlist()
	{
		cout<<"PRN numbers to be entered: ";
		cin>>n;
		head = new (node);
		cin>>head->data;
		head->next=NULL;
		p = head;
		for(i=1;i<n;i++)
		{
			p->next = new (node);
			p = p->next;
			p -> next=NULL;
			cin>>p->data;
		}
		
	}
	
	void insertfirst()
	{
		int key;
		cout<<"\n number to be insertedat first: ";
		cin>>key;
				
		node* newnode = new node();
  		
		newnode->data = key;
  
 		newnode->next = head;
  
  		head = newnode;  
  
	}
 
	void insertlast()
	{
		int key;
		cout<<"\n number to be inserted at last: ";
		cin>>key;
				
		node* newnode = new node();
  		
		newnode->data = key;
  
 		newnode->next = head;
  
  		newnode->next = NULL; 
      	if(head == NULL) 
		{
        	head = newnode;
      	} 
	  	else
		{
       		node* p = head;
        	while(p->next != NULL)
        	{
          		p = p->next;
         	}
        		p->next = newnode;
		}
	}
	
	void delete_node()
	{
		int loc;
		cout<<"location of number to deleted: "<<endl;
		cin>>loc;
		if (loc==1)
		{
			p = head;
			head = head -> next;
			free(p);
		}
		q = head;
		for(i=1;i<loc-1;i++)
		{
			q = q->next;
		}
		if (q==NULL)
		{
			cout<<"error!!";
		}
		p = q->next;
		q->next = p->next;
		free(p);
		
		cout<<"delted successfully!!"<<endl;
	}
	
	void inversion()
	{

    if(head != NULL)
    {
        q = head;
        r = head->next;
        head = head->next;

        q->next = NULL; 

        while(head != NULL)
        {
            head = head->next;
            r->next = q;

            q = r;
            r = head;
        }

        head = q;
	}
}
	
	void display()
	{
		if (head == NULL)
		{
			cout<<"List is empty"<<endl;
		}
		else
		{
			node *p = head;
			cout<<"Linked List of PRN numbers is: ";
			while (p != NULL)
			{
				cout<<p->data;
				p = p->next;
				cout<<endl;
			}
		}
	}
	
};

int main()
{
	linked l1;
	l1.createlist();
	l1.display();
	l1.insertfirst();
	l1.display();
	l1.insertlast();
	l1.display();
	l1.inversion();
	l1.display();
	l1.delete_node();
	l1.display();
	return 0;
}