import re

s = open('README.md', 'r', encoding='utf8').read()
ss = list()
lr = 0
for i in re.finditer('https://github.com/[a-zA-Z][a-zA-Z0-9\-\_]*/[^\)\ ]+', s):
    l, r = i.span()
    if s[l-1] == '(' or s[r] == ')':
        continue
    link = s[l:r]
    name = link[19:]
    s2 = '[%s](%s)' % (name, link)
    # print(repr(link))
    ss.append(s[lr:l])
    ss.append(s2)
    lr = r
ss.append(s[lr:])

open('README.md', 'w', encoding='utf8').write(''.join(ss))
