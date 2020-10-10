CFLAGS := -std=c++17  -Werror -m64
TARGET := main

PRIM_SRCS := $(wildcard primitives/*.cpp)
PRIM_OBJS := $(patsubst %.cpp,%.o,$(PRIM_SRCS))

all: $(TARGET)

$(TARGET): main.o $(PRIM_OBJS)
	$(CC) -o $@ $^ $(CFLAGS) -lstdc++

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(TARGET) $(PRIM_OBJS)

.PHONY: all clean
