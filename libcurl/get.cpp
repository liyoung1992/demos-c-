 size_t writeToStringParas(void *ptr, size_t size, size_t count, void *stream)
{

    ((std::string*)stream)->append((char*)ptr, 0, size* count);
    return size* count;
}
int mian() {
    CURL *curl;
    CURLcode res;
  
    std::string str_url = url.toStdString();
    if(curl) {
        std::string data;
        curl_easy_setopt(curl, CURLOPT_URL, str_url.c_str());
        //忽略证书检查
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
        //        curl_easy_setopt(curl,CURLOPT_PROXYTYPE,CURLPROXY_SOCKS5);
//        curl_easy_setopt(curl,CURLOPT_PROXY,proxy_host.c_str());
//        curl_easy_setopt(curl,CURLOPT_PROXYPORT,proxy_port);
        curl_easy_setopt(curl,CURLOPT_PROXY,"192.168.1.2");
        curl_easy_setopt(curl,CURLOPT_PROXYPORT,52525);
        /* example.com is redirected, so we tell libcurl to follow redirection */
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        //        curl_easy_setopt( curl, CURLOPT_VERBOSE, 1L ); //在屏幕打印请求连接过程和返回http数据
        curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5);//接收数据时超时设置，如果5秒内数;据未接收完，直接退出
        //        curl_easy_setopt(curl, CURLOPT_REFERER, "");
        //add useragent to slove the
        curl_easy_setopt(curl, CURLOPT_USERAGENT,
                         "Mozilla/5.0 (Windows NT 6.1; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.36");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeToStringParas);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);


        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);

        /* Check for errors */
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
//            LOGD << "request Url:" << url.toStdString()<< "error:" <<  curl_easy_strerror(res);
        }
        curl_easy_cleanup(curl);
    }
}