from os import walk
from os.path import splitext, join
import re

def filename(lookup):
    # lookup should be of the form `\\beginpgfgraphicnamed\{<filename>\}
    pattern = r'[\{\}]'
    return re.split(pattern, lookup)[1] + '.tex'

texfiles = []
for dirpath, _, filenames in walk('.'):
    for fn in filenames:
        if splitext(fn)[1] == '.tex':
            texfiles.append(join(dirpath, fn))

pattern = r'(\\beginpgfgraphicnamed\{.*?\})([\S\s]*?)(\\endpgfgraphicnamed)'

tikz = {}
for texfile in texfiles:
    with open(texfile, 'r') as f:
        texcode = f.read()
        lookup = re.findall(pattern, texcode)
        if len(lookup) > 0:
            [tikz.update({filename(rawfn): code}) for rawfn, code, _ in lookup]
            
img_path = 'res'
for fn, code in tikz.iteritems():
    file = join(img_path, fn)
    with open(file, 'w') as tex:
        full_code = '''%
\\input{preambula.inc}%
%s
\\end{document}
''' % code
        tex.write(full_code)
    