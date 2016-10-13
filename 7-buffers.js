var nbind = require('nbind');
var lib = nbind.init().lib;

var data = new Uint8Array(16);
lib.range(data);

console.log(data.join(' '));
