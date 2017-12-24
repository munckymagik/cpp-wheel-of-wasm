Module.onRuntimeInitialized = function () {
  let makeSuggestion = Module.cwrap('make_suggestion', 'string')
  let suggestionElement = document.getElementById('suggestion')
  let againButton = document.getElementById('again')

  let suggest = () => suggestionElement.innerHTML = makeSuggestion();
  suggest()

  againButton.addEventListener('click', suggest)
}
