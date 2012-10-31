
test: clock.c
	@$(CC) $< -DTEST_CLOCK -std=c99 -o $@
	@./test

.PHONY: test