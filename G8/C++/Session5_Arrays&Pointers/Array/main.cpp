#include <iostream>
#include <array>

void fillArray(float array[], int numberOfElments);
void fillArray(std::array<float,4>* myArr);

int main(){
    //C language array
    int arr[8] = {1,2,3,4,5,6,7,8};
    //index : 0,1,2,3,4,5,6,7
    std::cout << "first element in arr: " << arr[0] << "\n";
    std::cout << "last element in arr: " << arr[7] << "\n";
    std::cout<<"--------------------------------------------------------------------------\n";
    //stl array
    std::array<int, 8> stlArr {1,2,3,4,5,6,7,8};
    std::cout << "first element in arr: " << stlArr.front() << "\n";
    std::cout << "last element in arr: " << stlArr.back() << "\n";
    //secure access using "at" array feature
    //std::cout << "display element out of range: " << arrCpp.at(9) << "\n";
    std::cout<<"--------------------------------------------------------------------------\n";
    // size of array
    //size of array in c language
    std::cout << "size of arr: " <<sizeof(arr)/sizeof(int) << "\n";
    //szie of array using array library in Cpp "stl array class"
    std::cout << "size of arr: " << stlArr.size() << "\n";
    std::cout<<"--------------------------------------------------------------------------\n";
    //C matrix "2d array"
    int matrixC[3][3] {{1,2,3},{4,5,6},{7,8,9}};
    //Cpp matrix "2d" using array class "stl array"
    //number of row is 2 and number of row is 3
    //https://stackoverflow.com/questions/17759757/multidimensional-stdarray
    std::array<std::array<int,3>,2> stlMatrix {{{1,2,3},{4,5,6}}};
    std::cout << "element in matrixCpp[2][3]: " << stlMatrix.at(1).at(2) << "\n";

    //--------------------------------------------------------------------------------------
    //pass array to function
    float arrC[4];
    fillArray(arrC,4);

    std::array<float,4> arrCpp;
    fillArray(&arrCpp);


    return EXIT_SUCCESS;
}

void fillArray(float array[], int numberOfElments){
    for(auto i = 0; i < numberOfElments; ++i){
        array[i] = i;
        printf_s("array[%d] = %d",i,i);
    }
}
void fillArray(std::array<float,4>* myArr){
    for(auto i = 0; i < myArr->size(); ++i){
        myArr->at(i) = i;
        printf_s("array[%d] = %d",i,i);
    }
}

