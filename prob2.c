int main() {
	int arr[8] = {12, 15, 221, 3, 422, 54, 16, 67};
	int max;
	int i;

	for(i = 0; i < 8; i++) {
		if( arr[i] > max) {
			max = arr[i];
		}
	}

	printf("%d\n", max);
}
