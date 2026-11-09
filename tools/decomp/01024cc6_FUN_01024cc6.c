
void FUN_01024cc6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = 0;
  uVar1 = param_1;
  do {
    uVar1 = FUN_01024de6(uVar1,bVar2,0);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 9);
  FUN_01024ca2(param_1,1,param_4);
  return;
}

