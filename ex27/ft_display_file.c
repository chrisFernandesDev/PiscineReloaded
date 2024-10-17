/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:32:54 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/17 18:31:23 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 300

void	ft_display(char *filename)
{
	int		file;
	int		bytes_read;
	char	buffer[BUF_SIZE];

	file = open(filename, O_RDONLY);
	bytes_read = 0;
	if (file < 0)
	{
		write(STDERR_FILENO, "Cannot read file.\n", 19);
		return ;
	}
	//while (read(file, buffer, BUF_SIZE) > 0)
	//{
	read(file, buffer, BUF_SIZE);
	write(STDOUT_FILENO, buffer, BUF_SIZE);
	//}
	close(file);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(STDERR_FILENO, "File name missing.\n", 20);
	else if (argc > 2)
		write(STDERR_FILENO, "Too many arguments.\n", 21);
	else
		ft_display(argv[1]);
	return (0);
}
