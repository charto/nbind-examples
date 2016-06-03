var nbind = require('nbind');

var lib = nbind.init().lib;

var a = new lib.ClassExample();
var b = new lib.ClassExample(42, 54);
var c = new lib.ClassExample("Don't panic");
