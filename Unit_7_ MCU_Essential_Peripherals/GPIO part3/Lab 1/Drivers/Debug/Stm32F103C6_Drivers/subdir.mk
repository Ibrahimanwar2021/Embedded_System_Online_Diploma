################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stm32F103C6_Drivers/GPIO.c 

OBJS += \
./Stm32F103C6_Drivers/GPIO.o 

C_DEPS += \
./Stm32F103C6_Drivers/GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
Stm32F103C6_Drivers/GPIO.o: ../Stm32F103C6_Drivers/GPIO.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/ibrah/Downloads/workspace_stm32/Drivers/Stm32F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Stm32F103C6_Drivers/GPIO.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

