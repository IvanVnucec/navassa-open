
void FUN_01019864(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  do {
    if (((param_1 & 1 << (uVar3 & 0xff)) != 0) && (iVar1 == 0)) {
      iVar1 = FUN_010198dc(0,0,param_2);
    }
    uVar2 = uVar3 + 2;
    if (((param_1 & 1 << (uVar2 & 0xff)) != 0) && (iVar1 == 0)) {
      iVar1 = FUN_01019830(uVar2 & 0xff,5,param_2,uVar2,param_4);
    }
    if (((param_1 & 1 << (uVar3 + 4 & 0xff)) != 0) && (iVar1 == 0)) {
      iVar1 = FUN_010198dc(0,1,param_2);
    }
    if (((param_1 & 1 << (uVar3 + 6 & 0xff)) != 0) && (iVar1 == 0)) {
      iVar1 = FUN_010198dc(0,2,param_2);
    }
    if (((param_1 & 1 << (uVar3 + 8 & 0xff)) != 0) && (iVar1 == 0)) {
      iVar1 = FUN_010198dc(0,3,param_2);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  return;
}

