#include <phpcpp.h>
#include "DOMNode.hpp"
#include "DOMDocument.hpp"

extern "C" {
    PHPCPP_EXPORT void *get_module() {
        static Php::Extension myExtension("ogpe-dom", "0.0.1");
        Php::Namespace myNamespace("ogpe");
        
        Php::Class<DOMNode> DOMNode("DOMNode");
        
        Php::Class<DOMDocument> DOMDocument("DOMDocument");


        DOMDocument.extends(DOMNode);

        myNamespace.add(std::move(DOMNode));
        myNamespace.add(std::move(DOMDocument));

        myExtension.add(std::move(myNamespace));
    
        return myExtension;
    }
}
