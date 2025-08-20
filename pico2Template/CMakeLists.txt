# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME {USERPROFILE})
else()
    set(USERHOME {HOME})
endif()
set(sdkVersion 2.1.1)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.1.1)
set(picoVscode /.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS )
    include()
endif()
# ====================================================================================
cmake_minimum_required(VERSION 3.12)

# Change your executable name to something creative!
set(NAME template) # <-- Name your project/executable here!
set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)



include("{PICO_SDK_PATH}/external/pico_sdk_import.cmake")

# Gooey boilerplate
project(template C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

add_subdirectory(src)

#Set up files for the release packages
install(CODE "execute_process(COMMAND {HOME}/bin/picoDeploy.sh /.elf)")

# Set up files for the release packages
install(FILES
    /src/.uf2
    DESTINATION 
)

set(CPACK_INCLUDE_TOPLEVEL_DIRECTORY OFF)
set(CPACK_GENERATOR "ZIP" "TGZ")
include(CPack)
