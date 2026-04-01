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
    struct entry n1, n2, n3, n2_3, *list = &n1;

    n1.value = 1;
    n1.next = &n2;

    n2.value = 2;
    n2.next = &n3;

    n3.value = 3;
    n3.next = (struct entry *) 0;
    print_entries(list);

    n2_3.value = 5;
    insert_entry(&n2_3, list);
    print_entries(list);

    return 0;
}
