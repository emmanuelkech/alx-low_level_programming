0. **gcc $CFILE -E -o c** This runs a C file that has been saved in the variable _$CFILE_ through the preprocessor and saves the result into another file (_c_) by linking them together (_-o_) <br>
1. **gcc -c $CFILE** This compiles (_-c_) a C file that has been saved in the variable _$CFILE_ but does not link it. Note that at this phase, the extension of the output file is now _.o_ instead of _.c_ <br>
2. **gcc -S $CFILE** This generates the assembly code (_-S_) of a C file that has been saved in the variable _$CFILE_ only. Note that at this phase, the extension of the output file is now _.s_ instead of _.c_ <br>
3. **gcc $CFILE -o cisfun** This compiles a C file that has been saved in a variable _$CFILE_ and creates an executable (_-o_) named _cisfun_ <br>
4. **#include <stdio.h>** Is usually the first line of the C file header. It is a very important C library. It includes _puts_, _printf_ <br>
5. **gcc -S -masm=intel $CFILE** This generates the assembly code in intel syntax (_-masm=intel_) of a C file that has been saved in the variable _$CFILE_ <br>
6. **include <unistd.h>** Is another C library that has the _Write system Call_ <br>
