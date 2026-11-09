
void FUN_01017556(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar2 = param_2 & 0xffffff00;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    uVar6 = 0x88;
    if (param_2 == 1) {
      if (param_3 == 0) {
        uVar5 = 0x80;
      }
      else if (param_3 == 2) {
        uVar5 = 0x88;
        uVar8 = uVar5;
      }
      uVar3 = 8;
      uVar4 = 8;
      if (param_4 == 1) {
        uVar6 = 4;
      }
      else if (param_4 == 2) {
        uVar6 = 0x40;
      }
      else if (param_4 == 3) {
        uVar4 = 0x48;
      }
    }
    else if (param_4 == 1) {
      uVar2 = 1;
    }
    iVar9 = (short)param_1 * 0x13;
    iVar1 = iVar9 + 0x69;
    uVar3 = FUN_0101806c(iVar1,iVar9 + 0x6a,0xcc,uVar3);
    uVar3 = FUN_0101806c(uVar3,iVar1 + 5,0xcc,uVar4);
    uVar3 = FUN_0101806c(uVar3,iVar1 + 9,0xcc,uVar5);
    uVar8 = FUN_0101806c(uVar3,iVar1 + 0xd,0xcc,uVar8);
    uVar8 = FUN_0101806c(uVar8,iVar1 + 0x10,0xcc,uVar6);
    uVar8 = FUN_0101806a(uVar8,iVar1 + 2);
    uVar8 = FUN_01018068(uVar8,iVar1 + 6);
    uVar8 = FUN_0101806a(uVar8,iVar1 + 10);
    FUN_0101806a(uVar8,iVar1 + 0xe);
    uVar7 = uVar2 & 0xff;
    uVar2 = iVar1 + 0x11;
  }
  else {
    if (param_2 == 1) {
      if (param_3 == 0) {
        uVar3 = 4;
        uVar4 = 4;
        uVar5 = 0x40;
      }
      else if (param_3 == 2) {
        uVar5 = 0x44;
        uVar3 = 4;
        uVar4 = 4;
        uVar8 = 0x44;
      }
    }
    else if (param_3 == 1) {
      uVar7 = 1;
    }
    iVar1 = (short)param_1 * 0xc;
    uVar3 = FUN_01017e00(0xc,iVar1 + 0x77U & 0xffff,0xcc,uVar3,uVar2,param_3,param_4);
    uVar3 = FUN_0101806c(uVar3,iVar1 + 0x7a,0xcc,uVar4);
    uVar3 = FUN_0101806c(uVar3,iVar1 + 0x7d,0xcc,uVar5);
    uVar8 = FUN_0101806c(uVar3,iVar1 + 0x80,0xcc,uVar8);
    uVar8 = FUN_0101806a(uVar8,iVar1 + 0x78);
    uVar8 = FUN_01018068(uVar8,iVar1 + 0x7b);
    FUN_0101806a(uVar8,iVar1 + 0x7e);
    uVar2 = iVar1 + 0x81;
  }
  FUN_010027dc((uVar2 & 0xffff) + 0x46000000,1,uVar7);
  return;
}

