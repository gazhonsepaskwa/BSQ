
CC = cc

CFLAGS = -Wall -Werror -Wextra -I.
TARGET = bsq
SRCS = $(wildcard check/*.c solve/*.c utils/*.c main.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

.o: $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 
fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean
