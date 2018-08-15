################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tests/FibDigitTest.cpp \
../tests/PiDigitTest.cpp \
../tests/Tests.cpp 

OBJS += \
./tests/FibDigitTest.o \
./tests/PiDigitTest.o \
./tests/Tests.o 

CPP_DEPS += \
./tests/FibDigitTest.d \
./tests/PiDigitTest.d \
./tests/Tests.d 


# Each subdirectory must supply rules for building sources it contributes
tests/%.o: ../tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/preetham/Neon/workspace/Lidar_Test/inc" -I"/home/preetham/Neon/workspace/Lidar_Test/googleTestLib" -O0 -g3 -Wall -std=c++11 -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


