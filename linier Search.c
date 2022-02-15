#include <stdio.h>
int main()

{
int array[100];
int cari, i, n;


  printf("Masukan data yang mau disimpan : ");
  scanf("%d", &n);

  printf("Masukan %d Data \n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Masukan data yang dicari : ");
  scanf("%d", &cari);

  for (i = 0; i < n; i++)
  {
    if (array[i] == cari)
    {
      printf("\n\n%d ada pada baris ke %d.\n", cari, i+1);
      break;
    }
  }
  if (i == n)
    printf("\n\n%d tidak dapat ditemukan.\n", cari);
    return 0;
}


