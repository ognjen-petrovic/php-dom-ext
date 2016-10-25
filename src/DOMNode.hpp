#include <phpcpp.h>
#include "pugixml.hpp"

#ifndef DOMNODE_H
#define DOMNODE_H

class DOMNode : public Php::Base
{
	protected:
    	pugi::xml_node _node;
	public:
	    DOMNode() = default;
	    DOMNode(pugi::xml_node n);
	    virtual ~DOMNode() = default;
};
#endif