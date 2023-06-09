#ifndef VERBOSE_TOKENS_H
#define VERBOSE_TOKENS_H

// Token naming convention
// keyword/key symbol: KEY_{name}
// literal: LIT_{name} //name of literal type, not the value
// operator: OP_{name}
// identifier: IDENTIFIER

enum Token
{
    TOKEN, //INVALID
    KEY_BEGIN, KEY_END, 
    LIT_FLOAT, LIT_INT,
    OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_H,
    KEY_TERMINATOR,
};

#endif