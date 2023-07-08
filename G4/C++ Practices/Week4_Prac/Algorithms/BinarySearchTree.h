/***********************************************************************
 * Purpose: this file include binary search tree class(BST)
 * Perperties: data(int), right(BST*), left(BST*)
 * Behaviors: Inorder, insert, search
**********************************************************************/
#ifndef BINARYSEARHTREE_H_
#define BINARYSEARHTREE_H_

#include <iostream>
using namespace std;

class BST{
    public:
        int data;
        BST *right, *left;
        BST();
        BST(int value);
        /***********************************************************
         * Function_Name: insert
         * Purpose: used to organize the binary tree and put every new element in its position
         * Parameter: root(BST*), value(int)
         * Return: BST*
        *************************************************************/
        BST* insert(BST* root, int value);
        /**************************************************************
         * Function_Name: search
         * Purpose: used to find the value node
         * Parameters: root(BST*),value(int)
         * Return: BST*
        ***************************************************************/
        BST* search(BST* root, int value);
    
        /**************************************************************
         * Function_Name: inorder
         * Purpose: used to display binary tree in its order
         * Parameter: root(BST*)
         * Return: void
        ***************************************************************/
        void inorder(BST* root);
};

#endif