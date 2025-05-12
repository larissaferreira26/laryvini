/* Estilos gerais do corpo da página */
body {
    font-family: 'Arial', sans-serif; /* Fonte padrão para o texto */
    margin: 20px; /* Margem ao redor do conteúdo da página */
    line-height: 1.6; /* Espaçamento entre as linhas de texto para melhor leitura */
    background-color: #f4f4f4; /* Cor de fundo da página */
    color: #333; /* Cor principal do texto */
}

/* Estilos para o cabeçalho principal (h1) */
h1 {
    color: #2e8b57; /* Cor verde escura para o título principal */
    text-align: center; /* Alinhamento centralizado do título */
    margin-bottom: 30px; /* Espaço abaixo do título */
    padding-bottom: 10px; /* Espaço interno abaixo do título */
    border-bottom: 2px solid #2e8b57; /* Linha abaixo do título */
}

/* Estilos para os subtítulos (h2) */
h2 {
    color: #3cb371; /* Cor verde média para os subtítulos */
    margin-top: 25px; /* Espaço acima dos subtítulos */
    margin-bottom: 15px; /* Espaço abaixo dos subtítulos */
}

/* Estilos para os parágrafos (p) */
p {
    margin-bottom: 15px; /* Espaço abaixo dos parágrafos */
}

/* Estilos para as listas não ordenadas (ul) */
ul {
    list-style-type: square; /* Marcador quadrado para os itens da lista */
    margin-left: 20px; /* Indentação da lista */
    margin-bottom: 15px; /* Espaço abaixo da lista */
}

/* Estilos para as listas ordenadas (ol) */
ol {
    list-style-type: decimal; /* Numeração decimal para os itens da lista */
    margin-left: 20px; /* Indentação da lista */
    margin-bottom: 15px; /* Espaço abaixo da lista */
}

/* Estilos para os links (a) */
a {
    color: #007bff; /* Cor azul para os links */
    text-decoration: none; /* Remove o sublinhado padrão dos links */
}

/* Estilos para os links quando o mouse passa por cima */
a:hover {
    text-decoration: underline; /* Adiciona sublinhado ao passar o mouse */
}

/* Estilos para a seção de legislação e normas */
h2 + p { /* Aplica estilo ao parágrafo imediatamente após um h2 */
    font-style: italic; /* Texto em itálico para destacar a legislação */
    color: #555; /* Cor do texto da legislação */
}

/* Estilos para a seção de locais de coleta e informações úteis */
.locais-coleta {
    background-color: #e9ecef; /* Cor de fundo levemente cinza para a seção */
    padding: 15px; /* Espaço interno na seção */
    border-radius: 5px; /* Bordas levemente arredondadas */
    margin-bottom: 20px; /* Espaço abaixo da seção */
}

.locais-coleta h3 {
    color: #3cb371; /* Cor do subtítulo dentro da seção */
    margin-top: 0; /* Remove a margem superior padrão do h3 */
}

.locais-coleta ul {
    list-style-type: disc; /* Marcador de disco para a lista dentro da seção */
}

/* Estilos para o rodapé */
p:last-child { /* Aplica estilo ao último parágrafo da página (geralmente o rodapé) */
    text-align: center; /* Alinhamento centralizado do rodapé */
    margin-top: 30px; /* Espaço acima do rodapé */
    color: #777; /* Cor do texto do rodapé */
    font-size: 0.9em; /*