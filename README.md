### types

Common types

- char, 255, 1 byte (8bits)
- short, 65000, 2 bytes (16bits)
- int, 4 Billion, 4 bytes (32bits)
- long, 4 Billion, 4 bytes (32bits)
- long long, Huge numbers, 8 bytes (64bits)

Unsigned types ::

- unsigned int, can't contain negative numbers
- signed int, can have negatives

TIP: We have fixed integers which are defined in stdint.h and they are defined;

- int8_t, integer which is 8bits equivalent to 1 byte
- uint64_t, unsigned integer which is 64bits or 8 bytes

Below types allow allow numbers on the right side of the decimal point. Integer
can't have decimals.

- float,
- double,


- arrays, a list of items declared by specifyin it's size e.g. char x[50]