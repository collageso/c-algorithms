#include <stdlib.h>

/* Merge Sort
 *
 * worst_case: nlogn
 * average_case: nlogn
 * best_case: nlogn
 */

void merge(int* arr, size_t left, size_t mid, size_t right)
{
    int i, j;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = (int*)malloc((n1 + 1) * sizeof(int));
    int* R = (int*)malloc((n2 + 1) * sizeof(int));

    for (i = 0; i < n1; ++i) {
        L[i] = arr[left + i];
    }

    for (j = 0; j < n2; ++j) {
        R[j] = arr[mid + 1 + j];
    }

    L[n1] = __INT_MAX__;
    R[n2] = __INT_MAX__;

    i = 0;
    j = 0;

    for (int k = left; k <= right; k++) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }

    free(L);
    free(R);
}

void merge_sort(int* arr, size_t left, size_t right)
{
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
