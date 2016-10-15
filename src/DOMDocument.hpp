#include <phpcpp.h>
#include "pugixml.hpp"
#include "DOMNode.hpp"

#ifndef DOMDOCUMENT_H
#define DOMDOCUMENT_H

class DOMDocument : public DOMNode
{
    	
	public:
	    /**
	     *  C++ constructor and destructor
	     */
	    DOMDocument() = default;
	    virtual ~DOMDocument() = default;

};
#endif