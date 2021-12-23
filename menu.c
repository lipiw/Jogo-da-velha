char [] nome;

int menu();
void vitoria();
void derrota();
void instrucoes();

int menu(){

int opcao;

    do{
        printf("\n-------- BEM VINDO AO JOGO DA VELHA! --------\n");
        sleep(2);
        printf("\n---- ESTE E O MENU, SELECIONE A OPCAO QUE DESEJA ----\n");
        printf("1- JOGAR");
        printf("2- INSTRUCOES");
        printf("0- SAIR\n");

        if(opcao == 1){
            sleep(2);
            system("cls");

            printf("\nDigite seu nome: ");
            scanf("%f", &nome);

            return 1;
        }else if(opcao == 2){
            instrucoes();
        }
        
    }while(opcao);  
}

void vitoria(){
    printf("\n-------- PARABENS %c, voce venceu!! --------\n", nome);

    sleep(4);
    system("cls");
}

void derrota(){
    printf("\n-------- %c, infelizmente voce perdeu. Tente novamente! --------\n", nome);

    sleep(4);
    system("cls");
}

void instrucoes(){
    printf("instrucoes");

    system("pause");
    sleep(2);
    system("cls");
}