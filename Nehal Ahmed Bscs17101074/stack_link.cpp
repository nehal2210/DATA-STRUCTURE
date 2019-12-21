#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	 struct node *next; 
};
struct node *top;
struct node *head;
void push(int n);
void Top();
void pop(){
	if (top->next!=NULL){
		
	top=top->next;	
		
	}
}
void Display();
int main(int argc, char** argv) {

struct	node *p=NULL;
 
push(5);
	push(57);
	push(9);
	push(4);
	push(6);
	push(9);
	Top();
	cout<<"\n";
	Display();
pop();
pop();
pop();
pop();
cout<<"\n";
Top();
	return 0;
}

void push(int n){
struct 	node *temp=new node();
	temp->data=n;
	temp->next=top;

top=temp;





	

}


void Top(){
	cout<<top->data;
}

void Display(){
	node *temp=top;
	while (temp!=NULL){
		
		cout<<temp->data;
	
	temp=temp->next;
	
	}
	
}
