import re

s = open('README.md', 'r', encoding='utf8').read()
ss = list()
lr = 0
for i in re.finditer('\[[a-zA-Z][a-zA-Z0-9\-\_]*/[a-zA-Z][a-zA-Z0-9\-\_]*\]\(https://github.com/[a-zA-Z][a-zA-Z0-9\-\_]*/[a-zA-Z][a-zA-Z0-9\-\_]*\)', s):
    l, r = i.span()
    link = s[l:r]
    s2 = '[' + link[link.find('/')+1:]
    print(repr(s2))
    ss.append(s[lr:l])
    ss.append(s2)
    lr = r
ss.append(s[lr:])

open('README2.md', 'w', encoding='utf8').write(''.join(ss))
