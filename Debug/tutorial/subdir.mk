################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tutorial/comments.cpp \
../tutorial/constants.cpp \
../tutorial/example-math.cpp \
../tutorial/hello-world.cpp \
../tutorial/if-else.cpp \
../tutorial/operators-arithmetic.cpp \
../tutorial/operators-comparison.cpp \
../tutorial/operators-logical.cpp \
../tutorial/output.cpp \
../tutorial/switch.cpp \
../tutorial/user-input.cpp \
../tutorial/variables.cpp 

OBJS += \
./tutorial/comments.o \
./tutorial/constants.o \
./tutorial/example-math.o \
./tutorial/hello-world.o \
./tutorial/if-else.o \
./tutorial/operators-arithmetic.o \
./tutorial/operators-comparison.o \
./tutorial/operators-logical.o \
./tutorial/output.o \
./tutorial/switch.o \
./tutorial/user-input.o \
./tutorial/variables.o 

CPP_DEPS += \
./tutorial/comments.d \
./tutorial/constants.d \
./tutorial/example-math.d \
./tutorial/hello-world.d \
./tutorial/if-else.d \
./tutorial/operators-arithmetic.d \
./tutorial/operators-comparison.d \
./tutorial/operators-logical.d \
./tutorial/output.d \
./tutorial/switch.d \
./tutorial/user-input.d \
./tutorial/variables.d 


# Each subdirectory must supply rules for building sources it contributes
tutorial/%.o: ../tutorial/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


