add_executable(
        template.c
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries( pico_stdlib pico_cyw43_arch_none)

set_target_properties( PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ""
)

# enable usb output, disable uart output
pico_enable_stdio_usb( 1)
pico_enable_stdio_uart( 1)

# create map/bin/hex file etc.
pico_add_extra_outputs()
