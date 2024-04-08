#include <stdio.h>
#include "lexical_parser.h"

int main(int argc, char const *argv[])
{
    LexicalStream *lexicalStream = createLexicalStream("test.pl0");

    Token token;
    char tokenStr[100];
    do
    {
        token = nextToken(lexicalStream);
    } while (token.type != NONE);

    freeLexicalStream(lexicalStream);
}
