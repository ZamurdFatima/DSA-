//#include <iostream>
//using namespace std;
//
//// Node structure
//class Node {
//public:
//    int data;
//    Node* next;
//    // Constructor
//    Node(int value) {
//        data = value;
//        next = NULL;
//    }
//};
//
//// Linked List class
//class LinkedList {
//public:
//    Node* head;
//
//    // Constructor
//    LinkedList() {
//        head = NULL;
//    }
//
//    // Function to append a new node at the end
//    void append(int value) {
//        Node* new_node = new Node(value);
//
//        if (head == NULL) {
//            head = new_node;
//            return;
//        }
//
//        Node* last = head;
//        while (last->next != NULL) {
//            last = last->next;
//        }
//
//        last->next = new_node;
//    }
//
//    // Function to insert a node after a specific value
//    void insertAfterValue(int target, int value) {
//        Node* current = head;
//
//        // Traverse to find the target node
//        while (current != NULL && current->data != target) {
//            current = current->next;
//        }
//
//        // If target is found
//        if (current != NULL) {
//            Node* new_node = new Node(value);
//            new_node->next = current->next;
//            current->next = new_node;
//        } else {
//            cout << "Target value " << target << " not found in the list." << endl;
//        }
//    }
//
//    // Function to print the linked list
//    void printList() {
//        Node* current = head;
//        while (current != NULL) {
//            cout << current->data << " -> ";
//            current = current->next;
//        }
//        cout << "NULL" << endl;
//    }
//};
//
//int main() {
//    LinkedList list;
//
////    // Append some nodes to the linked list
////    list.append(10);
////    list.append(20);
////    list.append(30);
////    list.append(40);
////
////    cout << "Original List: ";
////    list.printList();
////
////    // Insert a node after a specific value
////    list.insertAfterValue(20, 25);
////
////    cout << "List after insertion: ";
////    list.printList();
////    
//    
//    int n, value, target, insert_value;
//
//    // Get number of elements to insert initially
//    cout << "Enter the number of elements to insert initially: ";
//    cin >> n;
//
//    // Append the initial elements to the linked list
//    for (int i = 0; i < n; i++) {
//        cout << "Enter value " << i + 1 << ": ";
//        cin >> value;
//        list.append(value);
//    }
//
//    // Print the original list
//    cout << "Original List: ";
//    list.printList();
//
//    // Get target value and value to insert after it
//    cout << "Enter the target value after which to insert: ";
//    cin >> target;
//    cout << "Enter the value to insert: ";
//    cin >> insert_value;
//
//    // Insert the node after the target value
//    list.insertAfterValue(target, insert_value);
//
//    // Print the updated list
//    cout << "List after insertion: ";
//    list.printList();
//    return 0;
//}



//#include <iostream>
//using namespace std;
//struct Node {
//    int data;
//    Node* next;
//};
//void insert_end(Node*& head, int value){
//	Node* newNode = new Node;
//	newNode -> data = value;
//	newNode -> next = NULL;
//	if (head==NULL){
//		head = newNode;
//	}
//	else{
//		Node* temp = head;
//		while (temp->next != NULL){
//			temp = temp->next;
//		}
//		temp->next = newNode;
//	}
//} 
//void insert_after_value(Node*& head, int target, int value) {
//    Node* temp = head;
//    while (temp != NULL && temp->data != target) {
//        temp = temp->next;
//    }
//    if (temp != NULL) {
//        Node* newNode = new Node;
//        newNode->data = value;
//        newNode->next = temp->next;
//        temp->next = newNode;
//    } 
//	else {
//        cout << "\nValue " << target << " not found in the list.\n";
//    }
//}
//void printList(Node* head) {
//	Node* temp = head;
//	while (temp != NULL){
//		cout << temp->data << " -> ";
//		temp = temp->next;
//	}
//	cout << "NULL" << endl;
//}
//int main() {
//    Node* head = NULL;
//    insert_end(head, 10);
//    insert_end(head, 20);
//    insert_end(head, 30);
//    insert_end(head, 40);
//    cout << "Initial Linked List: ";
//    printList(head);
//    insert_after_value(head, 20, 25);
//    cout << "\nAfter inserting 25 after 20: ";
//    printList(head);
//    insert_after_value(head, 40, 45);
//    cout << "\nAfter inserting 45 after 40: ";
//    printList(head);
//    insert_after_value(head, 100, 50);
//}

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head;
void insertAfter( int targetValue, int newValue) {
    Node* current = head;
    while (current != NULL && current->data != targetValue) {
        current = current->next;
    }
    if (current !=NULL) {
        Node* newNode = new Node();  
        newNode->data = newValue;    
        newNode->next = current->next; 
        current->next = newNode;      
        cout << "Node inserted successfully!" << endl;
    } else {
        cout << "Target value not found in the list." << endl;
    }
}
void append(Node*& head,int value){
Node* newnode=new Node();
newnode->data =value;
newnode->next =NULL;
if( head==NULL)	{
	head=newnode;
}
else{
	Node* temp=head;
	while(temp->next != NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}

}
void printList(){
    Node* temp= head;
while(temp!=NULL){
	cout<<temp->data<<" ->";
	temp=temp->next;
}
    cout << "NULL" << endl;
}

int main() {
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);
    cout << "Linked list before insertion: " << endl;
    printList();
    insertAfter( 20, 25);
    cout << "Linked list after insertion: " << endl;
    printList();
    
}


