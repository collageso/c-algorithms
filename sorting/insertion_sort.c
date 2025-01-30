/* Insertion Sort
 *
 * worst_case: n^2
 * average_case: n^2
 * best_case: n
 */

void insertion_sort(int* arr, int size)
{
    for (int i = 1; i < size; ++i) {
        int insertion_target = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > insertion_target) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = insertion_target;
    }
}
