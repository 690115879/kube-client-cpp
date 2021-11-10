project(kube_client_cpp_test)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(PROJECT_BASE_PATH ..)

include_directories(
    ${PROJECT_BASE_PATH}
)

add_executable(kube_client_cpp_test
    main.cpp
)

target_link_libraries(kube_client_cpp_test
    kube_client_cpp
)