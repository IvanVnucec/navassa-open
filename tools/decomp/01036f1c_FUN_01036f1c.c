
undefined8
FUN_01036f1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,byte *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  uVar4 = 0xff17;
  cVar1 = (char)param_3 + '\x01';
  bVar5 = 1;
  do {
    iVar2 = FUN_0101f06a(param_1,param_2,param_3,bVar5);
    iVar3 = FUN_0101f06a(param_1,param_2,cVar1,bVar5);
    if (iVar2 == 1 && iVar3 == 1) {
      uVar4 = FUN_0101f078(param_1,param_2,param_3,bVar5);
      FUN_0101206c(param_4,uVar4,0x10);
      uVar4 = FUN_0101f078(param_1,param_2,cVar1,bVar5);
      FUN_0101206c(param_5,uVar4,0x10);
      *param_6 = bVar5;
      uVar4 = 0;
      break;
    }
    bVar5 = bVar5 + 1;
  } while (bVar5 < 8);
  return CONCAT44(param_4,uVar4);
}

