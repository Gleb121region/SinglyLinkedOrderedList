
#include <iostream>

#include "list.hpp"


int main() {
//    1) Добавить в словарь слова, встречающиеся во втором словаре. Слова,
//    встречающиеся в двух словарях, включать в итоговый словарь один
//    раз. Второй словарь после переноса слов сделать пустым. Объединение
//    множеств.

    std::cout << "SinglyLinkedList" << '\n';

    SinglyLinkedList singlyLinkedList;
    std::cout << "First:\t";

    bool insert = singlyLinkedList.insert(2);


    insert = singlyLinkedList.insert(1);
    insert = singlyLinkedList.insert(0);
    insert = singlyLinkedList.insert(8);
    insert = singlyLinkedList.insert(11);

    std::cout << singlyLinkedList;

//
//
//

    SinglyLinkedList linkedList;
    std::cout << "Second:\t";

    bool isInsert = linkedList.insert(1);
    isInsert = linkedList.insert(0);
    isInsert = linkedList.insert(2);
    isInsert = linkedList.insert(5);
    isInsert = linkedList.insert(11);

    std::cout << linkedList << '\n';




//    Добавить в словарь слова, встречающиеся во втором словаре. Слова,
//            встречающиеся в двух словарях, включать в итоговый словарь один
//    раз. Второй словарь после переноса слов сделать пустым. Объединение
//    множеств.

// если прям нужно объдинить
    SinglyLinkedList list;
    std::cout << "1)\t" << list.all(singlyLinkedList, linkedList) << '\n';

// Более простой вариант
    std::cout << "1.1)\t" << singlyLinkedList.all(linkedList) << '\n';

//    Удалить из словаря все слова, встречающиеся в другом словаре.
//            Вычитание множеств


    std::cout << "2)\t" << singlyLinkedList.Subtraction_of_sets(linkedList) << '\n';

    std::cout << "unique items in the list\t" << singlyLinkedList.uniquely(linkedList);
//Сформировать словарь, содержащий слова, присутствующие
//одновременно в двух других. Пересечение множеств.

    std::cout << "3)\t" << singlyLinkedList.unification(linkedList) << '\n';


//    Вывести все записи словаря
    std::cout << "4)\t" << singlyLinkedList;

    return 0;
}

