DEFAULT:=ALL
.RECIPEPREFIX:=>
ALL: check

check:
>test -d build || mkdir build

%:%.cc 
>make check
>clang++ $< --std=c++1y -g -o build/$@
>cd build && chmod +x $@ && ./$@
