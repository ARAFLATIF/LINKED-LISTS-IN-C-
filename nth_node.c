// Function to get the nth node from the end
int getNthFromEnd(struct Node* head, int n) {
    struct Node* mainPtr = head;
    struct Node* refPtr = head;

    int count = 0;
    while (count < n) {
        if (refPtr == NULL) return -1;  // If n is greater than the number of nodes
        refPtr = refPtr->next;
        count++;
    }

    while (refPtr != NULL) {
        mainPtr = mainPtr->next;
        refPtr = refPtr->next;
    }

    return mainPtr->data;
}
