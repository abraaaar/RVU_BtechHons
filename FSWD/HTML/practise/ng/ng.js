var http = require('http');
var fs = require('fs');
console.log(__dirname);
function onRequest(req,res)
{
if (req.url ===
'/1.html' || req.url ===
'/') {
fs.readFile('./1.html',
function (error, data) {
if (error) {
res.writeHead(404);
res.write('File Not Found');
} else {
res.writeHead(200, { "Content-Type":
"text/html" });
res.write(data);
}
res.end();
});
}
else if (req.url === '/calstyle.css') {
res.setHeader('Content-type', 'text/css');
res.write(fs.readFileSync('./calstyle.css'));
res.end();
}
// else if(req.url === '/Q2.js'){
// res.setHeader('Content-type', 'text/js');
// res.write(fs.readFileSync('./Q2.js'));
// res.end();
// }
else {
res.write("invalid request")
res.end();
}
}
http.createServer(onRequest).listen(3000);
