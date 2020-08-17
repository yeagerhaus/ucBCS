function MoveDatatoSeedingSheet() {
  var spreadsheet = SpreadsheetApp.getActive();
  spreadsheet.getRange('A6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!B6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('A6:A17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('B6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!C6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('B6:B17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('C6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!D6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('C6:C17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('D6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!E6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('D6:D17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('E6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!F6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('E6:E17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('H6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!I6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('H6:H17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('I6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!J6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('I6:I17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('J6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!K6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('J6:J17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('K6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!L6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('K6:K17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('L6').activate();
  spreadsheet.getCurrentCell().setFormula('=\'Compiled Stats\'!M6');
  spreadsheet.getActiveRange().autoFill(spreadsheet.getRange('L6:L17'), SpreadsheetApp.AutoFillSeries.DEFAULT_SERIES);
  spreadsheet.getRange('L6:L17').activate();
};

function PerformSeeding() {
  var spreadsheet = SpreadsheetApp.getActive();
  spreadsheet.getRange('A6:E17').activate()
  .sort([{column: 2, ascending: false}, {column: 5, ascending: false}, {column: 4, ascending: true}]);
  spreadsheet.getRange('H6:L17').activate()
  .sort([{column: 9, ascending: false}, {column: 12, ascending: false}, {column: 11, ascending: true}]);
};