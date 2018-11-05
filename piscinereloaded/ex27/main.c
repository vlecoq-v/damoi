#include "header.h"

int	main(int argc, char **argv)
{
	char	buf[200];
	int	nread;
	int	fd;

	if(argc>2)
	{
		write(2, "Too many arguments.\n",20);
		return(0);
	}
	if(argc<2)
	{
		write(2, "File name missing.\n",19);
		return(0);
	}
	fd = open(argv[1], O_RDONLY);
	nread = read(fd,buf,200);
	if (nread == -1)
		write(2, "Read error\n", 13);
	if (write(2, buf, nread) != nread)
		write(2, "Write error'n", 14);
	close(fd);
	return (0);
}
