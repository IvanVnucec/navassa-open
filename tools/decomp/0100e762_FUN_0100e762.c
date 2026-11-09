
int FUN_0100e762(byte *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_24 [16];
  
  puVar1 = DAT_0100ee18;
  bVar2 = FUN_0100a4f4(*param_1);
  param_1[0x80] = bVar2;
  FUN_0100a506(*param_1,0);
  iVar4 = FUN_0100e65c(param_1,auStack_24);
  bVar2 = 0;
  while ((iVar6 = *(int *)(param_1 + 0x10), bVar2 < *(byte *)(iVar6 + 1) && (iVar4 == 0))) {
    if (bVar2 == 0) {
      uVar3 = 0x28;
    }
    else {
      uVar3 = 7;
    }
    *(undefined2 *)(iVar6 + 0x30) = uVar3;
    *(char *)(iVar6 + 0x32) = (char)uVar3;
    uVar5 = FUN_0100a5ae(*param_1,(uint)bVar2 << (uint)*(byte *)(*(int *)(param_1 + 0x10) + 3) &
                                  0xff);
    iVar4 = FUN_0101dc72(*param_1,uVar5,*puVar1);
    if ((iVar4 == 0) && (iVar4 = FUN_0100e590(param_1,bVar2,1,1), iVar4 == 0)) {
      FUN_0100e8a4(param_1,bVar2);
    }
    bVar2 = bVar2 + 1;
  }
  if (iVar4 == 0) {
    if (param_1[0xb0] == 0) {
      iVar4 = FUN_0100e934(*param_1,0,iVar6,*(undefined4 *)(param_1 + 0x18),0);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      FUN_0100e860(param_1);
      *(undefined2 *)
       (DAT_0100ee1c + (uint)*param_1 * 0xd00 + *(int *)(param_1 + 0xb4) * 0x40 +
        (uint)param_1[0xb1] * 2 + 0xc00) = 1;
      if (param_1[0xb1] == 0) {
        FUN_0100eafa(*param_1,0);
        FUN_0100ed42((uint)*param_1,0,0,
                     *(undefined4 *)
                      (DAT_0100ee28 +
                      (uint)*(byte *)(DAT_0100ee24 + (uint)*(byte *)(DAT_0100ee20 + (uint)*param_1))
                      * 4));
      }
    }
    iVar4 = FUN_0100e720(param_1,auStack_24);
  }
  return iVar4;
}

