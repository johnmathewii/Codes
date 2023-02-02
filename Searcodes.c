#include <stdio.h>

void func1(int arr[], int size, int t) 
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (t == arr[i])
        {
            count++;
            printf("%d is present at loaction %d\n", t, i);
        }
    }
    if (count == 0)
        printf("The no is not present in the list.");
    else
        printf("%d is present %d times\n", t, count);
}

int Binary_S(int arr[], int index, int size, int target) //Binary Search Function
{
    int m = (index + size) / 2;
    if (index <= size)
    {
        if (target > arr[m])
        {
            index = m + 1;
            Binary_S(arr, index, size, target);
        }
        else if (target < arr[m])
        {
            size = m - 1;
            Binary_S(arr, index, size, target);
        }
        else if (target == arr[m])
            return m;
    }
    else
        return -1;
}

int func2(int arr[], int index, int size)
{
    int temp;
    if (index < size)
    {
        temp = arr[index];
        arr[index] = arr[size];
        arr[size] = temp;
        index++;
        size--;
        func2(arr, index, size);
    }
    else
    {
        for (int i = 0; i <= size + index; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}

void func3(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    int size = n1 + n2;
    int arr3[size];

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr3[i]);
    }
}

int main()
{
    int arr1[] = {20, 30, 40, 60, 70, 80, 90};
    int arr2[] = {10, 50, 100};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    func3(arr1, arr2, size1, size2);

    // func1(arr,size,30);

    // func2(arr,0,size-1);
    //  int target = 7;
    //  int found = Binary_S(arr,0,size,target);
    //  if (found == -1)
    //      printf("The no %d is not in the list.",target);
    //  else
    //      printf("The no. %d is in the location %d",target,found);
    //  return 0;
}