################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AnimalShelter.cpp \
../src/Program.cpp \
../src/Shelter.cpp 

OBJS += \
./src/AnimalShelter.o \
./src/Program.o \
./src/Shelter.o 

CPP_DEPS += \
./src/AnimalShelter.d \
./src/Program.d \
./src/Shelter.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


