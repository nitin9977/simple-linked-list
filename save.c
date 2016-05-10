#include"header.h"

void save(ST *ptr)
{
FILE *fd;
fd=fopen("data.dat","w");
while(ptr)
{
	fprintf(fd,"%d\t",ptr->num);
	ptr=ptr->next;
}
fprintf(fd,"\n");
fclose(fd);
}
