#include <stdio.h>

typedef int Data;

typedef struct Node Node;
struct Node {
    Data data;
    Node * next;
};

void print(Node * list) {
    for (Node * p = list; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}

int main() {

    Node a, b, c;

    Node * list = &a;
    a.data = 3;     a.next = &b;
    b.data = 17;    b.next = &c;
    c.data = 21;    c.next = NULL;

    print(list);        // 3 17 21

    return 0;
}