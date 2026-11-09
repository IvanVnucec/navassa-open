
void FUN_01015c80(int param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_01015e84 + param_1 * 0xc);
  if (*pcVar4 != '\x01') {
    *DAT_01015e88 = s_gpt_c_01015ee0;
    *DAT_01015e8c = 100;
    FUN_01015e20();
  }
  uVar3 = DAT_01015e94;
  uVar2 = DAT_01015e90;
  pcVar4[1] = (char)param_3;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  lVar1 = (ulonglong)*(uint *)(DAT_01015e98 + 0x14) * (ulonglong)param_2;
  uVar3 = FUN_0101369c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar3,0);
  **(undefined4 **)(pcVar4 + 4) = uVar3;
  FUN_0102598c(*(int *)(pcVar4 + 4) + 0xc,2,2);
  *(uint *)(*(int *)(pcVar4 + 4) + 8) = param_3 << 3 | 0x60;
  FUN_01015d48(param_1);
  if (param_4 == 1) {
    FUN_01015d58(param_1);
  }
  FUN_0102598c(*(int *)(pcVar4 + 4) + 8,0x10,0x10);
  *pcVar4 = '\x02';
  return;
}

