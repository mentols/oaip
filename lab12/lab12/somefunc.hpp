#ifndef somefunc_hpp
#define somefunc_hpp
#include <stdio.h>
#include <cmath>
#endif

double pro(double **arr, int m, int n)
{
    double proizv = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - i - 1)
            {
                proizv *= arr[i][j];
            }
        }
    }
    return proizv;
}

double sum(double **arr, int m, int n)
{
    double sum = 0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == n - i - 1)
            {
                continue;
            }
            else
            {
                sum += arr[i][j];
            }
        }
    }
    
    return sum;
}

double arrmax(double **arr, int m, int n)
{
    double max = arr[0][0], sum = 0, arifm = 0;
    int count = 0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            else if (max == arr[i][j])
            {
                count++;
            }
            sum += arr[i][j];
        }
    }
    
    if (count > 1)
    {
        arifm = sum / (m*n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = arifm;
            }
        }
    }
    return max;
}

double arifm(double **arr, int m, int n)
{
    double sum = 0, arifm = 0;
    int count = 0;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    
    arifm =  (sum / (m*n)) * (sum / (m*n)) ;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < arifm)
            {
                count++;
            }
        }
    }
    
    return count;
}
