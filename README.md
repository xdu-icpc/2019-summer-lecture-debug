# Lecture on Debug, The 2019 Xidian University ICPC Summer Training

This repository contains all material of this lecture.  You can clone it
and use it under CC-BY 4.0 License.

<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/4.0/">Creative Commons Attribution 4.0 International License</a>.

## Errata

1. [The precision of `double` was presented "48 bits", which is wrong.](https://github.com/xdu-icpc/2019-summer-lecture-debug/commit/a534d3b5ac2044a2095ad1efccb464125b52df5a)
2. [`SIGSEGV` was misspelled `SEGSEGV`.](https://github.com/xdu-icpc/2019-summer-lecture-debug/commit/ae40608f4c28eb276ff2c88ba55471229897a826)
3. The [recent revision of ICPC Final Rule](https://icpc.baylor.edu/xwiki/wiki/public/view/worldfinals/programming-environment?viewer=changes&rev1=166.1&rev2=167.1)
removed the note about stack limit.  It's not yet known if it would be limited
or unlimited.  So the corresponding note in the beamer is
[marked as deleted](https://github.com/xdu-icpc/2019-summer-lecture-debug/commit/3c843d17f515e2da117541a9f2b0eaf3da95c38c).
You may wish to test for the stack limit in ICPC Regional Warmups.
4. One typo in asm\_stack.cc makes the stack size 4 or 8 times of expected.

## Beamer

The beamer, with all errata fixed can be downloaded
[here](https://github.com/xdu-icpc/2019-summer-lecture-debug/releases/download/v3/beamer.pdf).

## Supplementary Material

### Program Source Code

They can be found in the [code](https://github.com/xdu-icpc/2019-summer-lecture-debug/tree/master/code) directory.

### Assertion

Due to an oversight we forgot to discuss the usage of C `assert` macro.
It's extremely useful to detect logical errors early.  It's also a hint to
the people reading the code.  For example, you can put `assert(__gcd(a, M))`
in the BSGS code library to prevent someone (maybe yourself) from misusing
it.

### Reference

1. Slide 6: 
"Testing and debugging consume more than a half of all the time developing
a software":   See F. P. Brooks, Jr., [The Mythical Man-Month: Essays on
Software Engineering](https://www.amazon.com/Mythical-Man-Month-Software-Engineering-Anniversary/dp/0201835959)
2. Slide 10:
"Basketball":  See S. Summit, [C FAQ Question 11.35](http://c-faq.com/ansi/experiment.html)
3. Slide 10:
"Undefined Behavior": Some useful articles can be found in
[my blog](https://bf.mengyan1223.wang/blog/tags/undefined-behavior/).
3. Slide 13:
"Codeforces has 256MB stack":  See M. Mirzayanov,
[About the programming languages](http://codeforces.com/blog/entry/79)
4. Slide 13:
"Unlimited stack of ICPC": See J. Clevenger,
[2018 ACM-ICPC World Finals Programming Environment](https://icpc.baylor.edu/xwiki/wiki/public/viewrev/worldfinals/programming-environment?rev=136.1).
However this note has been removed in 2019, see Errata 3.
4. Slide 15:
"Ariane 5 crash":  See J. L. Lions, et. al.,
[ARIANE 5 Flight 501 Failure](http://sunnyday.mit.edu/accidents/Ariane5accidentreport.html)
5. Slide 32:
"Shrodinger's precision of double on 32-bit machine":  See
GCC Bugzilla, [PR323](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=323)
6. Slide 35-50:
The tools are introduced:  Andrey Vihrov,
[Catching silly mistakes with GCC](https://codeforces.com/blog/entry/15547)
7. Slide 58:
"BAPC 2018":  [Homepage](https://2018.bapc.eu/),
[Codeforces Gym](https://codeforces.com/gym/102007)
7. ISO/IEC JTC 1 SC 22 WG 14,
[Programming Languages - C (Committee Draft N1570)](https://bf.mengyan1223.wang/assets/std/c1x-n1570.pdf)
8. ISO/IEC JTC 1 SC 22 WG 21,
[Working Draft, Standard for Programming Language C++ (N4659)](https://bf.mengyan1223.wang/assets/std/cpp17-n4659.pdf)
