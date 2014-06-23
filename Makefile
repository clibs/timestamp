
CFLAGS = -std=c99 -Wall -Wextra

check: test
	./test

test: test.c
	$(CC) $< $(CFLAGS) -o $@

clean:
	rm -f test

.PHONY: check test
