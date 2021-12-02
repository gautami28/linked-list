#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}
node;

class linked
{
	public:
		int i,n;
   		node *p,*head,*temp, *q;
   		
node *createnode()
{
    head=NULL;
    cout<<"\nEnter the no of students::";
    cin>>n;
    for(i=0;i<n;i++)
    {
        p = new node;
        cin>>p->data;
        p->next=NULL;
        if(head==NULL)
         head=p;
        else
        {
            temp=head;
            while(temp->next!=NULL)
                  temp=temp->next;
            temp->next=p;
        }
    }
    return head;
}
void display()
{
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int union_list(node *head1,node *head2)
{
    int flag=0;
    p=head1;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    for(q=head2;q!=NULL;q=q->next)
    {
        flag=0;
        for(p=head1;p!=NULL;p=p->next)
        {
            if(q->data==p->data)
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            cout<<q->data<<endl;
        }
    }
    
}
void intersection(node *head1,node *head2)
{
    int flag=0;
    for(q=head2;q!=NULL;q=q->next)
    {
        flag=0;
        for(p=head1;p!=NULL;p=p->next)
        {
            if(q->data==p->data)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<q->data<<endl;
    }
}
};

int main()
{
	node *list1,*list2;
    linked l1,l2,l3,l4;
    list1 = l1.createnode();
    cout<<"first list: "<<endl;
    l1.display();
    list2 = l2.createnode();
    cout<<"second list: "<<endl;
    l2.display();
    cout<<"union: "<<endl;
    l3.union_list(list1,list2);
    cout<<endl<<"intersection: "<<endl;
    l4.intersection(list1,list2);
   
    return 0;
}
    
    
    