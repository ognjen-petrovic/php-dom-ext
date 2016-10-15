#include <phpcpp.h>
#include "pugixml.hpp"

#ifndef DOMNODE_H
#define DOMNODE_H

class DOMNode : public Php::Base, public pugi::xml_node
{
    	
	public:
	    /**
	     *  C++ constructor and destructor
	     */
	    DOMNode() = default;
	    virtual ~DOMNode() = default;

};
#endif