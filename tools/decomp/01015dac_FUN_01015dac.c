
undefined8 FUN_01015dac(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_01015e8c;
  pcVar3 = (char *)(DAT_01015e84 + param_1 * 0xc);
  puVar4 = (undefined4 *)0x0;
  if (*pcVar3 == '\x01') {
    puVar4 = *(undefined4 **)(pcVar3 + 4);
    cVar2 = (char)(param_2 & 8);
    if ((param_2 & 8) != 0) {
      cVar2 = '\x01';
    }
    pcVar3[1] = cVar2;
    puVar4[2] = 0;
    *puVar4 = param_3;
    FUN_0102598c(puVar4 + 3,2,2);
    FUN_01015d48(param_1);
    if (param_4 == 1) {
      FUN_01015d58(param_1);
    }
    puVar4[2] = param_2;
    *pcVar3 = '\x02';
  }
  else {
    *DAT_01015e88 = s_gpt_c_01015ee0;
    *puVar1 = 0x152;
    FUN_01015e20();
  }
  return CONCAT44(param_4,puVar4);
}

