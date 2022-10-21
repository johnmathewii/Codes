#include<stdio.h>

void func1(int arr[],int size, int t)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(t == arr[i])
        {
            count++;
            printf("%d is present at loaction %d\n",t,i);
        }
    }
    if (count == 0)
        printf("The no is not present in the list.");
    else
        printf("%d is present %d times\n",t, count);
}

int Binary_S(int arr[],int index, int size, int target)
{
    int m = (index+size)/2;
    if(index <= size)
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

int func2(int arr[],int index,int size)
{
    int temp;
    if(index < size)
    {
        temp = arr[index];
        arr[index] = arr[size];
        arr[size] = temp;
        index++; size--;
        func2(arr,index,size);
    }
    else
    {
        for (int i = 0; i <= size+index; i++)
        {
            printf("%d ",arr[i]);
        }
    }
}

int main()
{
    //int arr[] = {7,30,50,90,30,70,30,30,30};
    int arr[] = {8,9,10,6,4,7,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    //func1(arr,size,30);
    
    func2(arr,0,size-1);
    // int target = 7;
    // int found = Binary_S(arr,0,size,target);
    // if (found == -1)
    //     printf("The no %d is not in the list.",target);
    // else
    //     printf("The no. %d is in the location %d",target,found);
    // return 0; 

}