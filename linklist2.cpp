#include <iostream>
using namespace std;
struct Node *head=NULL;
struct Node {
	int data;
	struct Node *next;

};
struct Node *first=new(struct Node);
struct Node *second=new(struct Node);
struct Node *third=new(struct Node);
struct Node *fourth=new(struct Node);
//head=first;
//first->next=second;
//second->next=third;
//third->next=fourth;
//fourth->next=NULL;
//first->data=5;
//second->data=6;
//third->data=7;
//fourth->data=8;

//struct Node {
//	int data;
//	struct Node *next;
//
//};

void insert(int data){
	struct Node *temp1=new(struct Node);
	struct Node *temp2=new(struct Node);
	temp2->data=data;
	temp1=head;
//	if(head->next!=NULL)
//	{
//		temp1->next=head;
//		head=temp1;
//		return;
//	}

	temp2=NULL;
	temp2=new(struct Node);
	temp2->next=temp1;
	cout << "dasdsad";
	do
	{
		temp1=temp1->next;
		if (temp1->next==NULL){

			temp1->next=temp2;
			return;
		//	break;
		}


		} while(temp1!=NULL);

//	Node *temp2=head;
//	for(int i=0;i<pos-2;i++){
//
//		temp2=temp2->next;
//
//	}
//	temp1->next=temp2->next;
//	temp2->next=temp1;
}
/*void delet(int pos){
Node *temp0=NULL;
temp0=head;
for (int i=1;i<=pos-1;i++)
{
	if (i=post-2){
		temp0=head->next;
			
	}



}

temp0=temp0->next;
}
*/

void display(){
	struct Node *temp=head;
	while(temp!=NULL){
		cout <<temp->data << "    "  << temp->next << "\n";
		temp=temp->next;
	}
}
int main(){
head=first;
first->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;
first->data=5;
second->data=6;
third->data=7;
fourth->data=8;

	int data,pos;
	int x=0;
	while (x!=9){
		cout << "enter 1 for insertation\n2 for delete\n3 for display\n9 for quite\n";
		cin >> x;
		if (x==1){
			cout << "enter data and positon\n" ;
			cin >> data;
		//	cin >> pos;
			insert(data);
		}
//		else if(x==2){
//			cin >> pos;
//			delet(pos);
	//	}
		else if (x==3){
		display();
		}
		else if(x==9){
		cout << "bye\n";
		}

	}


}
