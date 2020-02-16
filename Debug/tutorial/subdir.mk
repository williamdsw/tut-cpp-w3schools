################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tutorial/arrays.cpp \
../tutorial/comments.cpp \
../tutorial/constants.cpp \
../tutorial/do-while.cpp \
../tutorial/example-math.cpp \
../tutorial/for.cpp \
../tutorial/foreach.cpp \
../tutorial/hello-world.cpp \
../tutorial/if-else.cpp \
../tutorial/operators-arithmetic.cpp \
../tutorial/operators-comparison.cpp \
../tutorial/operators-logical.cpp \
../tutorial/output.cpp \
../tutorial/reference.cpp \
../tutorial/switch.cpp \
../tutorial/user-input.cpp \
../tutorial/variables.cpp \
../tutorial/while.cpp 

OBJS += \
./tutorial/arrays.o \
./tutorial/comments.o \
./tutorial/constants.o \
./tutorial/do-while.o \
./tutorial/example-math.o \
./tutorial/for.o \
./tutorial/foreach.o \
./tutorial/hello-world.o \
./tutorial/if-else.o \
./tutorial/operators-arithmetic.o \
./tutorial/operators-comparison.o \
./tutorial/operators-logical.o \
./tutorial/output.o \
./tutorial/reference.o \
./tutorial/switch.o \
./tutorial/user-input.o \
./tutorial/variables.o \
./tutorial/while.o 

CPP_DEPS += \
./tutorial/arrays.d \
./tutorial/comments.d \
./tutorial/constants.d \
./tutorial/do-while.d \
./tutorial/example-math.d \
./tutorial/for.d \
./tutorial/foreach.d \
./tutorial/hello-world.d \
./tutorial/if-else.d \
./tutorial/operators-arithmetic.d \
./tutorial/operators-comparison.d \
./tutorial/operators-logical.d \
./tutorial/output.d \
./tutorial/reference.d \
./tutorial/switch.d \
./tutorial/user-input.d \
./tutorial/variables.d \
./tutorial/while.d 


# Each subdirectory must supply rules for building sources it contributes
tutorial/%.o: ../tutorial/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


