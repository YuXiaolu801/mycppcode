# VScode中配置C++运行环境
关于安装mingw的教程，网络上已经有很多了，这里不再赘述，下面就看VScode中插件（plugin）的安装。

## 1. 哪些插件
![plugins](https://img-blog.csdnimg.cn/20210103131252882.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80NDU3MTg4Ng==,size_16,color_FFFFFF,t_70#pic_center)
如图所示，第一个、第三个、第四个就是和运行有关的插件，先安装上。第五个就是在vscode中写markdown的插件，就是我正在写的，爱安装不安装。如图所示：
![demo the UI](https://img-blog.csdnimg.cn/20210103131655970.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80NDU3MTg4Ng==,size_16,color_FFFFFF,t_70#pic_center)
## 2. 配置开始
打开设置->扩展->Run Code Configuration，勾选Run in Terminal和Save File Before Run，就ojbk了。如图所示：
![settings](https://img-blog.csdnimg.cn/20210103132151798.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80NDU3MTg4Ng==,size_16,color_FFFFFF,t_70#pic_center)
## 3. 编写代码并运行
1. 在不含汉字的目录下创建个文件夹，如D:\vvvi。如果含有，就会出错：
   ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210103135117108.png#pic_center)
   
2. 在此文件夹下创建cpp文件，并写代码。
3. 点击F5,选择第一个，再选择第一个，会打开launch.json，如图：
   ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210103133829717.png#pic_center)
   ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210103133829750.png#pic_center)

    ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210103133046521.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80NDU3MTg4Ng==,size_16,color_FFFFFF,t_70#pic_center)
4. 在这里，如果16行的false改为true，就会弹出运行窗口，按下回车，如图：

   ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210103134238972.png#pic_center)

   强调一下，如果不输入/不断点，vscode的运行窗口会一瞬而过。
5. 如果不改为true，仍是false，则运行会在底部的框显示：
   ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210103134617233.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80NDU3MTg4Ng==,size_16,color_FFFFFF,t_70#pic_center)

这样子也就结束了，结束时，可以点击停止调试。（shift+F5）。