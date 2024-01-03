#include <stdio.h>
void shiftLeft(int source[], int size, int k) {
 for (int z = 0; z < size - k; z++) {
 source[z] = source[z + k];
 }
 for (int z = size - k; z < size; z++) {
 source[z] = 0;
 }
}
int main() {
 int source[] = {10, 20, 30, 40, 50, 60};
 int k = 3;
 int size = sizeof(source) / sizeof(source[0]);
 printf("Original array: [ ");
 for (int z = 0; z < size; z++) {
 printf("%d ", source[z]);
 }
 printf("]\n");
 shiftLeft(source, size, k);
 printf("After shifting left by %d positions: [ ", k);
 for (int z = 0; z < size; z++) {
 printf("%d ", source[z]);
 }
 printf("]\n");
 return 0;
}
