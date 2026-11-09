
longlong FUN_0103b614(int param_1,int param_2,short *param_3,short *param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(DAT_0103b8f8 + param_1 * 4);
  pcVar3 = DAT_0103b900;
  pcVar1 = DAT_0103b8fc;
  if (param_5 != 0) {
    pcVar3 = DAT_0103b908;
    pcVar1 = DAT_0103b904;
  }
  (*pcVar1)(param_5,iVar2 + 0x4d,0,0x10);
  if (param_2 != 0) {
    (*pcVar3)(param_5,iVar2 + 0x50,(char)*param_3);
    (*pcVar3)(param_5,iVar2 + 0x51,(uint)((int)*param_3 << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x52,(char)*param_4);
    (*pcVar3)(param_5,iVar2 + 0x53,(uint)((int)*param_4 << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x54,(char)param_3[1]);
    (*pcVar3)(param_5,iVar2 + 0x55,(uint)((int)param_3[1] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x56,(char)param_4[1]);
    (*pcVar3)(param_5,iVar2 + 0x57,(uint)((int)param_4[1] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x58,(char)param_3[2]);
    (*pcVar3)(param_5,iVar2 + 0x59,(uint)((int)param_3[2] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x5a,(char)param_4[2]);
    (*pcVar3)(param_5,iVar2 + 0x5b,(uint)((int)param_4[2] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x5c,(char)param_3[3]);
    (*pcVar3)(param_5,iVar2 + 0x5d,(uint)((int)param_3[3] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x5e,(char)param_4[3]);
    (*pcVar3)(param_5,iVar2 + 0x5f,(uint)((int)param_4[3] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x60,(char)param_3[4]);
    (*pcVar3)(param_5,iVar2 + 0x61,(uint)((int)param_3[4] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x62,(char)param_4[4]);
    (*pcVar3)(param_5,iVar2 + 99,(uint)((int)param_4[4] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 100,(char)param_3[5]);
    (*pcVar3)(param_5,iVar2 + 0x65,(uint)((int)param_3[5] << 0x10) >> 0x18);
    (*pcVar3)(param_5,iVar2 + 0x66,(char)param_4[5]);
    (*pcVar3)(param_5,iVar2 + 0x67,(uint)((int)param_4[5] << 0x10) >> 0x18);
    (*pcVar1)(param_5,iVar2 + 0x6a,1,1);
    (*pcVar1)(param_5,iVar2 + 0x4d,0x10,0x10);
  }
  return ZEXT48(param_4) << 0x20;
}

