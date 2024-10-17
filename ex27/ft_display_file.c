#include <unistd.h>
#include <fcntl.h>

#define MY_O_RDWR 0

void	ft_display(char *filename)
{
	int		file;
	int		bytes_read;
	char	buffer[MY_O_RDWR];

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while ((bytes_read = read(file, buffer, MY_O_RDWR)) > 0)
		write(1, buffer, bytes_read);
	close(file);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}