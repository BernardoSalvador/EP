#include <stdio.h>
#include <string.h>

int bit_to_int(char binario[32])
{
    long long int decimal = 0;
    
    int length = strlen(binario);
    
    for (int i = 0; i < length; i++)
    {
        if (binario[i] != '0' && binario[i] != '1')
        {
            printf("Entrada inválida. Apenas 0s e 1s são permitidos.\n");
            return 1; //Encerra o programa com erro
        }
        decimal = decimal * 2 + (binario[i] - '0');
    }
    
    printf("\nRepresentação em decimal é: %lli\n", decimal);

    return 0;
}
int main() 
{
    char i[32];
    
    printf("Introduza um número em binário: ");
    scanf("%s", i);
    
    bit_to_int(i);
    return 0;
}

