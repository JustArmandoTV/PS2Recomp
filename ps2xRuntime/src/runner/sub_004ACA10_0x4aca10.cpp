#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ACA10
// Address: 0x4aca10 - 0x4acf30
void sub_004ACA10_0x4aca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACA10_0x4aca10");
#endif

    switch (ctx->pc) {
        case 0x4aca10u: goto label_4aca10;
        case 0x4aca14u: goto label_4aca14;
        case 0x4aca18u: goto label_4aca18;
        case 0x4aca1cu: goto label_4aca1c;
        case 0x4aca20u: goto label_4aca20;
        case 0x4aca24u: goto label_4aca24;
        case 0x4aca28u: goto label_4aca28;
        case 0x4aca2cu: goto label_4aca2c;
        case 0x4aca30u: goto label_4aca30;
        case 0x4aca34u: goto label_4aca34;
        case 0x4aca38u: goto label_4aca38;
        case 0x4aca3cu: goto label_4aca3c;
        case 0x4aca40u: goto label_4aca40;
        case 0x4aca44u: goto label_4aca44;
        case 0x4aca48u: goto label_4aca48;
        case 0x4aca4cu: goto label_4aca4c;
        case 0x4aca50u: goto label_4aca50;
        case 0x4aca54u: goto label_4aca54;
        case 0x4aca58u: goto label_4aca58;
        case 0x4aca5cu: goto label_4aca5c;
        case 0x4aca60u: goto label_4aca60;
        case 0x4aca64u: goto label_4aca64;
        case 0x4aca68u: goto label_4aca68;
        case 0x4aca6cu: goto label_4aca6c;
        case 0x4aca70u: goto label_4aca70;
        case 0x4aca74u: goto label_4aca74;
        case 0x4aca78u: goto label_4aca78;
        case 0x4aca7cu: goto label_4aca7c;
        case 0x4aca80u: goto label_4aca80;
        case 0x4aca84u: goto label_4aca84;
        case 0x4aca88u: goto label_4aca88;
        case 0x4aca8cu: goto label_4aca8c;
        case 0x4aca90u: goto label_4aca90;
        case 0x4aca94u: goto label_4aca94;
        case 0x4aca98u: goto label_4aca98;
        case 0x4aca9cu: goto label_4aca9c;
        case 0x4acaa0u: goto label_4acaa0;
        case 0x4acaa4u: goto label_4acaa4;
        case 0x4acaa8u: goto label_4acaa8;
        case 0x4acaacu: goto label_4acaac;
        case 0x4acab0u: goto label_4acab0;
        case 0x4acab4u: goto label_4acab4;
        case 0x4acab8u: goto label_4acab8;
        case 0x4acabcu: goto label_4acabc;
        case 0x4acac0u: goto label_4acac0;
        case 0x4acac4u: goto label_4acac4;
        case 0x4acac8u: goto label_4acac8;
        case 0x4acaccu: goto label_4acacc;
        case 0x4acad0u: goto label_4acad0;
        case 0x4acad4u: goto label_4acad4;
        case 0x4acad8u: goto label_4acad8;
        case 0x4acadcu: goto label_4acadc;
        case 0x4acae0u: goto label_4acae0;
        case 0x4acae4u: goto label_4acae4;
        case 0x4acae8u: goto label_4acae8;
        case 0x4acaecu: goto label_4acaec;
        case 0x4acaf0u: goto label_4acaf0;
        case 0x4acaf4u: goto label_4acaf4;
        case 0x4acaf8u: goto label_4acaf8;
        case 0x4acafcu: goto label_4acafc;
        case 0x4acb00u: goto label_4acb00;
        case 0x4acb04u: goto label_4acb04;
        case 0x4acb08u: goto label_4acb08;
        case 0x4acb0cu: goto label_4acb0c;
        case 0x4acb10u: goto label_4acb10;
        case 0x4acb14u: goto label_4acb14;
        case 0x4acb18u: goto label_4acb18;
        case 0x4acb1cu: goto label_4acb1c;
        case 0x4acb20u: goto label_4acb20;
        case 0x4acb24u: goto label_4acb24;
        case 0x4acb28u: goto label_4acb28;
        case 0x4acb2cu: goto label_4acb2c;
        case 0x4acb30u: goto label_4acb30;
        case 0x4acb34u: goto label_4acb34;
        case 0x4acb38u: goto label_4acb38;
        case 0x4acb3cu: goto label_4acb3c;
        case 0x4acb40u: goto label_4acb40;
        case 0x4acb44u: goto label_4acb44;
        case 0x4acb48u: goto label_4acb48;
        case 0x4acb4cu: goto label_4acb4c;
        case 0x4acb50u: goto label_4acb50;
        case 0x4acb54u: goto label_4acb54;
        case 0x4acb58u: goto label_4acb58;
        case 0x4acb5cu: goto label_4acb5c;
        case 0x4acb60u: goto label_4acb60;
        case 0x4acb64u: goto label_4acb64;
        case 0x4acb68u: goto label_4acb68;
        case 0x4acb6cu: goto label_4acb6c;
        case 0x4acb70u: goto label_4acb70;
        case 0x4acb74u: goto label_4acb74;
        case 0x4acb78u: goto label_4acb78;
        case 0x4acb7cu: goto label_4acb7c;
        case 0x4acb80u: goto label_4acb80;
        case 0x4acb84u: goto label_4acb84;
        case 0x4acb88u: goto label_4acb88;
        case 0x4acb8cu: goto label_4acb8c;
        case 0x4acb90u: goto label_4acb90;
        case 0x4acb94u: goto label_4acb94;
        case 0x4acb98u: goto label_4acb98;
        case 0x4acb9cu: goto label_4acb9c;
        case 0x4acba0u: goto label_4acba0;
        case 0x4acba4u: goto label_4acba4;
        case 0x4acba8u: goto label_4acba8;
        case 0x4acbacu: goto label_4acbac;
        case 0x4acbb0u: goto label_4acbb0;
        case 0x4acbb4u: goto label_4acbb4;
        case 0x4acbb8u: goto label_4acbb8;
        case 0x4acbbcu: goto label_4acbbc;
        case 0x4acbc0u: goto label_4acbc0;
        case 0x4acbc4u: goto label_4acbc4;
        case 0x4acbc8u: goto label_4acbc8;
        case 0x4acbccu: goto label_4acbcc;
        case 0x4acbd0u: goto label_4acbd0;
        case 0x4acbd4u: goto label_4acbd4;
        case 0x4acbd8u: goto label_4acbd8;
        case 0x4acbdcu: goto label_4acbdc;
        case 0x4acbe0u: goto label_4acbe0;
        case 0x4acbe4u: goto label_4acbe4;
        case 0x4acbe8u: goto label_4acbe8;
        case 0x4acbecu: goto label_4acbec;
        case 0x4acbf0u: goto label_4acbf0;
        case 0x4acbf4u: goto label_4acbf4;
        case 0x4acbf8u: goto label_4acbf8;
        case 0x4acbfcu: goto label_4acbfc;
        case 0x4acc00u: goto label_4acc00;
        case 0x4acc04u: goto label_4acc04;
        case 0x4acc08u: goto label_4acc08;
        case 0x4acc0cu: goto label_4acc0c;
        case 0x4acc10u: goto label_4acc10;
        case 0x4acc14u: goto label_4acc14;
        case 0x4acc18u: goto label_4acc18;
        case 0x4acc1cu: goto label_4acc1c;
        case 0x4acc20u: goto label_4acc20;
        case 0x4acc24u: goto label_4acc24;
        case 0x4acc28u: goto label_4acc28;
        case 0x4acc2cu: goto label_4acc2c;
        case 0x4acc30u: goto label_4acc30;
        case 0x4acc34u: goto label_4acc34;
        case 0x4acc38u: goto label_4acc38;
        case 0x4acc3cu: goto label_4acc3c;
        case 0x4acc40u: goto label_4acc40;
        case 0x4acc44u: goto label_4acc44;
        case 0x4acc48u: goto label_4acc48;
        case 0x4acc4cu: goto label_4acc4c;
        case 0x4acc50u: goto label_4acc50;
        case 0x4acc54u: goto label_4acc54;
        case 0x4acc58u: goto label_4acc58;
        case 0x4acc5cu: goto label_4acc5c;
        case 0x4acc60u: goto label_4acc60;
        case 0x4acc64u: goto label_4acc64;
        case 0x4acc68u: goto label_4acc68;
        case 0x4acc6cu: goto label_4acc6c;
        case 0x4acc70u: goto label_4acc70;
        case 0x4acc74u: goto label_4acc74;
        case 0x4acc78u: goto label_4acc78;
        case 0x4acc7cu: goto label_4acc7c;
        case 0x4acc80u: goto label_4acc80;
        case 0x4acc84u: goto label_4acc84;
        case 0x4acc88u: goto label_4acc88;
        case 0x4acc8cu: goto label_4acc8c;
        case 0x4acc90u: goto label_4acc90;
        case 0x4acc94u: goto label_4acc94;
        case 0x4acc98u: goto label_4acc98;
        case 0x4acc9cu: goto label_4acc9c;
        case 0x4acca0u: goto label_4acca0;
        case 0x4acca4u: goto label_4acca4;
        case 0x4acca8u: goto label_4acca8;
        case 0x4accacu: goto label_4accac;
        case 0x4accb0u: goto label_4accb0;
        case 0x4accb4u: goto label_4accb4;
        case 0x4accb8u: goto label_4accb8;
        case 0x4accbcu: goto label_4accbc;
        case 0x4accc0u: goto label_4accc0;
        case 0x4accc4u: goto label_4accc4;
        case 0x4accc8u: goto label_4accc8;
        case 0x4accccu: goto label_4acccc;
        case 0x4accd0u: goto label_4accd0;
        case 0x4accd4u: goto label_4accd4;
        case 0x4accd8u: goto label_4accd8;
        case 0x4accdcu: goto label_4accdc;
        case 0x4acce0u: goto label_4acce0;
        case 0x4acce4u: goto label_4acce4;
        case 0x4acce8u: goto label_4acce8;
        case 0x4accecu: goto label_4accec;
        case 0x4accf0u: goto label_4accf0;
        case 0x4accf4u: goto label_4accf4;
        case 0x4accf8u: goto label_4accf8;
        case 0x4accfcu: goto label_4accfc;
        case 0x4acd00u: goto label_4acd00;
        case 0x4acd04u: goto label_4acd04;
        case 0x4acd08u: goto label_4acd08;
        case 0x4acd0cu: goto label_4acd0c;
        case 0x4acd10u: goto label_4acd10;
        case 0x4acd14u: goto label_4acd14;
        case 0x4acd18u: goto label_4acd18;
        case 0x4acd1cu: goto label_4acd1c;
        case 0x4acd20u: goto label_4acd20;
        case 0x4acd24u: goto label_4acd24;
        case 0x4acd28u: goto label_4acd28;
        case 0x4acd2cu: goto label_4acd2c;
        case 0x4acd30u: goto label_4acd30;
        case 0x4acd34u: goto label_4acd34;
        case 0x4acd38u: goto label_4acd38;
        case 0x4acd3cu: goto label_4acd3c;
        case 0x4acd40u: goto label_4acd40;
        case 0x4acd44u: goto label_4acd44;
        case 0x4acd48u: goto label_4acd48;
        case 0x4acd4cu: goto label_4acd4c;
        case 0x4acd50u: goto label_4acd50;
        case 0x4acd54u: goto label_4acd54;
        case 0x4acd58u: goto label_4acd58;
        case 0x4acd5cu: goto label_4acd5c;
        case 0x4acd60u: goto label_4acd60;
        case 0x4acd64u: goto label_4acd64;
        case 0x4acd68u: goto label_4acd68;
        case 0x4acd6cu: goto label_4acd6c;
        case 0x4acd70u: goto label_4acd70;
        case 0x4acd74u: goto label_4acd74;
        case 0x4acd78u: goto label_4acd78;
        case 0x4acd7cu: goto label_4acd7c;
        case 0x4acd80u: goto label_4acd80;
        case 0x4acd84u: goto label_4acd84;
        case 0x4acd88u: goto label_4acd88;
        case 0x4acd8cu: goto label_4acd8c;
        case 0x4acd90u: goto label_4acd90;
        case 0x4acd94u: goto label_4acd94;
        case 0x4acd98u: goto label_4acd98;
        case 0x4acd9cu: goto label_4acd9c;
        case 0x4acda0u: goto label_4acda0;
        case 0x4acda4u: goto label_4acda4;
        case 0x4acda8u: goto label_4acda8;
        case 0x4acdacu: goto label_4acdac;
        case 0x4acdb0u: goto label_4acdb0;
        case 0x4acdb4u: goto label_4acdb4;
        case 0x4acdb8u: goto label_4acdb8;
        case 0x4acdbcu: goto label_4acdbc;
        case 0x4acdc0u: goto label_4acdc0;
        case 0x4acdc4u: goto label_4acdc4;
        case 0x4acdc8u: goto label_4acdc8;
        case 0x4acdccu: goto label_4acdcc;
        case 0x4acdd0u: goto label_4acdd0;
        case 0x4acdd4u: goto label_4acdd4;
        case 0x4acdd8u: goto label_4acdd8;
        case 0x4acddcu: goto label_4acddc;
        case 0x4acde0u: goto label_4acde0;
        case 0x4acde4u: goto label_4acde4;
        case 0x4acde8u: goto label_4acde8;
        case 0x4acdecu: goto label_4acdec;
        case 0x4acdf0u: goto label_4acdf0;
        case 0x4acdf4u: goto label_4acdf4;
        case 0x4acdf8u: goto label_4acdf8;
        case 0x4acdfcu: goto label_4acdfc;
        case 0x4ace00u: goto label_4ace00;
        case 0x4ace04u: goto label_4ace04;
        case 0x4ace08u: goto label_4ace08;
        case 0x4ace0cu: goto label_4ace0c;
        case 0x4ace10u: goto label_4ace10;
        case 0x4ace14u: goto label_4ace14;
        case 0x4ace18u: goto label_4ace18;
        case 0x4ace1cu: goto label_4ace1c;
        case 0x4ace20u: goto label_4ace20;
        case 0x4ace24u: goto label_4ace24;
        case 0x4ace28u: goto label_4ace28;
        case 0x4ace2cu: goto label_4ace2c;
        case 0x4ace30u: goto label_4ace30;
        case 0x4ace34u: goto label_4ace34;
        case 0x4ace38u: goto label_4ace38;
        case 0x4ace3cu: goto label_4ace3c;
        case 0x4ace40u: goto label_4ace40;
        case 0x4ace44u: goto label_4ace44;
        case 0x4ace48u: goto label_4ace48;
        case 0x4ace4cu: goto label_4ace4c;
        case 0x4ace50u: goto label_4ace50;
        case 0x4ace54u: goto label_4ace54;
        case 0x4ace58u: goto label_4ace58;
        case 0x4ace5cu: goto label_4ace5c;
        case 0x4ace60u: goto label_4ace60;
        case 0x4ace64u: goto label_4ace64;
        case 0x4ace68u: goto label_4ace68;
        case 0x4ace6cu: goto label_4ace6c;
        case 0x4ace70u: goto label_4ace70;
        case 0x4ace74u: goto label_4ace74;
        case 0x4ace78u: goto label_4ace78;
        case 0x4ace7cu: goto label_4ace7c;
        case 0x4ace80u: goto label_4ace80;
        case 0x4ace84u: goto label_4ace84;
        case 0x4ace88u: goto label_4ace88;
        case 0x4ace8cu: goto label_4ace8c;
        case 0x4ace90u: goto label_4ace90;
        case 0x4ace94u: goto label_4ace94;
        case 0x4ace98u: goto label_4ace98;
        case 0x4ace9cu: goto label_4ace9c;
        case 0x4acea0u: goto label_4acea0;
        case 0x4acea4u: goto label_4acea4;
        case 0x4acea8u: goto label_4acea8;
        case 0x4aceacu: goto label_4aceac;
        case 0x4aceb0u: goto label_4aceb0;
        case 0x4aceb4u: goto label_4aceb4;
        case 0x4aceb8u: goto label_4aceb8;
        case 0x4acebcu: goto label_4acebc;
        case 0x4acec0u: goto label_4acec0;
        case 0x4acec4u: goto label_4acec4;
        case 0x4acec8u: goto label_4acec8;
        case 0x4aceccu: goto label_4acecc;
        case 0x4aced0u: goto label_4aced0;
        case 0x4aced4u: goto label_4aced4;
        case 0x4aced8u: goto label_4aced8;
        case 0x4acedcu: goto label_4acedc;
        case 0x4acee0u: goto label_4acee0;
        case 0x4acee4u: goto label_4acee4;
        case 0x4acee8u: goto label_4acee8;
        case 0x4aceecu: goto label_4aceec;
        case 0x4acef0u: goto label_4acef0;
        case 0x4acef4u: goto label_4acef4;
        case 0x4acef8u: goto label_4acef8;
        case 0x4acefcu: goto label_4acefc;
        case 0x4acf00u: goto label_4acf00;
        case 0x4acf04u: goto label_4acf04;
        case 0x4acf08u: goto label_4acf08;
        case 0x4acf0cu: goto label_4acf0c;
        case 0x4acf10u: goto label_4acf10;
        case 0x4acf14u: goto label_4acf14;
        case 0x4acf18u: goto label_4acf18;
        case 0x4acf1cu: goto label_4acf1c;
        case 0x4acf20u: goto label_4acf20;
        case 0x4acf24u: goto label_4acf24;
        case 0x4acf28u: goto label_4acf28;
        case 0x4acf2cu: goto label_4acf2c;
        default: break;
    }

    ctx->pc = 0x4aca10u;

label_4aca10:
    // 0x4aca10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4aca10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4aca14:
    // 0x4aca14: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4aca14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4aca18:
    // 0x4aca18: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4aca18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4aca1c:
    // 0x4aca1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4aca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4aca20:
    // 0x4aca20: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4aca20u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4aca24:
    // 0x4aca24: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4aca24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4aca28:
    // 0x4aca28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4aca28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4aca2c:
    // 0x4aca2c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4aca2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4aca30:
    // 0x4aca30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4aca30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4aca34:
    // 0x4aca34: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4aca34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4aca38:
    // 0x4aca38: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4aca38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4aca3c:
    // 0x4aca3c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4aca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4aca40:
    // 0x4aca40: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4aca40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4aca44:
    // 0x4aca44: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4aca44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4aca48:
    // 0x4aca48: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4aca48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4aca4c:
    // 0x4aca4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4aca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4aca50:
    // 0x4aca50: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4aca50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4aca54:
    // 0x4aca54: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4aca54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4aca58:
    // 0x4aca58: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4aca58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4aca5c:
    // 0x4aca5c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4aca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4aca60:
    // 0x4aca60: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4aca60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4aca64:
    // 0x4aca64: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4aca64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4aca68:
    // 0x4aca68: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4aca68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4aca6c:
    // 0x4aca6c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4aca6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4aca70:
    // 0x4aca70: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4aca70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4aca74:
    // 0x4aca74: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4aca74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4aca78:
    // 0x4aca78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4aca78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4aca7c:
    // 0x4aca7c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4aca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4aca80:
    // 0x4aca80: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4aca80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4aca84:
    // 0x4aca84: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4aca84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4aca88:
    // 0x4aca88: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4aca88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4aca8c:
    // 0x4aca8c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4aca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4aca90:
    // 0x4aca90: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4aca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4aca94:
    // 0x4aca94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4aca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4aca98:
    // 0x4aca98: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4aca98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4aca9c:
    // 0x4aca9c: 0x3e00008  jr          $ra
label_4acaa0:
    if (ctx->pc == 0x4ACAA0u) {
        ctx->pc = 0x4ACAA0u;
            // 0x4acaa0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4ACAA4u;
        goto label_4acaa4;
    }
    ctx->pc = 0x4ACA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACA9Cu;
            // 0x4acaa0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ACAA4u;
label_4acaa4:
    // 0x4acaa4: 0x0  nop
    ctx->pc = 0x4acaa4u;
    // NOP
label_4acaa8:
    // 0x4acaa8: 0x0  nop
    ctx->pc = 0x4acaa8u;
    // NOP
label_4acaac:
    // 0x4acaac: 0x0  nop
    ctx->pc = 0x4acaacu;
    // NOP
label_4acab0:
    // 0x4acab0: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x4acab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4acab4:
    // 0x4acab4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_4acab8:
    if (ctx->pc == 0x4ACAB8u) {
        ctx->pc = 0x4ACABCu;
        goto label_4acabc;
    }
    ctx->pc = 0x4ACAB4u;
    {
        const bool branch_taken_0x4acab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acab4) {
            ctx->pc = 0x4ACB00u;
            goto label_4acb00;
        }
    }
    ctx->pc = 0x4ACABCu;
label_4acabc:
    // 0x4acabc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4acabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acac0:
    // 0x4acac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4acac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acac4:
    // 0x4acac4: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x4acac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4acac8:
    // 0x4acac8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4acac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4acacc:
    // 0x4acacc: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x4acaccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4acad0:
    // 0x4acad0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4acad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4acad4:
    // 0x4acad4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4acad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4acad8:
    // 0x4acad8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4acad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4acadc:
    // 0x4acadc: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x4acadcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
label_4acae0:
    // 0x4acae0: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x4acae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
label_4acae4:
    // 0x4acae4: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x4acae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
label_4acae8:
    // 0x4acae8: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x4acae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
label_4acaec:
    // 0x4acaec: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x4acaecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
label_4acaf0:
    // 0x4acaf0: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x4acaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
label_4acaf4:
    // 0x4acaf4: 0xaca000a8  sw          $zero, 0xA8($a1)
    ctx->pc = 0x4acaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
label_4acaf8:
    // 0x4acaf8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4acafc:
    if (ctx->pc == 0x4ACAFCu) {
        ctx->pc = 0x4ACAFCu;
            // 0x4acafc: 0xa0a000ac  sb          $zero, 0xAC($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4ACB00u;
        goto label_4acb00;
    }
    ctx->pc = 0x4ACAF8u;
    {
        const bool branch_taken_0x4acaf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACAF8u;
            // 0x4acafc: 0xa0a000ac  sb          $zero, 0xAC($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acaf8) {
            ctx->pc = 0x4ACAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4acac4;
        }
    }
    ctx->pc = 0x4ACB00u;
label_4acb00:
    // 0x4acb00: 0x3e00008  jr          $ra
label_4acb04:
    if (ctx->pc == 0x4ACB04u) {
        ctx->pc = 0x4ACB08u;
        goto label_4acb08;
    }
    ctx->pc = 0x4ACB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ACB08u;
label_4acb08:
    // 0x4acb08: 0x0  nop
    ctx->pc = 0x4acb08u;
    // NOP
label_4acb0c:
    // 0x4acb0c: 0x0  nop
    ctx->pc = 0x4acb0cu;
    // NOP
label_4acb10:
    // 0x4acb10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4acb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4acb14:
    // 0x4acb14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4acb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4acb18:
    // 0x4acb18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4acb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4acb1c:
    // 0x4acb1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4acb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4acb20:
    // 0x4acb20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4acb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4acb24:
    // 0x4acb24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4acb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4acb28:
    // 0x4acb28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4acb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4acb2c:
    // 0x4acb2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4acb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4acb30:
    // 0x4acb30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4acb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4acb34:
    // 0x4acb34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4acb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4acb38:
    // 0x4acb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4acb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4acb3c:
    // 0x4acb3c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4acb3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4acb40:
    // 0x4acb40: 0x10a30055  beq         $a1, $v1, . + 4 + (0x55 << 2)
label_4acb44:
    if (ctx->pc == 0x4ACB44u) {
        ctx->pc = 0x4ACB44u;
            // 0x4acb44: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB48u;
        goto label_4acb48;
    }
    ctx->pc = 0x4ACB40u;
    {
        const bool branch_taken_0x4acb40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4ACB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACB40u;
            // 0x4acb44: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb40) {
            ctx->pc = 0x4ACC98u;
            goto label_4acc98;
        }
    }
    ctx->pc = 0x4ACB48u;
label_4acb48:
    // 0x4acb48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4acb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4acb4c:
    // 0x4acb4c: 0x50a3004f  beql        $a1, $v1, . + 4 + (0x4F << 2)
label_4acb50:
    if (ctx->pc == 0x4ACB50u) {
        ctx->pc = 0x4ACB50u;
            // 0x4acb50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4ACB54u;
        goto label_4acb54;
    }
    ctx->pc = 0x4ACB4Cu;
    {
        const bool branch_taken_0x4acb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4acb4c) {
            ctx->pc = 0x4ACB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACB4Cu;
            // 0x4acb50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ACC8Cu;
            goto label_4acc8c;
        }
    }
    ctx->pc = 0x4ACB54u;
label_4acb54:
    // 0x4acb54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4acb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4acb58:
    // 0x4acb58: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4acb5c:
    if (ctx->pc == 0x4ACB5Cu) {
        ctx->pc = 0x4ACB5Cu;
            // 0x4acb5c: 0x8ea60070  lw          $a2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x4ACB60u;
        goto label_4acb60;
    }
    ctx->pc = 0x4ACB58u;
    {
        const bool branch_taken_0x4acb58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4acb58) {
            ctx->pc = 0x4ACB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACB58u;
            // 0x4acb5c: 0x8ea60070  lw          $a2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ACB68u;
            goto label_4acb68;
        }
    }
    ctx->pc = 0x4ACB60u;
label_4acb60:
    // 0x4acb60: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_4acb64:
    if (ctx->pc == 0x4ACB64u) {
        ctx->pc = 0x4ACB68u;
        goto label_4acb68;
    }
    ctx->pc = 0x4ACB60u;
    {
        const bool branch_taken_0x4acb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acb60) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACB68u;
label_4acb68:
    // 0x4acb68: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_4acb6c:
    if (ctx->pc == 0x4ACB6Cu) {
        ctx->pc = 0x4ACB70u;
        goto label_4acb70;
    }
    ctx->pc = 0x4ACB68u;
    {
        const bool branch_taken_0x4acb68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acb68) {
            ctx->pc = 0x4ACBA0u;
            goto label_4acba0;
        }
    }
    ctx->pc = 0x4ACB70u;
label_4acb70:
    // 0x4acb70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4acb70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acb74:
    // 0x4acb74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4acb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acb78:
    // 0x4acb78: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x4acb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4acb7c:
    // 0x4acb7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4acb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4acb80:
    // 0x4acb80: 0x8ea5008c  lw          $a1, 0x8C($s5)
    ctx->pc = 0x4acb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_4acb84:
    // 0x4acb84: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x4acb84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4acb88:
    // 0x4acb88: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4acb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_4acb8c:
    // 0x4acb8c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4acb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4acb90:
    // 0x4acb90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4acb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4acb94:
    // 0x4acb94: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4acb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4acb98:
    // 0x4acb98: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_4acb9c:
    if (ctx->pc == 0x4ACB9Cu) {
        ctx->pc = 0x4ACB9Cu;
            // 0x4acb9c: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->pc = 0x4ACBA0u;
        goto label_4acba0;
    }
    ctx->pc = 0x4ACB98u;
    {
        const bool branch_taken_0x4acb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACB98u;
            // 0x4acb9c: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb98) {
            ctx->pc = 0x4ACB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4acb78;
        }
    }
    ctx->pc = 0x4ACBA0u;
label_4acba0:
    // 0x4acba0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4acba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4acba4:
    // 0x4acba4: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x4acba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4acba8:
    // 0x4acba8: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x4acba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_4acbac:
    // 0x4acbac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4acbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4acbb0:
    // 0x4acbb0: 0x108300d3  beq         $a0, $v1, . + 4 + (0xD3 << 2)
label_4acbb4:
    if (ctx->pc == 0x4ACBB4u) {
        ctx->pc = 0x4ACBB8u;
        goto label_4acbb8;
    }
    ctx->pc = 0x4ACBB0u;
    {
        const bool branch_taken_0x4acbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4acbb0) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACBB8u;
label_4acbb8:
    // 0x4acbb8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4acbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4acbbc:
    // 0x4acbbc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4acbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4acbc0:
    // 0x4acbc0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4acbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4acbc4:
    // 0x4acbc4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4acbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4acbc8:
    // 0x4acbc8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4acbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4acbcc:
    // 0x4acbcc: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x4acbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_4acbd0:
    // 0x4acbd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4acbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4acbd4:
    // 0x4acbd4: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x4acbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_4acbd8:
    // 0x4acbd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4acbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4acbdc:
    // 0x4acbdc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4acbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4acbe0:
    // 0x4acbe0: 0xc0a7a88  jal         func_29EA20
label_4acbe4:
    if (ctx->pc == 0x4ACBE4u) {
        ctx->pc = 0x4ACBE4u;
            // 0x4acbe4: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x4ACBE8u;
        goto label_4acbe8;
    }
    ctx->pc = 0x4ACBE0u;
    SET_GPR_U32(ctx, 31, 0x4ACBE8u);
    ctx->pc = 0x4ACBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACBE0u;
            // 0x4acbe4: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACBE8u; }
        if (ctx->pc != 0x4ACBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACBE8u; }
        if (ctx->pc != 0x4ACBE8u) { return; }
    }
    ctx->pc = 0x4ACBE8u;
label_4acbe8:
    // 0x4acbe8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4acbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4acbec:
    // 0x4acbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4acbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4acbf0:
    // 0x4acbf0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4acbf4:
    if (ctx->pc == 0x4ACBF4u) {
        ctx->pc = 0x4ACBF4u;
            // 0x4acbf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4ACBF8u;
        goto label_4acbf8;
    }
    ctx->pc = 0x4ACBF0u;
    {
        const bool branch_taken_0x4acbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACBF0u;
            // 0x4acbf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acbf0) {
            ctx->pc = 0x4ACC10u;
            goto label_4acc10;
        }
    }
    ctx->pc = 0x4ACBF8u;
label_4acbf8:
    // 0x4acbf8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4acbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4acbfc:
    // 0x4acbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4acbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4acc00:
    // 0x4acc00: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4acc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4acc04:
    // 0x4acc04: 0xc0804bc  jal         func_2012F0
label_4acc08:
    if (ctx->pc == 0x4ACC08u) {
        ctx->pc = 0x4ACC08u;
            // 0x4acc08: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4ACC0Cu;
        goto label_4acc0c;
    }
    ctx->pc = 0x4ACC04u;
    SET_GPR_U32(ctx, 31, 0x4ACC0Cu);
    ctx->pc = 0x4ACC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACC04u;
            // 0x4acc08: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC0Cu; }
        if (ctx->pc != 0x4ACC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC0Cu; }
        if (ctx->pc != 0x4ACC0Cu) { return; }
    }
    ctx->pc = 0x4ACC0Cu;
label_4acc0c:
    // 0x4acc0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4acc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4acc10:
    // 0x4acc10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4acc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4acc14:
    // 0x4acc14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4acc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acc18:
    // 0x4acc18: 0x2406e71d  addiu       $a2, $zero, -0x18E3
    ctx->pc = 0x4acc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294960925));
label_4acc1c:
    // 0x4acc1c: 0xc04ca18  jal         func_132860
label_4acc20:
    if (ctx->pc == 0x4ACC20u) {
        ctx->pc = 0x4ACC20u;
            // 0x4acc20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC24u;
        goto label_4acc24;
    }
    ctx->pc = 0x4ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x4ACC24u);
    ctx->pc = 0x4ACC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACC1Cu;
            // 0x4acc20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC24u; }
        if (ctx->pc != 0x4ACC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC24u; }
        if (ctx->pc != 0x4ACC24u) { return; }
    }
    ctx->pc = 0x4ACC24u;
label_4acc24:
    // 0x4acc24: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4acc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4acc28:
    // 0x4acc28: 0x26a40098  addiu       $a0, $s5, 0x98
    ctx->pc = 0x4acc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
label_4acc2c:
    // 0x4acc2c: 0x24a55620  addiu       $a1, $a1, 0x5620
    ctx->pc = 0x4acc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22048));
label_4acc30:
    // 0x4acc30: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x4acc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4acc34:
    // 0x4acc34: 0xc0d37ec  jal         func_34DFB0
label_4acc38:
    if (ctx->pc == 0x4ACC38u) {
        ctx->pc = 0x4ACC38u;
            // 0x4acc38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC3Cu;
        goto label_4acc3c;
    }
    ctx->pc = 0x4ACC34u;
    SET_GPR_U32(ctx, 31, 0x4ACC3Cu);
    ctx->pc = 0x4ACC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACC34u;
            // 0x4acc38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC3Cu; }
        if (ctx->pc != 0x4ACC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC3Cu; }
        if (ctx->pc != 0x4ACC3Cu) { return; }
    }
    ctx->pc = 0x4ACC3Cu;
label_4acc3c:
    // 0x4acc3c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4acc3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4acc40:
    // 0x4acc40: 0x506000af  beql        $v1, $zero, . + 4 + (0xAF << 2)
label_4acc44:
    if (ctx->pc == 0x4ACC44u) {
        ctx->pc = 0x4ACC44u;
            // 0x4acc44: 0xaeb500a0  sw          $s5, 0xA0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 21));
        ctx->pc = 0x4ACC48u;
        goto label_4acc48;
    }
    ctx->pc = 0x4ACC40u;
    {
        const bool branch_taken_0x4acc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acc40) {
            ctx->pc = 0x4ACC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACC40u;
            // 0x4acc44: 0xaeb500a0  sw          $s5, 0xA0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACC48u;
label_4acc48:
    // 0x4acc48: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x4acc48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4acc4c:
    // 0x4acc4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4acc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4acc50:
    // 0x4acc50: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x4acc50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_4acc54:
    // 0x4acc54: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4acc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4acc58:
    // 0x4acc58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4acc58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4acc5c:
    // 0x4acc5c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4acc60:
    if (ctx->pc == 0x4ACC60u) {
        ctx->pc = 0x4ACC64u;
        goto label_4acc64;
    }
    ctx->pc = 0x4ACC5Cu;
    {
        const bool branch_taken_0x4acc5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4acc5c) {
            ctx->pc = 0x4ACC80u;
            goto label_4acc80;
        }
    }
    ctx->pc = 0x4ACC64u;
label_4acc64:
    // 0x4acc64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4acc68:
    if (ctx->pc == 0x4ACC68u) {
        ctx->pc = 0x4ACC6Cu;
        goto label_4acc6c;
    }
    ctx->pc = 0x4ACC64u;
    {
        const bool branch_taken_0x4acc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acc64) {
            ctx->pc = 0x4ACC80u;
            goto label_4acc80;
        }
    }
    ctx->pc = 0x4ACC6Cu;
label_4acc6c:
    // 0x4acc6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4acc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4acc70:
    // 0x4acc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4acc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4acc74:
    // 0x4acc74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4acc74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4acc78:
    // 0x4acc78: 0x320f809  jalr        $t9
label_4acc7c:
    if (ctx->pc == 0x4ACC7Cu) {
        ctx->pc = 0x4ACC7Cu;
            // 0x4acc7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ACC80u;
        goto label_4acc80;
    }
    ctx->pc = 0x4ACC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ACC80u);
        ctx->pc = 0x4ACC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACC78u;
            // 0x4acc7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ACC80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC80u; }
            if (ctx->pc != 0x4ACC80u) { return; }
        }
        }
    }
    ctx->pc = 0x4ACC80u;
label_4acc80:
    // 0x4acc80: 0xaeb500a0  sw          $s5, 0xA0($s5)
    ctx->pc = 0x4acc80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 21));
label_4acc84:
    // 0x4acc84: 0x1000009e  b           . + 4 + (0x9E << 2)
label_4acc88:
    if (ctx->pc == 0x4ACC88u) {
        ctx->pc = 0x4ACC8Cu;
        goto label_4acc8c;
    }
    ctx->pc = 0x4ACC84u;
    {
        const bool branch_taken_0x4acc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acc84) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACC8Cu;
label_4acc8c:
    // 0x4acc8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4acc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4acc90:
    // 0x4acc90: 0x320f809  jalr        $t9
label_4acc94:
    if (ctx->pc == 0x4ACC94u) {
        ctx->pc = 0x4ACC98u;
        goto label_4acc98;
    }
    ctx->pc = 0x4ACC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ACC98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ACC98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ACC98u; }
            if (ctx->pc != 0x4ACC98u) { return; }
        }
        }
    }
    ctx->pc = 0x4ACC98u;
label_4acc98:
    // 0x4acc98: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x4acc98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4acc9c:
    // 0x4acc9c: 0x12e00098  beqz        $s7, . + 4 + (0x98 << 2)
label_4acca0:
    if (ctx->pc == 0x4ACCA0u) {
        ctx->pc = 0x4ACCA4u;
        goto label_4acca4;
    }
    ctx->pc = 0x4ACC9Cu;
    {
        const bool branch_taken_0x4acc9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acc9c) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACCA4u;
label_4acca4:
    // 0x4acca4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4acca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acca8:
    // 0x4acca8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4acca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4accac:
    // 0x4accac: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x4accacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4accb0:
    // 0x4accb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4accb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4accb4:
    // 0x4accb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4accb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4accb8:
    // 0x4accb8: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4accb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4accbc:
    // 0x4accbc: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4accbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4accc0:
    // 0x4accc0: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
label_4accc4:
    if (ctx->pc == 0x4ACCC4u) {
        ctx->pc = 0x4ACCC8u;
        goto label_4accc8;
    }
    ctx->pc = 0x4ACCC0u;
    {
        const bool branch_taken_0x4accc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4accc0) {
            ctx->pc = 0x4ACEA8u;
            goto label_4acea8;
        }
    }
    ctx->pc = 0x4ACCC8u;
label_4accc8:
    // 0x4accc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4accc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4acccc:
    // 0x4acccc: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_4accd0:
    if (ctx->pc == 0x4ACCD0u) {
        ctx->pc = 0x4ACCD4u;
        goto label_4accd4;
    }
    ctx->pc = 0x4ACCCCu;
    {
        const bool branch_taken_0x4acccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4acccc) {
            ctx->pc = 0x4ACD18u;
            goto label_4acd18;
        }
    }
    ctx->pc = 0x4ACCD4u;
label_4accd4:
    // 0x4accd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4accd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4accd8:
    // 0x4accd8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_4accdc:
    if (ctx->pc == 0x4ACCDCu) {
        ctx->pc = 0x4ACCE0u;
        goto label_4acce0;
    }
    ctx->pc = 0x4ACCD8u;
    {
        const bool branch_taken_0x4accd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4accd8) {
            ctx->pc = 0x4ACD08u;
            goto label_4acd08;
        }
    }
    ctx->pc = 0x4ACCE0u;
label_4acce0:
    // 0x4acce0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4acce4:
    if (ctx->pc == 0x4ACCE4u) {
        ctx->pc = 0x4ACCE8u;
        goto label_4acce8;
    }
    ctx->pc = 0x4ACCE0u;
    {
        const bool branch_taken_0x4acce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acce0) {
            ctx->pc = 0x4ACCF0u;
            goto label_4accf0;
        }
    }
    ctx->pc = 0x4ACCE8u;
label_4acce8:
    // 0x4acce8: 0x10000081  b           . + 4 + (0x81 << 2)
label_4accec:
    if (ctx->pc == 0x4ACCECu) {
        ctx->pc = 0x4ACCF0u;
        goto label_4accf0;
    }
    ctx->pc = 0x4ACCE8u;
    {
        const bool branch_taken_0x4acce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acce8) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACCF0u;
label_4accf0:
    // 0x4accf0: 0xc12b6c8  jal         func_4ADB20
label_4accf4:
    if (ctx->pc == 0x4ACCF4u) {
        ctx->pc = 0x4ACCF4u;
            // 0x4accf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACCF8u;
        goto label_4accf8;
    }
    ctx->pc = 0x4ACCF0u;
    SET_GPR_U32(ctx, 31, 0x4ACCF8u);
    ctx->pc = 0x4ACCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACCF0u;
            // 0x4accf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ADB20u;
    if (runtime->hasFunction(0x4ADB20u)) {
        auto targetFn = runtime->lookupFunction(0x4ADB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACCF8u; }
        if (ctx->pc != 0x4ACCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ADB20_0x4adb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACCF8u; }
        if (ctx->pc != 0x4ACCF8u) { return; }
    }
    ctx->pc = 0x4ACCF8u;
label_4accf8:
    // 0x4accf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4accf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4accfc:
    // 0x4accfc: 0x1000007c  b           . + 4 + (0x7C << 2)
label_4acd00:
    if (ctx->pc == 0x4ACD00u) {
        ctx->pc = 0x4ACD00u;
            // 0x4acd00: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x4ACD04u;
        goto label_4acd04;
    }
    ctx->pc = 0x4ACCFCu;
    {
        const bool branch_taken_0x4accfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACCFCu;
            // 0x4acd00: 0xae230080  sw          $v1, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4accfc) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACD04u;
label_4acd04:
    // 0x4acd04: 0x0  nop
    ctx->pc = 0x4acd04u;
    // NOP
label_4acd08:
    // 0x4acd08: 0xc12b4e0  jal         func_4AD380
label_4acd0c:
    if (ctx->pc == 0x4ACD0Cu) {
        ctx->pc = 0x4ACD0Cu;
            // 0x4acd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD10u;
        goto label_4acd10;
    }
    ctx->pc = 0x4ACD08u;
    SET_GPR_U32(ctx, 31, 0x4ACD10u);
    ctx->pc = 0x4ACD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACD08u;
            // 0x4acd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AD380u;
    if (runtime->hasFunction(0x4AD380u)) {
        auto targetFn = runtime->lookupFunction(0x4AD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD10u; }
        if (ctx->pc != 0x4ACD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AD380_0x4ad380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD10u; }
        if (ctx->pc != 0x4ACD10u) { return; }
    }
    ctx->pc = 0x4ACD10u;
label_4acd10:
    // 0x4acd10: 0x10000077  b           . + 4 + (0x77 << 2)
label_4acd14:
    if (ctx->pc == 0x4ACD14u) {
        ctx->pc = 0x4ACD18u;
        goto label_4acd18;
    }
    ctx->pc = 0x4ACD10u;
    {
        const bool branch_taken_0x4acd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acd10) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACD18u;
label_4acd18:
    // 0x4acd18: 0xc0775b8  jal         func_1DD6E0
label_4acd1c:
    if (ctx->pc == 0x4ACD1Cu) {
        ctx->pc = 0x4ACD20u;
        goto label_4acd20;
    }
    ctx->pc = 0x4ACD18u;
    SET_GPR_U32(ctx, 31, 0x4ACD20u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD20u; }
        if (ctx->pc != 0x4ACD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD20u; }
        if (ctx->pc != 0x4ACD20u) { return; }
    }
    ctx->pc = 0x4ACD20u;
label_4acd20:
    // 0x4acd20: 0xc0775b4  jal         func_1DD6D0
label_4acd24:
    if (ctx->pc == 0x4ACD24u) {
        ctx->pc = 0x4ACD24u;
            // 0x4acd24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4ACD28u;
        goto label_4acd28;
    }
    ctx->pc = 0x4ACD20u;
    SET_GPR_U32(ctx, 31, 0x4ACD28u);
    ctx->pc = 0x4ACD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACD20u;
            // 0x4acd24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD28u; }
        if (ctx->pc != 0x4ACD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD28u; }
        if (ctx->pc != 0x4ACD28u) { return; }
    }
    ctx->pc = 0x4ACD28u;
label_4acd28:
    // 0x4acd28: 0xc622008c  lwc1        $f2, 0x8C($s1)
    ctx->pc = 0x4acd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4acd2c:
    // 0x4acd2c: 0xc6230098  lwc1        $f3, 0x98($s1)
    ctx->pc = 0x4acd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4acd30:
    // 0x4acd30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4acd30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4acd34:
    // 0x4acd34: 0x0  nop
    ctx->pc = 0x4acd34u;
    // NOP
label_4acd38:
    // 0x4acd38: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4acd38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4acd3c:
    // 0x4acd3c: 0x4600189c  madd.s      $f2, $f3, $f0
    ctx->pc = 0x4acd3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_4acd40:
    // 0x4acd40: 0xe622008c  swc1        $f2, 0x8C($s1)
    ctx->pc = 0x4acd40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_4acd44:
    // 0x4acd44: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x4acd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4acd48:
    // 0x4acd48: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4acd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4acd4c:
    // 0x4acd4c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4acd50:
    if (ctx->pc == 0x4ACD50u) {
        ctx->pc = 0x4ACD54u;
        goto label_4acd54;
    }
    ctx->pc = 0x4ACD4Cu;
    {
        const bool branch_taken_0x4acd4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4acd4c) {
            ctx->pc = 0x4ACD68u;
            goto label_4acd68;
        }
    }
    ctx->pc = 0x4ACD54u;
label_4acd54:
    // 0x4acd54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4acd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4acd58:
    // 0x4acd58: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4acd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4acd5c:
    // 0x4acd5c: 0xe621008c  swc1        $f1, 0x8C($s1)
    ctx->pc = 0x4acd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_4acd60:
    // 0x4acd60: 0x10000063  b           . + 4 + (0x63 << 2)
label_4acd64:
    if (ctx->pc == 0x4ACD64u) {
        ctx->pc = 0x4ACD64u;
            // 0x4acd64: 0xa22000ac  sb          $zero, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4ACD68u;
        goto label_4acd68;
    }
    ctx->pc = 0x4ACD60u;
    {
        const bool branch_taken_0x4acd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACD60u;
            // 0x4acd64: 0xa22000ac  sb          $zero, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acd60) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACD68u;
label_4acd68:
    // 0x4acd68: 0xc0b6dfc  jal         func_2DB7F0
label_4acd6c:
    if (ctx->pc == 0x4ACD6Cu) {
        ctx->pc = 0x4ACD6Cu;
            // 0x4acd6c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x4ACD70u;
        goto label_4acd70;
    }
    ctx->pc = 0x4ACD68u;
    SET_GPR_U32(ctx, 31, 0x4ACD70u);
    ctx->pc = 0x4ACD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACD68u;
            // 0x4acd6c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7F0u;
    if (runtime->hasFunction(0x2DB7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD70u; }
        if (ctx->pc != 0x4ACD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7F0_0x2db7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACD70u; }
        if (ctx->pc != 0x4ACD70u) { return; }
    }
    ctx->pc = 0x4ACD70u;
label_4acd70:
    // 0x4acd70: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x4acd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4acd74:
    // 0x4acd74: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4acd78:
    if (ctx->pc == 0x4ACD78u) {
        ctx->pc = 0x4ACD7Cu;
        goto label_4acd7c;
    }
    ctx->pc = 0x4ACD74u;
    {
        const bool branch_taken_0x4acd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acd74) {
            ctx->pc = 0x4ACDB0u;
            goto label_4acdb0;
        }
    }
    ctx->pc = 0x4ACD7Cu;
label_4acd7c:
    // 0x4acd7c: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x4acd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4acd80:
    // 0x4acd80: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x4acd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_4acd84:
    // 0x4acd84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4acd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4acd88:
    // 0x4acd88: 0x0  nop
    ctx->pc = 0x4acd88u;
    // NOP
label_4acd8c:
    // 0x4acd8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4acd8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4acd90:
    // 0x4acd90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_4acd94:
    if (ctx->pc == 0x4ACD94u) {
        ctx->pc = 0x4ACD98u;
        goto label_4acd98;
    }
    ctx->pc = 0x4ACD90u;
    {
        const bool branch_taken_0x4acd90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4acd90) {
            ctx->pc = 0x4ACDB0u;
            goto label_4acdb0;
        }
    }
    ctx->pc = 0x4ACD98u;
label_4acd98:
    // 0x4acd98: 0x922300ac  lbu         $v1, 0xAC($s1)
    ctx->pc = 0x4acd98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 172)));
label_4acd9c:
    // 0x4acd9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_4acda0:
    if (ctx->pc == 0x4ACDA0u) {
        ctx->pc = 0x4ACDA4u;
        goto label_4acda4;
    }
    ctx->pc = 0x4ACD9Cu;
    {
        const bool branch_taken_0x4acd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4acd9c) {
            ctx->pc = 0x4ACDB0u;
            goto label_4acdb0;
        }
    }
    ctx->pc = 0x4ACDA4u;
label_4acda4:
    // 0x4acda4: 0xc12b3d4  jal         func_4ACF50
label_4acda8:
    if (ctx->pc == 0x4ACDA8u) {
        ctx->pc = 0x4ACDA8u;
            // 0x4acda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDACu;
        goto label_4acdac;
    }
    ctx->pc = 0x4ACDA4u;
    SET_GPR_U32(ctx, 31, 0x4ACDACu);
    ctx->pc = 0x4ACDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACDA4u;
            // 0x4acda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF50u;
    if (runtime->hasFunction(0x4ACF50u)) {
        auto targetFn = runtime->lookupFunction(0x4ACF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDACu; }
        if (ctx->pc != 0x4ACDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ACF50_0x4acf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDACu; }
        if (ctx->pc != 0x4ACDACu) { return; }
    }
    ctx->pc = 0x4ACDACu;
label_4acdac:
    // 0x4acdac: 0x0  nop
    ctx->pc = 0x4acdacu;
    // NOP
label_4acdb0:
    // 0x4acdb0: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x4acdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_4acdb4:
    // 0x4acdb4: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x4acdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4acdb8:
    // 0x4acdb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4acdb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4acdbc:
    // 0x4acdbc: 0x0  nop
    ctx->pc = 0x4acdbcu;
    // NOP
label_4acdc0:
    // 0x4acdc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4acdc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4acdc4:
    // 0x4acdc4: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
label_4acdc8:
    if (ctx->pc == 0x4ACDC8u) {
        ctx->pc = 0x4ACDCCu;
        goto label_4acdcc;
    }
    ctx->pc = 0x4ACDC4u;
    {
        const bool branch_taken_0x4acdc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4acdc4) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACDCCu;
label_4acdcc:
    // 0x4acdcc: 0xc12b3d0  jal         func_4ACF40
label_4acdd0:
    if (ctx->pc == 0x4ACDD0u) {
        ctx->pc = 0x4ACDD4u;
        goto label_4acdd4;
    }
    ctx->pc = 0x4ACDCCu;
    SET_GPR_U32(ctx, 31, 0x4ACDD4u);
    ctx->pc = 0x4ACF40u;
    if (runtime->hasFunction(0x4ACF40u)) {
        auto targetFn = runtime->lookupFunction(0x4ACF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDD4u; }
        if (ctx->pc != 0x4ACDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ACF40_0x4acf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDD4u; }
        if (ctx->pc != 0x4ACDD4u) { return; }
    }
    ctx->pc = 0x4ACDD4u;
label_4acdd4:
    // 0x4acdd4: 0xc12b3cc  jal         func_4ACF30
label_4acdd8:
    if (ctx->pc == 0x4ACDD8u) {
        ctx->pc = 0x4ACDD8u;
            // 0x4acdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDDCu;
        goto label_4acddc;
    }
    ctx->pc = 0x4ACDD4u;
    SET_GPR_U32(ctx, 31, 0x4ACDDCu);
    ctx->pc = 0x4ACDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACDD4u;
            // 0x4acdd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF30u;
    if (runtime->hasFunction(0x4ACF30u)) {
        auto targetFn = runtime->lookupFunction(0x4ACF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDDCu; }
        if (ctx->pc != 0x4ACDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ACF30_0x4acf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDDCu; }
        if (ctx->pc != 0x4ACDDCu) { return; }
    }
    ctx->pc = 0x4ACDDCu;
label_4acddc:
    // 0x4acddc: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x4acddcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4acde0:
    // 0x4acde0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x4acde0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4acde4:
    // 0x4acde4: 0xc0d1c14  jal         func_347050
label_4acde8:
    if (ctx->pc == 0x4ACDE8u) {
        ctx->pc = 0x4ACDE8u;
            // 0x4acde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDECu;
        goto label_4acdec;
    }
    ctx->pc = 0x4ACDE4u;
    SET_GPR_U32(ctx, 31, 0x4ACDECu);
    ctx->pc = 0x4ACDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACDE4u;
            // 0x4acde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDECu; }
        if (ctx->pc != 0x4ACDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDECu; }
        if (ctx->pc != 0x4ACDECu) { return; }
    }
    ctx->pc = 0x4ACDECu;
label_4acdec:
    // 0x4acdec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4acdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4acdf0:
    // 0x4acdf0: 0xc04f278  jal         func_13C9E0
label_4acdf4:
    if (ctx->pc == 0x4ACDF4u) {
        ctx->pc = 0x4ACDF4u;
            // 0x4acdf4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4ACDF8u;
        goto label_4acdf8;
    }
    ctx->pc = 0x4ACDF0u;
    SET_GPR_U32(ctx, 31, 0x4ACDF8u);
    ctx->pc = 0x4ACDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACDF0u;
            // 0x4acdf4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDF8u; }
        if (ctx->pc != 0x4ACDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACDF8u; }
        if (ctx->pc != 0x4ACDF8u) { return; }
    }
    ctx->pc = 0x4ACDF8u;
label_4acdf8:
    // 0x4acdf8: 0xc0d1c10  jal         func_347040
label_4acdfc:
    if (ctx->pc == 0x4ACDFCu) {
        ctx->pc = 0x4ACDFCu;
            // 0x4acdfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE00u;
        goto label_4ace00;
    }
    ctx->pc = 0x4ACDF8u;
    SET_GPR_U32(ctx, 31, 0x4ACE00u);
    ctx->pc = 0x4ACDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACDF8u;
            // 0x4acdfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE00u; }
        if (ctx->pc != 0x4ACE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE00u; }
        if (ctx->pc != 0x4ACE00u) { return; }
    }
    ctx->pc = 0x4ACE00u;
label_4ace00:
    // 0x4ace00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4ace00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ace04:
    // 0x4ace04: 0xc04ce80  jal         func_133A00
label_4ace08:
    if (ctx->pc == 0x4ACE08u) {
        ctx->pc = 0x4ACE08u;
            // 0x4ace08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE0Cu;
        goto label_4ace0c;
    }
    ctx->pc = 0x4ACE04u;
    SET_GPR_U32(ctx, 31, 0x4ACE0Cu);
    ctx->pc = 0x4ACE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE04u;
            // 0x4ace08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE0Cu; }
        if (ctx->pc != 0x4ACE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE0Cu; }
        if (ctx->pc != 0x4ACE0Cu) { return; }
    }
    ctx->pc = 0x4ACE0Cu;
label_4ace0c:
    // 0x4ace0c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4ace0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4ace10:
    // 0x4ace10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ace10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ace14:
    // 0x4ace14: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
label_4ace18:
    if (ctx->pc == 0x4ACE18u) {
        ctx->pc = 0x4ACE1Cu;
        goto label_4ace1c;
    }
    ctx->pc = 0x4ACE14u;
    {
        const bool branch_taken_0x4ace14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ace14) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACE1Cu;
label_4ace1c:
    // 0x4ace1c: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x4ace1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_4ace20:
    // 0x4ace20: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_4ace24:
    if (ctx->pc == 0x4ACE24u) {
        ctx->pc = 0x4ACE28u;
        goto label_4ace28;
    }
    ctx->pc = 0x4ACE20u;
    {
        const bool branch_taken_0x4ace20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ace20) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACE28u;
label_4ace28:
    // 0x4ace28: 0xc077574  jal         func_1DD5D0
label_4ace2c:
    if (ctx->pc == 0x4ACE2Cu) {
        ctx->pc = 0x4ACE30u;
        goto label_4ace30;
    }
    ctx->pc = 0x4ACE28u;
    SET_GPR_U32(ctx, 31, 0x4ACE30u);
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE30u; }
        if (ctx->pc != 0x4ACE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE30u; }
        if (ctx->pc != 0x4ACE30u) { return; }
    }
    ctx->pc = 0x4ACE30u;
label_4ace30:
    // 0x4ace30: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_4ace34:
    if (ctx->pc == 0x4ACE34u) {
        ctx->pc = 0x4ACE38u;
        goto label_4ace38;
    }
    ctx->pc = 0x4ACE30u;
    {
        const bool branch_taken_0x4ace30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ace30) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACE38u;
label_4ace38:
    // 0x4ace38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ace38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ace3c:
    // 0x4ace3c: 0xc0775b8  jal         func_1DD6E0
label_4ace40:
    if (ctx->pc == 0x4ACE40u) {
        ctx->pc = 0x4ACE40u;
            // 0x4ace40: 0x8c52e360  lw          $s2, -0x1CA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
        ctx->pc = 0x4ACE44u;
        goto label_4ace44;
    }
    ctx->pc = 0x4ACE3Cu;
    SET_GPR_U32(ctx, 31, 0x4ACE44u);
    ctx->pc = 0x4ACE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE3Cu;
            // 0x4ace40: 0x8c52e360  lw          $s2, -0x1CA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE44u; }
        if (ctx->pc != 0x4ACE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE44u; }
        if (ctx->pc != 0x4ACE44u) { return; }
    }
    ctx->pc = 0x4ACE44u;
label_4ace44:
    // 0x4ace44: 0xc0775b4  jal         func_1DD6D0
label_4ace48:
    if (ctx->pc == 0x4ACE48u) {
        ctx->pc = 0x4ACE48u;
            // 0x4ace48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4ACE4Cu;
        goto label_4ace4c;
    }
    ctx->pc = 0x4ACE44u;
    SET_GPR_U32(ctx, 31, 0x4ACE4Cu);
    ctx->pc = 0x4ACE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE44u;
            // 0x4ace48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE4Cu; }
        if (ctx->pc != 0x4ACE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE4Cu; }
        if (ctx->pc != 0x4ACE4Cu) { return; }
    }
    ctx->pc = 0x4ACE4Cu;
label_4ace4c:
    // 0x4ace4c: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x4ace4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ace50:
    // 0x4ace50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ace50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ace54:
    // 0x4ace54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ace54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ace58:
    // 0x4ace58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ace58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ace5c:
    // 0x4ace5c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4ace5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4ace60:
    // 0x4ace60: 0xc0528ec  jal         func_14A3B0
label_4ace64:
    if (ctx->pc == 0x4ACE64u) {
        ctx->pc = 0x4ACE64u;
            // 0x4ace64: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4ACE68u;
        goto label_4ace68;
    }
    ctx->pc = 0x4ACE60u;
    SET_GPR_U32(ctx, 31, 0x4ACE68u);
    ctx->pc = 0x4ACE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE60u;
            // 0x4ace64: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE68u; }
        if (ctx->pc != 0x4ACE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE68u; }
        if (ctx->pc != 0x4ACE68u) { return; }
    }
    ctx->pc = 0x4ACE68u;
label_4ace68:
    // 0x4ace68: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4ace68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4ace6c:
    // 0x4ace6c: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x4ace6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_4ace70:
    // 0x4ace70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4ace70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4ace74:
    // 0x4ace74: 0xc04cca0  jal         func_133280
label_4ace78:
    if (ctx->pc == 0x4ACE78u) {
        ctx->pc = 0x4ACE78u;
            // 0x4ace78: 0x24c65670  addiu       $a2, $a2, 0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22128));
        ctx->pc = 0x4ACE7Cu;
        goto label_4ace7c;
    }
    ctx->pc = 0x4ACE74u;
    SET_GPR_U32(ctx, 31, 0x4ACE7Cu);
    ctx->pc = 0x4ACE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE74u;
            // 0x4ace78: 0x24c65670  addiu       $a2, $a2, 0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE7Cu; }
        if (ctx->pc != 0x4ACE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE7Cu; }
        if (ctx->pc != 0x4ACE7Cu) { return; }
    }
    ctx->pc = 0x4ACE7Cu;
label_4ace7c:
    // 0x4ace7c: 0xc0c05c8  jal         func_301720
label_4ace80:
    if (ctx->pc == 0x4ACE80u) {
        ctx->pc = 0x4ACE80u;
            // 0x4ace80: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x4ACE84u;
        goto label_4ace84;
    }
    ctx->pc = 0x4ACE7Cu;
    SET_GPR_U32(ctx, 31, 0x4ACE84u);
    ctx->pc = 0x4ACE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE7Cu;
            // 0x4ace80: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE84u; }
        if (ctx->pc != 0x4ACE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE84u; }
        if (ctx->pc != 0x4ACE84u) { return; }
    }
    ctx->pc = 0x4ACE84u;
label_4ace84:
    // 0x4ace84: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x4ace84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_4ace88:
    // 0x4ace88: 0xc077264  jal         func_1DC990
label_4ace8c:
    if (ctx->pc == 0x4ACE8Cu) {
        ctx->pc = 0x4ACE8Cu;
            // 0x4ace8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE90u;
        goto label_4ace90;
    }
    ctx->pc = 0x4ACE88u;
    SET_GPR_U32(ctx, 31, 0x4ACE90u);
    ctx->pc = 0x4ACE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE88u;
            // 0x4ace8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE90u; }
        if (ctx->pc != 0x4ACE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACE90u; }
        if (ctx->pc != 0x4ACE90u) { return; }
    }
    ctx->pc = 0x4ACE90u;
label_4ace90:
    // 0x4ace90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ace90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ace94:
    // 0x4ace94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4ace94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4ace98:
    // 0x4ace98: 0xc04cc90  jal         func_133240
label_4ace9c:
    if (ctx->pc == 0x4ACE9Cu) {
        ctx->pc = 0x4ACE9Cu;
            // 0x4ace9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACEA0u;
        goto label_4acea0;
    }
    ctx->pc = 0x4ACE98u;
    SET_GPR_U32(ctx, 31, 0x4ACEA0u);
    ctx->pc = 0x4ACE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACE98u;
            // 0x4ace9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEA0u; }
        if (ctx->pc != 0x4ACEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEA0u; }
        if (ctx->pc != 0x4ACEA0u) { return; }
    }
    ctx->pc = 0x4ACEA0u;
label_4acea0:
    // 0x4acea0: 0x10000013  b           . + 4 + (0x13 << 2)
label_4acea4:
    if (ctx->pc == 0x4ACEA4u) {
        ctx->pc = 0x4ACEA8u;
        goto label_4acea8;
    }
    ctx->pc = 0x4ACEA0u;
    {
        const bool branch_taken_0x4acea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acea0) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACEA8u;
label_4acea8:
    // 0x4acea8: 0xc0775b8  jal         func_1DD6E0
label_4aceac:
    if (ctx->pc == 0x4ACEACu) {
        ctx->pc = 0x4ACEB0u;
        goto label_4aceb0;
    }
    ctx->pc = 0x4ACEA8u;
    SET_GPR_U32(ctx, 31, 0x4ACEB0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEB0u; }
        if (ctx->pc != 0x4ACEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEB0u; }
        if (ctx->pc != 0x4ACEB0u) { return; }
    }
    ctx->pc = 0x4ACEB0u;
label_4aceb0:
    // 0x4aceb0: 0xc0775b4  jal         func_1DD6D0
label_4aceb4:
    if (ctx->pc == 0x4ACEB4u) {
        ctx->pc = 0x4ACEB4u;
            // 0x4aceb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4ACEB8u;
        goto label_4aceb8;
    }
    ctx->pc = 0x4ACEB0u;
    SET_GPR_U32(ctx, 31, 0x4ACEB8u);
    ctx->pc = 0x4ACEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACEB0u;
            // 0x4aceb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEB8u; }
        if (ctx->pc != 0x4ACEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEB8u; }
        if (ctx->pc != 0x4ACEB8u) { return; }
    }
    ctx->pc = 0x4ACEB8u;
label_4aceb8:
    // 0x4aceb8: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x4aceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4acebc:
    // 0x4acebc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4acebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4acec0:
    // 0x4acec0: 0xe6210090  swc1        $f1, 0x90($s1)
    ctx->pc = 0x4acec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_4acec4:
    // 0x4acec4: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x4acec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4acec8:
    // 0x4acec8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4acec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4acecc:
    // 0x4acecc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4aced0:
    if (ctx->pc == 0x4ACED0u) {
        ctx->pc = 0x4ACED4u;
        goto label_4aced4;
    }
    ctx->pc = 0x4ACECCu;
    {
        const bool branch_taken_0x4acecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4acecc) {
            ctx->pc = 0x4ACEE8u;
            goto label_4acee8;
        }
    }
    ctx->pc = 0x4ACED4u;
label_4aced4:
    // 0x4aced4: 0xc077350  jal         func_1DCD40
label_4aced8:
    if (ctx->pc == 0x4ACED8u) {
        ctx->pc = 0x4ACED8u;
            // 0x4aced8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x4ACEDCu;
        goto label_4acedc;
    }
    ctx->pc = 0x4ACED4u;
    SET_GPR_U32(ctx, 31, 0x4ACEDCu);
    ctx->pc = 0x4ACED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACED4u;
            // 0x4aced8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    if (runtime->hasFunction(0x1DCD40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEDCu; }
        if (ctx->pc != 0x4ACEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD40_0x1dcd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEDCu; }
        if (ctx->pc != 0x4ACEDCu) { return; }
    }
    ctx->pc = 0x4ACEDCu;
label_4acedc:
    // 0x4acedc: 0x30430005  andi        $v1, $v0, 0x5
    ctx->pc = 0x4acedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_4acee0:
    // 0x4acee0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4acee4:
    if (ctx->pc == 0x4ACEE4u) {
        ctx->pc = 0x4ACEE8u;
        goto label_4acee8;
    }
    ctx->pc = 0x4ACEE0u;
    {
        const bool branch_taken_0x4acee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acee0) {
            ctx->pc = 0x4ACEF0u;
            goto label_4acef0;
        }
    }
    ctx->pc = 0x4ACEE8u;
label_4acee8:
    // 0x4acee8: 0xc12b6bc  jal         func_4ADAF0
label_4aceec:
    if (ctx->pc == 0x4ACEECu) {
        ctx->pc = 0x4ACEECu;
            // 0x4aceec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ACEF0u;
        goto label_4acef0;
    }
    ctx->pc = 0x4ACEE8u;
    SET_GPR_U32(ctx, 31, 0x4ACEF0u);
    ctx->pc = 0x4ACEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACEE8u;
            // 0x4aceec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (runtime->hasFunction(0x4ADAF0u)) {
        auto targetFn = runtime->lookupFunction(0x4ADAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEF0u; }
        if (ctx->pc != 0x4ACEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ADAF0_0x4adaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ACEF0u; }
        if (ctx->pc != 0x4ACEF0u) { return; }
    }
    ctx->pc = 0x4ACEF0u;
label_4acef0:
    // 0x4acef0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4acef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4acef4:
    // 0x4acef4: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x4acef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4acef8:
    // 0x4acef8: 0x1460ff6c  bnez        $v1, . + 4 + (-0x94 << 2)
label_4acefc:
    if (ctx->pc == 0x4ACEFCu) {
        ctx->pc = 0x4ACEFCu;
            // 0x4acefc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4ACF00u;
        goto label_4acf00;
    }
    ctx->pc = 0x4ACEF8u;
    {
        const bool branch_taken_0x4acef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACEF8u;
            // 0x4acefc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acef8) {
            ctx->pc = 0x4ACCACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4accac;
        }
    }
    ctx->pc = 0x4ACF00u;
label_4acf00:
    // 0x4acf00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4acf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4acf04:
    // 0x4acf04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4acf04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4acf08:
    // 0x4acf08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4acf08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4acf0c:
    // 0x4acf0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4acf0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4acf10:
    // 0x4acf10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4acf10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4acf14:
    // 0x4acf14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4acf14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4acf18:
    // 0x4acf18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4acf18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4acf1c:
    // 0x4acf1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4acf1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4acf20:
    // 0x4acf20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4acf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4acf24:
    // 0x4acf24: 0x3e00008  jr          $ra
label_4acf28:
    if (ctx->pc == 0x4ACF28u) {
        ctx->pc = 0x4ACF28u;
            // 0x4acf28: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4ACF2Cu;
        goto label_4acf2c;
    }
    ctx->pc = 0x4ACF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ACF24u;
            // 0x4acf28: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ACF2Cu;
label_4acf2c:
    // 0x4acf2c: 0x0  nop
    ctx->pc = 0x4acf2cu;
    // NOP
}
