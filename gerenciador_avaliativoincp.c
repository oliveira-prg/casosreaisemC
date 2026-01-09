#include <stdio.h>                                                                            //FALTA TERMINAR O FINAL DO CÓDIGO
#include <stdbool.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[255];
    int idade;
} Aluno;

void clearscreen() {
    printf("\033[2J\033[H");
}

int main() {
    double n1,n2,n3,n4,md;
    int opcao;
    int senha = 2006, senha_inserida;
    char name[255];
    char resp[100];
    Aluno aluno[255];
    printf("-----------Gerenciador avaliativo--------------------/n");
    printf("Por favor insira sua senha:  /n");
        if (senha_inserida != senha) {
            printf("Senha incorreta, tente novamente !/n");
        }else {
            printf("Insira seu nome:  /n");
            scanf("%s", &name);
            printf("Escolha uma das opções abaixo(1-4): /n);
            printf("1 - Cadastrar aluno novo/n");
            printf("2 - Registrar notas/n");
            printf("3 - Alterar informações dos alunos/n");
            printf("4 - Encerrar programa/n");
            scanf("%d", &opcao);
            switch (opcao) {
                case 1:
                    printf("Insira as informações do novo aluno:  /n");
                    scanf("%s", &Aluno);
                    break;
                case 2:
                    printf("Insira as notas:  /n");
                    printf("Av1:  /n");
                    scanf("%lf", &n1);
                    printf("Av2:  /n");
                    scanf("%lf", &n2);
                    printf("Av3: /n");
                    scanf("%lf", &n3);
                    printf("Av4:  /n");
                    scanf("%lf", &n4);
                    printf("Gostaria de verificar o somatório e dar o resultado do mesmo ?(S/N)/n");
                    scanf("%s", &resp);
                        if (resp = "sim") {
                            md = (n1 + n2 + n3 + n4) / 4;
                            printf("Media = %.2lf/n", md);
                            if (md <= 5) {
                                printf("Reprovado/n");
                            }else {md = (n1 + n2 + n3 + n4)/4;
                            printf("%lf/n", md);
                            if (md <= 5) {

                            }

                                printf("Aprovado/n");
                            }
                        }else {
                            break;
                        }
                case 3:
                    printf("Deseja alterar as informações de algum aluno ?(S/n)/n");
                    scanf("%s", &resp);
                    if (resp = "sim") {
                        printf("");
                    }
            }
        }


}v
