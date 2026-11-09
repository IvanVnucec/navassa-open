
undefined8 FUN_01030e58(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = (uint)*(byte *)(*param_1 + 1);
  FUN_01035298(uVar7);
  uVar2 = FUN_0100a4f4(uVar7);
  *(undefined1 *)(param_1 + 6) = uVar2;
  FUN_0100a506(uVar7,0);
  cVar1 = *(char *)(DAT_010313ec + uVar7 * 0xbc + 0x3f);
  if (cVar1 == '\0') {
    uVar6 = 7;
  }
  else if (cVar1 == '\x01') {
    uVar6 = 4;
  }
  else {
    uVar6 = 0;
  }
  FUN_010354fa(uVar7,uVar6,uVar7 * 0xbc,cVar1,param_3,param_4);
  FUN_01031158(uVar7,param_1);
  uVar6 = 3;
  FUN_010352b4(uVar7,1,6,6);
  FUN_010354d8(uVar7,*(undefined1 *)(param_1[1] + 6));
  FUN_010354a6(uVar7,0,0);
  FUN_010352fa(uVar7,*(undefined1 *)((int)param_1 + 0x19));
  FUN_0103531a(uVar7,*(undefined1 *)((int)param_1 + 0x1a));
  FUN_0103533a(uVar7,*(undefined1 *)((int)param_1 + 0x1b));
  FUN_0103535a(uVar7,(char)param_1[7]);
  FUN_0103537a(uVar7,(char)param_1[7]);
  FUN_010353de(uVar7,*(undefined2 *)((int)param_1 + 0x1e));
  iVar4 = param_1[1];
  FUN_01035414(uVar7,*(undefined1 *)(iVar4 + 5),*(undefined1 *)(iVar4 + 4),
               *(undefined1 *)(iVar4 + 3));
  iVar4 = FUN_0101ddf6(uVar7,param_1 + 9);
  if (iVar4 == 0) {
    FUN_0101deb2(uVar7,2,0);
    FUN_0101db98(DAT_01031260,uVar7,0);
    FUN_01035588(uVar7,0);
    FUN_0103544a(uVar7);
    iVar4 = FUN_01031352(uVar7,5);
    if (iVar4 == 0) {
      uVar2 = FUN_01035608();
      *(undefined1 *)(param_1[2] + 0x18) = uVar2;
      uVar3 = FUN_01035558(uVar7);
      *(undefined2 *)(param_1[2] + 0x14) = uVar3;
      uVar3 = FUN_010355cc(uVar7);
      *(undefined2 *)(param_1[2] + 0x16) = uVar3;
      iVar4 = FUN_01031382();
      goto LAB_01030f74;
    }
    FUN_01035468(uVar7);
  }
  else {
LAB_01030f74:
    if (iVar4 == 0) goto LAB_01030f86;
  }
  FUN_0103551c(uVar7,0);
  FUN_01035588(uVar7,0);
LAB_01030f86:
  iVar5 = FUN_0101de6a(uVar7,param_1 + 9);
  if (iVar4 == 0) {
    iVar4 = iVar5;
  }
  FUN_0100a506(uVar7,(char)param_1[6]);
  return CONCAT44(uVar6,iVar4);
}

