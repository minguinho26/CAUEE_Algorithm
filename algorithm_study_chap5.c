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
//void AllPairsShortest() // DP의 '모든 쌍 최단 경로 문제'
//{
//    int n = 5;
//    int D[n][n];
//    
//    for(int i = 0; i< n; i++)
//    {
//        for(int j = 0; j< n; j++)
//        {
//            if (i == j)
//            {
//                D[i][j] = 0;
//            }
//            else
//            {
//                D[i][j] = 255;
//            }
//        }
//    }
//    
//    //간선 경로 지정
//    D[0][1] = 4; D[0][2] = 2; D[0][3] = 5;
//    D[1][2] = 1; D[1][4] = 4;
//    D[2][0] = 1; D[2][1] = 3; D[2][3] = 1; D[2][4] = 2;
//    D[3][0] = -2; D[3][4] = 2;
//    D[4][1] = -3; D[4][2] = 3; D[4][3] = 1;
//    
//    for(int k = 0; k<n;k++)
//    {
//        printf("k = %d : ", k);
//        for(int i = 0; i< n; i++)
//        {
//            if (k == i)
//                continue;
//            
//            else
//            {
//                for(int j = 0; j< n; j++)
//                {
//                    if ((j == k) || (j == i))
//                        continue;
//                    
//                    else
//                    {
//                        //min 계산
//                        int min = -100;
//                        if ((D[i][k] + D[k][j]) > D[i][j])
//                        {
//                            min = D[i][j];
//                        }
//                        else
//                        {
//                            min = D[i][k] + D[k][j];
//                        }
//                        printf("%3d ", min);
//                        D[i][j] = min;
//                    }
//                }
//            }
//        }
//        printf("\n");
//    }
//    
//    //출력
//    printf("\n\n===============result===============\n");
//    
//    for(int i = 0; i< n; i++)
//    {
//        for(int j = 0; j< n; j++)
//            printf("%2d ", D[i][j]);
//        printf("\n");
//    }
//    printf("===============result===============\n");
//}
//
//void matrix_multiplication()
//{
//    int n = 4;
//    int C[n + 1][n + 1];
//    int d[n + 1];
//    
//    //초기화
//    d[0] = 10; d[1] = 20; d[2] = 5; d[3] = 15; d[4] = 30;
//    
//
//    for(int i = 0; i<=n;i++)
//    {
//        for(int j = 0; j<=n; j++)
//        {
//            if (i == j)
//                C[i][i] = 0;
//            else
//                C[i][j] = -1;
//        }
//    }
//
//    for(int L = 1; L <= (n-1); L++)
//    {
//        for(int i = 1; i<= (n-L); i++) //L이 올라갈 때마다 이 for문의 반복 횟수가 줄어든다
//        {
//            int j = i + L; //X축 index
//            C[i][j] = 99999;
//            
//            for(int k = i; k<= (j - 1); k++)
//            {
//                int temp = C[i][k] + C[k + 1][j] + d[i-1]*d[k]*d[j];
//                if (temp < C[i][j])
//                    C[i][j] = temp;
//            }
//        }
//    }
//    
//    for(int i = 1; i<=n;i++)
//    {
//        for(int j = 1; j<=n; j++)
//            printf("%4d ", C[i][j]);
//        printf("\n");
//    }
//}
//
////세 개의 정수를 입력받아 가장 큰 수를 반환하는 함수
//int Max(int a, int b, int c)
//{
//     if (a > b && a > c)
//          return a;
//     else if (b > a && b > c)
//          return b;
//     else
//          return c;
//}
// 
////세 개의 정수를 입력받아 가장 작은 수를 반환하는 함수
//int Min(int a, int b, int c)
//{
//     if (a < b && a < c)
//          return a;
//     else if (b < a && b < c)
//          return b;
//     else
//          return c;
//}
//
//void EditDistance(char* s, char* t)
//{
//    int m = (int)strlen(s);
//    int n = (int)strlen(t);
//    
//    int E[m + 1][n + 1];
//    
//    for (int i = 0; i<= m; i++) E[i][0] = i;
//    for (int j = 0; j<= n; j++) E[0][j] = j;
//    
//    for (int i = 1; i<= m; i++)
//    {
//        for(int j = 1; j<= n; j++)
//        {
//            int a = 0;
//            if (s[i - 1] != t[j-1])
//                a = 1;
//            else
//                a = 0;
//            E[i][j] = Min(E[i][j-1] + 1, E[i-1][j] + 1, E[i-1][j-1] + a);
//        }
//    }
//    
//    for (int i = 0; i<= m; i++)
//    {
//        for (int j = 0; j<= n; j++)
//            printf("%4d ", E[i][j]);
//        printf("\n");
//    }
//}
//
//void Knaksack(int C)
//{
//    int n = 4;
//    int W[n + 1], V[n + 1];
//    int K[n + 1][C + 1];
//    
//    W[1] = 5; W[2] = 4; W[3] = 6; W[4] = 3;
//    V[1] = 10; V[2] = 40; V[3] = 30; V[4] = 50;
//    
//    for (int i = 0; i <= n; i++) K[i][0] = 0;
//    for (int w = 0; w <= C; w++) K[0][w] = 0;
//    
//    for(int i = 1; i<= n; i++)
//    {
//        for(int w = 1; w<= C; w++)
//        {
//            if (W[i] > w)
//                K[i][w] = K[i-1][w];
//            else
//            {
//                if (K[i-1][w] > K[i-1][w-W[i]] + V[i]) K[i][w] = K[i-1][w]; // w-W[i] : i번 째 물건을 넣어둘 공간을 확보한다는 의미
//                else K[i][w] = K[i-1][w-W[i]] + V[i];
//            }
//        }
//    }
//    
//    for (int i = 1; i<= n; i++)
//    {
//        for (int w = 1; w<= C; w++)
//            printf("%4d ", K[i][w]);
//        printf("\n");
//    }
//}
//void DPCoinChange(int n)
//{
//    int k = 4;
//    int d[k + 1]; d[0] = 0; d[1] = 16; d[2] = 10; d[3] = 5; d[4] = 1;
//    int C[n + 1];
//
//    for (int i = 1; i<= n; i++) C[i] = 9999;
//    C[0] = 0;
//    
//    for (int j = 1; j<=n; j++) // 거스름돈 액수
//    {
//        for (int i = 1; i<= k; i++) //거스름돈 계산에 사용할 동전 구하기
//        {
//            if ((d[i] <= j) && (C[j-d[i]] + 1 < C[j])) C[j] = C[j-d[i]] + 1;
//            //j-d[i] : d[i]이란 동전을 추가할 공간을 확보한다는 의미
//        }
//    }
//    for (int i = 0; i<= n; i++) printf("%2d ", i);
//    printf("\n==============================================================\n");
//    for (int i = 0; i<= n; i++) printf("%2d ", C[i]);
//    printf("\n");
//}
//
//int main()
//{
////    AllPairsShortest();
////    matrix_multiplication();
////    EditDistance("strong", "stone");
////    Knaksack(10);
//    DPCoinChange(20);
//    return 0;
//}
