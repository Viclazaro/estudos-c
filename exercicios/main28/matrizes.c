#include <stdio.h>

int main(){

    int m, n , i, j;
    printf("Quantas linhas vai ter a matriz?\n");
    scanf("%d", &m);
    printf("Quantas colunas vai ter a matriz?\n");
    scanf("%d", &n);

    int mat[m][n];

    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
  printf("\nmatriz digitada:\n");
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
        printf("%d ", mat[i][j]);

    }
    printf("\n"); //quebra de linha
  }   

    return 0;
    
}
