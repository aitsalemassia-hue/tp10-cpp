################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../exercice1/Programme.cpp 

CPP_DEPS += \
./exercice1/Programme.d 

OBJS += \
./exercice1/Programme.o 


# Each subdirectory must supply rules for building sources it contributes
exercice1/%.o: ../exercice1/%.cpp exercice1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-exercice1

clean-exercice1:
	-$(RM) ./exercice1/Programme.d ./exercice1/Programme.o

.PHONY: clean-exercice1

