Module.onRuntimeInitialized = function () {
  let makeSuggestion = Module.cwrap('make_suggestion', 'string')
  Module.print("Suggestion is: " + makeSuggestion())
}
