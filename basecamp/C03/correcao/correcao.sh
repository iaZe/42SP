clear
echo '\n Realizando teste da norminette -R\n'
norminette -R CheckForbiddenSourceHeader ../ex00/ft_strcmp.c
norminette -R CheckForbiddenSourceHeader ../ex01/ft_strncmp.c
norminette -R CheckForbiddenSourceHeader ../ex02/ft_strcat.c
norminette -R CheckForbiddenSourceHeader ../ex03/ft_strncat.c
norminette -R CheckForbiddenSourceHeader ../ex04/ft_strstr.c
norminette -R CheckForbiddenSourceHeader ../ex05/ft_strlcat.c
echo '\nTeste da norminette concluido\n'
echo '\nRealizando teste de GCC\n'
mkdir test
gcc -Wall -Werror -Wextra ex00.c ../ex00/ft_strcmp.c -o test/ex00.out
gcc -Wall -Werror -Wextra ex01.c ../ex01/ft_strncmp.c -o test/ex01.out
gcc -Wall -Werror -Wextra ex02.c ../ex02/ft_strcat.c -o test/ex02.out
gcc -Wall -Werror -Wextra ex03.c ../ex03/ft_strncat.c -o test/ex03.out
gcc -Wall -Werror -Wextra ex04.c ../ex04/ft_strstr.c -o test/ex04.out
gcc -Wall -Werror -Wextra -lbsd ex05.c ../ex05/ft_strlcat.c -o test/ex05.out
echo '\n Teste de GCC concluido\n'
echo '\n Realizando teste de resultado'
echo '\n Exercicio 00'
./test/ex00.out 
echo '\n \n Exercicio 01'
./test/ex01.out 
echo '\n \n Exercicio 02'
./test/ex02.out 
echo '\n \n Exercicio 03'
./test/ex03.out 
echo '\n \n Exercicio 04'
./test/ex04.out
echo '\n \n Exercicio 05'
./test/ex05.out
echo '\nTodos os testes foram concluidos.\n'
rm -r test