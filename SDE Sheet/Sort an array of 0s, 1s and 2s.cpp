// Sort an array of 0’s 1’s 2’s without using extra space or sorting algo

/* 1st method :
                 sorting the array  
                  time complexity  O(nlogn)
                  space complexity  O(1)


    2nd method(optimised):
                  counting sort
                  count the number of 0s , 1s , 2s linearly *O(n)  and insert accordingly *O(n)
                  time complexity O(2n)


    3rd method : Dutch national flag problem :  https://users.monash.edu/~lloyd/tildeAlgDS/Sort/Flag/
                              Problem:          https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
                              similar problem:  https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
                 time complexity O(n)
                 space complexity O(1)

}*/


#include<bits/stdc++.h>
using namespace std;

void sortArray(int a[] , int n)
{
     int low = 0 , mid =0  , high = n-1;
     while(mid<=high)
     {
         switch(a[mid])
         {
             case 0: swap(a[mid++] , a[low++]);
                     break;

             case 1: mid++;
                     break;
            
             case 2: swap(a[mid] , a[high--]);
                     break;
         }
     }
}
int main()
{
    int a[] =  {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    sortArray(a , n);
    cout<<"Array after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
