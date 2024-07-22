CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

TARGET = rush-02

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS) $(TARGET)

fclean:
	rm -f $(OBJS) $(DEPS) $(TARGET)

.PHONY: all clean