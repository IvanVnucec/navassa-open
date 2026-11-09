
undefined4 FUN_01035144(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0103513c();
  uVar1 = FUN_010351a2();
  FUN_010351a6(uVar1,0x10,0);
  FUN_01015e2c(10);
  uVar1 = FUN_010351a2();
  uVar1 = FUN_010351a6(uVar1,0x10,0);
  uVar1 = FUN_010351ac(uVar1,0x80,0x80);
  uVar1 = FUN_010351ac(uVar1,0x40,0x40);
  iVar2 = FUN_01034d76(uVar1,4,2);
  uVar1 = 0;
  if (iVar2 == 0) {
    iVar2 = FUN_01034d76(0,1,2);
    if (iVar2 != 0) {
      uVar1 = 0x2708;
    }
  }
  else {
    uVar1 = 0x2707;
  }
  return uVar1;
}

