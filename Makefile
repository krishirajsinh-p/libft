# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 21:08:59 by kpuwar            #+#    #+#              #
#    Updated: 2024/03/18 22:42:18 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = src
INCDIR = includes
OBJDIR = obj

SRCFILES := $(shell find $(SRCDIR) -type f -name '*.c')
OBJFILES := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRCFILES:.c=.o))

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJFILES)
	$(AR) $(ARFLAGS) $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
