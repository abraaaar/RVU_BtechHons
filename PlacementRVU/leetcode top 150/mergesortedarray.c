// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
//      // int temp, t_indicator = 0;
//     // while (nums1[nums1Size-1] != 0)
//     // {
//     //     int ele = (nums1[i] <= nums2[j])?nums1[i]:nums2[j];
//     //     (ele == nums1[i])?i++:j++;
//     //     nums1[i] = ele;
//     //     if (t_indicator == 1)
//     //     {
//     //         if (temp > nums1[i])
//     //         {
//     //             nums1[i] = temp;
//     //         }
//     //         continue;
//     //     }
//     //     if (nums1[i] <= nums2[j])
//     //     {
//     //         i++;
//     //     }
//     //     else
//     //     {
//     //         temp = nums1[i];
//     //         nums1[i] = nums2[j];
//     //         j++;
//     //         t_indicator = 1;
//     //     }
//     // }
    
#include <stdio.h>
int main()
{
    int a1[] = {1, 2, 2, 0, 0, 0};
    int a2[] = {2, 3, 5};
    merge(a1, 6, 3, a2, 3, 3);
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

        int newarr[m + n], i=0, j=0, pointer=0, ele;
        while (pointer < m+n)
        {
            if (nums1[i] == 0){
                ele = nums2[j];
                j++;
            }
            else if (nums1[i] <= nums2[j])
            {
                ele = nums1[i];
                i++;
            }
            else
            {
                ele = nums2[j];
                j++;
            }
            newarr[pointer] = ele;
            pointer++;
        }
    
        for (int i = 0; i < nums1Size; i++)
        {
            nums1[i] = newarr[i];
        }
    }
    
}