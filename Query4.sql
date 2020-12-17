SELECT
IIF(Notas.Nota < 8, "NULL", Alunos.Nome), Notas.Nota, Alunos.Valor
FROM Alunos, Notas
WHERE Alunos.Valor
BETWEEN Notas.Valor_Min AND Notas.Valor_Max
ORDER BY Notas.Nota DESC,
IIF( IIF(Notas.Nota < 8, "NULL", Alunos.Nome) = "NULL", Alunos.Valor, Alunos.Nome) ASC;