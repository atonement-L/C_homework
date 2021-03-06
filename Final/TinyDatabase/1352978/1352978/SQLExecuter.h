//
//  SQLExecuter.h
//  1352978
//
//  Created by Breezewish on 13-12-7.
//  Copyright (c) 2013年 Breezewish. All rights reserved.
//

#ifndef ___352978__SQLExecuter__
#define ___352978__SQLExecuter__

#include <iostream>
#include <vector>
#include <ctime>
#include "SQLConstants.h"
#include "SQLTableHeaderColumn.h"
#include "SQLTableColumn.h"
#include "SQLTableRow.h"
#include "SQLTable.h"
#include "SQLStorage.h"
#include "SQLResultObject.h"
#include "SQLQueryObject.h"

class SQLExecuter
{
private:
    SQLStorage _storage;
    
public:
    SQLExecuter();
    
    SQLResultObject& execute(const SQLQueryObject& query);
    SQLResultObject& import(const char *table, const char *filepath);
    SQLResultObject& import(const MyString& table, const char *filepath);
    void xport(const char *table, const char *filepath);
    void xport(const MyString& table, const MyString& filepath);
    void xport(const MyString& table, const char *filepath);
};


#endif /* defined(___352978__SQLExecuter__) */
