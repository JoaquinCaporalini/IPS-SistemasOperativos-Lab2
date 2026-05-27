all: codigo01 codigo02 codigo03 codigo04 codigo06 codigo07 codigo08 codigo09 codigo10 codigo11 codigo12 codigo13

codigo01:codigo01.c
	gcc codigo01.c -o codigo01
	
codigo02:codigo02.c
	gcc codigo02.c -o codigo02

codigo03:codigo03a.c codigo03b.c
	gcc codigo03a.c -o codigo03a
	gcc codigo03b.c -o codigo03b

codigo04:codigo04.c
	gcc codigo04.c -o codigo04

codigo05:codigo05.c
	gcc codigo05.c -o codigo05

codigo06:codigo06.c
	gcc codigo06.c -o codigo06

codigo07:codigo07.c
	gcc codigo07.c -o codigo07

codigo08:codigo08.c
	gcc codigo08.c -o codigo08

codigo09:codigo09a.c codigo09b.c
	gcc codigo09a.c -o codigo09a
	gcc codigo09b.c -o codigo09b

codigo10:codigo10.c
	gcc codigo10.c -o codigo10

codigo11:codigo11.c
	gcc codigo11.c -o codigo11

codigo12:codigo12.c
	gcc codigo12.c -o codigo12

codigo13:codigo13.c
	gcc codigo13.c -o codigo13