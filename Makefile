INCLUDEDIR:= /usr/local/include
LIBDIR:= /usr/local/lib
SRC:=$(wildcard *.c)
DEPS:=$(wildcard *.h)
TARGET:=liblinked_list.so
CFLAGS:=-fpic -Wall -Wextra
LDFLAGS:=-shared
.PHONY: all install uninstall clean

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(SRC)

install: $(TARGET)
	install -D -m 644 $(DEPS) $(INCLUDEDIR)/$(DEPS)
	install -D -m 755 $(TARGET) $(LIBDIR)/$(TARGET)

uninstall:
	$(RM) $(INCLUDEDIR)/$(DEPS)

clean:
	$(RM) $(TARGET)