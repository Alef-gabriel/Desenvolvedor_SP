const data = require('./data.json')
const sum = Object.values(data).reduce((a, b) => a + b)

for(var prop in data){
    data[prop] = ((data[prop] / sum) * 100).toFixed(2) + "%";
}

console.log(data)