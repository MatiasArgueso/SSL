#Makes TablaDeConversiones.exe y ConversionTest.exe
#2021
#Matias Argüeso

BIN = TablaDeConversion.exe
#BIN = ConversionTest.exe
OBJ = TablaDeConversion.o Conversion.o
#OBJ = ConversionTest.o Conversion.o
CC = gcc
CFLAGS = -std=c11 

TablaDeConversion.exe :	$(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

#ConversionTest.exe : $(OBJ)
#	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

#$(BIN) :	$(OBJ)
#	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

TablaDeConversion.o: TablaDeConversion.c Conversion.h
	$(CC) -c TablaDeConversion.c -o TablaDeConversion.o $(CFLAGS)

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) -c ConversionTest.c -o ConversionTest.o $(CFLAGS)

Conversion.o: Conversion.h Conversion.c
	$(CC) -c Conversion.c -o Conversion.o $(CFLAGS)
