
void event_action_executor(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_0101d5b0 + param_1 * 4);
  iVar4 = *(int *)(DAT_0101d59c + param_1 * 4) + 0x175;
  switch(param_2) {
  case 0:
    uVar1 = FUN_0101d54a();
    FUN_0101d448(uVar1,1,0);
    FUN_0101d522();
    FUN_0101d518();
    FUN_0101d52c();
    FUN_0101d50e();
    uVar1 = 0;
    uVar2 = 1;
    goto LAB_0101d502;
  case 1:
    uVar1 = FUN_0101d54a();
    uVar2 = 4;
    break;
  case 2:
    FUN_0101d540();
    uVar1 = FUN_0101d54a();
    uVar2 = 0x10;
    break;
  case 3:
    uVar1 = FUN_0101d540();
    FUN_0101cb30(uVar1,1,0);
    FUN_0101d536();
    uVar1 = FUN_0101d54a();
    uVar2 = 0x20;
    break;
  default:
    return;
  }
  FUN_0101d448(uVar1,uVar2,0);
  FUN_0101d518();
  FUN_0101d50e();
  uVar1 = FUN_01010262(param_1);
  uVar2 = 3;
  iVar4 = iVar3 + 0x4a;
LAB_0101d502:
  pin_update(iVar4,uVar2,uVar1);
  return;
}

