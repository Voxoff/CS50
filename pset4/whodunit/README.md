# Questions

## What's `stdint.h`?

 Stdin.h is a header that defines all several new datatypes. These include: exact-width int types; least-width int types; fastest int type; pointer int type (which will hold a ptr) and Max0-width int type ( which will have the largest int type).

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

uint8_t, uint16_t and  uint32_t are of the of the form uint N_t. These are exact-width int types which are unsigned. They represent an unsigned int type of a width of exactly 8, 16 and 32 bts. int32_t is the same but of a signed type.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

A BYTE is 8 bits, a DWORD is 32 bits, a LONG is 32 bits and a WORD is 16 bits.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

 The first two bits must be the bftype which states that the file type is a BitMap.

## What's the difference between `bfSize` and `biSize`?

bfSize is part of the BITMAPFILEHEADER whereas biSize is part of the BITMAPINFOHEADER. So the bfSize is the size, in bytes, of the actual bitmap file. biSize is the number of bits required.

## What does it mean if `biHeight` is negative?

 biHeight is the height of the bitmap in pixels. If it is negative then the DIB is top-down (so it cannot be compressed) and bicompression must be either BI_RGB or BI_BITFIELDS>.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

TODO

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

If there is no file to open. Or a pointer error

## Why is the third argument to `fread` always `1` in our code?

The fread fuction has four parameters: buffer, size, count, stream. The count is the maximum number of files to be read. We only want 1 program read.


## What value does line 65 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?



## What does `fseek` do?

fseek sets the file position of the stream to the offset. The offset is the number of bytes of offset from whence(the last parameter).


## What is `SEEK_CUR`?

SEEK_CUR states that the offset provided is relevant to the current file position


## Whodunit?

Rob Bowden
