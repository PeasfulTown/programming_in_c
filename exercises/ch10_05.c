// TODO: double check
#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
    struct entry *previous;
};

void print_entries(struct entry *list_ptr)
{
    while (list_ptr != (struct entry *) 0) {
        printf("%i  ", list_ptr->value);
        list_ptr = list_ptr->next;
    }
    printf("\n");
}

int main(void)
{
    struct entry n1, n2, n3, n4;
    struct entry head = (struct entry) { .next = &n1 };

    n1.value = 1;
    n1.next = &n2;
    n1.prev = (struct entry *) 0;

    n2.value = 2;
    n2.next = &n3;
    n2.prev = &n1;

    n3.value = 3;
    n3.next = &n4;
    n3.prev = &n2

    n4.value = 4;
    n4.next = (struct entry *) 0;
    n4.prev = &n3;
    print_entries(head.next);

    return 0;
}
