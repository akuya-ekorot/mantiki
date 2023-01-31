#ifndef mantiki_debug_h
#define mantiki_debuh_h

#include "chunk.h"

void disassemble_chunk(Chunk *chunk, const char *name);
int disassemble_instruction(Chunk *chunk, int offset);

#endif /* mantiki_debug_h */