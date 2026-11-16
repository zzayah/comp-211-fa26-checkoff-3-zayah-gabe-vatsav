# Run-Length Encoding (RLE)

Run-length encoding compresses data (lossless) by counting repeated values that appear next to each other. For instance, `AAAAABBB` becomes `4A3B`.

## C Example

`rle.c` finds runs of repeated letters and prints each run's length and letter. The main method shows the output on three different inputs strings.

Use standard gcc-compilation to compile the code:

```bash
gcc rle.c -o rle
./rle
```

Running the code yields:

```text
AAAAAAAAAAAA -> 12A
ABCDEFGH -> 1A1B1C1D1E1F1G1H
ABABABAB -> 1A1B1A1B1A1B1A1B
```

## Interpretation

RLE is exceptionally good at compressing long "runs" of the same value. With that said, it can make data larger when strings are not immediately consecutive, and struggles with patterns. Strings like `ABABAB` are often converted to longer strings with RLE, even while there are repeated characters.

This program is just a small demonstration using letters; RLE can also be used with numbers, pixels, and other types of data. The program here simply prints encoded text rather than creating a compressed file or decoding it.

## Reference

[Run-length encoding (Wikipedia)](https://en.wikipedia.org/wiki/Run-length_encoding)