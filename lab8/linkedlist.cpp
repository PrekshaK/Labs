#include <iostream>
using namespace std;



struct Node{
	int data;
	Node* next;
};
void removeDuplicates(Node* h);
void addElement(int x, Node* np);
void findkthlast(Node* h, int x);
void partition(int list[], int num, Node* head);
void print(Node*h);

int main(){

	Node* head = new Node();
	head->next = NULL;
	
	Node* current = head;

	int list[] = {5,6,8,3,0,2,55,7,8,4,9,5};
	partition(list, 7, head);
	removeDuplicates(head);
	print(head);
	findkthlast(head, 5);

}

	
	//partition the array in two linked list and later join them together
	//Order of complexity is O(n)
	void partition(int list[], int num, Node* head){
		Node* cur = head;

		Node* annode = new Node();
		Node* another = annode;
		Node* prev2 = another;

		for (int i = 0; i<12; i++){	//go through the array
			if (list[i] < num){			// if less than 7, make a linked list following the main head
				cur->data = list[i];
				Node* temp = new Node();
				cur->next = temp;
				cur = cur->next;

			}else if (list[i] > 7){		// else if greater than 7, make a linked list with annode as a new head
				another->data = list[i];

				Node* tempo = new Node();
				prev2 = another;
				another->next = tempo;
				another = another->next;
			}

		}
		cur->data = num;				//add 7 after first linked list			
		cur->next = annode;				//link two linked list
		prev2->next = NULL;
	}

	//primitive method of removing duplicates by going through the list twice using nested loops
	//Order of complexity is O(n**2)
	void removeDuplicates(Node* h){
		bool yes = false;
		Node* itr = h;
		while (itr -> next != NULL){		
			Node* prev = itr;
			Node* itr2 = itr;
			
			while (itr2 -> next != NULL){
				if (!yes){
					prev = itr2;
					yes = false;
				}
				itr2 = itr2 -> next;

				if (itr->data == itr2->data){
					prev -> next = itr2 ->next;
					yes = true;
	
				}
				

			}
			itr = itr->next;

		}
	}


	//order of complexity is O(n)
	void findkthlast(Node* h, int x){
		Node* actual = h;				//actual pointer
		Node* ref = h;					//reference pointer
		for (int i = 1; i < x; i++){
				ref = ref->next;			//move reference pointer by k
		}

		while (ref->next != NULL){			
			
			ref = ref->next;				//then move reference and actual pointer both until 
			actual = actual->next;			//reference reach to NULL
		}

		cout << actual->data << endl;		// this way actual only reaches until kthlast node
	}

   // order of complexity is O(n)
	void removenode(Node* cur, Node* h){		// uses node pointer as an argument
		Node* now = h;
		while (now->next != cur){
			now = now->next;
		}

		now->next = cur->next;
		delete(cur);

	}


	void print(Node*h){						//prints the linkedlist
		Node* cur = h;
		cout << cur->data <<endl;
		while (cur->next != NULL){
			cur = cur->next;
			cout << cur->data<<endl;
		}
	}

