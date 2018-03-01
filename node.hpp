#ifndef NODE_H
#define NODE_H
 
#include <iostream>
 
using namespace std;
 
//template <class T>
struct Nodo {
	int sx, sy, ex, ey, es, lf;
	Node
}

 
class Node
{
    public:
        Node(int data_, int sx, int sy, int fx, int fy, int lastestF);
        ~Node();
 
        Node *next;
        int data_;
		int sx;
		int sy;
		int fx;
		int fy;
		int lastestF;
		
		
        void delete_all();
        void print();
};
 
#endif // NODE_H