
#ifndef _LINKEDLIST_HPP
#define _LINKEDLIST_HPP

#include <iostream>
#include <memory>

template<class N> class Node{
    public:
        N data;
        std::shared_ptr<Node<N>> next = nullptr;
        
};

template<class T> class LinkedList{
    private:
        std::shared_ptr<Node<T>> head;
        
    public:
        LinkedList(){
            head = nullptr;
        }
        void frontInsert(const T& value){
            std::shared_ptr<Node<T>> new_node = std::make_shared<Node<T>>();
            new_node->data = value;
            new_node->next = nullptr;

            if(head == nullptr){
                head = new_node;
            }else{
                new_node->next = head;
                head = new_node;
            }
        }
        void backInsert(const T& value){
            std::shared_ptr<Node<T>> new_node = std::make_shared<Node<T>>();

            new_node->data = value;
            new_node->next = nullptr;
            if(head == nullptr){
                head = new_node;
            }else{
                std::shared_ptr<Node<T>> temp = head;

                while(temp->next != nullptr ){
                    temp = temp->next;
                }
                temp->next = new_node;
            }
        }
        void remove(const T& value){
            if(head == nullptr){
                return;
            }
            if(head->next != nullptr){
                std::shared_ptr<Node<T>> temp = head;

                while(temp->next != nullptr ){
                    if(value == (temp->next)->data){
                        temp->next = (temp->next)->next;
                    }else{
                        temp = temp->next;
                    }
                }
            }else{
                head = nullptr;
            } 
        }
        void display(){
            if(head == nullptr){
                return;
            }
            std::shared_ptr<Node<T>> temp = head;
            std::cout << "list elements: ";
            while(temp != nullptr){
                std::cout << temp->data << " "; 
                temp = temp->next;
            }
            std::cout << "\n";
        }
};

#endif