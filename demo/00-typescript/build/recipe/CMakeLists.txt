
# This is an #inglued <> generated CMakeLists.txt (https://github.com/header-only/inglued)
# To modify it edit CMakeLists.txt.tpl ( i.e. Generate it with `inglued cmaketpl` )


cmake_minimum_required(VERSION 3.5.0)

##### PLATFORM deps #####
include(HunterGate)
HunterGate(
    URL "https://github.com/nxxm/hunter/archive/nxxm/v0.0.3.tar.gz"
    SHA1 "2d89a86f35c8dc0f3ad8bff0cabedb919e2dc9d4"
)
##### PLATFORM deps #####

project(00-typescript_00-typescript VERSION "0.0.1")
enable_testing()

# Compile with shipped-with headers or without 
option(INGLUED "Enable use of #inglued shipped with dependencies." ON)
option(NXXM_LIB_ONLY "Only installs the lib, don't build anything else." OFF)

# Compile unit tests
option(UNIT_TESTS "Enable Unit Testing" OFF)


# Warning as errors to ensure 00-typescript quality
string(TOUPPER "${CMAKE_CXX_COMPILER_ID}" COMPILER_IN_USE)
if ("${COMPILER_IN_USE}" STREQUAL "GNU" OR "${COMPILER_IN_USE}" MATCHES "CLANG")
	add_definitions(
    -Wall
		#-Werror
		-Wno-unused-local-typedefs
		-Wno-unused-variable
  )
endif()

find_package(Threads)

  hunter_add_package(Boost COMPONENTS )

  find_package(Boost  REQUIRED )



  find_package(cpp-pre_json CONFIG REQUIRED)
  find_package(cpp-pre_type_traits CONFIG REQUIRED)
  find_package(nlohmann_json CONFIG REQUIRED)
  find_package(nxxm_bellevue CONFIG REQUIRED)
  find_package(nxxm_js-bind CONFIG REQUIRED)
  find_package(nxxm_mstch CONFIG REQUIRED)



# Define library
add_library(00-typescript INTERFACE )
add_library(00-typescript_00-typescript::00-typescript ALIAS 00-typescript)

target_include_directories(00-typescript BEFORE INTERFACE 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/../..> 
  $<INSTALL_INTERFACE:${include_install_dir}/>)

#
#target_include_directories(00-typescript INTERFACE 
# deps/cpp-pre/json/)
#
#target_include_directories(00-typescript INTERFACE 
# deps/cpp-pre/type_traits/)
#
#target_include_directories(00-typescript INTERFACE 
# deps/nlohmann/json/)
#
#target_include_directories(00-typescript INTERFACE 
# deps/nxxm/bellevue/)
#
#target_include_directories(00-typescript INTERFACE 
# deps/nxxm/js-bind/)
#
#target_include_directories(00-typescript INTERFACE 
# deps/nxxm/mstch/)
#

target_link_libraries(00-typescript INTERFACE 
    Boost::boost Boost::boost Boost::boost 
    cpp-pre_json::json
    cpp-pre_type_traits::type_traits
    nlohmann_json::json
    nxxm_bellevue::bellevue
    nxxm_js-bind::js-bind
    nxxm_mstch::mstch
  
  ${CMAKE_THREAD_LIBS_INIT}
)

set(include_install_dir "include")

if (NOT NXXM_LIB_ONLY)


  # indexpp
  
  # install shell file in build output
  configure_file(shell-indexpp.html 
    ${CMAKE_CURRENT_BINARY_DIR}/indexpp.html COPYONLY)

  ## compile c++ into wasm (add_library?) with suffix wasm
  add_library(indexpp_impl SHARED indexpp.html.cpp )
  target_include_directories(indexpp_impl PRIVATE ../..) # Fake #include "" location
  set_target_properties(indexpp_impl PROPERTIES 
    SUFFIX ".js"
    LINKER_LANGUAGE CXX
    LANGUAGE CXX )
  target_link_libraries(indexpp_impl 00-typescript_00-typescript::00-typescript)



endif()

if (NOT NXXM_LIB_ONLY)
endif()


# Installing

# Layout. This works for all platforms:
#   * <prefix>/lib/cmake/<PROJECT-NAME>
#   * <prefix>/lib/
#   * <prefix>/include/
set(config_install_dir "lib/cmake/${PROJECT_NAME}")

set(generated_dir "${CMAKE_CURRENT_BINARY_DIR}/generated")

# Configuration
set(version_config "${generated_dir}/${PROJECT_NAME}ConfigVersion.cmake")
set(project_config "${generated_dir}/${PROJECT_NAME}Config.cmake")
set(targets_export_name "${PROJECT_NAME}Targets")
set(namespace "${PROJECT_NAME}::")

# Include module with fuction 'write_basic_package_version_file'
include(CMakePackageConfigHelpers)

# Configure '<PROJECT-NAME>ConfigVersion.cmake'
# Note: PROJECT_VERSION is used as a VERSION
write_basic_package_version_file(
    "${version_config}" COMPATIBILITY SameMajorVersion
)

# Configure '<PROJECT-NAME>Config.cmake'
# Use variables:
#   * targets_export_name
#   * PROJECT_NAME
configure_package_config_file(
    "cmake/modules/Config.cmake.in"
    "${project_config}"
    INSTALL_DESTINATION "${config_install_dir}"
)


# Targets:
install(
    TARGETS 00-typescript
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
    INCLUDES DESTINATION "${include_install_dir}"
)

# Headers:
install(
    DIRECTORY ../../
    DESTINATION "${include_install_dir}"
    FILES_MATCHING PATTERN "*.[ih]*"
     PATTERN ".git/*" EXCLUDE 
 PATTERN "build/*" EXCLUDE 
 PATTERN "deps/*" EXCLUDE 
 PATTERN "doc/*" EXCLUDE 
)



# Config
#   * <prefix>/lib/cmake/00-typescript/00-typescriptConfig.cmake
#   * <prefix>/lib/cmake/00-typescript/00-typescriptConfigVersion.cmake
#   * <prefix>/lib/cmake/00-typescript/00-typescriptTargets.cmake
install(
    FILES "${project_config}" "${version_config}"
    DESTINATION "${config_install_dir}"
)
install(
    EXPORT "${targets_export_name}"
    NAMESPACE "${namespace}"
    DESTINATION "${config_install_dir}"
)

