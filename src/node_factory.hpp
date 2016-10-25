#include <phpcpp.h>
#include "pugixml.hpp"
//#include "pugixml.cpp"

#ifndef NODE_FACTORY
#define NODE_FACTORY

bool strequal(const pugi::char_t* src, const pugi::char_t* dst)
{
#ifdef PUGIXML_WCHAR_MODE
    return wcscmp(src, dst) == 0;
#else
    return strcmp(src, dst) == 0;
#endif
}

Php::Value node_factory(pugi::xml_node node)
{
    if (strequal("form", node.name()))
         return Php::Object("ogpe\\HTMLFormElement", new DOMNode(node));
    else
        return Php::Object("ogpe\\DOMNode", new DOMNode(node));
}
#endif