################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../classes/car.cpp \
../classes/employee.cpp \
../classes/programmer.cpp 

OBJS += \
./classes/car.o \
./classes/employee.o \
./classes/programmer.o 

CPP_DEPS += \
./classes/car.d \
./classes/employee.d \
./classes/programmer.d 


# Each subdirectory must supply rules for building sources it contributes
classes/%.o: ../classes/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


