################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.cpp 

OBJS += \
./Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.o 

CPP_DEPS += \
./Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Peripheral_Access_Layer/%.o Drivers/Peripheral_Access_Layer/%.su Drivers/Peripheral_Access_Layer/%.cyclo: ../Drivers/Peripheral_Access_Layer/%.cpp Drivers/Peripheral_Access_Layer/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/Led_Base -I../Drivers/Mcal_Name_Space -I../Drivers/Led_Port -I../Drivers/Led_Pwm -I../Drivers/Pwm_Class -I../Drivers/Peripheral_Access_Layer -I../Drivers/Gpio_Driver -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Peripheral_Access_Layer

clean-Drivers-2f-Peripheral_Access_Layer:
	-$(RM) ./Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.cyclo ./Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.d ./Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.o ./Drivers/Peripheral_Access_Layer/Peripheral_Access_Layer.su

.PHONY: clean-Drivers-2f-Peripheral_Access_Layer

