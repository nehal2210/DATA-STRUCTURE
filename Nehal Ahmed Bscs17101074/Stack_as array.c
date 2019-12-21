#include <stdio.h>
int top=-1;
int stack[10];
void push(int n);
int pop();
void Top();
void display(); 
int main() {
 push(2);
 push(5);
 push(6);
 push(7);
 push(8);
 push(9);
 
 display();
 printf("\n\n\n");
Top();

printf("\n\n\n");

printf("%d",pop());
 printf("\n\n\n");
Top();
printf("%d",pop());
 printf("\n\n\n");
 
Top() ;



//   return 0;
}

void push(int n){
	top++;
	stack[top]=n;
}

int pop(){
	return stack[top--];
}
void Top(){
	printf("%d",stack[top]);
}
void display(){
int temp=top;
	while(top>=0){
	
	printf("%d",stack[top--]); // ye pouchna he preficx post fix operator
}
top=temp;

}
