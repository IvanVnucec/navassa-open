
int FUN_01023644(int param_1,int param_2,uint *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined2 local_24;
  char local_22 [6];
  
  uVar6 = *(undefined4 *)(param_1 + 0xc + param_2 * 4);
  iVar4 = 1;
  local_22[0] = '\0';
  local_24 = 0;
  *param_3 = 0;
  if (param_2 == 0) {
    return 1;
  }
  piVar5 = (int *)(param_1 + 0xc);
  do {
    iVar3 = *piVar5;
    sched_dep_compare(iVar3,uVar6,(int)&local_24 + 1,local_22,&local_24);
    if (((*(char *)(iVar3 + 0x1c) == '\x05') ||
        ((*(char *)(iVar3 + 0x1c) == '\a' && ((char)local_24 != '\0')))) &&
       (-1 < (int)((uint)*(byte *)(iVar3 + 0x60) << 0x1b))) {
      *param_3 = *param_3 + 1;
    }
    puVar2 = DAT_01023f1c;
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar3 + 0x1c);
      if (cVar1 == '\x05') {
LAB_010236b8:
        bVar7 = local_24._1_1_ == '\0' && local_22[0] == '\0';
      }
      else {
        if (cVar1 == '\a') {
          if ((char)local_24 != '\0') goto LAB_010236b8;
        }
        else if (cVar1 != '\b') goto LAB_010236d2;
        bVar7 = local_24._1_1_ == '\0';
      }
      if (!bVar7) {
        iVar4 = 0;
      }
    }
LAB_010236d2:
    param_2 = param_2 + -1;
    piVar5 = piVar5 + 1;
    if (param_2 == 0) {
      if (1 < *param_3) {
        if (iVar4 == 0) {
          return 0;
        }
        *DAT_01023f18 = s_scheduler_c_01023820;
        *puVar2 = 0x2b0;
        boot_msg(1,0xff31,3);
      }
      if (*param_3 != 0) {
        return 0;
      }
      return iVar4;
    }
  } while( true );
}

