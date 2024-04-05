################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/Mcal_Name_Space/Mcal_Name_Space.cpp 

OBJS += \
./Drivers/Mcal_Name_Space/Mcal_Name_Space.o 

CPP_DEPS += \
./Drivers/Mcal_Name_Space/Mcal_Name_Space.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Mcal_Name_Space/%.o Drivers/Mcal_Name_Space/%.su Drivers/Mcal_Name_Space/%.cyclo: ../Drivers/Mcal_Name_Space/%.cpp Drivers/Mcal_Name_Space/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/Led_Base -I../Drivers/Mcal_Name_Space -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Mcal_Name_Space

clean-Drivers-2f-Mcal_Name_Space:
	-$(RM) ./Drivers/Mcal_Name_Space/Mcal_Name_Space.cyclo ./Drivers/Mcal_Name_Space/Mcal_Name_Space.d ./Drivers/Mcal_Name_Space/Mcal_Name_Space.o ./Drivers/Mcal_Name_Space/Mcal_Name_Space.su

.PHONY: clean-Drivers-2f-Mcal_Name_Space

