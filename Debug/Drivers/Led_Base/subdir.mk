################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/Led_Base/LedBase.cpp 

OBJS += \
./Drivers/Led_Base/LedBase.o 

CPP_DEPS += \
./Drivers/Led_Base/LedBase.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Led_Base/%.o Drivers/Led_Base/%.su Drivers/Led_Base/%.cyclo: ../Drivers/Led_Base/%.cpp Drivers/Led_Base/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/Led_Base -I../Drivers/Mcal_Name_Space -I../Drivers/Led_Port -I../Drivers/Led_Pwm -I../Drivers/Pwm_Class -I../Drivers/Peripheral_Access_Layer -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Led_Base

clean-Drivers-2f-Led_Base:
	-$(RM) ./Drivers/Led_Base/LedBase.cyclo ./Drivers/Led_Base/LedBase.d ./Drivers/Led_Base/LedBase.o ./Drivers/Led_Base/LedBase.su

.PHONY: clean-Drivers-2f-Led_Base

