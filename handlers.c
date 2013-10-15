enum http_method {GET,POST};

struct handler {
	http_method method;
	char* path;
	void (*function) (int headerCount, char** headers, int socketfd);
}

struct handler handlers[] {
 {GET, "/", rootHandler},
 {PUT, "/login", loginHandler}
}

