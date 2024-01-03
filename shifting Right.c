#include <stdio.h>
void rotateLeft(int source[], int size, int k) {
 int temp[k];
 for (int z = 0; z < k; z++) {
 temp[z] = source[z];
 }
 for (int z= 0; z< size - k; z++) {
 source[z] = source[z + k];
 }
 for (int z = size - k, j = 0; z < size; z++, j++) {
 source[z] = temp[j];
 }
}
int main() {
 int source[] = {10, 20, 30, 40, 50, 60};
 int k = 3;
 int size = sizeof(source) / sizeof(source[0]);
 printf("Original array: [ ");
 for (int z = 0; z< size; z++) {
 printf("%d ", source[z]);
 }
 printf("]\n");
 rotateLeft(source, size, k);
 printf("After rotating left by %d positions: [ ", k);
 for (int z = 0; z< size; z++) {
 printf("%d ", source[z]);
 }
 printf("]\n");
 return 0;
}

