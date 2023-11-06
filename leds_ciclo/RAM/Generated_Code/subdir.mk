################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Generated_Code/CLOCK.c" \
"../Generated_Code/Cpu.c" \
"../Generated_Code/DATO.c" \
"../Generated_Code/EInt1.c" \
"../Generated_Code/LCD1.c" \
"../Generated_Code/LCD2.c" \
"../Generated_Code/LCD3.c" \
"../Generated_Code/LED1.c" \
"../Generated_Code/LED2.c" \
"../Generated_Code/LED3.c" \
"../Generated_Code/LED4.c" \
"../Generated_Code/SERIAL.c" \
"../Generated_Code/TI1.c" \
"../Generated_Code/Vectors.c" \
"../Generated_Code/pinfoto.c" \

C_SRCS += \
../Generated_Code/CLOCK.c \
../Generated_Code/Cpu.c \
../Generated_Code/DATO.c \
../Generated_Code/EInt1.c \
../Generated_Code/LCD1.c \
../Generated_Code/LCD2.c \
../Generated_Code/LCD3.c \
../Generated_Code/LED1.c \
../Generated_Code/LED2.c \
../Generated_Code/LED3.c \
../Generated_Code/LED4.c \
../Generated_Code/SERIAL.c \
../Generated_Code/TI1.c \
../Generated_Code/Vectors.c \
../Generated_Code/pinfoto.c \

OBJS += \
./Generated_Code/CLOCK_c.obj \
./Generated_Code/Cpu_c.obj \
./Generated_Code/DATO_c.obj \
./Generated_Code/EInt1_c.obj \
./Generated_Code/LCD1_c.obj \
./Generated_Code/LCD2_c.obj \
./Generated_Code/LCD3_c.obj \
./Generated_Code/LED1_c.obj \
./Generated_Code/LED2_c.obj \
./Generated_Code/LED3_c.obj \
./Generated_Code/LED4_c.obj \
./Generated_Code/SERIAL_c.obj \
./Generated_Code/TI1_c.obj \
./Generated_Code/Vectors_c.obj \
./Generated_Code/pinfoto_c.obj \

OBJS_QUOTED += \
"./Generated_Code/CLOCK_c.obj" \
"./Generated_Code/Cpu_c.obj" \
"./Generated_Code/DATO_c.obj" \
"./Generated_Code/EInt1_c.obj" \
"./Generated_Code/LCD1_c.obj" \
"./Generated_Code/LCD2_c.obj" \
"./Generated_Code/LCD3_c.obj" \
"./Generated_Code/LED1_c.obj" \
"./Generated_Code/LED2_c.obj" \
"./Generated_Code/LED3_c.obj" \
"./Generated_Code/LED4_c.obj" \
"./Generated_Code/SERIAL_c.obj" \
"./Generated_Code/TI1_c.obj" \
"./Generated_Code/Vectors_c.obj" \
"./Generated_Code/pinfoto_c.obj" \

C_DEPS += \
./Generated_Code/CLOCK_c.d \
./Generated_Code/Cpu_c.d \
./Generated_Code/DATO_c.d \
./Generated_Code/EInt1_c.d \
./Generated_Code/LCD1_c.d \
./Generated_Code/LCD2_c.d \
./Generated_Code/LCD3_c.d \
./Generated_Code/LED1_c.d \
./Generated_Code/LED2_c.d \
./Generated_Code/LED3_c.d \
./Generated_Code/LED4_c.d \
./Generated_Code/SERIAL_c.d \
./Generated_Code/TI1_c.d \
./Generated_Code/Vectors_c.d \
./Generated_Code/pinfoto_c.d \

OBJS_OS_FORMAT += \
./Generated_Code/CLOCK_c.obj \
./Generated_Code/Cpu_c.obj \
./Generated_Code/DATO_c.obj \
./Generated_Code/EInt1_c.obj \
./Generated_Code/LCD1_c.obj \
./Generated_Code/LCD2_c.obj \
./Generated_Code/LCD3_c.obj \
./Generated_Code/LED1_c.obj \
./Generated_Code/LED2_c.obj \
./Generated_Code/LED3_c.obj \
./Generated_Code/LED4_c.obj \
./Generated_Code/SERIAL_c.obj \
./Generated_Code/TI1_c.obj \
./Generated_Code/Vectors_c.obj \
./Generated_Code/pinfoto_c.obj \

C_DEPS_QUOTED += \
"./Generated_Code/CLOCK_c.d" \
"./Generated_Code/Cpu_c.d" \
"./Generated_Code/DATO_c.d" \
"./Generated_Code/EInt1_c.d" \
"./Generated_Code/LCD1_c.d" \
"./Generated_Code/LCD2_c.d" \
"./Generated_Code/LCD3_c.d" \
"./Generated_Code/LED1_c.d" \
"./Generated_Code/LED2_c.d" \
"./Generated_Code/LED3_c.d" \
"./Generated_Code/LED4_c.d" \
"./Generated_Code/SERIAL_c.d" \
"./Generated_Code/TI1_c.d" \
"./Generated_Code/Vectors_c.d" \
"./Generated_Code/pinfoto_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/CLOCK_c.obj: ../Generated_Code/CLOCK.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/CLOCK.args" -o "Generated_Code/CLOCK_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/%.d: ../Generated_Code/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Generated_Code/Cpu_c.obj: ../Generated_Code/Cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/Cpu.args" -o "Generated_Code/Cpu_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/DATO_c.obj: ../Generated_Code/DATO.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/DATO.args" -o "Generated_Code/DATO_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/EInt1_c.obj: ../Generated_Code/EInt1.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/EInt1.args" -o "Generated_Code/EInt1_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LCD1_c.obj: ../Generated_Code/LCD1.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LCD1.args" -o "Generated_Code/LCD1_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LCD2_c.obj: ../Generated_Code/LCD2.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LCD2.args" -o "Generated_Code/LCD2_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LCD3_c.obj: ../Generated_Code/LCD3.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LCD3.args" -o "Generated_Code/LCD3_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LED1_c.obj: ../Generated_Code/LED1.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LED1.args" -o "Generated_Code/LED1_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LED2_c.obj: ../Generated_Code/LED2.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LED2.args" -o "Generated_Code/LED2_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LED3_c.obj: ../Generated_Code/LED3.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LED3.args" -o "Generated_Code/LED3_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LED4_c.obj: ../Generated_Code/LED4.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/LED4.args" -o "Generated_Code/LED4_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/SERIAL_c.obj: ../Generated_Code/SERIAL.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/SERIAL.args" -o "Generated_Code/SERIAL_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TI1_c.obj: ../Generated_Code/TI1.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/TI1.args" -o "Generated_Code/TI1_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Vectors_c.obj: ../Generated_Code/Vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/Vectors.args" -o "Generated_Code/Vectors_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/pinfoto_c.obj: ../Generated_Code/pinfoto.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Generated_Code/pinfoto.args" -o "Generated_Code/pinfoto_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


