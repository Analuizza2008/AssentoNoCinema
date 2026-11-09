1
PRÁTICA PROFISSIONAL II - N2 - AT1 - VALOR = 2,0
TRABALHO DE PROGRAMAÇÃO EM C
Reserva de assentos no cinema
Prazo: uma semana após a apresentação do trabalho.
Entrega: envie o arquivo .c com o código-fonte pelo AVA.
Um cinema oferece três sessões de um filme. Cada sessão possui cinco assentos numerados de
1 a 5. Desenvolva um programa para consultar os assentos, registrar reservas e cancelar
reservas.


1. ORGANIZAÇÃO DOS DADOS
• Use uma matriz de inteiros com 3 linhas e 5 colunas para guardar a situação dos assentos.
Cada linha representa uma sessão e cada coluna representa um assento.
• Use 0 para assento livre e 1 para assento reservado.
• No início, todos os assentos devem estar livres.
• Use um vetor do tipo float com 3 posições para guardar o preço do ingresso de cada sessão.
Solicite os três preços antes de exibir o menu. Cada preço deve ser maior que zero. Se um
preço for inválido, solicite-o novamente.
Na tela, numere as sessões de 1 a 3 e os assentos de 1 a 5. Lembre-se de que os índices do
vetor e da matriz começam em zero.


3. MENU DO PROGRAMA
1 - Mostrar mapa de assentos
2 - Reservar assento
3 - Cancelar reserva
4 - Mostrar resumo das sessões
0 - Encerrar

   
O menu deve voltar a aparecer após cada operação, até que o usuário escolha a opção 0. Se a
opção for inválida, mostre uma mensagem e exiba o menu novamente.
OPÇÃO 1 - MOSTRAR MAPA DE ASSENTOS
Exiba a matriz com uma linha para cada sessão. Mostre a numeração dos assentos e a legenda:
0 = livre e 1 = reservado.


Exemplo
Assento 1 2 3 4 5
Sessão 1 0 0 0 0 0
Sessão 2 0 1 0 0 0
Sessão 3 0 0 0 0 0
2


OPÇÃO 2 - RESERVAR ASSENTO
Solicite o número da sessão e o número do assento. Se o assento estiver livre, marque-o como
reservado e mostre o preço do ingresso daquela sessão. Se já estiver reservado, avise o usuário
e mantenha a situação do assento.
OPÇÃO 3 - CANCELAR RESERVA
Solicite o número da sessão e o número do assento. Se o assento estiver reservado, marque-o
como livre e confirme o cancelamento. Se estiver livre, informe que não existe reserva naquela
posição.
Nas opções 2 e 3, verifique se a sessão está entre 1 e 3 e se o assento está entre 1 e 5 antes de
acessar a matriz. Se algum número estiver fora desses limites, mostre uma mensagem e retorne
ao menu.


OPÇÃO 4 - MOSTRAR RESUMO DAS SESSÕES
Para cada sessão, mostre:
• A quantidade de assentos livres.
• A quantidade de assentos reservados.
• O valor total das reservas ativas daquela sessão.
Calcule o valor de cada sessão multiplicando a quantidade de assentos reservados pelo preço do
ingresso. Em seguida, some os valores das três sessões e mostre o total geral.
Exiba os valores em reais com duas casas decimais.


4. REQUISITOS OBRIGATÓRIOS
• Use do while para repetir o menu.
• Use for para percorrer o vetor de preços.
• Use dois laços for, um dentro do outro, para percorrer a matriz ao exibir o mapa e ao calcular o
resumo.
• Use if e else para validar as operações.
• O usuário deve digitar apenas números. Exiba as mensagens diretamente com printf.


5. TESTE ANTES DE ENTREGAR
Use os preços 20.00, 25.00 e 30.00 para as sessões 1, 2 e 3.
• Reserve o assento 2 da sessão 2. O preço mostrado deve ser R$ 25.00.
• Tente reservar o mesmo assento novamente. O programa deve avisar que ele já está
reservado.
• Abra o resumo. A sessão 2 deve ter 4 assentos livres, 1 reservado e R$ 25.00 em reservas
ativas.
• Cancele essa reserva e consulte o resumo novamente. A sessão 2 deve ter 5 assentos livres e
o total geral deve voltar para R$ 0.00.
• Tente reservar um assento na sessão 4. O programa deve informar que a sessão é inválida e
voltar ao menu.
