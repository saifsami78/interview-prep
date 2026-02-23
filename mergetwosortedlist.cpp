//https://leetcode.com/problems/merge-two-sorted-lists?envType=problem-list-v2&envId=linked-list

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

struct node{
    int data;
    node* next;
};

class LinkedList {

private:
    node* head = NULL;

public:

    node* getter(){
        return head;
    }
    // Adding any value at the back of the linkedlist
    void add(int value){
        node* newnode = new node();
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
        }
        else{
            node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    
    void show(){
        node* iteration = head;

        while(iteration != NULL){
            cout << iteration->data << "\n";
            iteration = iteration->next;
        }
    }

    void showfromnode(node* A){
        node* iteration = A;

        while(iteration != NULL){
            cout << iteration->data << "\n";
            iteration = iteration->next;
        }
    }


    node* mergetwolist(node* head1, node* head2){
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        node* temp;
        node* current;

        if(head1->data <= head2->data){
            temp = head1;
            current = head1;
            head1 = head1->next;
        }
        else{
            temp = head2;
            current = head2;
            head2 = head2->next;
        }

        while(head1 != NULL && head2 != nullptr){
            if(head1->data <= head2->data){
                
                current->next = head1;
                head1 = head1->next;
            }
            else{
                current->next = head2;
                head2 = head2->next;
            }
            current = current->next;
        }

        if(head1 == NULL){
            current->next = head2;
        }
        else{
            current->next = head1;
        }

        return temp;

    }
};

int main(){

    LinkedList list1;
    list1.add(2);
    list1.add(7);
    list1.add(13);
    list1.add(17);

    LinkedList list2;
    list2.add(5);
    list2.add(8);
    list2.add(10);
    list2.add(15);
    node* l1= list1.getter();
    node* l2=list2.getter();     
    node* A = list1.mergetwolist(l1,l2);
    list1.showfromnode(A);

}