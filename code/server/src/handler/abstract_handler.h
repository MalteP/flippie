#ifndef ABSTRACT_HANDLER_H
#define ABSTRACT_HANDLER_H

#include <ESP8266WebServer.h>

class AbstractHandler : public RequestHandler {
public:
   virtual bool canHandle(HTTPMethod method, const String& uri) override { return false; };
   virtual bool handle(ESP8266WebServer& server, HTTPMethod method, const String& uri) override { return false; };

   String argsToString(ESP8266WebServer& server);
   
};

#endif
