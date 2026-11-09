
int FUN_0100aa26(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar1 = DAT_0100abec;
  iVar2 = *(int *)(DAT_0100abe4 + param_2 * 4);
  pcVar3 = DAT_0100abf0;
  if (param_4 == 0) {
    *(byte *)(*(int *)(DAT_0100abe8 + param_2 * 4) + 0x26) = (byte)(-(uint)(param_3 == 0) >> 0x1f);
    pcVar3 = pcVar1;
  }
  (*pcVar3)(param_4,iVar2 + 0x68,((uint)*(byte *)(param_1 + param_3 + 7) << 0x19) >> 0x18,6);
  (*pcVar3)(param_4,iVar2 + 0x3e,*(undefined1 *)(param_1 + param_3 + 10),3);
  return param_4;
}

