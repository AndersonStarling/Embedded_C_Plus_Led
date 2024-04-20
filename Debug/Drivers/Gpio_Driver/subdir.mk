################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/Gpio_Driver/Gpio.cpp 

OBJS += \
./Drivers/Gpio_Driver/Gpio.o 

CPP_DEPS += \
./Drivers/Gpio_Driver/Gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Gpio_Driver/%.o Drivers/Gpio_Driver/%.su Drivers/Gpio_Driver/%.cyclo: ../Drivers/Gpio_Driver/%.cpp Drivers/Gpio_Driver/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/Led_Base -I../Drivers/Mcal_Name_Space -I../Drivers/Led_Port -I../Drivers/Led_Pwm -I../Drivers/Pwm_Class -I../Drivers/Peripheral_Access_Layer -I../Drivers/Gpio_Driver -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Gpio_Driver

clean-Drivers-2f-Gpio_Driver:
	-$(RM) ./Drivers/Gpio_Driver/Gpio.cyclo ./Drivers/Gpio_Driver/Gpio.d ./Drivers/Gpio_Driver/Gpio.o ./Drivers/Gpio_Driver/Gpio.su

.PHONY: clean-Drivers-2f-Gpio_Driver

