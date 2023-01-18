const data = require('./data.json')

let lowest = Number.POSITIVE_INFINITY;
let highest = Number.NEGATIVE_INFINITY;
let cont = 0;
let sum = 0;

data.forEach(obj => {
    if (obj.valor != 0){
        if (obj.valor < lowest)
            lowest = obj.valor;
        if (obj.valor > highest)
            highest = obj.valor
        cont++;
        sum = sum + obj.valor;
    }
});

let i = 0;
data.forEach(obj => {
    if (obj.valor > (sum/cont))
        i++;
});

console.log(`O menor valor de faturamento ocorrido em um dia do mês, ${lowest}
O maior valor de faturamento ocorrido em um dia do mês, ${highest}
Número de dias no mês em que o valor de faturamento diário foi superior à média mensal, ${i}`)