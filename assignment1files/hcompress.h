#ifndef HCOMPRESS_H_
#define HCOMPRESS_H_

struct tnode;
tnode* createFreqTable(char* filename);
tnode* createHuffmanTree(tnode* leafNodes);
void encodeFile(String filename);
void decodeFile(String filename);


#endif
