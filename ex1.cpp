#include "ex1.h"

int dot(list_t v1, list_t v2){
	// TODO: implement dot function
    int result = 0;
    while(list_isEmpty(v1) || list_isEmpty(v2)){
        result = list_first(v1) * list_first(v2);
	v1 = list_rest(v1);
	v2 = list_rest(v2);
    }
    return result;
}

list_t filter_odd(list_t list){
	// TODO: implement filter_odd function
    list_t temp1 = list_make();
    list_t temp2 = list_make();
    while(!list_isEmpty(list)){
        if(list_first(list) % 2 == 0){
            temp1 = list_make(list_first(list), temp1);
        }
        list = list_rest(list);
    }
    
    while(!list_isEmpty(temp1)){
        temp2 = list_make(list_first(temp1), temp2);
    }
    return temp2;
}

list_t filter(list_t list, bool (*fn)(int)){
	// TODO: implement filter function
    list_t temp1 = list_make();
    list_t temp2 = list_make();
    
    while(!list_isEmpty(list)){
    	if(fn(list_first(list))){
    	    temp1 = list_make(list_first(list), temp1);
    	}
    	list = list_rest(list);
    }
    
    while(!list_isEmpty(temp1)){
    	temp2 = list_make(list_first(temp1), temp2);
    }
    
    return temp2;
}

