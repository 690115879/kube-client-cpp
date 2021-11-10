project(kube_client_cpp)

add_compile_options(-std=c++17)
SET(BUILD_SHARED_LIBS true)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include_directories(
    .
)

add_library(kube_client_cpp
    src/impl/clientset/clientset_impl.cpp
)

target_link_libraries(kube_client_cpp
)

add_subdirectory(
    test
)