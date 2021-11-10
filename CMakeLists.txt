project(kube_client_cpp)

add_compile_options(-std=c++17)
SET(BUILD_SHARED_LIBS true)

include_directories(
    .
)

add_library(kube_client_cpp
    src/impl/clientset/clientset_impl.cpp
)

target_link_libraries(kube_client_cpp
)