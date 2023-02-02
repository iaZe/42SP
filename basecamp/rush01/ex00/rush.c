void	ft_putchar(char a);

void	ft_column(int coluna, char 1, char 2, char 3); // Char 1 se refere ao primeiro caractere da linha (A*), char 2 ao segundo (B*), e char 3 ao terceiro (A*)

// *No caso da primeira linha

void	rush(int coluna, int linha)
{
	if (linha > 0) // Se o número de linhas for maior que 0, vamos entrar nessa condição
	{
		ft_column(coluna, 'A', 'B', 'A'); // Passamos a condição para a função ft_column, que vai verificar as colunas, então enviamos o número de colunas pedido e o valor de 1 que é A, o valor de 2 que é B e o valor de 3 que é A
		linhas--; // Se essa ação for realizada, ela vai diminuir em 1 o número de linhas, pois essa linha atual foi escrita
	}
	while (linhas > 1) // Aqui usamos um loop para dizer que enquanto o número de linhas solicitadas for maior que 1, vamos continuar usando essa função e imprimindo esses caracteres
	{
		ft_column(coluna, 'B', ' ', 'B'); // Passamos novamente a condição para a função ft_column, que dessa vez vai receber os valores de o valor de 1 que é B, o valor de 2 que é "espaço" e o valor de 3 que é B
		linhas--; // Como estamos em loop o número de linhas vai ser reduzido até chegar em 1, que seria a última linha restante a ser escrita
	}
	if (linhas == 1) // Aqui chegamos a última condição, que é quando o número de linhas é igual a 1. Ela só vai ser feita 1 vez, e isso pode ser garantido pois ela é a ultima função
	// Então caso seja passado somente 1 linha, a linha a ser impressa vai ser a primeira, pois ao ser executada ela vai passar a ser 0**
	// **Devido à primeira condição remover a linha
	{
		ft_column(coluna, 'C', 'B', 'C'); // Aqui passamos novamente a condição para ft_column, que dessa vez vai receber número de colunas, o valor de 1 que é C, o valor de 2 que é B e o valor de 3 que é C
		// Por já ser a última linha não precisamos remove-lás, pois já se passaram todas ocorrências
	}
}

void	ft_column(int coluna, char 1, char 2, char 3) // Aqui na função ft_column, recebemos o valor das colunas a ser impressa, e qual o caractere que vai ser colocado nesse local
{
	if (coluna > 0) // Caso o número de colunas seja maior que zero, vamos entrar nessa condição
	{
		ft_putchar(1); // Vamos enviar para ft_putchar o caractere a ser impresso na primeira coluna (A***¹) (B***²) (C***²)
		// ***¹Caso seja a primeira linha e primeira coluna
		// ***²Caso seja da segunda até penultima linha e primeira coluna
		// ***³Caso seja ultima a linha e primeira coluna
		// Supondo ocorrência de 1 coluna e 4 linhas
		// "A"
		// "B"
		// "B"
		// "C"
		coluna--; // Se essa primira ação for realizada, vamos remover 1 coluna e passar para a proxima ocorrência
	}
	while (coluna > 1) // Caso o número de colunas seja maior que 1, entramos nesse loop até que ele não seja mais verdadeiro
	{
		ft_putchar(2); // Vamos enviar para ft_putchar o caractere a ser impresso no meio (B****¹)("espaço"****²)
		// ****¹Caso seja a primeira e última linha, coluna 1
		// ****²Caso seja a segunda linha até a penultima, da segunda até a penultima coluna
		// Supondo ocorrência de 4 colunas e 4 linhas
		// A"BB"A
		// B"  "B
		// C"BB"C  
		coluna--; // Se essa ação for realizada, vamos remover 1 coluna e passar para a proxima ocorrência
	}
	if (coluna == 1) // Aqui chegamos a última condição, que é quando o número de colunas é 1. E novamente ela só vai ser feita 1 vez e caso a primeira condição seja feita
	{
		ft_putchar(3); // Vamos enviar para o ft_putchar o caractere a ser impresso na última coluna (A*****¹) (B*****²) (C*****³)
		// *****¹Caso seja a primeira linha e ultima coluna
		// *****²Caso seja a segunda linha e ultima coluna
		// *****³Caso seja a ultima linha e ultima coluna
		// Supondo ocorrência de 4 colunas e 4 linhas
		// ABB"A"
		// B  "B"
		// CBB"C"
	}
	ft_putchar('\n'); // Aqui pedimos pra fazer uma quebra de linha
}
