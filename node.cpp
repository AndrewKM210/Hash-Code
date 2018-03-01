#include "node.hpp"
 
// Constructor por parámetro

Node::Node(int dataS, int sx_, int sy_, int fx_, int fy_, int lastesF_)
{
    data_ = dataS;
	sx = sx_;
	sy = sy_;
	fx = fx_;
	fy = fy_;
	lastestF = lastesF_;
    next = NULL;
}
 
// Eliminar todos los Nodos

void Node::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}
 
 

Node::~Node() {}