rm -rf build-*/ install/ .bdep/

bdep init -C build-msvc/    @msvc   cc config.cxx=cl      config.c=cl    "config.cc.poptions = /W4"
bdep init -C build-clang/   @clang  cc config.cxx=clang++ config.c=clang "config.cc.poptions = -Wall -Wpedantic"


