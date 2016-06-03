var nbind = require('nbind');

var lib = nbind.init().lib;

var obj = new lib.GetSetExample();

console.log(obj.value++); // 42
console.log(obj.value++); // 43
