This repository contains an exploit by Christopher Wade for the
firmware update mechanism of the PN553 NFC chip that was common in
smartphones such as the Pixel 3 XL.

PN547, PN548, PN551 and PN5180 and other chips in the series are
likely also vulnerable.  The PN544 uses an 8051 core instead of Cortex
M, and it is unknown whether it has a similar vulnerability.  The
SN100 adds support for firmware encryption, and this exploit has never
worked there.

This bug was first publicly described in [this blog
post](https://www.pentestpartners.com/security-blog/breaking-the-nfc-chips-in-tens-of-millions-of-smart-phones-and-a-few-pos-systems/)
and at the 25 minute mark of [this Defcon 29
Lecture](https://www.youtube.com/watch?v=z4gIxdFfJDg&t=1543s) on
cracking secure bootloaders.

The bug was reported to NXP in June of 2020, then patched over the
next year until the vulnerability was published in August 2021.
This exploit was published in August of 2023.




