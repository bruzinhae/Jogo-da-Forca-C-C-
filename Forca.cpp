/******************************************************************************

Bruna Barbour Fernandes -23007950
João Victor Francetto Xavier - 23003634

*******************************************************************************/
#include <iomanip>
#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;
#define TAM 10


int boas_vindas() {
    int opt;
    char var;
    cout << "\033[H\033[J";
    cout << "BEM-VINDO AO JOGO DA FORCA!" << endl;
    cout << "_______________________________________________" << endl;
    cout << "REGRAS: " << endl;
    cout << "O jogador adivinhando tenta adivinhar letras da palavra ou frase secreta. Cada suposição incorreta resulta na adição de partes de um enforcado desenhado." << endl;
    cout << "Objetivo: O jogador adivinhando deve adivinhar a palavra ou frase antes de esgotar um número limite de tentativas." << endl;
    cout << "_______________________________________________" << endl;
    cout << endl;
    cout << "*ESCOLHA SEU NÍVEL DE DIFICULDADE: *" << endl;
    cout << "1. FÁCIL" << endl;
    cout << "2. MÉDIO" << endl;
    cout << "3. DIFÍCIL" << endl;
    cin >> opt;
    switch (opt) {
        case 1:
            cout << "TEMA: Frutas " << endl;
            cout << "Deseja iniciar?(S/N)" << endl;
            cin >> var;
            if (var == 'S' || var == 's') {
                return opt;
                break;
            }
            else {
                cout << "Jogo finalizado" << endl;
                break;
            }

        case 2:
            cout << "TEMA: Países" << endl;
            cout << "Deseja iniciar?(S/N)" << endl;
            cin >> var;
            if (var == 'S' || var == 's') {
                return opt;
                break;
            }
            else {
                cout << "Jogo finalizado" << endl;
                break;
            }

        case 3:
            cout << "TEMA: Cidades Brasileiras(impossível)" << endl;
            cout << "Deseja iniciar?(S/N)" << endl;
            cin >> var;
            if (var == 'S' || var == 's') {
                return opt;
                break;
            }
            else {
                cout << "Jogo finalizado" << endl;
                break;
            }
        default:
            cout << "Opção inválida. Jogo finalizado." << endl;
    }
    return opt;
}


void sortear_palavraF(char Palavra[], char BPF[TAM][21], char vet_acertos[]) {
    srand(time(0));
    int indice_aleatorio = rand() % TAM; 

    strcpy(Palavra, BPF[indice_aleatorio]);

}

void sortear_palavraM(char Palavra[], char BPM[TAM][21], char vet_acertos[]) {
    srand(time(0));
    int indice_aleatorio = rand() % TAM; 

    strcpy(Palavra, BPM[indice_aleatorio]);
}

void sortear_palavraD(char Palavra[], char BPD[TAM][21], char vet_acertos[]) {
    srand(time(0));
    int indice_aleatorio = rand() % TAM; 

    strcpy(Palavra, BPD[indice_aleatorio]);
    
}

void desenha_forcaF(int k, char Vet_erros[20], char Vet_acertos[20]){

    switch (k)
    {
        case 0:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | o o |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|              ____|____"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                 / ) " << endl;
            cout << "|                /   ) " << endl;
            cout << endl;

            break;
        
        case 1:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | o o |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |____"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                 / ) " << endl;
            cout << "|                /   ) " << endl;
            
            break;
        

        case 2:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | o o |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                 / ) " << endl;
            cout << "|                /   ) " << endl;
            break;

        case 3:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | o o |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                   ) " << endl;
            cout << "|                    ) " << endl;
            break;
            
        case 4:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | o o |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                    " << endl;
            cout << "|                     " << endl;
            break;

        case 5:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | x o |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                    " << endl;
            cout << "|                     " << endl;
            break;

        case 6:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                _|___"<< endl;
            cout << "|               | x x |"<< endl;
            cout << "|               |__-__|"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                  |"<< endl;
            cout << "|                    " << endl;
            cout << "|                     " << endl;
            break;

        case 7:
            cout << "-------------------"<< endl;
            cout << "|                 |"<< endl;
            cout << "|                 |  ______"<< endl;
            cout << "|                 --|    x |"<< endl;
            cout << "|                 | |____x_|"<< endl;
            cout << "|                /|)        "<< endl;
            cout << "|               / | )        "<< endl;
            cout << "|                 |          "<< endl;
            cout << "|                /|)         "<< endl;
            cout << "|               | | |       "<< endl;
            cout << "|               | | |       "<< endl;
            cout << "|                           "<< endl;
            cout << endl;

            break;
    }
}
void imprimirLetrasAdivinhadas(char palavra[], char letrasAdivinhadas[], int a) {
    bool adivinhada = false;
    for (int i = 0; i < strlen(palavra); i++) {
        adivinhada = false;
        for (int j = 0; j < a; j++) {
            if (palavra[i] == letrasAdivinhadas[j]) {
                adivinhada = true;
                break;
            }
        }
        if (adivinhada) {
            cout << palavra[i] << ' ';
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int jogada(char Palavra[], char Vet_Acertos[], char Vet_erros[], int *erros, int *acertos) {
    char letra;
    int enc = 0;

        cout << "Digite uma letra (ou '*' para sair): ";
        cin >> letra;

        if (letra == '*') {
            cout << "Jogo encerrado." << endl;
        }
        else if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {
            letra = toupper(letra);
            for (int i = 0; i < strlen(Palavra); i++) {
                if (Palavra[i] == letra) {
                    Vet_Acertos[i] = letra;
                    enc = 1;
                }
            }
            if (enc) {
                (*acertos)++;
            } else {
                Vet_erros[*erros] = letra;
                (*erros)++;
            }
        } else {
            cout << "Por favor, digite uma letra válida!" << endl;
        }

    return enc;
}


char BPF[TAM][21]={"ABACAXI", "MORANGO", "ABACATE", "BANANA", "CARAMBOLA", "CAQUI", "TOMATE", "PITAYA", "MANGA", "MELANCIA"};
char BPM[TAM][21]={"HOLANDA", "COLOMBIA", "PANAMA", "ALEMANHA", "EGITO", "CONGO", "VENEZUELA", "HONDURAS", "KUWAIT", "SINGAPURA"};
char BPD[TAM][21]={"BARIRI", "TOROPI", "JACIABA", "MARRECAS", "CANUTAMA", "CARACARAI", "ANGICOS", "WITMARSUM", "OLDENBURG", "BOSSOROCA"};
char acertos[30];
char erros[7];

int main() {
    char resposta;
    do {
        char palavra_sorteada[21];
        int erros = 0;
        int acertos = 0;
        char Vet_Erros[20];
        char Vet_Acertos[20];
        int k = erros;

        int opt = boas_vindas();

        cout << "\033[H\033[J";
        cout << endl;
        cout << "------JOGO INICIADO!------" << endl;

        if (opt == 1) {
            sortear_palavraF(palavra_sorteada, BPF, Vet_Acertos);
            int tamanho = strlen(palavra_sorteada);

            while (erros < 7 && acertos < tamanho) {

                desenha_forcaF(k, Vet_Erros, Vet_Acertos);
                int enc = jogada(palavra_sorteada, Vet_Acertos, Vet_Erros, &erros, &acertos);
                imprimirLetrasAdivinhadas(palavra_sorteada, Vet_Acertos, acertos);

                if (!enc) {
                    cout << endl;
                    cout << "Letra incorreta!" << endl;
                    Vet_Erros[erros] = '\0';

                    cout << "Erros: ";
                    for (int i = 0; Vet_Erros[i] != '\0'; i++) {
                        cout << Vet_Erros[i] << ' ';
                    }

                    cout << endl;
                }

                cout << "Acertos: " << acertos << endl;
                k = erros;
            }

            if (acertos == tamanho) {
                cout << endl;
                cout << "PARABÉNS, VOCÊ VENCEU!" << endl;
            } else {
                desenha_forcaF(k, Vet_Erros, Vet_Acertos);
                cout << "Você perdeu!" << endl;
                cout << "A palavra era: " << palavra_sorteada << endl;
            }
        } else if (opt == 2) {
            sortear_palavraM(palavra_sorteada, BPM, Vet_Erros);
            int tamanho = strlen(palavra_sorteada);

            while (erros < 7 && acertos < tamanho) {
                desenha_forcaF(k, Vet_Erros, Vet_Acertos);
                int enc = jogada(palavra_sorteada, Vet_Acertos, Vet_Erros, &erros, &acertos);
                imprimirLetrasAdivinhadas(palavra_sorteada, Vet_Acertos, tamanho);

                if (!enc) {
                    cout << endl;
                    cout << "Letra incorreta!" << endl;
                    Vet_Erros[erros] = '\0';

                    cout << "Erros: ";
                    for (int i = 0; Vet_Erros[i] != '\0'; i++) {
                        cout << Vet_Erros[i] << ' ';
                    }

                    cout << endl;
                }

                cout << "Acertos: " << acertos << endl;
                k = erros;
            }

            if (acertos == tamanho) {
                cout << endl;
                cout << "PARABÉNS, VOCÊ VENCEU!" << endl;
            } else {
                desenha_forcaF(k, Vet_Erros, Vet_Acertos);
                cout << "Você perdeu!" << endl;
                cout << "A palavra era: " << palavra_sorteada << endl;
            }
        } else if (opt == 3) {
            sortear_palavraD(palavra_sorteada, BPD, Vet_Erros);
            int tamanho = strlen(palavra_sorteada);

            while (erros < 7 && acertos < tamanho) {
                desenha_forcaF(k, Vet_Erros, Vet_Acertos);
                int enc = jogada(palavra_sorteada, Vet_Acertos, Vet_Erros, &erros, &acertos);
                imprimirLetrasAdivinhadas(palavra_sorteada, Vet_Acertos, tamanho);

                if (!enc) {
                    cout << endl;
                    cout << "Letra incorreta!" << endl;
                    Vet_Erros[erros] = '\0';

                    cout << "Erros: ";
                    for (int i = 0; Vet_Erros[i] != '\0'; i++) {
                        cout << Vet_Erros[i] << ' ';
                    }

                    cout << endl;
                }

                cout << "Acertos: " << acertos << endl;
                k = erros;
            }

            if (acertos == tamanho) {
                cout << endl;
                cout << "PARABÉNS, VOCÊ VENCEU!" << endl;
            } else {
                desenha_forcaF(k, Vet_Erros, Vet_Acertos);
                cout << "Você perdeu!" << endl;
                cout << "A palavra era: " << palavra_sorteada << endl;
            }
        }

        cout << "Deseja jogar novamente? (S/N): ";
        cin >> resposta;
    } while (resposta == 'S' || resposta == 's');

    cout << "Obrigado por jogar! Até a próxima." << endl;

    return 0;
}





