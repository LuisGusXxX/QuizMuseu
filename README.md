# QuizMuseu

é um programa de quiz que aborda quatro temas diferentes: Arte Moderna, Jogos Olímpicos, os 100 Anos de Carlos Drummond de Andrade e o Aniversário de São Paulo. O usuário interage com o programa respondendo a perguntas sobre esses temas e acumula pontuações de acordo com suas respostas.

Aqui está uma visão geral de como o código funciona:

Declaração de Funções:

SalvarRespostas: Responsável por salvar as respostas dadas pelo usuário em um arquivo CSV.
Funções individuais para cada tema (e.g., TemaArteModerna, TemaJogosOlimpicos, etc.): Cada função representa um tema do quiz e contém perguntas específicas relacionadas a esse tema.
Funcionalidade do Programa:

O programa começa apresentando um menu onde o usuário pode escolher um dos temas ou sair do programa.
Ao escolher um tema, o usuário é apresentado a perguntas relacionadas a esse tema.
Cada pergunta é exibida e o usuário deve escolher uma letra correspondente à resposta correta.
Com base na resposta do usuário, o programa informa se a resposta está correta ou não.
Após cada conjunto de perguntas, a pontuação do usuário no tema é exibida.
As respostas do usuário e suas pontuações são salvas em um arquivo CSV usando a função SalvarRespostas.
O usuário pode voltar ao menu principal após terminar um tema ou pode escolher sair do programa.
Funcionamento Geral:

O código usa loops para manter o programa em execução até que o usuário decida sair.
As funções de cada tema apresentam perguntas ao usuário, verificam as respostas e mantêm a pontuação atualizada.
Após cada tema, a pontuação total acumulada até o momento é exibida.
O programa usa comandos do sistema para limpar a tela (system("cls")) para uma melhor experiência visual.
Basicamente, o programa é uma aplicação de quiz interativa que oferece ao usuário a oportunidade de testar seu conhecimento em diferentes áreas relacionadas aos temas propostos.
