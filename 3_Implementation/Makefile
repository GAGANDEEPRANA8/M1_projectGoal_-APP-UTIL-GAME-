PROJ_NAME= complex
SRC=src/main.c\ 
src/complex.c\

TEST_SRC=src/test_complex.c\
unity/unity.c\ 
src/complex.c\

ifdef OS
   RM = del/q
   FixPath = $(subst/,\,$1)
   EXEC = exe 
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
      EXEC = out
   endif
endif
INC=-Iinclude\
-Iunity
Build:
    gcc $(SRC) $(INC) -o $(call Fixpath,$(PROJ_NAME)-$(EXEX))-lm
run:Build
    ./$(call Fixpath,$(PROJ_NAME)-$(EXEX))

Build_test:
    gcc $(TEST_SRC) $(INC) -o $(call Fixpath,$(PROJ_NAME)-$(EXEX))-lm
run_test:Build_test
    ./$(call Fixpath,$(PROJ_NAME)-$(EXEX))