################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tutorial/comments.cpp \
../tutorial/hello-world.cpp \
../tutorial/output.cpp 

OBJS += \
./tutorial/comments.o \
./tutorial/hello-world.o \
./tutorial/output.o 

CPP_DEPS += \
./tutorial/comments.d \
./tutorial/hello-world.d \
./tutorial/output.d 


# Each subdirectory must supply rules for building sources it contributes
tutorial/%.o: ../tutorial/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


