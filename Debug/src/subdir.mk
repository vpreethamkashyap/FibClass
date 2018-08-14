################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Driver.cpp \
../src/FibDigit.cpp \
../src/PiDigit.cpp 

OBJS += \
./src/Driver.o \
./src/FibDigit.o \
./src/PiDigit.o 

CPP_DEPS += \
./src/Driver.d \
./src/FibDigit.d \
./src/PiDigit.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/preetham/Neon/workspace/Lidar_Test/inc" -O0 -g3 -Wall -std=c++11 -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


