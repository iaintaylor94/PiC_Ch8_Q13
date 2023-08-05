// Program to sort an array of intigers into ascending or descending order

#include <stdio.h>
#include <stdbool.h>

// Declare functions
void sort (bool ascending, int[], int n);

int main(void) {

  int i;
  int array[16] = { 34,-5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };

  // Before sort
  printf ("The array before the sort:\n");
  for (i = 0; i < 16; i++) {
    printf ("%d ", array[i]);
  }

  // Sort array (ascending)
  sort (true, array, 16);

  // after sort
  printf ("\n\nThe array after sort\n");
  for (i = 0; i < 16; i++) {
    printf ("%d ", array[i]);
  }

  // Sort array (descending)
  sort (false, array, 16);

  // After sort
  printf ("\n\nThe array after sort\n");
  for (i = 0; i < 16; i++) {
    printf ("%d ", array[i]);
  }

  printf ("\n");
  
  return 0;
}

// Define funtions
void sort (bool ascending, int a[], int n) {
  int i, j, temp;

  // Sort array (ascending)
  if (ascending) {
    for (i = 0; i < n - 1; i++) {
      for (j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
  }

  // Sort array (descending)
  else if (!ascending) {
    // sort ascending
    for (i = 0; i < n - 1; i++) {
      for (j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    // Reverse
    for (int i = 0, j = n - 1; i <= j; i++, j--) {
      int t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }

}