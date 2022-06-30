#include <stdio.h>
#include <math.h>

int main() {
  
  double capital, prazo, juros;
  printf("Informar o valor do capital a ser investido:\n");
  scanf ("%lf", &capital);
  printf("Informar o prazo do investimento em meses:\n");
  scanf ("%lf", &prazo);
  printf("Informar a taxa de juros da aplicação, em porcentagem\n");
  scanf ("%lf", &juros);

  double capital_final;
  juros = juros/100; //tornando o o juros em decimal
  
  double aux;
  aux = 1 + juros;
  aux = (pow(aux, prazo));
  
  capital_final = capital*aux;
  
  printf("Valor da capital final é: R$ %-5.2f\n", capital_final);

  double juros_final;
  juros_final = capital_final - capital;
  printf("Taxa de juros no valor final: R$ %-5.2f\n", juros_final);


  double valor_mensal = capital;
  for (int i=1; i <= prazo; i++){
    aux = valor_mensal*juros;
    valor_mensal = valor_mensal+aux;
    printf("Mês %d: R$ %-5.2f\n", i, valor_mensal);
  }
  
  return 0;
}
