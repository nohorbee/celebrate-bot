// Handlers
void congratulateHandler(WebServer &server, WebServer::ConnectionType verb, String uriParams, String queryParams);
void congratulateHandler(WebServer &server, WebServer::ConnectionType verb, String uriParams, String queryParams) {
  switch (verb)
    {
    case WebServer::POST:
        myServo.write(100);
        delay(5000);
        myServo.write(10);
        server.httpSuccess();
        break;   
    default:
        server.httpFail();
    }
}
