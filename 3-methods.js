var nbind = require('nbind');

var lib = nbind.init().lib;

var parts = ['foo', 'bar', 'quux'];

var checker = new lib.MethodExample();

console.log(parts.map(function(part) {
  return(checker.add(part));
}));

console.log(lib.MethodExample.check(parts));
