#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../UTS/Models.h"

void pushHead(int value){
    Node *temp = createNode(value);
    if(!head){
        head = tail = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void pushTail(int value){
    Node *temp = createNode(value);
    if(!head){
        head = tail = temp;
    } else {
        temp->next = temp;
        head = temp;
    }
}

void popHead(){
    if (!head){
        return;
    } else if (head == tail){
        head = tail = NULL;
        free(head);
    } else {
        Node *newHead = head->next;
        head->next = NULL;
        free(head);
        head = newHead;
    }
}
void popTail(){
    if (!head){ 
        return;
    } else if (head == tail){
        head = tail = NULL;
        free(head);
    } else {
        curr = head;

        while(curr){
            if(curr->next = tail){
                curr -> next = NULL;
                free(tail);
                break;
            }
            curr = curr -> next;
        }
    }
}

void popAll(Node *root){
    if(root){
        popAll(root->left);
        free(root);
        root = NULL;
        popAll(root->right);
    }
}