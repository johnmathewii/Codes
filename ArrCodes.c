#include<stdio.h>

void func1(int arr[], size_t n) //To find the largest element from the array.
{
    int i, largest;
    largest = arr[0];
    for(i = 1; i < n; ++i)
    { 
        if(largest < arr[i])
            largest = arr[i];
    }
    printf("Largest element = %d\n", largest);
    printf("%d\n", n);
}

void func2(int arr[], int n) //To print the reverse of the  given array.
{
    int arr2[n], j=0;
    for (int i = n-1; i >= 0; i--)        
    {   
        arr2[j]=arr[i];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr2[i]);
    }   
}

void func3(int arr1[], int arr2[], int n1, int n2) //Merging two arrays into one array.
{
    int size = n1 + n2; 
    int arr3[size];
    for (int i = 0; i < n1; i++)
    {
        arr3[i]=arr1[i];
    }
    for (int j = arr3[n1],i = 0; i < n2, j < size; i++, j++)
    {
        arr3[j]=arr2[i];
    }
    for (int k = 0; k < size; k++)
    {
        printf("%d\n",arr3[k]);
    }
}

void func4(int arr[], int size) //To delete duplicate elements from an array. 
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size;)
        {
            if (arr[i]==arr[j])
            {
                for (int k = j; k < size; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
            }
            else
                j++;    
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}

void func5(int arr1[][4], int r , int c )//To find sum of row elements of given matrix.
{
    int arr2[]={0,0,0,0};

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr2[i] += arr1[i][j];
        }  
    }
    for (int i = 0; i < r; i++)
    {
        printf("%d\n",arr2[i]);
    }
  
}
void func6(int arr1[3][4], int arr2[3][4], int r, int c) //Subtraction of two matrices.
{
    int arr3[3][4] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d,\t",arr3[i][j]);
        }
        printf("\n");
    }

}

void func7(int arr[][4], int r, int c) //Lower Traingle of a sqaure matrix
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i<j)
            {
                arr[i][j] = 0;
            }   
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d,\t",arr[i][j]);
        }
        printf("\n");
    }
    
    
}

void func8(char str[])
{
    char substr[50][50] = {0};
    int k=0, i=0, j=0, len, a, max, min, maxIndex = 0, minIndex = 0;

    while (str[k] != '\0')
    {
        j=0;
        while(str[k] != ' ' && str[k] != '\0' && str[k] != '.')   
        {
            substr[i][j] = str[k];
            j++;
            k++;
        }
        substr[i][j] = '\0';
        i++;
        if (str[k] != '\0')
        {
            k++;
        }   
    }
    len = i;
    max = strlen(substr[0]);
    min = strlen(substr[0]);

    for (int m = 0; m < len; m++)
    {
        a = strlen(substr[m]);
        if(a>max)
        {
            max = a;
            maxIndex = m;
        }
        if (a<min)
        {
            min = a;
            minIndex = m;
        }
    }

    printf("Largest Word = %s , Smallest Word = %s \n",substr[maxIndex], substr[minIndex]);
}


int main()
{   
    int arr1[][4] = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    int arr2[][4] = {2,9,3,1,2,5,1,2,2,3,4,1};

    char str[50] = {"Brownie is a dog"};
    //int n1 = sizeof(arr1)/sizeof(arr1[0]); //to find no. of elements in an array.
    //int n2 = sizeof(arr2)/sizeof(arr2[0]); 
    
    
    //func3(arr1,arr2,n1,n2);
    //func4(arr1,n1);
    //func5(arr3,3,4);
    //func6(arr1,arr2,3,4);
    //func7(arr1,4,4);
    func8(str);
    return 0;
}
