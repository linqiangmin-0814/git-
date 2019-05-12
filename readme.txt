第一步：安装git工具，下载地址git-scm.com
第二步：打开bash，选择要创建的git仓库文件夹，执行git init；这步是把本地版本库变成git仓库
第三步：在对应文件夹下面创建一个readme.txt文档
第四步：执行git add test.txt，把test.txt文档添加到本地仓库
第五步：执行git status，查看文件加入本地仓库的情况
第六步：执行git commit -m "First commit"，将文件提交本地库中，后面的引号内是注释，用来标记文件的使用或修改情况等，也可以不加，不过最好加一些注释，否则会报错

截止以上，还只是构建了本地github仓库，还没有把本地仓库和github远程仓库建立连接

git本地文件和远程仓库之间的同步,使用的是SSH加密,所以如果是首次同步本地文件到github,此时是没有ssh加密文件的,需要我们手动添加,首先使用命令:
ssh-keygen -t rsa -C "youremail@example.com"

第七步：在git bash上执行ssh-keygen -t rsa -C "youremail@example.com",一路回车即可
第八步：在C盘自己用户下面找到.ssh文件夹，看到里面生成了id_ras.pub的公钥
第九步：登录github自己的账户上，找到个人中心，点击settings-->SSH and GPG keys；选择New SSH key
把本地公钥id_rsa.pub中代码复制到key的方框中，其中title随便填写，完成后填写Add SSH key按钮

第十步：在github手动创建一个新项目create a new repository；完成后把这个项目的SSH地址拷贝下来

第十一步：把github上创建的仓库的ssh拷贝下来，在本地git bash上执行
git remote add origin git@github.com:linqiangmin-0814/git-.git
就可以完成本地git仓库和github远程仓库关联了起来，接下来就能上传本地文件了


接下去就可以把本地项目上传到github远端仓库上

第十二步：
①如果是按照上面的操作，那么远程仓库是空的且为第一次上传,
使用命令:git push -u origin master，进行上传操作完成同步。
如果不是第一次则使用命令：git push origin master , -u 仅在第一次上传时加上，
以后都不需要了。将修改后的项目上传到github远程仓库。

说明：如果你的远程仓库不是空的(初始化了一个readme.md文件),而本地仓库没有
则必须要先把远程文件同步到本地，使用命令：git pull --rebase origin master，
然后再上传（或者直接将远程仓库克隆下来，往里面放文件也行，
使用命令：git clone git@github.com:virsing/Leetcode.git），
在使用推送命令:git push origin master .完成同步。

一定要注意,如果你在创建github仓库时，初始化了一个readme.md文件,
远程仓库不是空的，则需要先将远程仓库与本地仓库同步,
使用命令:git pull --rebase origin master.将远程文件拉回本地仓库,
然后再执行:git push origin master,就能成功了.