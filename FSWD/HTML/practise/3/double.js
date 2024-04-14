const http = require('http');
const fs = require('fs');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  if (req.url === '/calc.html' || req.url === '/') {
    fs.readFile('./calc.html', function (error, data) {
      if (error) {
        res.writeHead(404);
        res.write('File Not Found');
      } else {
        res.writeHead(200, { "Content-Type": "text/html" });
        res.write(data);
      }
      res.end();
    });
  } else if (req.url === '/calc.css') {
    fs.readFile('./calc.css', function (error, data) {
      if (error) {
        res.writeHead(404);
        res.write('File Not Found');
      } else {
        res.writeHead(200, { "Content-Type": "text/css" });
        res.write(data);
      }
      res.end();
    });
  } else if (req.url === '/calc.js') {
    fs.readFile('./calc.js', function (error, data) {
      if (error) {
        res.writeHead(404);
        res.write('File Not Found');
      } else {
        res.writeHead(200, { "Content-Type": "text/javascript" });
        res.write(data);
      }
      res.end();
    });
  } else {
    res.writeHead(404);
    res.write('File Not Found');
    res.end();
  }
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});