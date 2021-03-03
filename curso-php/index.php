<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <link href="https://fonts.googleapis.com/css?family=Oswald:200,300,400,500,600,700" rel="stylesheet">
    <link rel="stylesheet" href="recursos/css/estilo.css">
    <title>Curso PHP</title>
</head>
<body>
    <header class="cabecalho">
        <h1>JOGADORES</h1>
        <h2>Índice dos Exercícios</h2>
    </header>
    <main class="principal">
        <div class="conteudo">
            <nav class="modulos">
                <div class="modulo verde">
                    <h3>Atletas</h3>
                    <ul>
                        <li><a href="exercicio.php?dir=basico&file=ola">Renderson</a></li>
						<li><a href="exercicio.php?dir=teste&file=teste">Alessandro</a></li>
						<li><a href="exercicio.php?dir=teste&file=teste">Flaviano</a></li>
						<li><a href="exercicio.php?dir=teste&file=teste">Gabriel</a></li>
						<li><a href="exercicio.php?dir=teste&file=teste">Isaias</a></li>
                    </ul>
                </div>
            </nav>
        </div>
    </main>
    <footer class="rodape">
        COD3R & ALUNOS © <?= date('Y'); ?>
    </footer>
</body>
</html>