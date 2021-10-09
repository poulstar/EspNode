const express = require('express');
const expressWs = require('express-ws');

const PORT = 3000;
const app = express();
const wsApp = expressWs(app);

app.ws('/ws', ws => {
  ws.on('message', message => {
    console.log('message: ' + message);
  })
});

app.listen(PORT, '0.0.0.0', () => {
  console.log(`Websocket server started on ${PORT} port`)
});