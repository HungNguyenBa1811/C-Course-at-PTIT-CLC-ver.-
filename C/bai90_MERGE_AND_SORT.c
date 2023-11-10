#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
	int cases;
	scanf("%d", &cases);
	for(int test = 1; test <= cases; test++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		printf("Test %d:\n", test);
		quickSort(a, 0, n - 1);
		quickSort(b, 0, n - 1);
		for(int i = 0, j = n - 1; i < n, j >= 0; i++, j--){
			printf("%d %d ", a[i], b[j]);
		}
		printf("\n");
	}
	return 0;
}
