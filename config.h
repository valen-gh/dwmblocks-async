#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 60

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0 

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)               \
    X("$SCR/getnet",   	 0,  4) \
    X("$SCR/getupd",   	 0,  3) \
    X("$SCR/spsong",     0,  1) \
    X("$SCR/getvol t",   0,  2) \
    X("$SCR/getdate",    60, 0) \

#endif  // CONFIG_H
