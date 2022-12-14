//
//  main.cpp
//  linkedList
//
//  Created by Pranav Saravanan on 12/14/22.
//

#include <iostream>
template<typename T>
class Node {
public:
    Node(T iData) : m_iData(iData), mp_nodeNext(nullptr) { }
    ~Node() { }
public:
    // These are declared public so that they can be accessed
    // without using member accessor functions.
    T m_iData;
    Node<T>* mp_nodeNext;

public:
    /// Display a list of Node objects to standard output given
    /// the head of the list of Nodes. (This is a static
    /// member function; it behaves differently from ordinary
    /// member functions. You cannot use this->m_iData within
    /// this fuction, for example.)
    /// @param [in] p_nodeHead pointer to Node object that is the
    /// head node of a list of Node objects.
    /// @return void
    static void displayList(Node<T>* p_nodeHead)
    {
        Node<T>* p_node = p_nodeHead;
        while (p_node != nullptr){
            std::cout << p_node->m_iData << std::endl;
            p_node = p_node->mp_nodeNext;
        }
        return;
    }
};

int main()
{
    {
        Node<int>* p_node1 = new Node<int>(10);
        Node<int>* p_node2 = new Node<int>(20);
        Node<int>* p_node3 = new Node<int>(30);
         
        Node<int>* p_nodeHead = p_node1;
        p_node1->mp_nodeNext = p_node2;
        p_node2->mp_nodeNext = p_node3;
        p_node3->mp_nodeNext = nullptr;
        
        Node<int>::displayList(p_nodeHead);
    }
    {
        Node<double>* p_node1 = new Node<double>(10.1);
        Node<double>* p_node2 = new Node<double>(20.2);
        Node<double>* p_node3 = new Node<double>(30.3);
         
        Node<double>* p_nodeHead = p_node1;
        p_node1->mp_nodeNext = p_node2;
        p_node2->mp_nodeNext = p_node3;
        p_node3->mp_nodeNext = nullptr;
        
        Node<double>::displayList(p_nodeHead);
    }
    return 0;
}
