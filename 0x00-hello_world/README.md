0. **gcc $CFILE -E -o c** This runs a C file that has been saved in the variable _$CFILE_ through the preprocessor and saves the result into another file (_c_) by linking them together (_-o_) <br>
1. **gcc -c $CFILE** This compiles a C file that has been saved in the variable _$CFILE_ but does not link it. Note that at this phase, the extension of the C file is now _.o_ instead of _.c_ <br>
