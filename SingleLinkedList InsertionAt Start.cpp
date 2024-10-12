#include <iostream>
using namespace std;

	// Define structure for node in linkedd list
	struct Node{
		int data;                                      // data part of node
		Node* next;                                    // pointer to next node in list
		
		Node(int value){                               // constructor to initialize node
			data=value;
			next= NULL;
		}
	};
	
	void insert_start(Node*& head, int value){          //function to insert node at first
		Node* newNode = new Node(value);                // create node with value
		newNode->next = head;                          //point new node's next pointer to current head
		head = newNode;                                 //update head to point to new node(new node becomes
	}
	
	void printList(Node* head){
		Node* temp = head;
		while (temp!=NULL){
			cout<< temp->data << "->";                  //print
			temp = temp->next;                          //move to the next
		}
		cout<< "NULL" <<endl;                           //end the list with NULL
	}
	
	int main(){
		Node* head =NULL;                              //initially, linked list is null
		insert_start(head, 10);                        //insert node at start of linked list
		insert_start(head, 20);
		insert_start(head, 30);
		insert_start(head, 40);
		printList(head);                               //print the linked list
		
		int x,y,s;
		for(int i=0; i<4;i++){
//		cout<<"Enter values:";
//		cin>>s;
//		insert_start(head,s);
//		}
//		printList(head);

		cout<<"Enter node:";
		cin>>x;
		for(int i=0; i<x;i++){
		cout<<"Enter values at node:";
		cin>>y;
		insert_start(head,y);
		}
		printList(head);
		
		return 0;

	}

