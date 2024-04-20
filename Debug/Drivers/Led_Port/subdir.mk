################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/Led_Port/LedPort.cpp 

OBJS += \
./Drivers/Led_Port/LedPort.o 

CPP_DEPS += \
./Drivers/Led_Port/LedPort.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Led_Port/%.o Drivers/Led_Port/%.su Drivers/Led_Port/%.cyclo: ../Drivers/Led_Port/%.cpp Drivers/Led_Port/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/Led_Base -I../Drivers/Mcal_Name_Space -I../Drivers/Led_Port -I../Drivers/Led_Pwm -I../Drivers/Pwm_Class -I../Drivers/Peripheral_Access_Layer -I../Drivers/Gpio_Driver -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Led_Port

clean-Drivers-2f-Led_Port:
	-$(RM) ./Drivers/Led_Port/LedPort.cyclo ./Drivers/Led_Port/LedPort.d ./Drivers/Led_Port/LedPort.o ./Drivers/Led_Port/LedPort.su

.PHONY: clean-Drivers-2f-Led_Port

