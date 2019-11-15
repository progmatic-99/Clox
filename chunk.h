/* Module to define code representation.
 * "Chunk" refers to blobs of bytecodes.
 */

#ifndef frute_chunk_h
#define frute_chunk_h

#include "common.h"

typedef enum{
	OP_RETURN,
}Opcode;

typedef struct{
	int count;
	int capacity;
	uint8_t *code;
}Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte);

#endif
