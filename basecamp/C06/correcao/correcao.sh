clear
echo '\n Realizando teste da norminette -R\n'
norminette -R CheckForbiddenSourceHeader ../ex00/ft_print_program_name.c
norminette -R CheckForbiddenSourceHeader ../ex01/ft_print_params.c
norminette -R CheckForbiddenSourceHeader ../ex02/ft_rev_params.c
norminette -R CheckForbiddenSourceHeader ../ex03/ft_sort_params.c
echo '\nTeste da norminette concluido\n'
echo '\nRealizando teste de GCC\n'
mkdir test
gcc -Wall -Werror -Wextra ../ex00/ft_print_program_name.c -o test/ex00.out
gcc -Wall -Werror -Wextra ../ex01/ft_print_params.c -o test/ex01.out
gcc -Wall -Werror -Wextra ../ex02/ft_rev_params.c -o test/ex02.out
gcc -Wall -Werror -Wextra ../ex03/ft_sort_params.c -o test/ex03.out
echo '\n Teste de GCC concluido\n'
echo '\n Realizando teste de resultado'
echo '\n Exercicio 00'
./test/ex00.out 
echo '\n \n Exercicio 01'
./test/ex01.out test1 test2 test3
echo '\n \n Exercicio 02'
./test/ex02.out test1 test2 test3
echo '\n \n Exercicio 03'
./test/ex03.out test1 test2 test3
echo '\nTodos os testes foram concluidos.\n'
rm -r test