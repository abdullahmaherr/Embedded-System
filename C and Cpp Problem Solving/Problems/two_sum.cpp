/*************************************************************************************************************
 * Project : Problem Solving
 *
 * File Name : two_sum.cpp
 *
 * Author: Abdullah Maher
 *
 * Description : Write a Cpp Function that find sum of two number equal to certin value. (To be noted I'm new to C++ and used to work mainly with C Please bear with me)
 *
 * Created on: Feb 22, 2023
 *************************************************************************************************************/
#include <iostream>

#define SIZE 100

int main(void)
{
    int target, size, i, sum;
    int arr[SIZE];
    int* ptr1 = NULL; 
    int* ptr2 = NULL;

    std::cout << "Enter the target value: ";
    std::cin >> target;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array:\n";
    for (i = 0; i < size; i++)
    {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    ptr1 = arr;
    ptr2 = arr + size -1;

    while(ptr1 < ptr2)
    {
        sum = *ptr1 + *ptr2;
        
        if(sum == target)
        {
            std::cout << "First Num == " << *ptr1 << "\n" << std::endl;
            std::cout << "Second Num == " << *ptr2 << std::endl;
            break;

        }else if(sum > target)
        {
            ptr2--;
        }else
        {
            ptr1++;
        }
    }

    return 0;
}
