#ifndef LISTA_H
#define LISTA_H

#include <iostream>
 
using namespace std;
 
template <class T>
 
class Node
{
    public:
        Node();
        Node(T);
        ~Node();
 
        Node *next;
        T data;
 
        void delete_all();
        void print();
};

#endif // LISTA_H
