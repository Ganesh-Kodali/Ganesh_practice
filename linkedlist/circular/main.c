#include "cll.h"

int main()
{
    node *head = NULL;

    head = createnode(10);
    display(head);

    insertatbegining(&head, 20);
    insertatbegining(&head, 30);
    display(head);

    insertatend(&head, 40);
    display(head);

    insertatpos(&head, 99, 2);
    display(head);

    deleteatfirst(&head);
    display(head);

    deleteatend(&head);
    display(head);

    deleteatpos(&head, 2);
    display(head);

    middle(&head);

    reverse(&head);
    display(head);

    return 0;
}
