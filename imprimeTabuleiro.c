#include <stdio.h>

int main()
{
  int L,M,contaColuna,contaLinha;

  scanf("%d%d",&L,&M);

  for(contaLinha=0;contaLinha<L;contaLinha++)
  {
    for (contaColuna=0;contaColuna<M;contaColuna++)
    {
      printf("[%03d,%03d]",contaLinha,contaColuna);  
    }
    printf("\n");
  }
    


  
    return 0; 
}