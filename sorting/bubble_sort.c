/* Bubble Sort
 *
 * worst_case: n^2
 * average_case: n^2
 * best_case: n
 */

#include <stdbool.h>

void bubble_sort(int* arr, int size)
{
    bool swapped;

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;

        for (int j = 0; j < size - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
