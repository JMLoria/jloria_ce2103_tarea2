cmake_minimum_required(VERSION 3.29)
project(tarea2)

set(CMAKE_CXX_STANDARD 20)

add_executable(tarea2 main.cpp
        src/BinaryTree/BinaryTree.cpp
        src/BinaryTree/BinaryTree.h
        src/BinaryTree/TreeNode.cpp
        src/BinaryTree/TreeNode.h
        src/BubbleSort/BubbleSort.cpp
        src/BubbleSort/BubbleSort.h
        src/MergeSort/MergeSort.cpp
        src/MergeSort/MergeSort.h
        src/SelectionSort/SelectionSort.cpp
        src/SelectionSort/SelectionSort.h
        src/LinkedList/LinkedList.cpp
        src/LinkedList/LinkedList.h
        src/LinkedList/Node.cpp
        src/LinkedList/Node.h
        src/Array.cpp
        src/Array.h
        src/Cases.cpp
        src/Cases.h)
