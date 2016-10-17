#include <phpcpp.h>
#include "pugixml.hpp"

#ifndef DOMNODE_H
#define DOMNODE_H

class DOMNode : public Php::Base
{
	private:
    	pugi::xml_node _node;
	public:
	    /**
	     *  C++ constructor and destructor
	     */
	    DOMNode() = default;
	    DOMNode(pugi::xml_node n);
	    virtual ~DOMNode() = default;
};
#endif