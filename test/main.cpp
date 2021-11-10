#include <iostream>

#include "api/kube_client.cpp.h"

using namespace kube_client_cpp;

int main()
{
    std::cout << "Test begin" << std::endl;

    ClientsetOptions options {};
    Clientset& clientset = Clientset::CreateClientset(options);
    
    std::cout << "Test end" << std::endl;
    return 0;
}