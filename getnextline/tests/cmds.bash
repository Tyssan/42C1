cc -Wall -Werror -Wextra main.c get_next_line.h get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=10
./a.out | tee tests/test-output.txt | cat -e

BONUS:
cc -Wall -Werror -Wextra main_bonus.c get_next_line_utils_bonus.c get_next_line_bonus.c get_next_line_bonus.h -D BUFFER_SIZE=10
./a.out tests/test1.txt tests/test2.txt | tee tests/test-output.txt

BONUS_3:
cc -Wall -Werror -Wextra main_bonus_3.c get_next_line_utils_bonus.c get_next_line_bonus.c get_next_line_bonus.h -D BUFFER_SIZE=10
./a.out
./a.out | cat -e