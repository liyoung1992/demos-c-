[源代码下载地址](http://www.unpbook.com/src.html)

最近在看Unix网络编程，1.2节给了一个简单的客户端的例子，功能是利用TCP协议获取服务器的时间，我先把下载的源代码到Ubuntu上面，然后解压

tar -xzvf upv13e.tar.gz

打开解压的目录，发现有个readme文件

QUICK AND DIRTY ===============

Execute the following from the src/ directory:

    ./configure    # try to figure out all implementation differences

    cd lib         # build the basic library that all programs need     make           # use "gmake" everywhere on BSD/OS systems

    cd ../libfree  # continue building the basic library     make

    cd ../libroute # only if your system supports 4.4BSD style routing sockets     make           # only if your system supports 4.4BSD style routing sockets

    cd ../libxti   # only if your system supports XTI     make           # only if your system supports XTI

    cd ../intro    # build and test a basic client program     make daytimetcpcli     ./daytimetcpcli 127.0.0.1

If all that works, you're all set to start compiling individual programs.

Notice that all the source code assumes tabs every 4 columns, not 8.

按照步骤，先执行 ./configure

再进入 lib目录 cd lib

make

进入libfree目录 cd ../libfree  然后 make

会有一些警告，忽略就行了，剩下两个make 不成功也没关系 

后面最重要的一步

./daytimetcpcli 127.0.0.1后发现报错，Connection Refused

这个版本的Ubuntu默 认是不开daytime服务的，需要开启daytime服务，就在你当前的目录ls你可以看到有个daytimetcpsrv文件，执行sudo   ./daytimetcpsrv。它的功能就是开启本机的daytime服务，然后你再开启一个终端，敲击./daytimetcpcli 127.0.0.1，就可以看见时间了