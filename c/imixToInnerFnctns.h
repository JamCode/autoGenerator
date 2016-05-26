#ifndef _IMIXTOINNERFNCTNS_H_
#define _IMIXTOINNERFNCTNS_H_

#include "fieldMacroDefine.h"
#include "DataCtgry.h"

typedef INT (*getLevel)(INDC);

BOOL getNodes(FIELD_DETAILS* all_field_array,
    COUNT all_field_array_length,
    FIELD_DETAILS *field_array,
    COUNT *filed_array_length,
    getLevel callFunc);

void getChild(FIELD_DETAILS* all_field_array,
    COUNT all_field_array_length,
    FIELD_DETAILS* field_ele,
    FIELD_DETAILS* all_child_field_array,
    COUNT* all_child_field_array_length,
    getLevel callFunc);

void getChildByIndex(FIELD_DETAILS* all_child_field_array,
    COUNT all_child_field_array_length,
    COUNT index,
    FIELD_DETAILS* child_field_array,
    COUNT* child_field_array_length);

#endif
