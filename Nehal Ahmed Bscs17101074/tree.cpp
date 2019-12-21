#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct trnode{
	char data;
	trnode *l,*r;
};


void infix(trnode *n){
	
	
	if (n->l != NULL)
	{
	
	infix(n->l);
	cout<<n->data;

}
 
 if (n->r!=NULL)
{
	
	infix(n->r);


}
if (n->l==NULL && n->r==NULL)
{
	cout<<n->data;
}

}



void postfix(trnode *n){
	
	
	if (n->l != NULL)
	{
	
	postfix(n->l);


}
 
 if (n->r!=NULL)
{
	
	postfix(n->r);
	cout<<n->data;

}
if (n->l==NULL && n->r==NULL)
{
	cout<<n->data;
}

}



void prefix(trnode *n){
	
	
	if (n->l != NULL)
	{
	cout<<n->data;
	prefix(n->l);
	

}
 
 if (n->r!=NULL)
{
	
	prefix(n->r);


}
if (n->l==NULL && n->r==NULL)
{
	cout<<n->data;
}

}




int main(int argc, char** argv) {
	
 
trnode	n1;
trnode	n2;
trnode	n3;
trnode	n4;
trnode	n5;
trnode	n6;	
trnode	n7;
n1.l=NULL;
n1.r=NULL;

n2.l=NULL;
n2.r=NULL;

n3.l=NULL;
n3.r=NULL;

n4.l=NULL;
n4.r=NULL;

n5.l=NULL;
n5.r=NULL;

n6.l=NULL;
n6.r=NULL;

n7.l=NULL;
n7.r=NULL;
trnode *root = &n1;


	n1.data='a';
	n2.data='b';
	n3.data='c';
	n4.data='d';
	n5.data='e';
	n6.data='f';	
	n7.data='g';
	
n1.l=&n2;
n1.r=&n5;
n2.l=&n3;
n2.r=&n4;
n5.l=&n6;
n5.r=&n7;
//	trnode *temp;
//	temp=&n1;
//	while (temp->l!=NULL)
//	{
//	
//	cout<<temp->data;
//
//temp=temp->l;
//}


//infix(root);
//postfix(root);
prefix(root);

	return 0;
}
