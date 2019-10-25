#include <stdlib.h>

void proc1(int * arr, int x, int y) {
	int offset = 7;
	int baseIndex = 0;
	for(int i = 0; i < 100; i++) {
		
		do {
			baseIndex += offset;

			while(arr[baseIndex] == 0) {
				baseIndex++;
			}

			arr[baseIndex] = 0;
		} while(baseIndex < 100);

		baseIndex = baseIndex - 100;
		arr[baseIndex] = 0;
		offset++;
	}
}

int main() {
	int x = 7;
	int y = 100;
	int array[100];

	for(int i = 0; i < 100; i++) {
		array[i] = i;
	}
	proc1(array, x, y);

}
	
		
