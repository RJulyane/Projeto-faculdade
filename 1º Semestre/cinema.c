#include <stdio.h>
#include <stdlib.h>

int i, j;
#include <stdio.h>
#include <stdlib.h>

// Matriz global idêntica à do enunciado
int cinema[12][20] = {
    {1,0,1,1,0, 1,1,0,1,1, 0,1,1,0,1, 0,1,1,0,1}, // Sessão 1
    {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0}, // Sessão 2
    {1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1}, // Sessão 3
    {1,1,0,0,0, 1,0,1,0,1, 1,0,0,1,0, 1,0,1,0,1}, // Sessão 4
    {1,1,1,1,1, 0,1,0,0,1, 0,0,1,0,1, 0,0,1,0,0}, // Sessão 5
    {0,0,0,0,0, 1,1,1,0,1, 0,1,1,0,1, 0,1,0,1,1}, // Sessão 6
    {0,0,0,0,0, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1}, // Sessão 7
    {1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,0}, // Sessão 8
    {1,0,1,0,1, 0,1,0,1,0, 1,0,1,0,1, 0,1,0,1,0}, // Sessão 9
    {1,1,1,1,1, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0}, // Sessão 10
    {1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1}, // Sessão 11
    {0,1,1,0,1, 1,0,1,1,0, 1,0,1,1,0, 1,1,0,1,0} // Sessão 12
};

// Função auxiliar para contar cadeiras vendidas em uma sessão
int total_vendido_sessao(int s) {
    int c, cont = 0;
    for (c = 0; c < 20; c++) {
        if (cinema[s][c] == 1) cont++;
    }
    return cont;
}

int main() {
    int opcao = -1;
    int s, c;

    while (opcao != 0) {
        printf("\n====================== MENU DE QUESTOES ======================");
        printf("\n1 - Questao 1 (Universal: l(s) > 0)");
        printf("\n2 - Questao 2 (Existencial: l(s) == 20)");
        printf("\n3 - Questao 3 (Sessoes 100%% vendidas)");
        printf("\n4 - Questao 4 (Sessoes com pelo menos uma vendida)");
        printf("\n5 - Questao 5 (Cadeiras vendidas em TODAS as sessoes)");
        printf("\n6 - Questao 6 (Cadeiras vendidas em pelo menos uma sessao)");
        printf("\n7 - Questao 7 (Dupla: Existe sessao com todas vendidas?)");
        printf("\n8 - Questao 8 (Dupla: Toda sessao teve pelo menos uma vendida?)");
        printf("\n9 - Questao 9 (Dupla: Todas as cadeiras vendidas em tudo?)");
        printf("\n10 - Questao 10 (Dupla: Ha alguma cadeira vaga no cinema?)");
        printf("\n11 - Questao 11 (Composta: VIP esgotado e comum disponivel)");
        printf("\n12 - Questao 12 (Composta: Nenhuma VIP vendida OU sala quase lotada)");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%i", &opcao);

        if (opcao == 1) {
            int proposicao = 1;
            int contraexemplo = -1;
            for (s = 0; s < 12; s++) {
                if (total_vendido_sessao(s) == 0) {
                    proposicao = 0;
                    contraexemplo = s + 1;
                    break;
                }
            }
            if (proposicao) printf("\nResultado: Verdadeiro (V)\n");
            else printf("\nResultado: Falso (F). Contraexemplo: A Sessao %i nao vendeu nada.\n", contraexemplo);
        }
        else if (opcao == 2) {
            int proposicao = 0;
            int exemplo = -1;
            for (s = 0; s < 12; s++) {
                if (total_vendido_sessao(s) == 20) {
                    proposicao = 1;
                    exemplo = s + 1;
                    break;
                }
            }
            if (proposicao) printf("\nResultado: Verdadeiro (V). Exemplo: A Sessao %i vendeu todas.\n", exemplo);
            else printf("\nResultado: Falso (F). Nenhuma sessao vendeu todas as cadeiras.\n");
        }
        else if (opcao == 3) {
            printf("\nConjunto-verdade (Sessoes totalmente vendidas): { ");
            for (s = 0; s < 12; s++) {
                if (total_vendido_sessao(s) == 20) printf("%i ", s + 1);
            }
            printf("}\n");
        }
        else if (opcao == 4) {
            printf("\nConjunto-verdade (Sessoes com pelo menos uma vendida): { ");
            for (s = 0; s < 12; s++) {
                if (total_vendido_sessao(s) > 0) printf("%i ", s + 1);
            }
            printf("}\n");
        }
        else if (opcao == 5) {
            printf("\nConjunto-verdade (Cadeiras vendidas em TODAS as sessoes): { ");
            for (c = 0; c < 20; c++) {
                int todas_sessoes = 1;
                for (s = 0; s < 12; s++) {
                    if (cinema[s][c] == 0) {
                        todas_sessoes = 0;
                        break;
                    }
                }
                if (todas_sessoes) printf("%i ", c + 1);
            }
            printf("}\n");
        }
        else if (opcao == 6) {
            printf("\nConjunto-verdade (Cadeiras vendidas em pelo menos uma sessao): { ");
            for (c = 0; c < 20; c++) {
                int pelo_menos_uma = 0;
                for (s = 0; s < 12; s++) {
                    if (cinema[s][c] == 1) {
                        pelo_menos_uma = 1;
                        break;
                    }
                }
                if (pelo_menos_uma) printf("%i ", c + 1);
            }
            printf("}\n");
        }
        else if (opcao == 7) {
            int existe = 0;
            int qual_sessao = -1;
            for (s = 0; s < 12; s++) {
                if (total_vendido_sessao(s) == 20) {
                    existe = 1;
                    qual_sessao = s + 1;
                    break;
                }
            }
            if (existe) printf("\nResultado: Verdadeiro (V). Comprovacao: Sessao %i.\n", qual_sessao);
            else printf("\nResultado: Falso (F).\n");
        }
        else if (opcao == 8) {
            int todas = 1;
            int contra_s = -1;
            for (s = 0; s < 12; s++) {
                if (total_vendido_sessao(s) == 0) {
                    todas = 0;
                    contra_s = s + 1;
                    break;
                }
            }
            if (todas) printf("\nResultado: Verdadeiro (V).\n");
            else printf("\nResultado: Falso (F). Contraexemplo: Sessao %i esta completamente vazia.\n", contra_s);
        }
        else if (opcao == 9) {
            int tudo_lotado = 1;
            int contra_s = -1, contra_c = -1;
            for (s = 0; s < 12; s++) {
                for (c = 0; c < 20; c++) {
                    if (cinema[s][c] == 0) {
                        tudo_lotado = 0;
                        contra_s = s + 1;
                        contra_c = c + 1;
                        break;
                    }
                }
                if (!tudo_lotado) break;
            }
            if (tudo_lotado) printf("\nResultado: Verdadeiro (V).\n");
            else printf("\nResultado: Falso (F). Contraexemplo: Na Sessao %i, a cadeira %i nao foi vendida.\n", contra_s, contra_c);
        }
        else if (opcao == 10) {
            int existe_vazia = 0;
            int ex_s = -1, ex_c = -1;
            for (s = 0; s < 12; s++) {
                for (c = 0; c < 20; c++) {
                    if (cinema[s][c] == 0) {
                        existe_vazia = 1;
                        ex_s = s + 1;
                        ex_c = c + 1;
                        break;
                    }
                }
                if (existe_vazia) break;
            }
            if (existe_vazia) printf("\nResultado: Verdadeiro (V). Comprovacao: Na Sessao %i, a cadeira %i esta livre.\n", ex_s, ex_c);
            else printf("\nResultado: Falso (F). O cinema inteiro está lotado.\n");
        }
        else if (opcao == 11) {
            printf("\nConjunto-verdade (VIP esgotada E pelo menos uma Comum disponivel):\nSessoes: { ");
            for (s = 0; s < 12; s++) {
                int vip_esgotada = 1;
                // VIP: colunas 0 a 4 (Cadeiras 1 a 5)
                for (c = 0; c < 5; c++) {
                    if (cinema[s][c] == 0) {
                        vip_esgotada = 0;
                        break;
                    }
                }
                int comum_disponivel = 0;
                // Comum (N): colunas 5 a 19 (Cadeiras 6 a 20)
                for (c = 5; c < 20; c++) {
                    if (cinema[s][c] == 0) {
                        comum_disponivel = 1;
                        break;
                    }
                }
                if (vip_esgotada && comum_disponivel) {
                    printf("%i ", s + 1);
                }
            }
            printf("}\n");
        }
        else if (opcao == 12) {
            printf("\nConjunto-verdade (Nenhuma VIP vendida OU total vendido >= 18):\nSessoes: { ");
            for (s = 0; s < 12; s++) {
                int nenhuma_vip = 1;
                // VIP: colunas 0 a 4
                for (c = 0; c < 5; c++) {
                    if (cinema[s][c] == 1) {
                        nenhuma_vip = 0;
                        break;
                    }
                }
                int total_vendas = total_vendido_sessao(s);
                
                if (nenhuma_vip || total_vendas >= 18) {
                    printf("%i ", s + 1);
                }
            }
            printf("}\n");
        }
        else if (opcao == 0) {
            printf("\nFinalizando o programa...\n");
        }
        else {
            printf("\nOpcao invalida!\n");
        }
    }
    return 0;
}
