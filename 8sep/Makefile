CC = gcc
CFLAGS = -Wall
TARGETS = 1 2 3 4 5 6

all: $(TARGETS)

%: exprement%.c
	$(CC) $(CFLAGS) $< -o $@

%: experiment%.c
	$(CC) $(CFLAGS) $< -o $@

run:
	@echo -n "Enter the experiment number to run (1-6): "
	@read num; \
	if [ -z "$$num" ]; then echo "No number entered."; exit 1; fi; \
	if [ ! -f "exprement$$num.c" ] && [ ! -f "experiment$$num.c" ]; then echo "Error: File does not exist!"; exit 1; fi; \
	FILE=$$( [ -f "exprement$$num.c" ] && echo "exprement$$num.c" || echo "experiment$$num.c" ); \
	$(CC) $(CFLAGS) "$$FILE" -o "$$num" && echo "=== Running Experiment $$num ===" && ./$$num

clean:
	rm -f $(TARGETS)
