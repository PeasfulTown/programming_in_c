#include <stdio.h>

struct entry {
    int value;
    struct entry *prev;
    struct entry *next;
};

void print_entries_forward(struct entry *ptr)
{
    while (ptr != (struct entry *) 0) {
        printf("%i ", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

void print_entries_reverse(struct entry *ptr)
{
    while (ptr != (struct entry *) 0) {
        printf("%i ", ptr->value);
        ptr = ptr->prev;
    }
    printf("\n");
}

void insert_entry(struct entry *new_entry, struct entry *after)
{
    struct entry *temp = after->next;
    after->next = new_entry;
    new_entry->prev = after;
    new_entry->next = temp;
}

void remove_entry(struct entry *entry)
{
    entry->prev->next = entry->next;
    entry->next->prev = entry->prev;
}

int main(void)
{
    struct entry n1, n2, n3, n4, n5;
    struct entry head = (struct entry) {
        .prev = (struct entry *) 0,
        .next = &n1
    };

    n1.value = 1;
    n1.prev = (struct entry *) 0;
    n1.next = &n2;

    n2.value = 2;
    n2.prev = &n1;
    n2.next = &n3;

    n3.value = 3;
    n3.prev = &n2;
    n3.next = &n4;

    n4.value = 4;
    n4.prev = &n3;
    n4.next = &n5;

    n5.value = 5;
    n5.prev = &n4;
    n5.next = (struct entry *) 0;

    print_entries_forward(head.next);
    print_entries_reverse(&n5);

    return 0;
}
