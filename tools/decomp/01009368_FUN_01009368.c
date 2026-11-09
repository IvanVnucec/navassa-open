
undefined8
FUN_01009368(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  byte bVar3;
  undefined4 uVar4;
  
  uVar4 = param_2;
  iVar1 = FUN_01008664();
  if (iVar1 == 0) {
    FUN_010093fc();
    if (param_4 < 2) {
      *(char *)(extraout_r1 + 0x46) = (char)param_4;
      *(undefined1 *)(extraout_r1 + 0x47) = 0;
    }
    else {
      *(undefined1 *)(extraout_r1 + 0x47) = 1;
    }
    iVar1 = FUN_010091fc(param_3,param_6,param_1,param_2,param_5,param_6,param_7);
    uVar4 = param_5;
    if (iVar1 == 0) {
      if (*(char *)(extraout_r1 + 0x58) == '\x01' && param_7 == 0) {
        do {
          bVar3 = 0;
          do {
            if ((iVar1 == 0) && (iVar2 = FUN_01008628(param_3,param_7,bVar3), iVar2 == 1)) {
              param_5 = param_3;
              iVar1 = FUN_010092d0(param_7,bVar3,param_1,param_2,param_3,0);
            }
            bVar3 = bVar3 + 1;
          } while (bVar3 < 2);
          param_7 = param_7 + 1;
          uVar4 = param_5;
        } while (param_7 < 5);
      }
      else if (param_7 != 0) {
        FUN_0100b594(param_7);
        uVar4 = param_5;
      }
    }
  }
  return CONCAT44(uVar4,iVar1);
}

