gcc -Wall -I inculde/ -o hello1.o nonreentrant.c error_functions.c get_num.c signal_functions.c -lcrypt -g
#gcc -I inculde/ -o hello2 sig_receiver.c error_functions.c get_num.c signal_functions.c