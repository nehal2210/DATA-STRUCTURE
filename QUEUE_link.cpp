#include <iostream>
#include<stdio.h>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;


struct node {
	int data;
	node *link;
	
};

node *front=NULL;
node *rear=NULL;


void Enqueue(int n){
	node *temp=new node();
	temp->data=n;
	temp->link=NULL;
	if (front==NULL){
		
	front=rear=temp;	
	}
	else{
rear->link=temp;
	rear=temp;
	}
	
	
}
void Display(){
	node *temp;
	temp=front;
	while (temp->link !=NULL){
		
		cout<<temp->data<<"\n";
		temp=temp->link;
	}
cout<<temp->data<<"\n";
}

void Dequeue(){
	
	node *temp=front;
	front=front->link;
	cout<<temp->data<<" is remove \n";
//	free(temp);
	delete(temp);
}
int main(int argc, char** argv) {

cout<<"-----enqueue----"<<"\n";
Enqueue(5);
Enqueue(52);
Enqueue(54);
Enqueue(51);
Enqueue(52);
Enqueue(53);
Enqueue(54);
Enqueue(55);
Enqueue(56);
cout<<"-----Display----"<<"\n";
Display();


Dequeue();
Dequeue();
Dequeue();
cout<<"-----Display----"<<"\n";
Display();
cout<<"-----Enqueue ----"<<"\n";
Enqueue(1);
Enqueue(2);
Enqueue(4);
Enqueue(5);
Enqueue(7);
cout<<"-----Display----"<<"\n";
Display();
	return 0;





}
