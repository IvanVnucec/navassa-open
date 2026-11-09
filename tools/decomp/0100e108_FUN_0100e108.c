
void FUN_0100e108(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  bVar1 = *param_1;
  iVar3 = DAT_0100edf4 + (short)(ushort)bVar1 * 0xbc;
  if (*(char *)(iVar3 + 0x3c) == '\x01') {
    uVar6 = 10;
  }
  else {
    uVar6 = 8;
  }
  lVar2 = (ulonglong)*(uint *)(iVar3 + 0x28) * 0xf;
  uVar6 = FUN_0101bb08((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar6);
  *(undefined4 *)(param_1 + 4) = uVar6;
  puVar4 = *(undefined1 **)(param_1 + 0x3c);
  puVar4[0x12] = 0;
  puVar4[0x1e] = 2;
  *puVar4 = 0;
  puVar4[0x10] = 1;
  puVar4[0x11] = 1;
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined2 *)(puVar4 + 0xc) = 0;
  puVar4[0xe] = 0;
  iVar3 = DAT_0100edfc;
  iVar7 = *(int *)(DAT_0100edf8 + (uint)bVar1 * 4);
  iVar5 = *(int *)(param_1 + 0x3c);
  if (param_1[0x34] == 6) {
    *(undefined1 *)(iVar5 + 0x1f) = 1;
    uVar6 = *(undefined4 *)((short)(ushort)*param_1 * 0x54 + iVar3 + 0x6c);
  }
  else {
    if (param_1[0x34] != 5) {
      *(undefined1 *)(iVar5 + 0x1f) = 0;
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar3 + (short)(ushort)*param_1 * 0x54 + 0x68);
      goto LAB_0100e1a0;
    }
    *(undefined1 *)(iVar5 + 0x1f) = 2;
    uVar6 = *(undefined4 *)((short)(ushort)*param_1 * 0x54 + iVar3 + 0x54);
  }
  *(undefined4 *)(iVar5 + 8) = uVar6;
LAB_0100e1a0:
  FUN_0101c40c(iVar5,*param_1 + 2,1);
  FUN_0101d920((uint)bVar1,0);
  iVar7 = iVar7 + 0x93;
  pin_update(iVar7,0x20,0);
  pin_update(iVar7,0x40,0);
  pin_update(iVar7,4,0);
  pin_update(iVar7,8,0,param_4);
  return;
}

