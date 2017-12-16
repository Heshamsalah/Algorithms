#include <iostream>

using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int v) : val(v), next(NULL) {}
};

class ListMan {
public:
    void addNewNode(int v, ListNode** headRef);
    void printList(ListNode** headRef);
};

void ListMan::addNewNode(int v, ListNode** headRef) {
    ListNode *temp;
    temp = new ListNode(v);
    temp->next = *headRef;
    *headRef = temp;
}

void ListMan::printList(ListNode** headRef) {
    ListNode *currentNode;
    currentNode = *headRef;

    cout << "Printing Nodes Data: " << endl;
    cout << "============================" << endl;
    cout << "[";
    while(currentNode != NULL) {
        cout << currentNode->val;
        currentNode = currentNode->next;
        if(currentNode != NULL) cout << ",";
    }
    cout << "]" << endl;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum, a, b, carry = 0;
        ListNode *result, *currentNode, *m, *n;
        m = l1;
        n = l2;
        result = new ListNode(0);
        currentNode = result;
        cout << "Before While Loop" << endl;
        while(m != NULL || n != NULL) {
            a = (m != NULL) ? m->val : 0;
            b = (n != NULL) ? n->val : 0;
            cout << "a = " << a << " - " << "b = " << b << endl;
            sum = a + b + carry;
            carry = sum / 10;
            currentNode->next = new ListNode(sum % 10);
            currentNode = currentNode->next;
            if(m != NULL) m = m->next;
            if(n != NULL) n = n->next;
        }
        if(carry > 0) {
            cout << "Carry > 0: " << carry << endl;
            currentNode->next = new ListNode(carry);
        }
        return result->next;
    }
};

int main() {
    cout << "LINKED LIST APP" << endl;
    ListNode *l1, *l2, *res;
    ListMan list;
    Solution soln;

    l1 = NULL;
    l2 = NULL;
    res = NULL;

    list.addNewNode(2, &l1);
    list.addNewNode(4, &l1);
    list.addNewNode(3, &l1);

    list.addNewNode(5, &l2);
    list.addNewNode(6, &l2);
    list.addNewNode(4, &l2);


    // for(int i = 0; i < 5; i++) {
    //     list.addNewNode(i, &head);
    // }

    list.printList(&l1);
    list.printList(&l2);
    res = soln.addTwoNumbers(l1, l2);
    list.printList(&res);

    return 0;
}
