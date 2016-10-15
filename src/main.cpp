#include <phpcpp.h>
#include "DOMNode.hpp"

extern "C" {
    PHPCPP_EXPORT void *get_module() {
        static Php::Extension myExtension("ogpe-dom", "0.0.1");
        Php::Namespace myNamespace("ogpe");
        
        Php::Class<DOMNode> DOMNode("DOMNode");

        myNamespace.add(std::move(DOMNode));

        myExtension.add(std::move(myNamespace));
    
        return myExtension;
    }
}
