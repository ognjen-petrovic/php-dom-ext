#include <phpcpp.h>
#include "DOMDocument.hpp"
#include "DOMNode.hpp"
#include "HTMLFormElement.hpp"

extern "C" {
    
    PHPCPP_EXPORT void *get_module() {
        static Php::Extension myExtension("ogpe-dom", "0.0.1");
        Php::Namespace myNamespace("ogpe");
        
        Php::Class<DOMNode>DOMNode("DOMNode");

        Php::Class<DOMDocument> DOMDocument("DOMDocument");
        DOMDocument.method<&DOMDocument::load> ("load");
        DOMDocument.method<&DOMDocument::getElementById> ("getElementById");

        Php::Class<HTMLFormElement> HTMLFormElement("HTMLFormElement");

        DOMDocument.extends(DOMNode);

        myNamespace.add(std::move(DOMNode));
        myNamespace.add(std::move(DOMDocument));
        myNamespace.add(std::move(HTMLFormElement));

        myExtension.add(std::move(myNamespace));
        return myExtension;
    }
}
