 
size_t writeToStringPost(void *ptr, size_t size, size_t count, void *stream)
{

    ((std::string*)stream)->append((char*)ptr, 0, size* count);
    return size* count;
}
 int mian() {
	 
    struct curl_httppost *post=NULL;
    struct curl_httppost *last=NULL;
    curl_formadd(&post,
                 &last,
                 CURLFORM_COPYNAME, "method",
                 CURLFORM_COPYCONTENTS, "search", CURLFORM_END);

    curl_formadd(&post,
                 &last,
                 CURLFORM_COPYNAME, "domain",
                 CURLFORM_COPYCONTENTS, domain.toStdString().c_str(), CURLFORM_END);

    curl_formadd(&post,
                 &last,
                 CURLFORM_COPYNAME, "type",
                 CURLFORM_COPYCONTENTS, "", CURLFORM_END);
      CURL *curl;
    CURLcode res;
    /* get a curl handle */
    //        curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if(curl) {
        std::string data = "";
        //        struct curl_httppost *post=NULL;
        //        struct curl_httppost *last=NULL;
        /* First set the URL that is about to receive our POST. This URL can
         just as well be a https:// URL if that is what should receive the
         data. */
        curl_easy_setopt(curl, CURLOPT_URL, r_url.c_str());
        curl_easy_setopt(curl, CURLOPT_NOSIGNAL,1L);
        /* Now specify the POST data */

        curl_easy_setopt(curl, CURLOPT_HTTPPOST, post);
        //
        //          curl_easy_setopt(curl, CURLOPT_POSTFIELDS, paras.toStdString().c_str());
        curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10);//接收数据时超时设置，如果5秒内数;据未接收完，直接退出
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeToStringPost);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if(res != CURLE_OK){
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);

        return QString::fromStdString(data);
    }
 }