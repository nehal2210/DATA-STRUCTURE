#include<iostream>
// #include<>
using namespace std;

struct node{
    int data;
 node *next;
};

void append(struct node**h,struct node**l,int n){
	struct node *temp= new node();
	temp->data=n;
	temp->next=NULL;
	 	if (*h==NULL){
	*h=temp;
	*l=temp;
	}
	
	
	else{
		(*l)->next=temp;
		*l=temp;
		
		
		
	}
	
}
 void display(struct node **temp)
{
while ((*temp)->next!=NULL)
{
cout<<(*temp)->data;
*temp=(*temp)->next;
}
	cout<<(*temp)->data;
	
	
 } 
 
 void insert(int index,struct node **temp){
for (int i=0;i<index-1;i++){
	*temp=(*temp)->next;
}
node *ttemp=new node();
ttemp->data=5;

ttemp->next = (*temp)->next;
(*temp)->next=ttemp;
 	
 	
 	
 }
 
struct stack{
	int value;
	stack *link;
};


void push(stack **top,stack **h,int n)
{


stack *stemp= new stack();
stemp->value=n;
stemp->link=NULL;
if (*top==NULL){
*top=stemp;
*h=stemp;	
}
else{
	(*top)->link=stemp;
*top=stemp;

}
}

void Top(stack **top){
	
	cout<<(*top)->value;
}

int Pop(stack **temp,stack **top){
	
	stack *p=NULL;
while ((*temp)->link!=NULL)
{
p=*temp;
*temp=(*temp)->link;

}

*top=p;
(*top)->link=NULL;
return (*temp)->value;
	
}


int main(){ 
struct node *head=NULL;
struct node *temp=NULL;
struct node *last=NULL;


struct node p;
struct node q;
struct node r;

head = &p;
last = &p;


head->data=5;
//head->
temp = head;
last = temp;

for (int i=0;i<3;i++){
temp->data=i;
node *t_temp;
t_temp =(*node ) malloc(sizeof( struct node));

temp->next = t_temp;
temp = t_temp;
last = t_temp;

}
}

//cout<<p.data;
//cout<<q.data;
//cout<<r.data;

temp = head;

for(int i = 0;i<3 ; i++){
	cout<<temp->data;
	temp = temp->next;
	
}

append(&head,&last,8);
append(&head,&last,6);
append(&head,&last,9);
append(&head,&last,5);
append(&head,&last,3);
temp=head;


display(&temp);
temp=head;

insert(2,&temp);

temp=head;
display(&temp);
struct stack *head=NULL;
struct stack *temp=NULL;
stack *top=NULL;

//head=top;
push(&top,&head,9);
push(&top,&head,6);
push(&top,&head,9);
push(&top,&head,4);
push(&top,&head,2);

Top(&top);
temp=head;

cout<<Pop(&temp,&top);
cout<<Pop(&temp,&top);
cout<<Pop(&temp,&top);
Top(&top);
void append(struct node *h,struct node *l,int n){
	 struct node *temp= new node;
	temp->data=n;
	temp->next=NULL;
	 	if (h==NULL){
	h=temp;
	l=temp;
	}
	
	
	else{
		l->next=temp;
		l=temp;
		
		
		
	}
	
}

