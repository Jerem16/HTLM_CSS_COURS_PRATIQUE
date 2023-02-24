HTML [Langage WEB ou langage de Balisage]


[Les balises HTML]

[Balises de premier niveau]			[Balise Description]
<html> 								           Balise principale
<head> 								           En-tête de la page
<body> 								           Corps de la page



/*------------------------------------------------------------------
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Titre</title>
	</head>
	<body>
	</body>
</html>
---------------------------------------------------------------------*/

[Balises d’en-tête]
//Ces balises sont toutes situées entre <head> et </head> :

[Balise] 			{Description}
<link> 				Liaison avec une feuille de style
<link> 				est une balise orpheline.
<meta> 				Métadonnées de la page web (collections de
              caractères, mots-clés, etc.)
<meta> 				est une balise orpheline.
<script> 			Code JavaScript
<style> 			Code CSS
<title> 			Titre de la page


[Balises sectionnantes]
//Ces balises permettent de construire le squelette de notre site web.

[Balise] 			    {Description}
<header> 		 	    En-tête
<nav> 				    Liens principaux de navigation
<footer> 		     	Pied de page
<section>         Section de page
<article>         Article (contenu autonome)
<aside>           Informations complémentaires


/*------------------------------------------------------------------
  <body>
    <header>
      <nav></nav>
    </header>
    <main>
      <aside></aside>
      <section>
        <h1></h1>
        <article>
          <h2></h2>
        </article>
      </section>
    </main>
  </body>
---------------------------------------------------------------------*/


[Balises de structuration du texte]

[Balise] 			    {Description}

//Mise en valeur du texte
<abbr> 				     Abréviation
<blockquote> 		   Citation (longue)
<cite> 				     Citation du titre d’une œuvre ou d’un événement
<q>                Citation (courte)
<sup> 				     Exposant
<sub>              Indice
<strong> 			     Mettre le texte en gras. //SEO
<em> 				       Mettre le texte en italique.
<mark> 				     Surligner le texte. //SEO

//structuration du texte
<h1> 				       Titre de niveau 1 //SEO
<h2> 				       Titre de niveau 2 //SEO
<h3> 				       Titre de niveau 3
<h4> 				       Titre de niveau 4
<h5> 				       Titre de niveau 5
<h6> 				       Titre de niveau 6
<section>          Section de page
<article>          Article (contenu autonome)
<p>                Paragraphe


<br>               Retour à la ligne
                   <br> est une balise orpheline.
                   //Vous pouvez théoriquement mettre plusieurs balises <br> d'affilée pour faire plusieurs sauts de lignes, 
                   //mais on considère que c'est une mauvaise pratique qui rend le code délicat à maintenir. 
                   //Pour décaler un texte avec plus de précision, on utilisera le CSS.
<hr>               Ligne de séparation horizontale
                   <hr>est une balise orpheline.


<img>              Image
                   <img>est une balise orpheline.
<figure> 			     Figure (image, code, etc.)
<figcaption> 		   Description de la figure
<audio> 			     Son
<video> 			     Vidéo
<source> 			     Format source pour les balises <audio> et <video>
<a> 				       Lien hypertexte

<address> 			   Adresse de contact
<time>             Date ou heure
<del> 				     Texte supprimé
<ins>              Texte inséré
<dfn> 				     Définition
<kbd> 				     Saisie clavier
<pre> 				     Affichage formaté (pour les codes sources)
<progress> 			   Barre de progression




[Balises de listes]

[Balise] 			    {Description}
<ul> 				       Liste à puces, non numérotée
<ol>               Liste numérotée
<li> 				       Élément de la liste à puces
<dl> 				       Liste de définitions
<dt> 				       Terme à définir
<dd> 				       Définition du terme
<a>                Lien hypertexte



[Balises de tableau]

[Balise] 			    {Description}
<table> 			     Tableau
<caption> 			   Titre du tableau
<tr> 				       Ligne de tableau
<th> 				       Cellule d’en-tête
<td> 				       Cellule
<thead>            Section de l’en-tête du tableau
<tbody>            Section du corps du tableau
<tfoot>            Section du pied du tableau



[Balises de formulaire]


[Balise] 			    {Description}
<form> 				     Formulaire
<fieldset> 			   Groupe de champs
<legend>	 		     Titre d’un groupe de champs
<label> 			     Libellé d’un champ
<input> 			     Champ de formulaire (texte, mot de passe, case à
					         cocher, bouton, etc.)
<input> 			     est une balise orpheline.
<textarea> 			   Zone de saisie multiligne
<select> 			     Liste déroulante
<option> 			     Élément d’une liste déroulante
<optgroup> 			   Groupe d'éléments d'une liste déroulante



[Balises génériques (ou universelles)]

[Balise] 			{Description}
<span> 				Balise générique de type inline
<div> 				Balise générique de type block



