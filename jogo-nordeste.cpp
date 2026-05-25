/* Autor: Dhene Arlis
 * Jogo: Sobrevivência no Sertão
 * 
 * Uma aventura cultural pelo Nordeste brasileiro. Você é um vaqueiro que precisa atravessar 7 dias de viagem, gerenciando sua água.
 * A cada dia você escolhe um caminho e enfrenta eventos aleatórios típicos do sertão. Chegar ao destino com água no cantil é vencer!
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declaração de variáveis
    int agua = 100;             // Quantidade de água inicial (0 = derrota)
    int dia;                    // Dia da jornada (1 a 7)
    int escolha;                // Opção do jogador (1, 2 ou 3)
    int numero_secreto;         // Número sorteado para o desafio do vaqueiro
    int palpite;                // Palpite do jogador no desafio
    int evento;                 // Resultado aleatório para os caminhos 1 e 2

    // Somente para a aleatoriedade (randomize)
    srand(time(NULL));

    printf("============================================\n");
    printf("       SOBREVIVENCIA NO SERTAO\n");
    printf("============================================\n");
    printf("Voce e um vaqueiro partindo do litoral rumo ao grande Arraial do Forro, no interior da Bahia.\n");
    printf("Sua jornada durara 7 dias sob o sol causticante.\n");
    printf("Administre bem sua agua e faca escolhas sabias!\n");
    printf("--------------------------------------------\n\n");

    // Loop principal da jornada (7 dias)
    for (dia = 1; dia <= 7; dia++) {
        printf("--- DIA %d ---\n", dia);
        printf("Agua atual: %d\n", agua);

        // Desgaste diário básico (calor do sertão)
        agua -= 10;   // Sempre perde 10 unidades de água por dia

        // Escolha do caminho
        printf("\nQual caminho voce segue hoje?\n");
        printf("1 - Estrada de barro (caminho seguro)\n");
        printf("2 - Cortar pela caatinga (arriscado)\n");
        printf("3 - Pedir ajuda a um vaqueiro avistado\n");
        printf("Opcao: ");

        // Validação da entrada (usa while)
        scanf("%d", &escolha);
        while (escolha < 1 || escolha > 3) {
            printf("Opcao invalida! Digite 1, 2 ou 3: ");
            scanf("%d", &escolha);
        }

        // Processa a escolha com switch e geração aleatória
        switch (escolha) {
            case 1:
                // Caminho seguro: chance de encontrar uma cacimba (poço)
                evento = rand() % 2;  // 0 ou 1
                if (evento == 0) {
                    printf("Voce encontrou uma cacimba com agua fresca!\n");
                    agua += 20;
                    printf("+20 de agua.\n");
                } else {
                    printf("Apenas poeira e sol... nada encontrado.\n");
                }
                break;

            case 2:
                // Caatinga: pode achar um mandacaru ou enfrentar um bode bravo
                evento = rand() % 2;
                if (evento == 0) {
                    printf("Um mandacaru florido! Voce extrai agua do cacto.\n");
                    agua += 25;
                    printf("+25 de agua.\n");
                } else {
                    printf("Um bode bravo cruzou seu caminho! \n");
                    printf("Voce perdeu agua na correria e ainda derrubou o cantil.\n");
                    agua -= 15;
                    printf("-15 de agua.\n");
                }
                break;

            case 3:
                // Vaqueiro: desafio de adivinhação (estilo repentista)
                printf("O vaqueiro te desafia: 'Adivinhe quantos botoes\n");
                printf("tem no meu gibao (1 a 5)!'\n");
                numero_secreto = (rand() % 5) + 1;   // 1 a 5
                printf("Seu palpite: ");
                scanf("%d", &palpite);

                // Validação do palpite (garante entre 1 e 5)
                while (palpite < 1 || palpite > 5) {
                    printf("Escolha um numero entre 1 e 5: ");
                    scanf("%d", &palpite);
                }

                if (palpite == numero_secreto) {
                    printf("Eita, cabra bom! Acertou! \n");
                    printf("O vaqueiro divide a agua do seu cantil com voce.\n");
                    agua += 30;
                    printf("+30 de agua.\n");
                } else {
                    printf("Errou! O vaqueiro tinha %d botoes.\n", numero_secreto);
                    printf("Ele apenas ri e segue seu caminho... Voce perdeu um pouco de agua na conversa\n");
                    agua -= 5;
                    printf("-----------.\n");
					printf("-5 de agua.\n");
                }
                break;
        }

        // Feedback do dia
        printf("\nFim do dia %d. Agua restante: %d\n", dia, agua);
        printf("--------------------------------------------\n\n");

        // Se a água acabar, o jogo termina antes dos 7 dias
        if (agua <= 0) {
            printf("Seu cantil secou completamente...\n");
            printf("A seca do sertao venceu.\n");
            break;  // Sai do for
        }
    }

    // Resultado final
    printf("============================================\n");
    if (agua > 0) {
        printf("PARABENS, VAQUEIRO!\n");
        printf("Voce chegou ao Arraial do Forro com %d de agua.\n", agua);
        printf("A sanfona ja esta tocando e a quadrilha vai comecar!\n");
        printf("O sertao virou festa!\n");
    } else {
        printf("FIM DE JOGO.\n");
        printf("O sol foi impiedoso e a seca venceu a jornada.\n");
        printf("Tente novamente, valente vaqueiro.\n");
    }
    printf("============================================\n");

    return 0;
}