CC = gcc
src = $(wildcard *.c)
obj = $(src:.c=.o)
dep = $(obj:.o=.d)  # one dependency file for each source
LDFLAGS = -Wall -Wextra -Werror
rush-02: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)
-include $(dep)   # include all dep files in the makefile
# rule to generate a dep file by using the C preprocessor
# (see man cpp for details on the -MM and -MT options)
%.d: %.c
	@$(CPP) $(CFLAGS) $< -MM -MT $(@:.d=.o) >$@
.PHONY: clean
clean:
	rm -f $(obj) rush-02
.PHONY: cleandep
cleandep:
	rm -f $(dep)