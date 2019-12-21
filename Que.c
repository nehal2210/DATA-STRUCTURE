#include<stdio.h>

int Que[10];
int rare=-1;
int front=0;
void enque();
int deque();
int main(){
	
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	enque(5);
	enque(6);
	enque(7);
	enque(8);
	enque(9);
	enque(10); 
	
	
//	printf("%d",deque());
//	printf("%d",deque());
//	
deque();
deque();
	enque(0);
	enque(5); 
	int temp=front;
	while(temp!=rare+1){
		printf("%d \n",Que[temp]);

		if (temp==10)
		{
			temp=0;
		}
		else
		{
			
			temp++;
		}
		
	}
//	printf("%d",deque());
//	printf("%d",deque());
//	printf("%d",deque());
//	
	
}

void enque(int n){
	
	rare++;
	if (rare<=10){
	Que[rare]=n;
}
else if (front==rare){
printf("Sorrry Queu is full ");
}

else{
	rare=0;
Que[rare]=n;
}
}

int  deque(){
	
if (front!=rare)  {
	return Que[front++];
}

else if ( front==rare)
{
printf("Queue is empty");
return 0;
}
else {
	front=0;
	
	return Que[front];
}


}
