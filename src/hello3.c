#include <kore/kore.h>
#include <kore/http.h>

int		page(struct http_request *);

int
page(struct http_request *req)
{
        char *hello = "Hello world!";
	http_response(req, 200, hello, strlen(hello));
	return (KORE_RESULT_OK);
}
