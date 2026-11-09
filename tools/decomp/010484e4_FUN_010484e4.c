
void FUN_010484e4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    thunk_FUN_01013a76(0x10,1);
    uVar3 = thunk_FUN_01013a76(0x11,1);
    uVar2 = FUN_01048554((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
    FUN_01048556(uVar2,1,0);
    thunk_FUN_01009094(2,0);
    thunk_FUN_01008f08(2,0);
                    /* WARNING: Could not recover jumptable at 0x01048078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0104807c)(2);
    return;
  }
  uVar2 = FUN_01048554(param_1,param_2,param_1);
  FUN_01048556(uVar2,1,param_1);
  thunk_FUN_01009094(2,param_1);
  thunk_FUN_01013a76(0x10,0);
  thunk_FUN_01013a76(0x11,0);
  puVar1 = DAT_01048b5c;
  *DAT_01048b5c = 0;
  puVar1[0x1c] = 0;
  return;
}

