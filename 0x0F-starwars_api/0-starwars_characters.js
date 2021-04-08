#!/usr/bin/node
const process = require('process');
const request = require('request');
const movieId = process.argv[2];
const url = 'https://swapi-api.hbtn.io/api/films/' + movieId;
request(url, 'utf-8', function (err, resp, body) {
  if (err) {
    console.log(err);
  } else {
    const mList = JSON.parse(body);
    for (let i = 0; i < mList.characters.length; i++) {
      const process2 = require('process');
      const request2 = require('request');
      const url2 = mList.characters[i];
      request(url2, 'utf-8', function (err2, resp2, body2) {
        if (err2) {
          console.log(err2);
        } else {
          const charList = JSON.parse(body2);
          console.log(charList.name);
        }
      });
    }
  }
});