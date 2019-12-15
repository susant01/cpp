#include <iostream>
using namespace std;
struct Node *head=NULL;

struct Node {
	int data;
	struct Node *next;

};

void insert(int data, int pos){
	struct Node *temp1=new(struct Node);
	temp1->data=data;
	temp1->next=NULL;
	if(pos==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	Node *temp2=head;
	for(int i=0;i<pos-2;i++){

		temp2=temp2->next;

	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}
void delet(int pos){
//Node *temp0=NULL;
//temp0=head;
//for (int i=1;i<=pos-1;i++)
//{
//	if (i=post-2){
//		temp0=head->next;
//			
//	}
//
//
//
//}




//temp0=temp0->next;
//}

Node *temp0=head;
if(pos==1){
head=temp0->next;
delete temp0;
return;
}
for (int i=1;i<pos-1;i++){

	temp0=temp0->next;
	Node *temp2=temp0->next;
	temp0->next=temp2->next;
	delete temp2;
//	return;
}
}
void display(){
	struct Node *temp=head;
	while(temp!=NULL){
		cout <<temp->data << "    "  << temp->next << "\n";
		temp=temp->next;
	}
}
int main(){
	int data,pos;
	int x=0;
	while (x!=9){
		cout << "enter 1 for insertation\n2 for delete\n3 for display\n9 for quite\n";
		cin >> x;
		if (x==1){
			cout << "enter data and positon\n" ;
			cin >> data;
			cin >> pos;
			insert(data,pos);
		}
		else if(x==2){
			cout << "enter position you want to delete";
			cin >> pos;
			delet(pos);
		}
		else if (x==3){
		display();
		}
		else if(x==9){
		cout << "bye\n";
		}

	}


}
