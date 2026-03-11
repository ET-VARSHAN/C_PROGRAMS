#include <stdio.h>
#include <stdlib.h>

// Node definition
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to print the linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

// Function to remove the N-th node from the end
struct ListNode* removeNthFromEnd(struct ListNode* head, int B) {
    struct ListNode *fast = head, *slow = head;
    int count = 0;

    // Move slow pointer B steps ahead
    while (count < B) {
        if (slow == NULL)
            return head->next;  // Remove head if B >= length
        slow = slow->next;
        count++;
    }

    // If slow reached NULL, remove the head node
    if (slow == NULL)
        return head->next;

    // Move both pointers until slow reaches the last node
    while (slow->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // Remove the target node
    struct ListNode* temp = fast->next;
    fast->next = fast->next->next;
    free(temp);

    return head;
}

int main() {
    int n, B, value;
    struct ListNode *head = NULL, *newNode, *temp;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter the position from the end to remove: ");
    scanf("%d", &B);

    head = removeNthFromEnd(head, B);
    printf("Modified list: ");
    printList(head);

    return 0;
}

