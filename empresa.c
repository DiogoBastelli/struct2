#include <stdio.h>
#include <string.h>

typedef struct{
char nome [100];
int idade;
}Funcionario;

typedef struct{
    char nome[100];
    char endereco[100];
    Funcionario funcionario[10];
}Empresa;

int main(){
    int quantidade , i ;
    Empresa empresa;

    printf("Insira o nome da empresa: \n");
    fgets(empresa.nome, sizeof(empresa.nome), stdin);
    empresa.nome[strcspn(empresa.nome, "\n")] = '\0';
    getchar(); 

    
    printf("Insira o endereco da empresa: \n");
    fgets(empresa.endereco, 100, stdin);
    empresa.endereco[strcspn(empresa.endereco, "\n")] = '\0';

    do {
        printf("Insira a quantidade de funcionarios , limite de 10 funcionarios: \n");
        scanf("%d" , &quantidade);
        getchar();

        if(quantidade > 10){
            printf("Voce ultrapassou o limite de Funcionarios!!\n");
        }
    }while (quantidade > 10);

    for(i = 0 ; i < quantidade ; i++){
       printf("Nome do funcionario %d: " , i+1);
       scanf("%99s" , empresa.funcionario[i].nome);
       getchar(); 

       printf("idade do funcionario %d: " , i+1);
       scanf("%d" , &empresa.funcionario[i].idade);
       getchar(); 
    }

    printf("\nA empresa %s se encontra na %s e possui %d funcionarios, sao eles:\n", empresa.nome , empresa.endereco , quantidade);

    for(i = 0 ; i < quantidade ; i++){
        printf("%s, %d anos\n", empresa.funcionario[i].nome, empresa.funcionario[i].idade);
    }
}