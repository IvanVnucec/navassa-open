
undefined4 FUN_0101d2b8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_0101d5b0;
  bVar5 = param_2 == 3;
  iVar4 = *(int *)(DAT_0101d59c + param_1 * 4) + 0x175;
  switch(param_2) {
  case 0:
    uVar3 = FUN_0101d444();
    uVar3 = FUN_0101cb30(uVar3,1,1);
    uVar3 = FUN_0101cb30(uVar3,8,8);
    if (param_1 == 0) {
      uVar3 = FUN_0101d44e();
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_0101d452(uVar3,2,2);
      uVar2 = 2;
    }
    uVar3 = FUN_0101d452(uVar3,uVar2,0);
    uVar3 = FUN_0101cb30(uVar3,2,2);
    FUN_0101d448(uVar3,2,2);
    uVar3 = FUN_0101d434();
    FUN_0101d448(uVar3,4,4);
    uVar3 = 1;
    goto LAB_0101d420;
  case 1:
    FUN_0101ccb2(DAT_0101d59c,2,0);
    FUN_0101d284();
    FUN_0101d458();
    FUN_0101d522();
    FUN_0101d444();
    uVar3 = FUN_0101cb2c();
    if (param_1 == 0) {
      uVar3 = FUN_0101d44e();
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_0101d452(uVar3,2,2);
      uVar2 = 2;
    }
    FUN_0101d452(uVar3,uVar2,0);
    uVar3 = FUN_0101d540();
    FUN_0101cb30(uVar3,2,2);
    uVar3 = 1;
    iVar4 = *(int *)(iVar1 + param_1 * 4) + 0x1c1;
    goto LAB_0101d420;
  case 2:
    FUN_0101ccb2(DAT_0101d59c,2,2);
    uVar3 = FUN_0101d444();
    uVar3 = FUN_0101cb30(uVar3,0x10,0x10);
    if (param_1 == 0) {
      uVar3 = FUN_0101d44e();
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_0101d452(uVar3,2,2);
      uVar2 = 2;
    }
    FUN_0101d452(uVar3,uVar2,0);
    FUN_0101d540();
    FUN_0101d434();
    bVar5 = param_3 == 1;
  default:
    if (!bVar5) {
      return param_4;
    }
    break;
  case 3:
    FUN_0101ccb2(DAT_0101d59c,2,2);
    uVar3 = FUN_0101ccae();
    FUN_0101ccb2(uVar3,4,4);
    uVar3 = FUN_0101d444();
    uVar3 = FUN_0101cb30(uVar3,0x20,0x20);
    if (param_1 == 0) {
      uVar3 = FUN_0101d44e();
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_0101d452(uVar3,2,2);
      uVar2 = 2;
    }
    uVar3 = FUN_0101d452(uVar3,uVar2,0);
    FUN_0101cb30(uVar3,2,2);
    FUN_0101d434();
  }
  uVar3 = 4;
LAB_0101d420:
  uVar3 = pin_update(iVar4,uVar3,uVar3,param_4);
  return uVar3;
}

