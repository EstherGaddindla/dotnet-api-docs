      OperationCollection^ myOperationCollection = myPortTypeCollection[ 0 ]->Operations;
      Operation^ myOperation = gcnew Operation;
      myOperation->Name = "Add";
      OperationMessage^ myOperationMessageInput = (OperationMessage^)(gcnew OperationInput);
      myOperationMessageInput->Message = gcnew XmlQualifiedName( "AddSoapIn",myDescription->TargetNamespace );
      OperationMessage^ myOperationMessageOutput = (OperationMessage^)(gcnew OperationOutput);
      myOperationMessageOutput->Message = gcnew XmlQualifiedName( "AddSoapOut",myDescription->TargetNamespace );
      myOperation->Messages->Add( myOperationMessageInput );
      myOperation->Messages->Add( myOperationMessageOutput );
      myOperationCollection->Add( myOperation );