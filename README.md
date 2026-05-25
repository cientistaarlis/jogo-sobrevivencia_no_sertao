# 🌵 Sobrevivência no Sertão — Jogo em C

> **Jogo educativo em C** • Aventura cultural pelo Nordeste brasileiro  
> Atravesse 7 dias de sertão como um vaqueiro, gerencie sua água e tome decisões inspiradas na cultura nordestina.

![Status](https://img.shields.io/badge/status-concluído-brightgreen)
![Linguagem](https://img.shields.io/badge/linguagem-C-blue)
![Plataforma](https://img.shields.io/badge/plataforma-CLI-orange)
![Licença](https://img.shields.io/badge/licença-MIT-lightgrey)

---

## 📋 Índice

- [Ideia e Objetivo](#-ideia-e-objetivo)
- [Como Funciona](#-como-funciona)
- [Regras do Jogo](#-regras-do-jogo)
- [Interações](#-interações)
- [Elementos Culturais](#-elementos-culturais)
- [Regras Acadêmicas](#-regras-acadêmicas)
- [Como Compilar e Executar](#-como-compilar-e-executar)
- [Estrutura do Projeto](#-estrutura-do-projeto)
- [Créditos](#-créditos)

---

## 💡 Ideia e Objetivo

**Sobrevivência no Sertão** é um jogo de aventura textual que simula a jornada de um vaqueiro pelo interior do Nordeste brasileiro, partindo do litoral rumo ao **Arraial do Forró** (no coração da Bahia).  
O jogador precisa gerenciar estrategicamente a água de seu cantil para resistir ao calor causticante e chegar ao destino em **7 dias**.

### 🏆 Condições de vitória e derrota

| Resultado | Condição |
|-----------|----------|
| ✅ **Vitória** | Completar os 7 dias com `água > 0` |
| ❌ **Derrota** | Deixar a água chegar a `≤ 0` em qualquer dia |

---

## 🎮 Como funciona

A jornada é dividida em **7 dias**. A cada dia o jogador deve escolher um dos três caminhos disponíveis.  
Eventos aleatórios (gerados por `rand()`) fazem cada partida ser única.

### Opções diárias

| Opção | Descrição | Riscos e recompensas |
|-------|-----------|----------------------|
| **1. Estrada de barro** | Caminho seguro, mas monótono. | Pode encontrar uma **cacimba** (+20 de água) ou nada. |
| **2. Cortar pela caatinga** | Trilha arriscada entre a vegetação espinhosa. | Pode achar um **mandacaru** florido (+25 de água) ou enfrentar um **bode bravo** (-15 de água). |
| **3. Pedir ajuda a um vaqueiro** | Minigame de adivinhação. | Acertar o número de botões do gibão do vaqueiro concede +30 de água; errar custa -5. |

### ⚠️ Desgaste diário

Independentemente da escolha, cada dia consome **10 unidades de água** — o sol do sertão não perdoa.

---

## 🧠 Elementos culturais

O jogo é uma homenagem à riqueza do sertão nordestino. Ao longo da jornada, o jogador encontra:

- 🌵 **Mandacaru** — cacto que armazena água, símbolo de resistência  
- 🪣 **Cacimba** — poço artesanal cavado no leito seco dos rios  
- 🤠 **Vaqueiro e seu gibão** — o traje de couro que protege o vaqueiro na caatinga  
- 🎵 **Arraial do Forró** — a festa de sanfona e quadrilha que aguarda no destino, Festa junina, patrimônio cultural
- 🗣️ Linguagem regional: Expressões como "Eita, cabra bom!"

A narrativa se constrói sobre a resiliência, a sabedoria popular e as tradições do povo sertanejo.

---

## 📜 Regras acadêmicas (restrições do exercício)

Este programa foi desenvolvido como trabalho da disciplina **Algoritmos e Programação 2026/1 — Pós‑graduação em Desenvolvimento Web (IFSP)**, respeitando obrigatoriamente:

- ❌ **Proibido uso de vetores, matrizes, funções ou procedimentos** (apenas `main()`)
- ✅ Uso obrigatório de `for` e/ou `while`
- ✅ Uso obrigatório de geração aleatória (`rand()` / `srand()`)
- ✅ Apenas estruturas sequenciais e condicionais (`if`, `switch`)

> O desafio está justamente em criar um jogo interativo e divertido sem os recursos tradicionais de armazenamento e modularização.

---

## 🚀 Como Usar

### Executável pronto (Windows)

1. Baixe o arquivo `jogo-nordeste.exe` da [página de releases](../../releases)
2. Dê um duplo clique para executar no terminal do Windows
