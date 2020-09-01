# 2020-09-01 Simple Rust function for AIX

1. Compile rustc with patched LLVM (using x.py)
2. Compile libsmalllib.a (using cargo)
3. Convert libsmalllib.a AR format to AIX
4. Compile test.c with libsmalllib.a
