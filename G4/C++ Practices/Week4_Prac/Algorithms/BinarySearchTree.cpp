#include "BinarySearchTree.h"

        //Constractpr
        BST::BST(){}
        //Parameterized constructor
        BST::BST(int value):data(value),right(nullptr),left(nullptr){}
        /***********************************************************
         * Function_Name: insert
         * Purpose: used to organize the binary tree and put every new element in its position
         * Parameter: root(BST*), value(int)
         * Return: BST*
        *************************************************************/
        BST* BST::insert(BST* root, int value){
            //check if there is not root
            if(!root){
                //insert root
                return new BST(value);
            }
            //check if the new value will be in right or left the root
            if(value > root->data){//if the new value is bigger than the root value ,so it will insert in the root right
                root->right = insert(root->right,value);
            }else{//else, it will be in the root left
                root->left = insert(root->right,value);
            }
            return root;
        }
        /**************************************************************
         * Function_Name: search
         * Purpose: used to find the value node
         * Parameters: root(BST*),value(int)
         * Return: BST*
        ***************************************************************/
       BST* BST::search(BST* root, int value){
        if(root == nullptr || root->data == value) return root;

        if(value > root->data) return search(root->right,value);
        else return search(root->left,value);
       }
       /**************************************************************
        * Function_Name: inorder
        * Purpose: used to display binary tree in its order
        * Parameter: root(BST*)
        * Return: void
       ***************************************************************/
      void BST::inorder(BST* root){
        if(!root) return;
        /****************************************************************************
         * Explaination: 
         * it will check if there is an element in the left or not 
         * if there is left it will continue until there is no left
         *  "so it will be nullptr and it will return" and print the root of this null left
         * then it will check the right node and start again the left journy ,etc.. 
        ****************************************************************************/
        BST::inorder(root->left);
	    cout << root->data << endl;
	    inorder(root->right);
      }


