#include <stdio.h>
void removeAll(int source[], int size, int element) {
 int newIndex = 0;
 for (int z = 0; z < size; z++) {
 if (source[z] != element) {
 source[newIndex] = source[z];
 newIndex++;
 }
 }
 for (int z = newIndex; z < size; z++) {
 source[z] = 0;
 }
}
int main() {
 int source[] = {10, 2, 30, 2, 50, 2, 2, 0, 0};
 int size = 9;
 int element = 2;
 printf("Original array: [ ");
 for (int z = 0; z < size; z++) {
 printf("%d ", source[z]);
 }
 printf("]\n");
 removeAll(source, size, element);
 printf("After removing all occurrences of %d: [ ", element);
 for (int z = 0; z< size; z++) {
 printf("%d ", source[z]);
 }
 printf("]\n");
 return 0;
}
