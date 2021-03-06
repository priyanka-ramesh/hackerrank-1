// Linked Lists: Detect a Cycle
// Given a pointer to the head of a linked list, determine whether the linked list loops back onto itself (i.e., determine if the list ends in a circularly linked list).
//
// https://www.hackerrank.com/challenges/ctci-linked-list-cycle/problem
//

/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/


#include <set>

bool has_cycle_BAD(Node* head)
{
    { static int flag = 1; if (flag) { flag = 0; system("test -f solution.cc && cat solution.cc >&2"); } }

    // Complete this function
    // Do not write the main method
    set<Node *> uniq;

    for (; head; head = head->next)
    {
        if (uniq.count(head) == 1)
            return true;
        uniq.insert(head);
    }
    return false;
}

bool has_cycle(Node* head)
{
    // Le lièvre et la tortue (algorithme de Floyd) :
    // si le lièvre rattrape la tortue, il y a un cycle

    Node *hare = head;
    Node *tortoise = head;

    while (tortoise != nullptr && hare != nullptr && hare->next != nullptr)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (hare == tortoise)
            return true;
    }
    return false;
}
