#ifndef DATA_HANDLER_H
#define DATA_HANDLER_H

#include <time.h>
#include "basic_sort/header/data.h"

BS_S_ARRAY *dh_generate_radom_array(const unsigned long long int culli_length);
bool dh_save(const BS_S_ARRAY *cs_array, const char *ccp_file_path);
BS_S_ARRAY *dh_load(const char *ccp_file_path);

#endif