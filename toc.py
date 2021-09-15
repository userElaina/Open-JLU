import os
import re
p=os.path.join(os.path.dirname(os.path.abspath(__file__)),'README.md')
s=re.sub('(`[^`]+` )?\[[^\]]+\]\([^\)]+\) [\|]+ [\\n]+','',open(p,'rb').read().decode('utf8').replace('\r','').replace('\n\n','\n').replace('\n\n','\n').replace('\n\n','\n'))
# print(s)
toc='# 目录\n\n'
for k,i in enumerate(re.findall('\#\#\#\#[^\#]+',s)):
	nm=i.split('\n')[0][5:]
	j=re.findall('`[^`]+` ',i)
	# if not k%8:
	# 	toc+='\n'
	if j:
		toc+=j[0]
	toc+='['+nm+'](#'+nm.replace(' ','').replace('(','').replace(')','')+') || \n'
open(p,'wb').write(s.replace('\n','\n\n').replace('# 目录\n',toc).encode('utf8'))
