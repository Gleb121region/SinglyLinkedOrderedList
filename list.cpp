//
// Created by Gleb on 27.02.2021.
//

#include "list.hpp"
#include "list.hpp"

using namespace std;

//1) Создать «пустой» словарь
SinglyLinkedList::SinglyLinkedList() :
        head_(nullptr) {
}

SinglyLinkedList::~SinglyLinkedList() {
    clear();
}

void SinglyLinkedList::clear() {
// ПРЯМ ОСОБОЖДЕНИЕ ..
//    Node *temp = head_;
//    while (temp != NULL) {
//        temp = temp->next_;
//        free(head_);
//        head_ = temp;
//    }
    Node *current = head_;
    while (current) {
        Node *del = current;
        current = current->next_;
        delete del;
    }
}


//2) Добавить запись в словарь, обеспечивая лексикографическую упорядоченность.
bool SinglyLinkedList::insert(int key) {
    if (head_ != nullptr) {
        if (key < head_->key_) {
            auto node = new Node(key, head_);
            head_ = node;
            return true;
        }
        auto current = head_;
        while (current != nullptr) {
            if (current->key_ == key) {
                return false;
            } else {
                if (key <= current->key_) {}
                else {
                    if (current->next_ == nullptr) {
                        auto node = new Node(key);
                        current->next_ = node;
                        return true;
                    } else {
                        if (key < current->next_->key_) {
                            auto node = new Node(key, current->next_);
                            current->next_ = node;
                            return true;
                        } else {
                        }
                    }
                }
                current = current->next_;
            }
        }
        return false;
    } else {
        auto node = new Node(key);
        head_ = node;
        return true;
    }
}

std::ostream &operator<<(std::ostream &out, const SinglyLinkedList &list) {
    auto current = list.head_;
    while (current) {
        out << current->key_ << " ";
        current = current->next_;
    }
    std::cout << "\n";
    return out;
}

//3) Найти слово в словаре.
bool SinglyLinkedList::find(int date) {
    auto current = head_;
    bool foundIt = false;
    while (current) {
        if (current->key_ != date) {
            current = current->next_;
        } else {
            foundIt = true;
            break;
        }
    }
    return foundIt;
}


//4) Удалить слово из словаря.
//https://www.geeksforgeeks.org/delete-occurrences-given-key-linked-list/
void SinglyLinkedList::deleteDataInTheList(int date) {
    Node *tmp = head_;
    while (head_->key_ == date) {
        head_ = head_->next_;
    }
    while (tmp->next_ != NULL) {
        if (tmp->next_->key_ == date) {
            tmp->next_ = tmp->next_->next_;
        } else {
            tmp = tmp->next_;
        }
    }
}

// Не проверял РАБОТАЕТ ЛИ
SinglyLinkedList::Node *SinglyLinkedList::find(SinglyLinkedList::Node *dateNode) {
    auto current = head_;
    Node *returnNode = NULL;
    while (current) {
        if (current->next_ != dateNode) {
            current = current->next_;
        } else {
            returnNode = current;
            return returnNode;
        }
    }
    return nullptr;
}

SinglyLinkedList SinglyLinkedList::unification(SinglyLinkedList &list) {
    SinglyLinkedList z;
    auto current = head_;
    auto secondCurrent = list.head_;
    while (current) {
        while (secondCurrent) {
            if (secondCurrent->key_ == current->key_) {
                z.insert(current->key_);
            }
            secondCurrent = secondCurrent->next_;
        }
        current = current->next_;
        secondCurrent = list.head_;
    }
    return z;
}

//Чуть чуть еще надо подумать
SinglyLinkedList SinglyLinkedList::all(SinglyLinkedList &list) {

    SinglyLinkedList z;

    auto current = head_;
    auto secondCurrent = list.head_;

    while (current) {
        while (secondCurrent) {
            // Подумать
            z.insert(current->key_);
            z.insert(secondCurrent->key_);
            secondCurrent = secondCurrent->next_;
        }
        current = current->next_;
        secondCurrent = list.head_;
    }
    return z;
}

auto SinglyLinkedList::counter() {
    Node *node = head_;
    auto size = 0;
    while (node) {
        node = node->next_;
        size++;
    }
    return size;
}

SinglyLinkedList SinglyLinkedList::uniquely(SinglyLinkedList &list) {
    SinglyLinkedList singlyLinkedList = this->all(list);
    auto current = head_;
    auto secondCurrent = list.head_;

    while (current) {
        while (secondCurrent) {
            if (current->key_ == secondCurrent->key_) {
                singlyLinkedList.deleteDataInTheList(current->key_);
            }
            secondCurrent = secondCurrent->next_;
        }
        current = current->next_;
        secondCurrent = list.head_;
    }
    return singlyLinkedList;
}

SinglyLinkedList SinglyLinkedList::all(SinglyLinkedList &x, SinglyLinkedList &y) {
    SinglyLinkedList z;

    auto current = x.head_;
    auto secondCurrent = y.head_;

    while (current) {
        while (secondCurrent) {

            z.insert(current->key_);
            z.insert(secondCurrent->key_);

            secondCurrent = secondCurrent->next_;
        }
        current = current->next_;
        secondCurrent = y.head_;
    }

//    y.clear();
    return z;
}

SinglyLinkedList SinglyLinkedList::Subtraction_of_sets(SinglyLinkedList &list) {
    SinglyLinkedList singlyLinkedList;

    Node *current = head_;
    Node *head = head_;
    Node *secondCurrent = list.head_;
    while (current) {
        singlyLinkedList.insert(current->key_);
        current = current->next_;
    }
    while (head) {
        while (secondCurrent) {

            if (head->key_ == secondCurrent->key_) {
                singlyLinkedList.deleteDataInTheList(head->key_);
            }

            secondCurrent = secondCurrent->next_;
        }
        head = head->next_;
        secondCurrent = list.head_;
    }
    return singlyLinkedList;
}



