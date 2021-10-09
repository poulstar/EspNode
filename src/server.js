const WebSocket = require('ws');

const ws = new WebSocket.WebSocketServer({ port: 3000 });

ws.on('connection', function connection(ws) {
        ws.on('message', function incoming(message) {
            console.log('received: %s', message);
        });
        
        console.log('new connection');
        ws.send('welcome to nodejs websocket server ...');
    });