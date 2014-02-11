[33mcommit 80de108a6cd9de6f0112f3820f2dcac3698351fd[m
Author: oussLaklalech <oussama.laklalech@gmail.com>
Date:   Tue Feb 11 10:42:33 2014 +0100

    new xml ajoutée

[1mdiff --git a/newXml.xml b/newXml.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..bf6e715[m
[1m--- /dev/null[m
[1m+++ b/newXml.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<films xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="FilmProvider.xsd">[m
[32m+[m[32m<realisateur id_realisateur="real_01">[m
[32m+[m[32m<prenom>Pedro</prenom>[m
[32m+[m[32m<nom>Almodovar</nom>[m
[32m+[m[32m</realisateur>[m
[32m+[m[32m<film id_film="film_01" id_realisateur="real_01" annee="2006">[m
[32m+[m[32m<titre>Volver</titre>[m
[32m+[m[32m<resume>[m
[32m+[m[32m<text>Une histoire transgénérationnelle</text>[m
[32m+[m[32m</resume>[m
[32m+[m[32m</film>[m
[32m+[m[32m</films>[m
\ No newline at end of file[m

[33mcommit 9dbf9953c54e494fe40872ec5c946b7de1a50310[m
Author: oussLaklalech <oussama.laklalech@gmail.com>
Date:   Sat Feb 8 21:45:07 2014 +0100

    trueFalseQ

[1mdiff --git a/TrueFalseQuestion.xml.xml b/TrueFalseQuestion.xml.xml[m
[1mdeleted file mode 100644[m
[1mindex f653be7..0000000[m
[1m--- a/TrueFalseQuestion.xml.xml[m
[1m+++ /dev/null[m
[36m@@ -1,11 +0,0 @@[m
[31m-<?xml version="1.0"?>[m
[31m-<question type="truefalse">[m
[31m- <answer fraction="100">[m
[31m-    <text>true</text>[m
[31m-    <feedback><text>Correct!</text></feedback>[m
[31m- </answer>[m
[31m- <answer fraction="0">[m
[31m-    <text>false</text>[m
[31m-    <feedback><text>Ooops!</text></feedback>[m
[31m- </answer>[m
[31m-</question>[m
\ No newline at end of file[m

[33mcommit 371770e5299421acd046063b02d6654689d2b6f8[m
Author: oussLaklalech <oussama.laklalech@gmail.com>
Date:   Sat Feb 8 21:43:40 2014 +0100

    trueFalseQ

[1mdiff --git a/TrueFalseQuestion.xml b/TrueFalseQuestion.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f653be7[m
[1m--- /dev/null[m
[1m+++ b/TrueFalseQuestion.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0"?>[m
[32m+[m[32m<question type="truefalse">[m
[32m+[m[32m <answer fraction="100">[m
[32m+[m[32m    <text>true</text>[m
[32m+[m[32m    <feedback><text>Correct!</text></feedback>[m
[32m+[m[32m </answer>[m
[32m+[m[32m <answer fraction="0">[m
[32m+[m[32m    <text>false</text>[m
[32m+[m[32m    <feedback><text>Ooops!</text></feedback>[m
[32m+[m[32m </answer>[m
[32m+[m[32m</question>[m
\ No newline at end of file[m

[33mcommit 49035c7e510987558c0a4fd35df1732beca70104[m
Author: oussLaklalech <oussama.laklalech@gmail.com>
Date:   Wed Feb 5 15:32:46 2014 +0100

    nvelle branche

[1mdiff --git a/TrueFalseQuestion.xml.xml b/TrueFalseQuestion.xml.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f653be7[m
[1m--- /dev/null[m
[1m+++ b/TrueFalseQuestion.xml.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0"?>[m
[32m+[m[32m<question type="truefalse">[m
[32m+[m[32m <answer fraction="100">[m
[32m+[m[32m    <text>true</text>[m
[32m+[m[32m    <feedback><text>Correct!</text></feedback>[m
[32m+[m[32m </answer>[m
[32m+[m[32m <answer fraction="0">[m
[32m+[m[32m    <text>false</text>[m
[32m+[m[32m    <feedback><text>Ooops!</text></feedback>[m
[32m+[m[32m </answer>[m
[32m+[m[32m</question>[m
\ No newline at end of file[m

[33mcommit e45962fb08e5fd4f7834bec87f5af458951ececd[m
Author: oussLaklalech <oussama.laklalech@gmail.com>
Date:   Wed Feb 5 15:26:13 2014 +0100

    premiere modificationTP1

[1mdiff --git a/MultipleChoiceQuestion.xml b/MultipleChoiceQuestion.xml[m
[1mindex 84700c9..751c7a3 100644[m
[1m--- a/MultipleChoiceQuestion.xml[m
[1m+++ b/MultipleChoiceQuestion.xml[m
[36m@@ -9,7 +9,7 @@[m
 	<penalty>1</penalty>[m
 	<defaultgrade>1</defaultgrade>[m
 	<answer fraction="100">[m
[31m-		<text>Ceci est la bonne réponse<text>[m
[32m+[m		[32m<text>Ceci est la bonne réponse</text>[m
 		<feedback>[m
 			<text>Bravo !</text>[m
 		</feedback>[m
[1mdiff --git a/PairMatchingQuestion.xml b/PairMatchingQuestion.xml[m
[1mindex f50d8ee..43bdb78 100644[m
[1m--- a/PairMatchingQuestion.xml[m
[1m+++ b/PairMatchingQuestion.xml[m
[36m@@ -20,5 +20,5 @@[m
 			<text>Second item de la seconde paire</text>[m
 		</answer>[m
 	</subquestion>[m
[31m-	<shuffleanswers>true[m
[32m+[m	[32m<shuffleanswers>true</shuffleanswers>[m
 </question>[m
[1mdiff --git a/quiz.xml b/quiz.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..4bd3471[m
[1m--- /dev/null[m
[1m+++ b/quiz.xml[m
[36m@@ -0,0 +1,57 @@[m
[32m+[m[32m<?xml version="1.0"?>[m
[32m+[m[32m<quiz>[m
[32m+[m	[32m<question type=multichoice>[m
[32m+[m	[32m<name>[m
[32m+[m		[32m<text>Demo question à choix multiples</text>[m
[32m+[m	[32m</name>[m
[32m+[m	[32m<questiontext format="html">[m
[32m+[m		[32m<text>Quel est la bonne réponse?</text>[m
[32m+[m	[32m</questiontext>[m
[32m+[m	[32m<penalty>1</penalty>[m
[32m+[m	[32m<defaultgrade>1</defaultgrade>[m
[32m+[m	[32m<answer fraction="100">[m
[32m+[m		[32m<text>Ceci est la bonne réponse</text>[m
[32m+[m		[32m<feedback>[m
[32m+[m			[32m<text>Bravo !</text>[m
[32m+[m		[32m</feedback>[m
[32m+[m	[32m</answer>[m
[32m+[m	[32m<answer fraction="0">[m
[32m+[m		[32m<text>Une mauvaise réponse</text>[m
[32m+[m		[32m<feedback>[m
[32m+[m			[32m<text>Ooops!</text>[m
[32m+[m		[32m</feedback>[m
[32m+[m	[32m</answer>[m
[32m+[m	[32m<answer fraction="0">[m
[32m+[m		[32m<text>Une autre mauvaise réponse</text>[m
[32m+[m		[32m<feedback>[m
[32m+[m			[32m<text>Ooops!</text>[m
[32m+[m		[32m</feedback>[m
[32m+[m	[32m</answer>[m
[32m+[m	[32m<shuffleanswers>1</shuffleanswers>[m
[32m+[m	[32m<single>true</single>[m
[32m+[m[32m</question>[m
[32m+[m
[32m+[m[32m<question type="pairmatching">[m
[32m+[m	[32m<name>[m
[32m+[m		[32m<text>Demo question d'appariement</text>[m
[32m+[m	[32m</name>[m
[32m+[m	[32m<questiontext format="html">[m
[32m+[m		[32m<text>Quel est la bonne réponse?</text>[m
[32m+[m	[32m</questiontext>[m
[32m+[m	[32m<penalty>1</penalty>[m
[32m+[m	[32m<defaultgrade>1</defaultgrade>[m
[32m+[m	[32m<subquestion>[m
[32m+[m		[32m<text>Premier item de la première paire</text>[m
[32m+[m		[32m<answer>[m
[32m+[m			[32m<text>Second item de le première paire</text>[m
[32m+[m		[32m</answer>[m
[32m+[m	[32m</subquestion>[m
[32m+[m	[32m<subquestion>[m
[32m+[m		[32m<text>Premier item de la seconde paire</text>[m
[32m+[m		[32m<answer>[m
[32m+[m			[32m<text>Second item de la seconde paire</text>[m
[32m+[m		[32m</answer>[m
[32m+[m	[32m</subquestion>[m
[32m+[m	[32m<shuffleanswers>true</shuffleanswers>[m
[32m+[m[32m</question>[m
[32m+[m[32m</quiz>[m

[33mcommit 8e05a31f849059735d32b2875e174f232d2961c8[m
Author: Franck Silvestre <franck.silvestre@ticetime.com>
Date:   Wed Jan 29 15:11:46 2014 +0100

    reinitialisation projet

[1mdiff --git a/MultipleChoiceQuestion.xml b/MultipleChoiceQuestion.xml[m
[1mindex ac9d68a..84700c9 100644[m
[1m--- a/MultipleChoiceQuestion.xml[m
[1m+++ b/MultipleChoiceQuestion.xml[m
[36m@@ -1,5 +1,5 @@[m
 <?xml version="1.0"?>[m
[31m-<question type="multichoice">[m
[32m+[m[32m<question type=multichoice>[m
 	<name>[m
 		<text>Demo question à choix multiples</text>[m
 	</name>[m

[33mcommit 1fee864ee7f8e79aa492fd7a0a08c19bf97a094f[m
Author: Franck Silvestre <franck.silvestre@ticetime.com>
Date:   Fri Jan 24 09:38:17 2014 +0100

    correction

[1mdiff --git a/MultipleChoiceQuestion.xml b/MultipleChoiceQuestion.xml[m
[1mindex 84700c9..ac9d68a 100644[m
[1m--- a/MultipleChoiceQuestion.xml[m
[1m+++ b/MultipleChoiceQuestion.xml[m
[36m@@ -1,5 +1,5 @@[m
 <?xml version="1.0"?>[m
[31m-<question type=multichoice>[m
[32m+[m[32m<question type="multichoice">[m
 	<name>[m
 		<text>Demo question à choix multiples</text>[m
 	</name>[m

[33mcommit c530b95eb43c9cb89ee9db61e392eb5220666273[m
Author: FranckSilvestre <franck.silvestre@irit.fr>
Date:   Wed Jan 30 20:56:21 2013 +0100

    Update PairMatchingQuestion.xml

[1mdiff --git a/PairMatchingQuestion.xml b/PairMatchingQuestion.xml[m
[1mindex 43bdb78..f50d8ee 100644[m
[1m--- a/PairMatchingQuestion.xml[m
[1m+++ b/PairMatchingQuestion.xml[m
[36m@@ -20,5 +20,5 @@[m
 			<text>Second item de la seconde paire</text>[m
 		</answer>[m
 	</subquestion>[m
[31m-	<shuffleanswers>true</shuffleanswers>[m
[32m+[m	[32m<shuffleanswers>true[m
 </question>[m

[33mcommit d94e976f258dfddb2deeb3868337beeba84de37b[m
Merge: 5bca570 3c7b63d
Author: FranckSilvestre <franck.silvestre@irit.fr>
Date:   Wed Jan 30 11:55:44 2013 -0800

    Merge pull request #1 from ticetime/patch-1
    
    Update MultipleChoiceQuestion.xml

[33mcommit 3c7b63d6c0e9c41c371b9d14308ce9a57fd204bc[m
Author: Franck Silvestre <github@ticetime.com>
Date:   Wed Jan 30 20:53:21 2013 +0100

    Update MultipleChoiceQuestion.xml

[1mdiff --git a/MultipleChoiceQuestion.xml b/MultipleChoiceQuestion.xml[m
[1mindex ac9d68a..84700c9 100644[m
[1m--- a/MultipleChoiceQuestion.xml[m
[1m+++ b/MultipleChoiceQuestion.xml[m
[36m@@ -1,5 +1,5 @@[m
 <?xml version="1.0"?>[m
[31m-<question type="multichoice">[m
[32m+[m[32m<question type=multichoice>[m
 	<name>[m
 		<text>Demo question à choix multiples</text>[m
 	</name>[m

[33mcommit 5bca570a17972b26ceb0c94327070df27e883817[m
Author: FranckSilvestre <franck.silvestre@irit.fr>
Date:   Fri Oct 26 14:53:49 2012 +0300

    Correction format XML

[1mdiff --git a/PairMatchingQuestion.xml b/PairMatchingQuestion.xml[m
[1mindex 7d32803..43bdb78 100644[m
[1m--- a/PairMatchingQuestion.xml[m
[1m+++ b/PairMatchingQuestion.xml[m
[36m@@ -1,5 +1,5 @@[m
 <?xml version="1.0"?>[m
[31m-[m
[32m+[m[32m<question type="pairmatching">[m
 	<name>[m
 		<text>Demo question d'appariement</text>[m
 	</name>[m
[36m@@ -21,4 +21,4 @@[m
 		</answer>[m
 	</subquestion>[m
 	<shuffleanswers>true</shuffleanswers>[m
[31m-[m
[32m+[m[32m</question>[m

[33mcommit ebb20bbfdf7e4f92d5e7162b9007a8fe57529008[m
Author: FranckSilvestre <franck.silvestre@irit.fr>
Date:   Fri Oct 26 14:52:21 2012 +0300

    Correction format XML

[1mdiff --git a/MultipleChoiceQuestion.xml b/MultipleChoiceQuestion.xml[m
[1mindex 591691b..ac9d68a 100644[m
[1m--- a/MultipleChoiceQuestion.xml[m
[1m+++ b/MultipleChoiceQuestion.xml[m
[36m@@ -3,7 +3,7 @@[m
 	<name>[m
 		<text>Demo question à choix multiples</text>[m
 	</name>[m
[31m-	<questiontext format=html>[m
[32m+[m	[32m<questiontext format="html">[m
 		<text>Quel est la bonne réponse?</text>[m
 	</questiontext>[m
 	<penalty>1</penalty>[m

[33mcommit 0d2f2ac1caa4f5c9d6f7c66806cd55f44b06a501[m
Author: Franck Silvestre <franck.silvestre@irit.fr>
Date:   Thu Feb 9 19:29:16 2012 +0100

    Initialisation du projet dans Git

[1mdiff --git a/MultipleChoiceQuestion.xml b/MultipleChoiceQuestion.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..591691b[m
[1m--- /dev/null[m
[1m+++ b/MultipleChoiceQuestion.xml[m
[36m@@ -0,0 +1,31 @@[m
[32m+[m[32m<?xml version="1.0"?>[m
[32m+[m[32m<question type="multichoice">[m
[32m+[m	[32m<name>[m
[32m+[m		[32m<text>Demo question à choix multiples</text>[m
[32m+[m	[32m</name>[m
[32m+[m	[32m<questiontext format=html>[m
[32m+[m		[32m<text>Quel est la bonne réponse?</text>[m
[32m+[m	[32m</questiontext>[m
[32m+[m	[32m<penalty>1</penalty>[m
[32m+[m	[32m<defaultgrade>1</defaultgrade>[m
[32m+[m	[32m<answer fraction="100">[m
[32m+[m		[32m<text>Ceci est la bonne réponse<text>[m
[32m+[m		[32m<feedback>[m
[32m+[m			[32m<text>Bravo !</text>[m
[32m+[m		[32m</feedback>[m
[32m+[m	[32m</answer>[m
[32m+[m	[32m<answer fraction="0">[m
[32m+[m		[32m<text>Une mauvaise réponse</text>[m
[32m+[m		[32m<feedback>[m
[32m+[m			[32m<text>Ooops!</text>[m
[32m+[m		[32m</feedback>[m
[32m+[m	[32m</answer>[m
[32m+[m	[32m<answer fraction="0">[m
[32m+[m		[32m<text>Une autre mauvaise réponse</text>[m
[32m+[m		[32m<feedback>[m
[32m+[m			[32m<text>Ooops!</text>[m
[32m+[m		[32m</feedback>[m
[32m+[m	[32m</answer>[m
[32m+[m	[32m<shuffleanswers>1</shuffleanswers>[m
[32m+[m	[32m<single>true</single>[m
[32m+[m[32m</question>[m
[1mdiff --git a/PairMatchingQuestion.xml b/PairMatchingQuestion.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..7d32803[m
[1m--- /dev/null[m
[1m+++ b/PairMatchingQuestion.xml[m
[36m@@ -0,0 +1,24 @@[m
[32m+[m[32m<?xml version="1.0"?>[m
[32m+[m
[32m+[m	[32m<name>[m
[32m+[m		[32m<text>Demo question d'appariement</text>[m
[32m+[m	[32m</name>[m
[32m+[m	[32m<questiontext format="html">[m
[32m+[m		[32m<text>Quel est la bonne réponse?</text>[m
[32m+[m	[32m</questiontext>[m
[32m+[m	[32m<penalty>1</penalty>[m
[32m+[m	[32m<defaultgrade>1</defaultgrade>[m
[32m+[m	[32m<subquestion>[m
[32m+[m		[32m<text>Premier item de la première paire</text>[m
[32m+[m		[32m<answer>[m
[32m+[m			[32m<text>Second item de le première paire</text>[m
[32m+[m		[32m</answer>[m
[32m+[m	[32m</subquestion>[m
[32m+[m	[32m<subquestion>[m
[32m+[m		[32m<text>Premier item de la seconde paire</text>[m
[32m+[m		[32m<answer>[m
[32m+[m			[32m<text>Second item de la seconde paire</text>[m
[32m+[m		[32m</answer>[m
[32m+[m	[32m</subquestion>[m
[32m+[m	[32m<shuffleanswers>true</shuffleanswers>[m
[32m+[m
