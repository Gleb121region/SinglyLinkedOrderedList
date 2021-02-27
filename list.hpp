//
// Created by Gleb on 27.02.2021.
//

#ifndef GG_LIST_HPP
#define GG_LIST_HPP


#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

class SinglyLinkedList {
    struct Node {
        Node(int key, Node *next = nullptr) :
                key_(key),
                next_(next) {
        }

        int key_;
        Node *next_;

    };

public:
    SinglyLinkedList();

    ~SinglyLinkedList() ;

    bool insert(int key);

    void clear();

    friend std::ostream &operator<<(std::ostream &out, const SinglyLinkedList &list);

    bool find(int date);

    void deleteDataInTheList(int date);

    SinglyLinkedList unification(SinglyLinkedList &list);

    SinglyLinkedList all(SinglyLinkedList &list);

    SinglyLinkedList all(SinglyLinkedList &x, SinglyLinkedList &y);

    SinglyLinkedList uniquely(SinglyLinkedList &list);

    SinglyLinkedList Subtraction_of_sets(SinglyLinkedList &list);

private:
    Node *head_;

    Node *find(Node *dateNode);

    auto counter();

};

#endif

#endif //GG_LIST_HPP
