#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int linha;
    int coluna;
}passo_t;

typedef struct{
    int moedas = 0;
    int chaves = 0;
    int passos = 0;
    int perigo = 0;
    passo_t passos[1000];
}caminho;
void backtracking(int n, int m, int entradaX, int entradaY, int saidaX, int saidaY, int direcao1, int direcao2, int direcao3, int direcao4,
                  int valorMoeda, int valorChave, int valorEntrada, int valorSaida){
    
    
    }
bool eValido(int lin, int col, int **matriz, )

int main(void){


    /////////////////////////////////////////////////////////////LEITURA DOS ARQUIVOS
    FILE *f = fopen("entada1.txt", "r");
    if (f == NULL){
        perror("Arquivo não abriu.");
        return 1;
    }

    int n, m; //n° de linhas(N) e colunas(M) da Matriz;
    int entradaX, entradaY, saidaX, saidaY; //coordenadas das portas de entrada e saída;
    int direcao1, direcao2, direcao3, direcao4; // Ordem das direções que o backtracking deve testar a cada passo;
    //0=CIMA; 1=DIREITA; 2=BAIXO; 3=ESQUERDA
    int valorMoeda, valorChave, valorEntrada, valorSaida; //Valores que representam cada elemetno
    int k; //número de inimigos

    fscanf(f, "%d %d", &n, &m);
    fscanf(f, "%d %d %d %d", &entradaX, &entradaY, &saidaX, &saidaY);
    fscanf(f, "%d %d %d %d", &direcao1, &direcao2, &direcao3, &direcao4);
    fscanf(f, "%d %d %d %d", &valorMoeda, &valorChave, &valorEntrada, &valorSaida);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            fscanf(f, %d, &m[i][j]);
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////



    //
    fclose(f);
    return 0;
}

