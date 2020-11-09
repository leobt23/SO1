all: arbitro cliente jogo var_amb

arbitro: arbitro.o arbitro.h
	gcc arbitro.c -o arbitro

cliente: cliente.o cliente.h
	gcc cliente.c -o cliente

jogo: jogo.c
	gcc jogo.c -o jogo

var_amb: var_amb.c var_amb.h
	gcc var_amb.c -o var_amb

clean: 
	rm *.o
