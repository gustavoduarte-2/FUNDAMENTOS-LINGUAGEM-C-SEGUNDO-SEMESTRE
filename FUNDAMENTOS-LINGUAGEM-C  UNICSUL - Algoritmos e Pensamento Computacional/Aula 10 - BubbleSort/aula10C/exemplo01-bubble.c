#include <stdio.h>

void exibirVetor(int vetor[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

void bubbleSort(int vetor[], int tamanho)
{
    int i, j, auxiliar;

    for(i = 0; i < tamanho - 1; i++)
    {
        for(j = 0; j < tamanho - 1 - i; j++)
        {
            if(vetor[j] > vetor[j+1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = auxiliar;
            }
        }
    }
}

int main(void)
{
    int idades[3] = {21, 24, 18};
    int senhas[5] = {35, 12, 28, 7, 19};

    int tamanhoIdades = 3;
    int tamanhoSenhas = 5;

    printf("Idades:\n");
    exibirVetor(idades, tamanhoIdades);

    printf("\nSenhas antes da ordenacao:\n");
    exibirVetor(senhas, tamanhoSenhas);

    bubbleSort(senhas, tamanhoSenhas);

    printf("\nSenhas depois da ordenacao:\n");
    exibirVetor(senhas, tamanhoSenhas);

    return 0;
}