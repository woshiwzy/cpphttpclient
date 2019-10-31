//
//  main.cpp
//  CPP
//
//  Created by wangzy on 2019/10/31.
//  Copyright © 2019 wangzy. All rights reserved.
//

#include <iostream>
#include "http_client.h"


void handle_func(std::string rsp)
{
    // do sth according to rsp
    std::cout << "http rsp1: " << rsp << std::endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
  
    
    std::string url1 = "http://www.baidu.com";
    HttpClient::SendReq(url1, handle_func);
    
    
    std::string url2 = "http://127.0.0.1:7999/api/fun2";
    HttpClient::SendReq(url2, [](std::string rsp) {
        std::cout << "http rsp2====》: " << rsp << std::endl;
    });

    
    std::cout << "Hello, World!\n";
    
    return 0;
}
