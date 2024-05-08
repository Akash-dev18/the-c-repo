print: print.c
	@gcc print.c -o print

help: print
	@echo "-> use could use the binary something like ths"
	@echo " ./print hello"
	@echo "->  After make install"
	@echo " print hello"

install: print.c
	@gcc print.c -o print
	sudo mv print /usr/local/bin

uninstall: 
	sudo rm /usr/local/bin/print

clean: 
	rm  print
