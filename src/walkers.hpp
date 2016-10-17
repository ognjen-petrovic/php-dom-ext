#include "pugixml.hpp"

#ifndef WALKERS
#define WALKERS
struct walker_by_id: pugi::xml_tree_walker
{
    pugi::xml_node result_node;
    pugi::char_t* value;
    virtual bool for_each(pugi::xml_node& node)
    {

        result_node = node.find_child_by_attribute("id", value);

        if (result_node != NULL)
            return false;
        else
            return true; // continue traversal
    }
};
#endif