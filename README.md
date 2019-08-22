# omniWheelCareRobot-usual

 git添加公钥后报错sign_and_send_pubkey: signing failed: agent refused operation的解决办法

　　在服务器添加完公钥后报错
1
	
sign_and_send_pubkey: signing failed: agent refused operation

　　这个时候我们只要执行下
1
2
	
eval "$(ssh-agent -s)"
ssh-add

　　就可以了

