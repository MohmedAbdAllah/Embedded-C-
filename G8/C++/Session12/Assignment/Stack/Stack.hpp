#ifndef STACK_HPP_
#define STACK_HPP_

#include <iostream>
#include <memory>


template<class N> class Node{
    public:
        N data;
        std::shared_ptr<Node<N>> before = nullptr;
        
};

template<class T> class Stack{
    private:
        std::shared_ptr<Node<T>> m_Top;
        uint32_t nElement;
        
    public:
        Stack(){
            m_Top = nullptr;
            nElement = 0;
        }
        void push(const T& value){
            std::shared_ptr<Node<T>> new_node = std::make_shared<Node<T>>();
            
            new_node->data = value;
            new_node->before = nullptr;

            if(m_Top == nullptr){
                m_Top = new_node;
                nElement++;
            }else{
                new_node->before = m_Top;
                m_Top = new_node;
                nElement++;
            }
        }

        void pop(){
            m_Top = m_Top->before;
            nElement--;  
        }
        T top() const{
             return m_Top->data;
        }
        bool empty()const{
            if(nElement > 0){
                return false;
            }else{
                return true;
            }
        }
};
        


#endif