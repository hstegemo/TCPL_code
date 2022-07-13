################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../alloc.c \
../getline.c \
../main.c \
../qsort.c \
../readlines.c 

C_DEPS += \
./alloc.d \
./getline.d \
./main.d \
./qsort.d \
./readlines.d 

OBJS += \
./alloc.o \
./getline.o \
./main.o \
./qsort.o \
./readlines.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./alloc.d ./alloc.o ./getline.d ./getline.o ./main.d ./main.o ./qsort.d ./qsort.o ./readlines.d ./readlines.o

.PHONY: clean--2e-

