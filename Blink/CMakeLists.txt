cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(Blink)

pico_sdk_init()

add_executable(Blink
	Blink.c
)

pico_add_extra_outputs(Blink)

target_link_libraries(Blink pico_stdlib)

pico_enable_stdio_usb(Blink 1)
pico_enable_stdio_uart(Blink 0)
