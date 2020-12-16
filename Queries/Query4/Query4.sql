SELECT 
IIF(Notas.Nota < 8, "NULL", Alunos.Nome) AS Alunos, Notas.Nota, Alunos.Valor
FROM Alunos, Notas 
WHERE Alunos.Valor 
BETWEEN Notas.Valor_Min AND Notas.Valor_Max 
ORDER BY Notas.Nota DESC, Alunos.Nome DESC;