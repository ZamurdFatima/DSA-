#include <iostream>
using namespace std;

	// Define structure for node in linked list
	struct Node{
		int data;                                      // data part of node
		Node* next;                                    // pointer to next node in list
	};
	
	void insert_end(Node*& head, int value){
		Node* newNode = new Node(value);
		newNode->next = NULL;
		newNode->data = value;
		
		if (head == NULL){                              //check if list is empty
			head = newNode;
		}
		else{
			Node* temp = head;                         //use a temporary pointer                   
			while(temp->next!= NULL)              //traverse list untill last node is ready
			{
				temp = temp->next;
			}
			temp->next= newNode;                       //link the last node to new node
		}
	}
	void printList(Node* head){
		Node* temp = head;
		while (temp!=NULL){
			cout<< temp->data << "->";                 //print
			temp = temp->next;                         //move to the next
		}
		cout<< "NULL" <<endl;                          //end the list with NULL
	}
	
	int main(){
			Node* head =NULL;                              //initially, linked list is null
		insert_end(head, 10);                        //insert node at start of linked list
		insert_end(head, 20);
		insert_end(head, 30);
		insert_end(head, 40);
		printList(head);                               //print the linked list
		
	}
	
