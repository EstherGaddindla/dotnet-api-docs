      Dim numberA As BigInteger = 945834723
      Dim numberB As BigInteger = 345145625
      Dim numberC As BigInteger = 945834724 
      Dim numberD As BigInteger = 945834723
      Console.WriteLine( _
              BigInteger.op_GreaterThanOrEqual(numberA, numberB))    ' Displays True
      Console.WriteLine( _
              BigInteger.op_GreaterThanOrEqual(numberA, numberC))    ' Displays False
      Console.WriteLine( _
              BigInteger.op_GreaterThanOrEqual(numberA, numberD))    ' Displays True       