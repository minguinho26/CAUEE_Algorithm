////
////  algorithm_study.c
////  Algorithm_study
////
////  Created by 김민규 on 2022/12/10.
////
//
//#include <math.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//int A[8] = {40, 10, 50, 90, 20, 80, 30, 60};
//int n = 8;
//
//void BubbleSort()
//{
//    //n번 째 반복에서 n번 째로 큰 수를 뒤에서 n번 째 자리에 고정
//    for (int pass = 1; pass <= n - 1; pass++)
//    {
//        for(int i = 1; i<= n-pass; i++)
//        {
//            if (A[i-1] > A[i])
//            {
//                int temp = A[i];
//                A[i] = A[i-1];
//                A[i-1] = temp;
//            }
//        }
//    }
//    
//    for(int i = 0; i< n; i++) printf("%d ", A[i]);
//    printf("\n");
//}
//
//void SelectionSort()
//{
//    //n번 째 반복에서 n번 째로 작은 숫자를 앞에서 n번 째 자리에 고정
//    for(int i = 0; i<= n-2; i++)
//    {
//        int min = i;
//        for(int j = i+1; j<= n-1; j++)
//            if (A[j] < A[min]) min = j;
//        
//        int temp = A[i];
//        A[i] = A[min];
//        A[min] = temp;
//    }
//    
//    for(int i = 0; i< n; i++) printf("%d ", A[i]);
//    printf("\n");
//}
//
//void InsertionSort()
//{
//    for(int i = 1; i<= (n-1); i++)
//    {
//        int CurrentElement = A[i];
//        int j = i - 1;
//        while((j >= 0) && (A[j] > CurrentElement))
//        {
//            A[j + 1] = A[j]; //우측으로 값 이동
//            j--;
//        }
//        A[j +1] = CurrentElement;
//    }
//    
//    for(int i = 0; i< n; i++) printf("%d ", A[i]);
//    printf("\n");
//}
//
//void ShellSort()//특정 gap마다 InsertSort
//{
//
//    int A[15] = {30, 60, 90, 10, 40, 80, 40, 20, 10, 60, 50, 30, 40, 90, 80};
//    int n = 15;
//    
//    int h[3] = {5, 3, 1}; // gap에 따라 시간 복잡도가 달라짐
//    
//    for(int idx = 0; idx < 3; idx++)
//    {
//        for(int i = h[idx]; i< n; i++)
//        {
//            int CurrentElement = A[i];
//            int j = i;
//            while( (j >= h[idx]) && (A[j-h[idx]] > CurrentElement))
//            {
//                A[j] = A[j-h[idx]];
//                j = j-h[idx];
//            }
//            A[j] = CurrentElement; //최종적으로 수정한 index j의 자리에 CurrentElement를 넣음
//        }
//        printf("h = %d : ", h[idx]);
//        for(int i = 0; i< n; i++) printf("%d ", A[i]);
//        printf("\n");
//    }
//    
//    for(int i = 0; i< n; i++) printf("%d ", A[i]);
//    printf("\n");
//}
//
//
//void DownHeap(int* heap, int heap_size)
//{
//    int idx = 1;
//    while(1)
//    {
//        int temp = 0;
//        
//        if (!((heap[idx] > heap[2*idx]) && (heap[idx] > heap[2*idx + 1])))
//        {
//            if((heap_size > 2) && (heap[2*idx] > heap[2*idx + 1]))
//            {
//                temp = heap[2*idx];
//                heap[2*idx] = heap[idx];
//                heap[idx] = temp;
//                    
//                    idx = 2*idx;
//            }
//            else if((heap_size > 2) && (heap[2*idx] <= heap[2*idx + 1]))
//            {
//                temp = heap[2*idx + 1];
//                heap[2*idx + 1] = heap[idx];
//                heap[idx] = temp;
//                    
//                idx = 2*idx + 1;
//            }
//            else
//            {
//                temp = heap[2];
//                heap[2] = heap[1];
//                heap[1] = temp;
//                
//                break;
//            }
//        }
//
//        if(2*idx > heap_size)
//            break;
//    }
//}
//
//void HeapSort()
//{
//    //힙 제작(힙을 만들었다고 가정하자)
//    int Heap_A[10] = {0, 90, 60, 80, 50, 30, 70, 10, 20, 40};
//    int heap_size = 9;
//    
//    for(int i = 1; i<= 8; i++) // Heap_A의 사이즈는 10이 아닌 9다. (맨 앞에 0 제외)
//    {
//        int temp = Heap_A[heap_size];
//        Heap_A[heap_size] = Heap_A[1];
//        Heap_A[1] = temp;
//        
//        heap_size--;
//        DownHeap(Heap_A, heap_size);
//    }
//    for(int i = 0; i< 10; i++) printf("%d ", Heap_A[i]);
//    printf("\n");
//    
//}
//
//int main()
//{
////    BubbleSort();
////    SelectionSort();
////    InsertionSort();
////    ShellSort();
//    HeapSort();
//    return 0;
//}
