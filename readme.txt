��һ������װgit���ߣ����ص�ַgit-scm.com
�ڶ�������bash��ѡ��Ҫ������git�ֿ��ļ��У�ִ��git init���ⲽ�ǰѱ��ذ汾����git�ֿ�
���������ڶ�Ӧ�ļ������洴��һ��readme.txt�ĵ�
���Ĳ���ִ��git add test.txt����test.txt�ĵ���ӵ����زֿ�
���岽��ִ��git status���鿴�ļ����뱾�زֿ�����
��������ִ��git commit -m "First commit"�����ļ��ύ���ؿ��У��������������ע�ͣ���������ļ���ʹ�û��޸�����ȣ�Ҳ���Բ��ӣ�������ü�һЩע�ͣ�����ᱨ��

��ֹ���ϣ���ֻ�ǹ����˱���github�ֿ⣬��û�аѱ��زֿ��githubԶ�ֿ̲⽨������

git�����ļ���Զ�ֿ̲�֮���ͬ��,ʹ�õ���SSH����,����������״�ͬ�������ļ���github,��ʱ��û��ssh�����ļ���,��Ҫ�����ֶ����,����ʹ������:
ssh-keygen -t rsa -C "youremail@example.com"

���߲�����git bash��ִ��ssh-keygen -t rsa -C "youremail@example.com",һ·�س�����
�ڰ˲�����C���Լ��û������ҵ�.ssh�ļ��У���������������id_ras.pub�Ĺ�Կ
�ھŲ�����¼github�Լ����˻��ϣ��ҵ��������ģ����settings-->SSH and GPG keys��ѡ��New SSH key
�ѱ��ع�Կid_rsa.pub�д��븴�Ƶ�key�ķ����У�����title�����д����ɺ���дAdd SSH key��ť

��ʮ������github�ֶ�����һ������Ŀcreate a new repository����ɺ�������Ŀ��SSH��ַ��������

��ʮһ������github�ϴ����Ĳֿ��ssh�����������ڱ���git bash��ִ��
git remote add origin git@github.com:linqiangmin-0814/git-.git
�Ϳ�����ɱ���git�ֿ��githubԶ�ֿ̲�����������������������ϴ������ļ���


����ȥ�Ϳ��԰ѱ�����Ŀ�ϴ���githubԶ�˲ֿ���

��ʮ������
������ǰ�������Ĳ�������ôԶ�ֿ̲��ǿյ���Ϊ��һ���ϴ�,
ʹ������:git push -u origin master�������ϴ��������ͬ����
������ǵ�һ����ʹ�����git push origin master , -u ���ڵ�һ���ϴ�ʱ���ϣ�
�Ժ󶼲���Ҫ�ˡ����޸ĺ����Ŀ�ϴ���githubԶ�ֿ̲⡣

˵����������Զ�ֿ̲ⲻ�ǿյ�(��ʼ����һ��readme.md�ļ�),�����زֿ�û��
�����Ҫ�Ȱ�Զ���ļ�ͬ�������أ�ʹ�����git pull --rebase origin master��
Ȼ�����ϴ�������ֱ�ӽ�Զ�ֿ̲��¡��������������ļ�Ҳ�У�
ʹ�����git clone git@github.com:virsing/Leetcode.git����
��ʹ����������:git push origin master .���ͬ����

һ��Ҫע��,������ڴ���github�ֿ�ʱ����ʼ����һ��readme.md�ļ�,
Զ�ֿ̲ⲻ�ǿյģ�����Ҫ�Ƚ�Զ�ֿ̲��뱾�زֿ�ͬ��,
ʹ������:git pull --rebase origin master.��Զ���ļ����ر��زֿ�,
Ȼ����ִ��:git push origin master,���ܳɹ���.