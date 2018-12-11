set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup")

add_executable(text-adventure)
set_property(TARGET text-adventure PROPERTY CXX_STANDARD 17)

# Include all subdirectories
#add_subdirectory()

# Add main source file
target_sources(text-adventure
PRIVATE
  main.cpp
)

# Joshua T. Fisher's function for mimicking directories in VS solution
YTE_Source_Group(CMAKE_CURRENT_LIST_DIR text-adventure)

# Add directories to include path
target_include_directories(text-adventure
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)
