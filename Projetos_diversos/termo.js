// Script pro term.ooo
Object.entries(localStorage).forEach(([modo, palavra]) => { // pega os objetos no LocalStorage percorrendo chave e array
    try {
        const json = JSON.parse(palavra); // transforma as arrays em objeto
        if (json?.state) { // ve se tem save
            console.log("-->", modo, json.state.map(solucao => solucao.solution)); // pega as palavras do modo e printa
        }
    } catch {}
});