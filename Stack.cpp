#include <stdio.h>
int top=-1;
 int stack[10];
 
int main() {
 push(2);
 push(5);
 push(6);
 push(7);
 push(8);
 push(9);
 
 
 
   return 0;
}

void push(int n){
	stack[top++]=n;
}

int pop(){
	return stack[top--];
}
Top(){
	printf("%d",stack[top]);
}
display(){
	while(top<0){
	
	print(stack[top--]);
}
}
