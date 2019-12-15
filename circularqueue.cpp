#include <iostream>

#define size 5 
using namespace std;

int front= -1;
int rare = -1;
int a[size];

void enqueue(int value){

	if ((front==0 && rare==size-1) || front==rare+1){

		cout << "Queue is full";
	}
	else
	{
		if(front ==-1)
			front++;
		rare=(rare+1)%size;
		a[rare]=value;
	}

	/*	if ( rare == size -1){
		cout << "Queue is overflow \n";
	}
	else {
		if (front ==-1){
			front++;
		}
	rare++;
	a[rare]=value;
	}
*/
}

void dequeue(){
	if (front ==-1)
		cout << "Queue is overflow \n" ;
	else{
		if (front==rare){
			front=-1;
			rare=-1;
		}
		else{
			front=(front+1)%size;
		}
	}
}

void Front (){
	if ( front==-1 )
		cout << "Queue is overflow \n";
	else{
		cout << "value of front item is " << a[front];
	}
}

void display(){
int i;
int f=front,r=rare;
if(front ==-1)
	cout << "is empty" << "\n";
if(r>f)
{

for (i=front;i<=rare;i++){
	cout << a[i] <<"\n";
}
}
else {
for (int j=f;j<size;j++){
cout << a[j] << "\n";

}
for (int j=0;j<=rare;j++)
{
	cout << a[j] << "\n";
}
}





}

int main(){
int value;
int op=1;
while ( op != 0 ){
cout << "please enter:- \n1 for enqueue \n2 for dequeue\n3 for printing front value \n4 for display\nand 0 for abort\n";
cin >> op;
cout << "\n";
if ( op == 1 ){

	cin >> value;
	enqueue(value);
		
}
else if ( op == 2 )
	dequeue();

else if ( op == 3 )
	Front();
else if (op == 4 )
	display();
else  
	cout << "please enter valid number as instructed above";

}
}
