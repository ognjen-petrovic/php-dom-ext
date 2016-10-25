#include <phpcpp.h>
#include "pugixml.hpp"
#include "DOMNode.hpp"

#ifndef DOMDOCUMENT_H
#define DOMDOCUMENT_H

class DOMDocument : public Php::Base, public pugi::xml_document
{
	private:
		pugi::xml_parse_result parse_result;
	public:
	    DOMDocument() = default;
	    virtual ~DOMDocument() = default;
	    
	    Php::Value load(Php::Parameters &params);
	    Php::Value getElementById(Php::Parameters &params);

};
#endif