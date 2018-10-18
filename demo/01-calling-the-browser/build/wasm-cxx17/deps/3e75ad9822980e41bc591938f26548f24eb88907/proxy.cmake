# Include the toolchain file 
include( /home/daminetreg/.nxxm/0000000/polly/wasm-cxx17.cmake ) 

# Refine behaviour by giving CMAKE_FIND_ROOT_PATH priority to our sysroot
list(INSERT CMAKE_FIND_ROOT_PATH 0 /home/daminetreg/Documents/presentations/cppcon2018/demo/01-calling-the-browser/build/wasm-cxx17/sysroot )
list(APPEND CMAKE_PREFIX_PATH /home/daminetreg/Documents/presentations/cppcon2018/demo/01-calling-the-browser/build/wasm-cxx17/sysroot/lib/cmake )

# Avoid BOOST autolinking on windows otherwise Hunter produced libs aren't found
add_compile_definitions(BOOST_ALL_NO_LIB=1)
add_compile_definitions( )