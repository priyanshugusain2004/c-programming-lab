CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGETS = q1 q2 q3 q4 q5 q6 q7

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

menu: all
	@while true; do \
		echo ""; \
		echo "===========^^OUTPUT^^============ ";\
		echo "================================="; \
		echo "   C PROGRAM SELECTOR MENU"; \
		echo "================================="; \
		echo "1) Run Question 1"; \
		echo "2) Run Question 2"; \
		echo "3) Run Question 3"; \
		echo "4) Run Question 4"; \
		echo "5) Run Question 5"; \
		echo "6) Run Question 6"; \
		echo "7) Run Question 7"; \
		echo "q) Exit"; \
		echo "================================="; \
		printf "Choose an option: "; \
		read choice; \
		case "$$choice" in \
			[1-7]) \
				if [ -f "./q$$choice" ]; then \
					echo "--> Running q$$choice..."; \
					./q$$choice; \
				else \
					echo "Error: q$$choice executable missing."; \
				fi ;; \
			q|Q) \
				echo "Exiting. Goodbye!"; \
				break ;; \
			*) \
				echo "Invalid option. Please choose 1-7 or q."; \
		esac; \
	done

clean:
	rm -f $(TARGETS)
