

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

SinglyLinkedListNode* head1 = new SinglyLinkedListNode(data);
    head1->next = llist;
llist = head1;
    return llist;
}


