#include <stdio.h>
#include <stdlib.h>

struct ll_chain
{
    int data;
    struct ll_chain *next;
};

void display(struct ll_chain * ptr) {
    while (ptr != NULL) {                   // linked list traversal
        printf("The element is %d \n",ptr->data);
        ptr = ptr->next;
    }
}

struct ll_chain * insertHEad(struct ll_chain * head , int data) {
    struct ll_chain * ptr = (struct ll_chain *)malloc(sizeof(struct ll_chain));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

void insertEnd(struct ll_chain * head , int data) {
    struct ll_chain * p = (struct ll_chain *)malloc(sizeof(struct ll_chain));
    p->data = data;
    struct ll_chain * ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = NULL;
}

void insertIndex(struct ll_chain * head , int index ,int data) {
    struct ll_chain * p = (struct ll_chain *)malloc(sizeof(struct ll_chain));
    p->data = data;
    struct ll_chain * ptr = head;
    int i = 0;
    while (i != index-1) {
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    ptr->next = p;
}

int length (struct ll_chain * head ) {
    int l = 0;
    struct ll_chain * ptr = head;
    while (ptr != NULL) {
        ptr = ptr->next;
        l++;
    }
    return l;
}

void delete_node (struct ll_chain * head , int index) {
    struct ll_chain *ptr = head;
    int i = 0;
    while (i != index -1 ) {
        ptr = ptr->next;
        i++;
    }
    // int j = 0;
    // struct ll_chain *p = head;
    // while (j != index ) {        //using two while loops
    //     p = p->next;
    //     j++;
    // }
    struct ll_chain *q;
    q = ptr->next;
    ptr->next = q->next;
    //ptr->next = p->next;
    free(q);
}

int main() {
     struct ll_chain *head;
    struct ll_chain *a;
    struct ll_chain *b;
    struct ll_chain *c;
    struct ll_chain *d;

    // Allocate memory for ll_chains in the linked list in Heap
    a = (struct ll_chain *)malloc(sizeof(struct ll_chain));
    b = (struct ll_chain *)malloc(sizeof(struct ll_chain));
    c = (struct ll_chain *)malloc(sizeof(struct ll_chain));
    d = (struct ll_chain *)malloc(sizeof(struct ll_chain));

    // Link first and b ll_chains
    a->data = 7;
    a->next = b;

    // Link b and c ll_chains
    b->data = 11;
    b->next = c;

    //Link c and d ll_chains
    c->data = 41;
    c->next = d;

    // Terminate the list at the c ll_chain
    d->data = 66;
    d->next = NULL;
    display(a);
    printf("-----------------------------------------------\n");

    head = insertHEad(a,12);
    display(head);
    printf("-----------------------------------------------\n");
    insertEnd(head,24);
    display(head);
    printf("-----------------------------------------------\n");
    insertIndex(head,3,100);
    display(head);
    printf("-----------------------------------------------\n");
    int l = length(head);
    printf("The length of the linked list is %d\n", l);
    printf("-----------------------------------------------\n");
    delete_node(head,4);
    display(head);
    return 0;
}