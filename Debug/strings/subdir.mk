################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../strings/access.cpp \
../strings/concatenation.cpp \
../strings/length.cpp 

OBJS += \
./strings/access.o \
./strings/concatenation.o \
./strings/length.o 

CPP_DEPS += \
./strings/access.d \
./strings/concatenation.d \
./strings/length.d 


# Each subdirectory must supply rules for building sources it contributes
strings/%.o: ../strings/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


