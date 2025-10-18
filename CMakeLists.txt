cmake_minimum_required(VERSION 3.12)
project(MyCompiler VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(antlr_runtime)



file(GLOB_RECURSE ANTLR_GENERATED_SOURCES "src/generated/*.cpp")

add_executable(my_compiler
    src/main.cpp
    ${ANTLR_GENERATED_SOURCES}
)


target_include_directories(my_compiler PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/generated
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)


target_link_libraries(my_compiler PRIVATE antlr4_static)

target_compile_definitions(my_compiler PRIVATE 
    PROJECT_SOURCE_DIR="${PROJECT_SOURCE_DIR}"
)

# ========================= Install and Package =========================
include(GNUInstallDirs)
install(TARGETS my_compiler RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/include/json.hpp DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/my_compiler OPTIONAL)

set(CPACK_PACKAGE_NAME "my_compiler")
set(CPACK_PACKAGE_VENDOR "ArabicCompiler")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_PACKAGE_CONTACT "noreply@example.com")
set(CPACK_GENERATOR "TGZ;DEB;RPM")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "ArabicCompiler")
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_RPM_PACKAGE_LICENSE "MIT")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/antlr_runtime/LICENSE.txt")

# WIX (Windows) - only effective on Windows with WiX Toolset installed
set(CPACK_WIX_UPGRADE_GUID "E7C8B18E-5C0C-4F60-8D8F-2C58C61BE0E0")
set(CPACK_WIX_PRODUCT_ICON "${CMAKE_CURRENT_SOURCE_DIR}/antlr_runtime/cmake/antlr4.ico")
set(CPACK_WIX_LICENSE_RTF "${CMAKE_CURRENT_SOURCE_DIR}/antlr_runtime/LICENSE.txt")
include(CPack)

# ========================= Tests (GoogleTest + CTest) =========================
include(CTest)
if (BUILD_TESTING)
    include(FetchContent)
    # Fetch googletest (header-only for users, compiled here for tests)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    )
    # Required for MSVC on Windows; harmless elsewhere
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    add_executable(compiler_tests
        ${ANTLR_GENERATED_SOURCES}
        tests/lexer_test.cpp
        tests/parser_test.cpp
        tests/semantic_test.cpp
    )

    target_include_directories(compiler_tests PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/generated
        ${CMAKE_CURRENT_SOURCE_DIR}/src/include
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

    target_link_libraries(compiler_tests PRIVATE
        GTest::gtest_main
        antlr4_static
    )

    add_test(NAME compiler_tests COMMAND compiler_tests)
endif()
