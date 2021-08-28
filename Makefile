CC := gcc

TASK_1 := binary_operations

.PHONY: all $(TASK_1) clean

all: $(TASK_1)

debug: CFLAGS += -g
debug: all

$(TASK_1): $(TASK_1).c
	$(CC) $(CFLAGS) $(TASK_1).c -o  $(TASK_1)

clean:
	rm -rf $(TASK_1)
