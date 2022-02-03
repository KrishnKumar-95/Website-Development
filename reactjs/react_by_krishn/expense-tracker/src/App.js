import './components/Expenses/ExpenseItem.css'
import Expenses from './components/Expenses/Expenses';
import NewExpense from './components/NewExpense/NewExpense';

const App = () => {

  // JavaScript Array of Objects of expenses
  const expense = [
    {id:"e1",title:'Car Insurance',amount:300.52,date: new Date()},
    {id:"e1",title:'New Television',amount:295.81,date: new Date()},
    {id:"e1",title:'Buy Smartphone',amount:150.79,date: new Date()},
    {id:"e1",title:'Tution Fee',amount:265.53,date: new Date()}
  ];

  return (
    <div className="App">
      <NewExpense />  {/*  ----> ExpenseForm   */}
      <Expenses items={expense} />
    </div>
  );
}

export default App;