
longlong FUN_010275c6(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  param_1[0x78] = 1;
  *(undefined4 *)param_1[3] = 5;
  uVar5 = FUN_01027842(param_1[2]);
  FUN_01028996((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0);
  FUN_010278dc();
  if ((*param_2 == 0) && (param_1[0x6e] != 0)) {
    FUN_01028996();
    iVar2 = FUN_0102778c();
    *(undefined4 *)(param_1[3] + 0x20) = 0;
    param_1[0x79] = (*(byte *)*param_1 & 0xf) + 1;
    iVar3 = FUN_01027df0(param_1,param_1 + 6,1);
    if (*param_2 == 0 && iVar3 == 0) {
      param_1[0x93] = *(undefined4 *)param_1[2];
      uVar1 = *(ushort *)*param_1;
      iVar3 = (((uint)uVar1 << 0x14) >> 0x1c) + 1;
      param_1[0x79] = iVar3;
      iVar3 = FUN_01027666(iVar3,(uint)uVar1,2);
      if ((*param_2 == 0 && iVar3 == 0) && (iVar2 != 1 && iVar2 != 4)) {
        uVar1 = *(ushort *)*param_1;
        uVar4 = ((uint)uVar1 << 0x14) >> 0x1c;
        param_1[0x79] = uVar4;
        FUN_01027666(uVar4,(uint)uVar1,3);
      }
    }
  }
  return (ulonglong)param_4 << 0x20;
}

