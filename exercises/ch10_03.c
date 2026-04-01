#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void insert_entry(struct entry *ne, struct entry *after)
{
    struct entry *temp = after->next;
    after->next = ne;
    ne->next = temp;
}

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
    struct entry n1, n2, n3, n2_3, n4;
    struct entry head = (struct entry) { .next = &n1 };

    n1.value = 1;
    n1.next = &n2;

    n2.value = 2;
    n2.next = &n3;

    n3.value = 3;
    n3.next = (struct entry *) 0;
    print_entries(head.next);

    // insert entry after an existing entry
    n2_3.value = 5;
    insert_entry(&n2_3, &n2);
    print_entries(head.next);

    // insert entry at front of list (insert after a non-existing entry)
    n4.value = 100;
    insert_entry(&n4, &head);
    print_entries(head.next);

    return 0;
}
