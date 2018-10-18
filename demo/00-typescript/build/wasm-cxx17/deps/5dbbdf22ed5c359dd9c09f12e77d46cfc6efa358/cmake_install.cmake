# Install script for directory: /home/daminetreg/.nxxm/0000000/gh/cpp-pre/type_traits/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/build/recipe

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/daminetreg/Documents/presentations/cppcon2018/demo/00-typescript/build/wasm-cxx17/sysroot")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/daminetreg/.nxxm/0000000/gh/cpp-pre/type_traits/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/build/recipe/../../" FILES_MATCHING REGEX "/[^/]*\\.[ih][^/]*$" REGEX "/\\.git\\/[^/]*$" EXCLUDE REGEX "/build\\/[^/]*$" EXCLUDE REGEX "/deps\\/[^/]*$" EXCLUDE REGEX "/doc\\/[^/]*$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/cpp-pre_type_traits" TYPE FILE FILES
    "/home/daminetreg/Documents/presentations/cppcon2018/demo/00-typescript/build/wasm-cxx17/deps/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/generated/cpp-pre_type_traitsConfig.cmake"
    "/home/daminetreg/Documents/presentations/cppcon2018/demo/00-typescript/build/wasm-cxx17/deps/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/generated/cpp-pre_type_traitsConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cpp-pre_type_traits/cpp-pre_type_traitsTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cpp-pre_type_traits/cpp-pre_type_traitsTargets.cmake"
         "/home/daminetreg/Documents/presentations/cppcon2018/demo/00-typescript/build/wasm-cxx17/deps/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/CMakeFiles/Export/lib/cmake/cpp-pre_type_traits/cpp-pre_type_traitsTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cpp-pre_type_traits/cpp-pre_type_traitsTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/cpp-pre_type_traits/cpp-pre_type_traitsTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/cpp-pre_type_traits" TYPE FILE FILES "/home/daminetreg/Documents/presentations/cppcon2018/demo/00-typescript/build/wasm-cxx17/deps/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/CMakeFiles/Export/lib/cmake/cpp-pre_type_traits/cpp-pre_type_traitsTargets.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/daminetreg/Documents/presentations/cppcon2018/demo/00-typescript/build/wasm-cxx17/deps/5dbbdf22ed5c359dd9c09f12e77d46cfc6efa358/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
