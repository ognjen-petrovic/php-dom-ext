#include "DOMDocument.hpp"
#include "walkers.hpp"


Php::Value DOMDocument::load(Php::Parameters &params) {
	parse_result = pugi::xml_document::load_file(params[0]);
    if (parse_result)
        return true;
    else
        return false;
}

Php::Value DOMDocument::getElementById(Php::Parameters &params)
{
	walker_by_id walker;
    walker.value = (pugi::char_t*)params[0].stringValue().c_str();
    traverse(walker);
    if (walker.result_node.empty()) {
        return nullptr;
    }
    else {
        return Php::Object("ogpe\\DOMNode", new DOMNode(walker.result_node));
    }

}