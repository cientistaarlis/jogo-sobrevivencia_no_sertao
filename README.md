# 🌵 Sobrevivência no Sertão - Jogo em C
Um jogo de sobrevivência e decisões culturais inspirado no sertão nordestino brasileiro.
Você é um vaqueiro que precisa atravessar 7 dias de viagem até o Arraial do Forró, gerenciando sua água e enfrentando desafios típicos da caatinga.

> **Jogo Educativo em C** • Aventura Cultural pelo Nordeste Brasileiro

![Status](https://img.shields.io/badge/status-concluído-brightgreen)
![Linguagem](https://img.shields.io/badge/linguagem-C-blue)
![Plataforma](https://img.shields.io/badge/plataforma-CLI-orange)

---

## 📋 Índice

- [Ideia e Objetivo](#-ideia-e-objetivo)
- [Como Funciona](#-como-funciona)
- [Regras do Jogo](#-regras-do-jogo)
- [Interações](#-interações)
- [Código Fonte](#-código-fonte)
- [Como Compilar e Executar](#-como-compilar-e-executar)
- [Créditos](#-créditos)

---

## 💡 Ideia e Objetivo

**Sobrevivência no Sertão** é um jogo de aventura textual desenvolvido em linguagem C que simula a jornada épica de um vaqueiro pelo sertão nordestino.

### 🎯 Objetivo Principal
Atravessar **7 dias de viagem** partindo do litoral até o **Arraial do Forró**, no interior da Bahia, gerenciando estrategicamente a água do seu cantil para não sucumbir ao calor causticante do sertão.

### 🏆 Condições de Vitória/Derrota
| Resultado | Condição |
|-----------|----------|
| ✅ **Vitória** | Chegar ao dia 7 com `água > 0` |
| ❌ **Derrota** | Ter `água ≤ 0` em qualquer dia da jornada |

---

## 🎮 Como funciona
A jornada é dividida em 7 dias.

A cada dia você escolhe entre três ações:

Estrada de barro: caminho seguro, chance de achar uma cacimba.

Cortar pela caatinga: arriscado, pode encontrar um mandacaru ou um bode bravo.

Pedir ajuda a um vaqueiro: minigame de adivinhação (quantos botões tem no gibão?).

O jogo termina ao fim dos 7 dias ou se sua água chegar a 0.

Eventos aleatórios usando rand() tornam cada partida única.


### Regras do desafio (acadêmico)
Este programa foi desenvolvido como exercício da disciplina _Algoritmos e Programação 2026_1 PosDevWeb-IFSP_, respeitando as seguintes restrições:

Apenas uma função (main())

Sem vetores, matrizes, funções ou procedimentos adicionais

Uso obrigatório de for, while e rand()/srand()

Estruturas sequenciais e condicionais (if, switch)


## 🧠 Elementos culturais
O jogo homenageia a cultura nordestina:

• Mandacaru (cacto que armazena água)  🌵

• Cacimba (poço artesanal) 🪣

• Vaqueiro e seu gibão (traje de couro típico) 🤠

Referências ao forró e à resiliência do povo sertanejo


## 🚀 Como Usar (Recomendado para Windows)

1. **Baixe o executável**
   - Baixe diretamente o arquivo `jogo-nordeste.exe`

2. **Execute o programa**
   - Dê um duplo clique no arquivo `jogo-nordeste.exe`
   - O programa abrirá no terminal/cmd
   
