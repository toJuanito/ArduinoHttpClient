#include "URLParser.h"

void setup() {

    Serial.begin(9600);

    while(!Serial);

    Serial.println("starting");

    ParsedUrl url(
        "https://www.google.com/search?q=arduino"
    );

    Serial.print("parsed url schema: \"");
    Serial.print(url.schema());
    Serial.print("\"\nparsed url host: \"");
    Serial.print(url.host());
    Serial.print("\"\nparsed url path: \"");
    Serial.print(url.path());
    Serial.print("\"\nparsed url query: \"");
    Serial.print(url.query());
    Serial.print("\"\nparsed url userinfo: \"");
    Serial.print(url.userinfo());
    Serial.println("\"");

}

void loop() { }