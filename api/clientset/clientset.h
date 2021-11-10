#pragma once
#include "clientset_options.h"

namespace kube_client_cpp
{
    class Clientset
    {
    public:
        static Clientset& CreateClientset(const ClientsetOptions& options);
    };

}