/* Quick Sort
 *
 * worst_case: n^2
 * average_case: nlogn
 * best_case: nlogn
 */

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int* arr, int left, int right)
{
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; ++j) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[right]);
    return i;
}

void quick_sort(int* arr, int left, int right)
{
    if (left >= right) {
        return;
    }

    int pivot_index = partition(arr, left, right);

    quick_sort(arr, left, pivot_index - 1);
    quick_sort(arr, pivot_index + 1, right);
}
