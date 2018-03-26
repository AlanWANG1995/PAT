DEFAULT:=ALL
.RECIPEPREFIX:=>
ALL: check

check:
>test -d build || mkdir build

%:%.cc 
>clang++ $< --std=c++1y -o build/$@
>cd build && chmod +x $@ && ./$@