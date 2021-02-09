#include <stdio.h>
#include <stdlib.h>

struct myArr            // the size of structure depends on its elements . Since this struct's elements are int its total size is 12 
{                       // and the size of its pointer/address is 4
    int tot_size;
    int use_size;
    int *ptr;
};

void create_adt (struct myArr *p , int t_size, int use_size) {  //passing the address of the structure myArr and its tot and use size
    (*p).tot_size = t_size;             //same as self.x = x in python.                               
    // p->tot_size = tot_size can alse be used instead of dereferencing of the struct pointer.
    (*p).use_size = use_size;                                   
    (*p).ptr = (int * )malloc(t_size*sizeof(int));  //how to implement a dynamic memory for the array in heap.
}

void set_arr (struct myArr *p ) {
    int n;
    for (int i = 0 ; i < (*p).use_size ; i++ ) {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&n);
        (*p).ptr[i] = n;
    }
}

void  show_arr (struct myArr *p) {
    for (int i =0 ; i<(*p).use_size; i++) {
        printf("%d\n",(*p).ptr[i]);
    }
}
    
void replace(struct myArr *y , int pos , int ele ) {
    int temp;
    temp = (*y).ptr[pos];
    (*y).ptr[pos] = ele;
}

void insert(struct myArr *p , int pos , int num ) {
    int temp = 0;
    for (int i = (*p).use_size + 1; i >= pos  ; i--) {
        // temp = (*p).ptr[i+1];
        // (*p).ptr[i] = (*p).ptr[i];
        (*p).ptr[i] = (*p).ptr[i-1];
    }
    p->ptr[pos] = num;
    p->use_size = p->use_size+1;
}

void delete (struct myArr *p , int pos ) {
    (*p).ptr[pos] = NULL;
    for (int i = pos ; i < (*p).use_size-1 ; i++) {
        (*p).ptr[i] = (*p).ptr[i+1];
    }
    p->ptr[(*p).use_size] = NULL;
    p->use_size -=1;
}

int pop (struct myArr *t) {
    int len = t->use_size;
    int popp = t->ptr[len-1];
    printf("The len of the arr is %d \n",len);
    t->use_size-=1;    //jugaad of pop
    return popp;
}

void linear_search (struct myArr *p, int num) {
    int len = p->use_size;
    int pos = 0;
    int count = 0;
    int g = 0;
    for (int i = 0 ; i<len ; i++ ) {
        count +=1;
        if (p->ptr[i] == num) {
            pos = i;
            g = 1;
            printf("The number %d is at position %d\n",num,pos+1);
            printf("The number was found in %d tries \n",count);
            break;
        }    
        
    }
    if (pos == 0 && g == 0) {
        printf("Sorry this array does not have the number you requested \n");
    }
}

int binary_search (struct myArr *p , int num) {
    int high,low,mid;
    low = 0;
    high = p->use_size - 1;         // (*p).use_size - 1;
    int count = 0;
    while (low <= high ) {
        mid = (low + high)/2;
        count += 1;
        if (p->ptr[mid]==num) {
            printf("Element %d found at postion %d\n",num,mid+1);
            return count;
        }
        if (p->ptr[mid] < num) {
            low = mid + 1;
        }
        else  {
            high = mid - 1;
        }     
    }
    return -1;
}

int main() {
    struct myArr marks;                             //declaring a structure named marks
    printf("Enter the size of the array :\n");
    int m,num;
    scanf("%d",&m);
    create_adt(&marks, 10*m,m);                       //passing the address of struct marks to create it with the function create_adt
    printf("Created adt now setting values :\n");
    set_arr(&marks);
    printf("Now showing the array :\n");
    show_arr(&marks);
    // replace(&marks,1,400);
    // printf("Showing the updated array :\n");
    // show_arr(&marks);
    // printf("popping the last element  : %d\n",pop(&marks));
    // printf("After popping the array is : \n");
    // show_arr(&marks);
    printf("After inserting the array is : \n");
    insert(&marks,2,500);
    show_arr(&marks);
    delete(&marks,2);
    printf("After deleting the array is : \n");
    show_arr(&marks);
    printf("Enter the number to find in the array : \n");
    scanf("%d",&num);
    linear_search(&marks,num);
    printf("After linear searching the array is : \n");
    show_arr(&marks);
    printf("After binary searching the array is : \n");
    printf("The element was found in %d tries \n", binary_search(&marks,num));
    show_arr(&marks);
    printf("Done!!!\n");
    return 0;
}