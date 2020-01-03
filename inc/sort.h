#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <algorithm>
#include <vector>
namespace NEEPAlgorithm {
    namespace SortAlgorithm {
        // 插入排序 ： 直接插入排序 折半插入排序 希尔排序  
        void insert_sort(); // 插入排序 

        // 交换排序 
        void bubble_sort(); // 冒泡排序 
        void quick_sort();  // 快速排序

        // 选择排序
        void head_sort();   // 堆排序 

        void bucket_sort(); // 桶排序

        void merge_sort();  // 归并排序 
        void radix_sort();  // 基数排序 
    }
}

#endif
