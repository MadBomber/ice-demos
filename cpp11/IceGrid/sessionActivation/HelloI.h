// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// **********************************************************************

#ifndef HELLO_I_H
#define HELLO_I_H

#include <Hello.h>

class HelloI : public Demo::Hello
{
public:

    HelloI(const std::string&);

    virtual void sayHello(const Ice::Current&) override;

private:

    const std::string _name;
};

#endif
