# pico_c_projects

The followings structures and commands are for using with Linux PCs. THIS IS FOR STANDALONE TOOLCHAIN WITH DEBUGGING IN VSCODE


Project structure:

my_proyect/
├── CMakeLists.txt             <-- Principal, configura el proyecto
├── pico_sdk_import.cmake     <-- Importa el Pico SDK (puede venir del SDK o vía path)
├── src/                      <-- Código fuente principal
│   ├── main.c
│   └── CMakeLists.txt        <-- Archivos fuente en src/
├── include/                  <-- (Opcional) Headers personalizados - NO SE CREA CON EL SCRIPT
│   └── funciones.h
├── build/                    <-- Se debe crear manualmente antes de compilar - NO SE CREA CON EL SCRIPT
├── README.md                 <-- Documentación opcional - NO SE CREA CON EL SCRIPT
├── .vscode/                  <-- Carpeta con archivos .json para poder trabajar con vscode 
    ├── settings.json
    └── c_cpp_properties.json
    └── cmake-kits.json
    └── extensions.json
    └── launch.json
    └── tasks.json




###################################################################################################################################################################################################################################################################
                                                                                                     Edit ~/.bashrc
###################################################################################################################################################################################################################################################################

🚀 You need to do

1. Edit your ~/.bashrc file, add the next line:

export PICO_SDK_PATH=${HOME}/pico/pico-sdk
export PICO_EXAMPLES_PATH=${HOME}/pico/pico-examples
export PICO_EXTRAS_PATH=${HOME}/pico/pico-extras
export PICO_PLAYGROUND_PATH=${HOME}/pico/pico-playground
export PICO_SWD="DEBUGPROBE"
export CMAKE_GENERATOR=Ninja

2. Reload: source ~/.bashrc





###################################################################################################################################################################################################################################################################
                                                                                                    Files: flash.sh, pico2Debug.sh, picoDebug.sh, picoDeply.sh
###################################################################################################################################################################################################################################################################

🚀 How to use it

1. create a bin folder in /home/your_user: home/your_user/bin

2. Move files: flash.sh, pico2Debug.sh, picoDebug.sh, picoDeply.sh to bin folder 

3. Edit your ~/.bashrc an add: export PATH="$HOME/bin:$PATH"





###################################################################################################################################################################################################################################################################
                                                                                                      Files: create_pico2_project.sh / create_pico2w_project.sh
###################################################################################################################################################################################################################################################################

🚀 How to use it

1. Give permit: chmod +x create_pico2_project.sh / create_pico2w_project.sh

2. Execute: ./create_pico2_project.sh project_2_temp / create_pico2w_project.sh project_2w_temp

3. Move your project_2_temp folder wherever you want.

4. Hack the world!





###################################################################################################################################################################################################################################################################
                                                                                                     Compile, Deploy, Debug and HACK THE WORLD
###################################################################################################################################################################################################################################################################

🚀 How to compile:


Normal:
- Project Folder:
  - mkdir build
  - cd build
  - cmake ..
  - ninja
  - ninja flash (Deploy binary to Pico)

Debug mode:
- Project Folder:
  - mkdir build
  - cd build
  - cmake -DCMAKE_BUILD_TYPE=Debug ..
  - ninja
  - ninja flash (Deploy binary to Pico)
  - pico2Debug.sh
  - VSCode:
        - Open the project folder on vscode
        - go to debug
        - select debug with OPENOCD
        - Start debugging and select the pico option 





###################################################################################################################################################################################################################################################################
