#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node *list = NULL;
    
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        node *temp = new node();
        temp->data = num;
        temp->next = list;
        list = temp;
    }

    for (node *itr = list; itr != NULL; itr = itr->next) {
        cout << itr->data << " ";
    }

}