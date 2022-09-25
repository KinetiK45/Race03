CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -Werror
LANG = clang

PROJ_NAME = Race03
EXEC_NAME = matrix_rain

.PHONY: all clean uninstall reinstall

all: $(PROJ_NAME)

$(PROJ_NAME):
	mkdir -p ./obj
	mkdir -p ./temp
	cp ./inc/* ./temp/
	cp ./src/* ./temp/
	$(LANG) $(CFLAGS) ./temp/*.c -include ./temp/*.h -c
	rm -rf ./temp
	mv *.o ./obj
	$(LANG) $(CFLAGS) -lncurses ./obj/* -o $(EXEC_NAME)
	rm -rf ./obj

uninstall:
	rm -rf ./obj $(EXEC_NAME)
	
clean:
	rm -rf ./obj

reinstall: uninstall $(PROJ_NAME)
