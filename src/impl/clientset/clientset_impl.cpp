#include "clientset_impl.h"

namespace kube_client_cpp
{
    Clientset& Clientset::CreateClientset(const ClientsetOptions& options)
    {
        static ClientsetImpl obj;
        return obj;
    }
}