################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../functions/example-function.cpp \
../functions/example-parameters.cpp 

OBJS += \
./functions/example-function.o \
./functions/example-parameters.o 

CPP_DEPS += \
./functions/example-function.d \
./functions/example-parameters.d 


# Each subdirectory must supply rules for building sources it contributes
functions/%.o: ../functions/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


