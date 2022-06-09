DEPS= ll1
compile: main.cpp 
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)

clean: $(DEPS)
	 rm $(DEPS)
