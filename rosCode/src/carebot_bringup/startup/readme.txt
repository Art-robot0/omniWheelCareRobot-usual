/**************************************************************/
/* Description: 该目录下文件都是为了保证carebot在刚加电开机   */
/*   后可以直接进入工作状态，即新建启动的service这样可以跟    */
/*   随系统来一起启动需要启动的launch文件。                   */
/*   只需要按照下面所叙述的操作步骤执行即可完成,注意的是      */
/*   该操作只在树莓派3B板上测试通过。                         */
/**************************************************************/


1.设置开机启动服务,直接在终端中执行当前目录下的setup.sh脚本即可，命令如下：
./setup.bash
如果提示输入密码,直接输入 a 即可。

2.检查是否设置了开机启动服务,通过以下命令来查看carebot服务是否设置成功，
如果提示enabled，则说明设置成功了,直接在终端中执行命令即可。
systemctl is-enabled carebot.service

3.在调试中如果需要临时停止该启动服务，则在终端中执行以下命令:
sudo systemctl stop carebot.service

4.如果想再次临时启动该服务，在终端中执行如下命令:
sudo systemctl start carebot.service

5.如果不想在开机时启动该服务了，则通过下面命令来取消开机自启动:
sudo systemctl disable carebot.service

6.如果又想在开机时自动启动该服务了，则执行以下命令即可:
sudo systemctl enable carebot.service


