#include "sort.h"
using namespace std;

int main()
{
    cout << "排序算法实现" << endl;
    NEEPAlgorithm::SortAlgorithm::bubble_sort();
    NEEPAlgorithm::SortAlgorithm::quick_sort();
    return EXIT_SUCCESS;
}



void NEEPAlgorithm::SortAlgorithm::insert_sort()
{
    cout << "插入排序" << endl;
}
void NEEPAlgorithm::SortAlgorithm::bubble_sort()
{
    cout << "冒泡排序" << endl;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "初始状态为: ";
    for(int i=0; i<sizeof(a); i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
    bool flag = true;       // true 表示正在排序过程中  
    for(int i=0; i<sizeof(a)&&flag; i++) {
        for(int j=1; j<sizeof(a); j++) {
            if (a[j] < a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            else {  // 排序完成 
                flag = false;   
            }
        }
        cout << "第" << i+1 << "遍排序" << endl;
        cout << "结果为： ";
        for(int k=0; k<sizeof(a); k++) {
            cout << a[k] << "\t";
        }
        cout << endl;
    }
}

void NEEPAlgorithm::SortAlgorithm::quick_sort()
{
    cout << "快速排序" << endl;

}
void NEEPAlgorithm::SortAlgorithm::head_sort()
{
    cout << "堆排序" << endl;
}

void NEEPAlgorithm::SortAlgorithm::bucket_sort()
{
    // 最快最简单 
    cout << "桶排序" << endl;
}

void NEEPAlgorithm::SortAlgorithm::merge_sort()
{
    cout << "归并排序" << endl;
}

void NEEPAlgorithm::SortAlgorithm::radix_sort()
{
    cout << "基数排序" << endl;
}
