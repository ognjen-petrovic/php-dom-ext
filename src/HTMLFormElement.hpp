#include <phpcpp.h>
#include "pugixml.hpp"
#include "DOMNode.hpp"

#ifndef HTMLFORMELEMENT_H
#define HTMLFORMELEMENT_H

class HTMLFormElement : public DOMNode
{
	private:
    	pugi::xml_node _node;
	public:
	    HTMLFormElement() = default;
	    HTMLFormElement(pugi::xml_node n);
	    virtual ~HTMLFormElement() = default;
};
#endif