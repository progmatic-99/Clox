#include "../headers/common.h"
#include "../headers/chunk.h"
#include "../headers/debug.h"

int main(int argc, const char * argv[]){
	Chunk chunk;
	initChunk(&chunk);
    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT);
    writeChunk(&chunk, constant);

	writeChunk(&chunk, OP_RETURN);
	freeChunk(&chunk);

    disassembleChunk(&chunk, "test chunk");
	return 0;
}