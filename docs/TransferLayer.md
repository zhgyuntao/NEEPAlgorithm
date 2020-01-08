传输层

UDP
TCP

功能 工作方式 原理
UDP TCP 首部格式 可靠传输 流量控制 拥塞控制 连接管理
TCP报文分析 流量控制 拥塞控制机制

传输层能为应用程序提供可靠的服务
只有主机的协议栈才有传输层和应用层。

传输层的功能
提供应用进程间的逻辑通信
复用和分用
对收到的报文进行差错检测（首部和数据）（网络层只检查IP数据报的首部）
提供两种不同的传输协议

关于端口
数据链路层的SAP是MAC地址，网络层的SAP是IP地址，传输层的SAP是端口
传输层使用的软件端口

端口号
FTP TELNET SMTP DNS TFTP HTTP SNMP
21  23     25   53  69   80   161

套接字
(主机IP地址，端口号)

TCP 
文件传输协议 FTP
超文本传输协议 HTTP 
远程登录 TELNET

UDP
小文件传送协议 TFTP
DNS
RTP

IP数据报和UDP数据报
IP数据报在网络层要经过路由的存储转发；
而UDP数据报在传输层的端到端的逻辑信道中传输，封装成IP数据报在网络层中传输时，UDP数据报的信息对路由是不可见的。

习题总结
可靠传输协议中的可靠是指 使用确认机制来确保传输的数据不会丢失
TCP 有确认，所以可靠
UDP 无确认，所以不可靠
可靠之关键，在于确认

一个TCP报文的首部长度是20B，一个IP数据报的长度是20B


若用户程序使用UDP进行数据传输，则应用层协议必须承担可靠性方面的全部工作
由上层承担可靠性。


UDP
在IP的数据报服务之上，添加了复用、分用、差错检测
UDP首部8B

UDP首部格式
16位源端口号 16位目的端口号
16位UDP长度(包括首部和长度，最小值为8)  16位UDP检验和

计算校验和之前，先添加伪首部
IP数据报的校验和只检验IP数据报的首部
UDP的校验和检查首部和数据部分
校验时，数据部分的长度不是偶数个字节，则填入全0字节

伪首部相关知识点
UDP的伪首部包含了IP地址信息，目的是通过校验和保证UDP数据报正确的到达目的主机。

UDP的校验和不是必需的，
如果不使用校验和，那么将校验和字段设置为0
如果校验和的计算结果恰好为0，那么将校验和置为全1


传输层分用的定义是，接收方的传输层剥去报文首部之后，能把这些数据正确交付到目的进程。
所以UDP协议实现分用时所依据的头部字段是目的端口号。

以太网 = 首部 + 数据
1500 = 20 + 1480  

为什么不直接使用IP数据报，而是要用UDP数据报
答：仅仅使用IP分组还不够。IP分组包括IP地址，该地址指向一个目的机器。
一旦这样的分组到达，网络控制程序不知道该把它交给哪个进程。
UDP分组包含一个目的端口，这一信息是必须的。
此外，UDP可以对数据报做包括数据段在内的差错检测，而IP只对其首部做差错检测。

不能组成一个新的数据报，
重传时，IP数据报的标识字段会有另一个标识符。
仅当标识符相同的IP数据报片才能组成一个IP数据报。
前两个IP数据报分片的标识符与后两个IP数据报分片的标识符不同，因此不能组装成一个IP数据报。


TCP协议
解决可靠、有序、无丢失、不重复问题
TCP面向字节流的

TCP报文段
首部 = 20B + 4N
源端口 目的端口
序号
确认号
数据偏移 保留 标识符若干 窗口
校验和 紧急指针
选项 填充

传输层的报文内容只有端口，网络层的才有地址(IP地址)

首部内容
源端口和目的端口
序号字段
确认号字段
数据偏移
保留字段
紧急位 确认位 推送位 复位位 同步位 终止位
xxx

TCP连接管理
连接建立 数据传送 连接释放

拥塞控制

