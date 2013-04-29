Notes on C
-------------

- In C variables are usually declared at the beginning of the function before
  any executable statements

- 16-bit ints = x where -32768 <= x <= 32767
- A float number is typically a 32-bit quantity with six significant digits,
  with a magnitude between about 10^-38 and 10^38

  let's test this by checking out the overflow, how would you detect an overflow?

  ( see aside1-2.cc )

  It seems that the int values are -2147483648 <= int <= 2147483647
  Q: Why is it off by one? Is this some sort of 2's compliment thing?
  A: TODO

  Q: What is this value mean really?
  A: (2^32)/2 (remember it has to store for negative numbers and postiive)

  When checking the overflow was getting some weirdness with print statements
  not appearing when expected.  Probably due to the stream buffer not being flushed

1.5.1 File Copying
  - subtle point, char isn't big enough to hold EOF, so we must use an int
  - EOF is defined in stdio.h

1.5.3
  - can't seem to match the Mac delete key to the backslash escape code \b
1.5.4
  - Ex 1-12, having trouble with input that starts with leading spaces
