//
//  SQLResultObject.h
//  1352978
//
//  Created by Breezewish on 13-12-7.
//  Copyright (c) 2013年 Breezewish. All rights reserved.
//

#ifndef ___352978__SQLResultObject__
#define ___352978__SQLResultObject__

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include "MyString.h"
#include "SQLConstants.h"
#include "SQLTableRow.h"

class SQLResultObject
{
public:
    bool ok;
    MyString err;
    int n;
    int execute_time;
    MyString tableName;
    std::vector<int> colTypes;
    std::vector<SQLTableRow> rows;
    
    /*
     错误构造函数
     */
    SQLResultObject(const MyString& error);
    
    /*
     空结果构造函数
     */
    SQLResultObject(int time, const MyString& affect_table);
    
    /*
     无返回构造函数
     */
    SQLResultObject(int time, const MyString& affect_table, int affected_rows);
    
    /*
     返回结果集的构造函数
     */
    SQLResultObject(int time, const MyString& affect_table, const std::vector<SQLTableRow>& _rows, const std::vector<int>& _colTypes);
    
    /*
     输出结果
     */
    void print(std::ostream& s);
    
    /*
     导出结果
     */
    void xport(const MyString& filepath);
    void xport(const char *filepath);
};

#endif /* defined(___352978__SQLResultObject__) */
