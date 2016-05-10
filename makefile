ll:add.o save.o search.o modify.o print.o main.o
	cc -g save.o modify.o add.o search.o print.o main.o -o ll
	rm *.o
save.o:save.c
	cc -c -g save.c
modify.o:modify.c
	cc -c -g modify.c
add.o:add.c
	cc -c -g add.c
search.o:search.c
	cc -c -g search.c
print.o:print.c
	cc -c -g print.c
main.o:main.c
	cc -c -g main.c
clear:
	rm *.o
