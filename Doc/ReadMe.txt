App：应用部分代码
   system_stm32f10x.c定义了系统时钟的初始化函数SystemInit,stm32f10x_it.c包含部分中断服务函数

STM32F10x_StdPeriph_Driver：包含stm3210x标准的外设驱动库文件

Startup Code：库文件所需的启动代码，核心文件

Publi：存放了一些公用的代码

HARDWARE：存放了外设驱动代码

Doc：说明文档

//以上是自己建立的文件夹 ，在自己建立的文件夹里面可以新建自己的文件，里面再添加源文件


下面的是从stm32标准库文件提取而来

Libraries：库文件夹
Project：  示例工程

//本Demo只是实现简单的定时控制led和beep的翻转

