var nbind = require('nbind');

var lib = nbind.init().lib;

lib.HeaderExample.callJS(function(a, b, c) {
  return('sum = ' + (a + b + c) + '\n');
});
