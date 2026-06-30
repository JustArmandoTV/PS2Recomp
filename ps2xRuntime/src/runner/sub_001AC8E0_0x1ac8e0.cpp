#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC8E0
// Address: 0x1ac8e0 - 0x1acc08
void sub_001AC8E0_0x1ac8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC8E0_0x1ac8e0");
#endif

    switch (ctx->pc) {
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        default: break;
    }

    ctx->pc = 0x1ac8e0u;

label_1ac8e0:
    // 0x1ac8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ac8e4:
    // 0x1ac8e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ac8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1ac8e8:
    // 0x1ac8e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8ec:
    // 0x1ac8ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ac8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1ac8f0:
    // 0x1ac8f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac8f4:
    // 0x1ac8f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ac8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1ac8f8:
    // 0x1ac8f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8fc:
    // 0x1ac8fc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1ac8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1ac900:
    // 0x1ac900: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1ac900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1ac904:
    // 0x1ac904: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ac908:
    // 0x1ac908: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1ac908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1ac90c:
    // 0x1ac90c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1ac90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1ac910:
    // 0x1ac910: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1ac910u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac914:
    // 0x1ac914: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ac914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1ac918:
    // 0x1ac918: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1ac918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1ac91c:
    // 0x1ac91c: 0x8e932030  lw          $s3, 0x2030($s4)
    ctx->pc = 0x1ac91cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8240)));
label_1ac920:
    // 0x1ac920: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1ac920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1ac924:
    // 0x1ac924: 0x26771080  addiu       $s7, $s3, 0x1080
    ctx->pc = 0x1ac924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4224));
label_1ac928:
    // 0x1ac928: 0x2675008c  addiu       $s5, $s3, 0x8C
    ctx->pc = 0x1ac928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_1ac92c:
    // 0x1ac92c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ac92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ac930:
    // 0x1ac930: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ac930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ac934:
    // 0x1ac934: 0xaee00010  sw          $zero, 0x10($s7)
    ctx->pc = 0x1ac934u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 0));
label_1ac938:
    // 0x1ac938: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_1ac93c:
    // 0x1ac93c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ac940:
    // 0x1ac940: 0xc0650a4  jal         func_194290
label_1ac944:
    if (ctx->pc == 0x1AC944u) {
        ctx->pc = 0x1AC944u;
            // 0x1ac944: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->pc = 0x1AC948u;
        goto label_1ac948;
    }
    ctx->pc = 0x1AC940u;
    SET_GPR_U32(ctx, 31, 0x1AC948u);
    ctx->pc = 0x1AC944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC940u;
            // 0x1ac944: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194290u;
    if (runtime->hasFunction(0x194290u)) {
        auto targetFn = runtime->lookupFunction(0x194290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC948u; }
        if (ctx->pc != 0x1AC948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194290_0x194290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC948u; }
        if (ctx->pc != 0x1AC948u) { return; }
    }
    ctx->pc = 0x1AC948u;
label_1ac948:
    // 0x1ac948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac94c:
    // 0x1ac94c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac950:
    // 0x1ac950: 0xc06189a  jal         func_186268
label_1ac954:
    if (ctx->pc == 0x1AC954u) {
        ctx->pc = 0x1AC954u;
            // 0x1ac954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC958u;
        goto label_1ac958;
    }
    ctx->pc = 0x1AC950u;
    SET_GPR_U32(ctx, 31, 0x1AC958u);
    ctx->pc = 0x1AC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC950u;
            // 0x1ac954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC958u; }
        if (ctx->pc != 0x1AC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC958u; }
        if (ctx->pc != 0x1AC958u) { return; }
    }
    ctx->pc = 0x1AC958u;
label_1ac958:
    // 0x1ac958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac95c:
    // 0x1ac95c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ac95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ac960:
    // 0x1ac960: 0xc0650b4  jal         func_1942D0
label_1ac964:
    if (ctx->pc == 0x1AC964u) {
        ctx->pc = 0x1AC964u;
            // 0x1ac964: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC968u;
        goto label_1ac968;
    }
    ctx->pc = 0x1AC960u;
    SET_GPR_U32(ctx, 31, 0x1AC968u);
    ctx->pc = 0x1AC964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC960u;
            // 0x1ac964: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1942D0u;
    if (runtime->hasFunction(0x1942D0u)) {
        auto targetFn = runtime->lookupFunction(0x1942D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC968u; }
        if (ctx->pc != 0x1AC968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001942D0_0x1942d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC968u; }
        if (ctx->pc != 0x1AC968u) { return; }
    }
    ctx->pc = 0x1AC968u;
label_1ac968:
    // 0x1ac968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac96c:
    // 0x1ac96c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ac96cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1ac970:
    // 0x1ac970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac974:
    // 0x1ac974: 0xc06189a  jal         func_186268
label_1ac978:
    if (ctx->pc == 0x1AC978u) {
        ctx->pc = 0x1AC978u;
            // 0x1ac978: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AC97Cu;
        goto label_1ac97c;
    }
    ctx->pc = 0x1AC974u;
    SET_GPR_U32(ctx, 31, 0x1AC97Cu);
    ctx->pc = 0x1AC978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC974u;
            // 0x1ac978: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC97Cu; }
        if (ctx->pc != 0x1AC97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC97Cu; }
        if (ctx->pc != 0x1AC97Cu) { return; }
    }
    ctx->pc = 0x1AC97Cu;
label_1ac97c:
    // 0x1ac97c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ac97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ac980:
    // 0x1ac980: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ac984:
    // 0x1ac984: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1ac988:
    // 0x1ac988: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1ac988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
label_1ac98c:
    // 0x1ac98c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ac98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac990:
    // 0x1ac990: 0xc06b212  jal         func_1AC848
label_1ac994:
    if (ctx->pc == 0x1AC994u) {
        ctx->pc = 0x1AC994u;
            // 0x1ac994: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
        ctx->pc = 0x1AC998u;
        goto label_1ac998;
    }
    ctx->pc = 0x1AC990u;
    SET_GPR_U32(ctx, 31, 0x1AC998u);
    ctx->pc = 0x1AC994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC990u;
            // 0x1ac994: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (runtime->hasFunction(0x1AC848u)) {
        auto targetFn = runtime->lookupFunction(0x1AC848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC998u; }
        if (ctx->pc != 0x1AC998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC848_0x1ac848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC998u; }
        if (ctx->pc != 0x1AC998u) { return; }
    }
    ctx->pc = 0x1AC998u;
label_1ac998:
    // 0x1ac998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ac998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ac99c:
    // 0x1ac99c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ac99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9a0:
    // 0x1ac9a0: 0xc06b1e8  jal         func_1AC7A0
label_1ac9a4:
    if (ctx->pc == 0x1AC9A4u) {
        ctx->pc = 0x1AC9A4u;
            // 0x1ac9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9A8u;
        goto label_1ac9a8;
    }
    ctx->pc = 0x1AC9A0u;
    SET_GPR_U32(ctx, 31, 0x1AC9A8u);
    ctx->pc = 0x1AC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9A0u;
            // 0x1ac9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7A0u;
    if (runtime->hasFunction(0x1AC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7A0_0x1ac7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    }
    ctx->pc = 0x1AC9A8u;
label_1ac9a8:
    // 0x1ac9a8: 0x1600008b  bnez        $s0, . + 4 + (0x8B << 2)
label_1ac9ac:
    if (ctx->pc == 0x1AC9ACu) {
        ctx->pc = 0x1AC9ACu;
            // 0x1ac9ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9B0u;
        goto label_1ac9b0;
    }
    ctx->pc = 0x1AC9A8u;
    {
        const bool branch_taken_0x1ac9a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9A8u;
            // 0x1ac9ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9a8) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1AC9B0u;
label_1ac9b0:
    // 0x1ac9b0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1ac9b4:
    // 0x1ac9b4: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x1ac9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ac9b8:
    // 0x1ac9b8: 0x10700087  beq         $v1, $s0, . + 4 + (0x87 << 2)
label_1ac9bc:
    if (ctx->pc == 0x1AC9BCu) {
        ctx->pc = 0x1AC9BCu;
            // 0x1ac9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9C0u;
        goto label_1ac9c0;
    }
    ctx->pc = 0x1AC9B8u;
    {
        const bool branch_taken_0x1ac9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1AC9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9B8u;
            // 0x1ac9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9b8) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1AC9C0u;
label_1ac9c0:
    // 0x1ac9c0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ac9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ac9c4:
    // 0x1ac9c4: 0xc064fee  jal         func_193FB8
label_1ac9c8:
    if (ctx->pc == 0x1AC9C8u) {
        ctx->pc = 0x1AC9C8u;
            // 0x1ac9c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9CCu;
        goto label_1ac9cc;
    }
    ctx->pc = 0x1AC9C4u;
    SET_GPR_U32(ctx, 31, 0x1AC9CCu);
    ctx->pc = 0x1AC9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9C4u;
            // 0x1ac9c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193FB8u;
    if (runtime->hasFunction(0x193FB8u)) {
        auto targetFn = runtime->lookupFunction(0x193FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9CCu; }
        if (ctx->pc != 0x1AC9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193FB8_0x193fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9CCu; }
        if (ctx->pc != 0x1AC9CCu) { return; }
    }
    ctx->pc = 0x1AC9CCu;
label_1ac9cc:
    // 0x1ac9cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9d0:
    // 0x1ac9d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1ac9d4:
    if (ctx->pc == 0x1AC9D4u) {
        ctx->pc = 0x1AC9D4u;
            // 0x1ac9d4: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1AC9D8u;
        goto label_1ac9d8;
    }
    ctx->pc = 0x1AC9D0u;
    {
        const bool branch_taken_0x1ac9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9D0u;
            // 0x1ac9d4: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9d0) {
            ctx->pc = 0x1AC9F0u;
            goto label_1ac9f0;
        }
    }
    ctx->pc = 0x1AC9D8u;
label_1ac9d8:
    // 0x1ac9d8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1ac9dc:
    // 0x1ac9dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ac9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9e0:
    // 0x1ac9e0: 0xc06a1ac  jal         func_1A86B0
label_1ac9e4:
    if (ctx->pc == 0x1AC9E4u) {
        ctx->pc = 0x1AC9E4u;
            // 0x1ac9e4: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
        ctx->pc = 0x1AC9E8u;
        goto label_1ac9e8;
    }
    ctx->pc = 0x1AC9E0u;
    SET_GPR_U32(ctx, 31, 0x1AC9E8u);
    ctx->pc = 0x1AC9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9E0u;
            // 0x1ac9e4: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9E8u; }
        if (ctx->pc != 0x1AC9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9E8u; }
        if (ctx->pc != 0x1AC9E8u) { return; }
    }
    ctx->pc = 0x1AC9E8u;
label_1ac9e8:
    // 0x1ac9e8: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1ac9ec:
    if (ctx->pc == 0x1AC9ECu) {
        ctx->pc = 0x1AC9ECu;
            // 0x1ac9ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1AC9F0u;
        goto label_1ac9f0;
    }
    ctx->pc = 0x1AC9E8u;
    {
        const bool branch_taken_0x1ac9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9E8u;
            // 0x1ac9ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9e8) {
            ctx->pc = 0x1ACBDCu;
            goto label_1acbdc;
        }
    }
    ctx->pc = 0x1AC9F0u;
label_1ac9f0:
    // 0x1ac9f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ac9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac9f4:
    // 0x1ac9f4: 0x30710040  andi        $s1, $v1, 0x40
    ctx->pc = 0x1ac9f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1ac9f8:
    // 0x1ac9f8: 0x52200018  beql        $s1, $zero, . + 4 + (0x18 << 2)
label_1ac9fc:
    if (ctx->pc == 0x1AC9FCu) {
        ctx->pc = 0x1AC9FCu;
            // 0x1ac9fc: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->pc = 0x1ACA00u;
        goto label_1aca00;
    }
    ctx->pc = 0x1AC9F8u;
    {
        const bool branch_taken_0x1ac9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac9f8) {
            ctx->pc = 0x1AC9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9F8u;
            // 0x1ac9fc: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA5Cu;
            goto label_1aca5c;
        }
    }
    ctx->pc = 0x1ACA00u;
label_1aca00:
    // 0x1aca00: 0x8e84090c  lw          $a0, 0x90C($s4)
    ctx->pc = 0x1aca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2316)));
label_1aca04:
    // 0x1aca04: 0x5880000a  blezl       $a0, . + 4 + (0xA << 2)
label_1aca08:
    if (ctx->pc == 0x1ACA08u) {
        ctx->pc = 0x1ACA08u;
            // 0x1aca08: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->pc = 0x1ACA0Cu;
        goto label_1aca0c;
    }
    ctx->pc = 0x1ACA04u;
    {
        const bool branch_taken_0x1aca04 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1aca04) {
            ctx->pc = 0x1ACA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA04u;
            // 0x1aca08: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA30u;
            goto label_1aca30;
        }
    }
    ctx->pc = 0x1ACA0Cu;
label_1aca0c:
    // 0x1aca0c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1aca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1aca10:
    // 0x1aca10: 0x54830071  bnel        $a0, $v1, . + 4 + (0x71 << 2)
label_1aca14:
    if (ctx->pc == 0x1ACA14u) {
        ctx->pc = 0x1ACA14u;
            // 0x1aca14: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x1ACA18u;
        goto label_1aca18;
    }
    ctx->pc = 0x1ACA10u;
    {
        const bool branch_taken_0x1aca10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aca10) {
            ctx->pc = 0x1ACA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA10u;
            // 0x1aca14: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1ACA18u;
label_1aca18:
    // 0x1aca18: 0x8e840910  lw          $a0, 0x910($s4)
    ctx->pc = 0x1aca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2320)));
label_1aca1c:
    // 0x1aca1c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1aca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1aca20:
    // 0x1aca20: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_1aca24:
    if (ctx->pc == 0x1ACA24u) {
        ctx->pc = 0x1ACA24u;
            // 0x1aca24: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->pc = 0x1ACA28u;
        goto label_1aca28;
    }
    ctx->pc = 0x1ACA20u;
    {
        const bool branch_taken_0x1aca20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1aca20) {
            ctx->pc = 0x1ACA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA20u;
            // 0x1aca24: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA30u;
            goto label_1aca30;
        }
    }
    ctx->pc = 0x1ACA28u;
label_1aca28:
    // 0x1aca28: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1aca2c:
    if (ctx->pc == 0x1ACA2Cu) {
        ctx->pc = 0x1ACA2Cu;
            // 0x1aca2c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x1ACA30u;
        goto label_1aca30;
    }
    ctx->pc = 0x1ACA28u;
    {
        const bool branch_taken_0x1aca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA28u;
            // 0x1aca2c: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca28) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1ACA30u;
label_1aca30:
    // 0x1aca30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1aca34:
    if (ctx->pc == 0x1ACA34u) {
        ctx->pc = 0x1ACA34u;
            // 0x1aca34: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->pc = 0x1ACA38u;
        goto label_1aca38;
    }
    ctx->pc = 0x1ACA30u;
    {
        const bool branch_taken_0x1aca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA30u;
            // 0x1aca34: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca30) {
            ctx->pc = 0x1ACA58u;
            goto label_1aca58;
        }
    }
    ctx->pc = 0x1ACA38u;
label_1aca38:
    // 0x1aca38: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1aca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1aca3c:
    // 0x1aca3c: 0x40f809  jalr        $v0
label_1aca40:
    if (ctx->pc == 0x1ACA40u) {
        ctx->pc = 0x1ACA40u;
            // 0x1aca40: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x1ACA44u;
        goto label_1aca44;
    }
    ctx->pc = 0x1ACA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACA44u);
        ctx->pc = 0x1ACA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA3Cu;
            // 0x1aca40: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACA44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA44u; }
            if (ctx->pc != 0x1ACA44u) { return; }
        }
        }
    }
    ctx->pc = 0x1ACA44u;
label_1aca44:
    // 0x1aca44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aca48:
    if (ctx->pc == 0x1ACA48u) {
        ctx->pc = 0x1ACA48u;
            // 0x1aca48: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1ACA4Cu;
        goto label_1aca4c;
    }
    ctx->pc = 0x1ACA44u;
    {
        const bool branch_taken_0x1aca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA44u;
            // 0x1aca48: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca44) {
            ctx->pc = 0x1ACA58u;
            goto label_1aca58;
        }
    }
    ctx->pc = 0x1ACA4Cu;
label_1aca4c:
    // 0x1aca4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aca4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca50:
    // 0x1aca50: 0x10000061  b           . + 4 + (0x61 << 2)
label_1aca54:
    if (ctx->pc == 0x1ACA54u) {
        ctx->pc = 0x1ACA54u;
            // 0x1aca54: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1ACA58u;
        goto label_1aca58;
    }
    ctx->pc = 0x1ACA50u;
    {
        const bool branch_taken_0x1aca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA50u;
            // 0x1aca54: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca50) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1ACA58u;
label_1aca58:
    // 0x1aca58: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x1aca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_1aca5c:
    // 0x1aca5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aca60:
    // 0x1aca60: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
label_1aca64:
    if (ctx->pc == 0x1ACA64u) {
        ctx->pc = 0x1ACA64u;
            // 0x1aca64: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->pc = 0x1ACA68u;
        goto label_1aca68;
    }
    ctx->pc = 0x1ACA60u;
    {
        const bool branch_taken_0x1aca60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1aca60) {
            ctx->pc = 0x1ACA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA60u;
            // 0x1aca64: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA70u;
            goto label_1aca70;
        }
    }
    ctx->pc = 0x1ACA68u;
label_1aca68:
    // 0x1aca68: 0x10000019  b           . + 4 + (0x19 << 2)
label_1aca6c:
    if (ctx->pc == 0x1ACA6Cu) {
        ctx->pc = 0x1ACA6Cu;
            // 0x1aca6c: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->pc = 0x1ACA70u;
        goto label_1aca70;
    }
    ctx->pc = 0x1ACA68u;
    {
        const bool branch_taken_0x1aca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA68u;
            // 0x1aca6c: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca68) {
            ctx->pc = 0x1ACAD0u;
            goto label_1acad0;
        }
    }
    ctx->pc = 0x1ACA70u;
label_1aca70:
    // 0x1aca70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aca74:
    // 0x1aca74: 0x54a20017  bnel        $a1, $v0, . + 4 + (0x17 << 2)
label_1aca78:
    if (ctx->pc == 0x1ACA78u) {
        ctx->pc = 0x1ACA78u;
            // 0x1aca78: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1ACA7Cu;
        goto label_1aca7c;
    }
    ctx->pc = 0x1ACA74u;
    {
        const bool branch_taken_0x1aca74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aca74) {
            ctx->pc = 0x1ACA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA74u;
            // 0x1aca78: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAD4u;
            goto label_1acad4;
        }
    }
    ctx->pc = 0x1ACA7Cu;
label_1aca7c:
    // 0x1aca7c: 0x8e630164  lw          $v1, 0x164($s3)
    ctx->pc = 0x1aca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_1aca80:
    // 0x1aca80: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1aca84:
    if (ctx->pc == 0x1ACA84u) {
        ctx->pc = 0x1ACA84u;
            // 0x1aca84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ACA88u;
        goto label_1aca88;
    }
    ctx->pc = 0x1ACA80u;
    {
        const bool branch_taken_0x1aca80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA80u;
            // 0x1aca84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca80) {
            ctx->pc = 0x1ACAD0u;
            goto label_1acad0;
        }
    }
    ctx->pc = 0x1ACA88u;
label_1aca88:
    // 0x1aca88: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_1aca8c:
    if (ctx->pc == 0x1ACA8Cu) {
        ctx->pc = 0x1ACA8Cu;
            // 0x1aca8c: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->pc = 0x1ACA90u;
        goto label_1aca90;
    }
    ctx->pc = 0x1ACA88u;
    {
        const bool branch_taken_0x1aca88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA88u;
            // 0x1aca8c: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca88) {
            ctx->pc = 0x1ACAB8u;
            goto label_1acab8;
        }
    }
    ctx->pc = 0x1ACA90u;
label_1aca90:
    // 0x1aca90: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1aca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1aca94:
    // 0x1aca94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aca94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aca98:
    // 0x1aca98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1aca9c:
    if (ctx->pc == 0x1ACA9Cu) {
        ctx->pc = 0x1ACA9Cu;
            // 0x1aca9c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1ACAA0u;
        goto label_1acaa0;
    }
    ctx->pc = 0x1ACA98u;
    {
        const bool branch_taken_0x1aca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA98u;
            // 0x1aca9c: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca98) {
            ctx->pc = 0x1ACAD4u;
            goto label_1acad4;
        }
    }
    ctx->pc = 0x1ACAA0u;
label_1acaa0:
    // 0x1acaa0: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1acaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1acaa4:
    // 0x1acaa4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1acaa8:
    if (ctx->pc == 0x1ACAA8u) {
        ctx->pc = 0x1ACAA8u;
            // 0x1acaa8: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->pc = 0x1ACAACu;
        goto label_1acaac;
    }
    ctx->pc = 0x1ACAA4u;
    {
        const bool branch_taken_0x1acaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acaa4) {
            ctx->pc = 0x1ACAA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAA4u;
            // 0x1acaa8: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAD8u;
            goto label_1acad8;
        }
    }
    ctx->pc = 0x1ACAACu;
label_1acaac:
    // 0x1acaac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1acab0:
    if (ctx->pc == 0x1ACAB0u) {
        ctx->pc = 0x1ACAB0u;
            // 0x1acab0: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->pc = 0x1ACAB4u;
        goto label_1acab4;
    }
    ctx->pc = 0x1ACAACu;
    {
        const bool branch_taken_0x1acaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAACu;
            // 0x1acab0: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaac) {
            ctx->pc = 0x1ACAD0u;
            goto label_1acad0;
        }
    }
    ctx->pc = 0x1ACAB4u;
label_1acab4:
    // 0x1acab4: 0x0  nop
    ctx->pc = 0x1acab4u;
    // NOP
label_1acab8:
    // 0x1acab8: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_1acabc:
    if (ctx->pc == 0x1ACABCu) {
        ctx->pc = 0x1ACABCu;
            // 0x1acabc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1ACAC0u;
        goto label_1acac0;
    }
    ctx->pc = 0x1ACAB8u;
    {
        const bool branch_taken_0x1acab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ACABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAB8u;
            // 0x1acabc: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acab8) {
            ctx->pc = 0x1ACAD4u;
            goto label_1acad4;
        }
    }
    ctx->pc = 0x1ACAC0u;
label_1acac0:
    // 0x1acac0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1acac4:
    // 0x1acac4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1acac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1acac8:
    // 0x1acac8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1acacc:
    if (ctx->pc == 0x1ACACCu) {
        ctx->pc = 0x1ACACCu;
            // 0x1acacc: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->pc = 0x1ACAD0u;
        goto label_1acad0;
    }
    ctx->pc = 0x1ACAC8u;
    {
        const bool branch_taken_0x1acac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acac8) {
            ctx->pc = 0x1ACACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAC8u;
            // 0x1acacc: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACAD0u;
            goto label_1acad0;
        }
    }
    ctx->pc = 0x1ACAD0u;
label_1acad0:
    // 0x1acad0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1acad4:
    // 0x1acad4: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x1acad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1acad8:
    // 0x1acad8: 0xc0650aa  jal         func_1942A8
label_1acadc:
    if (ctx->pc == 0x1ACADCu) {
        ctx->pc = 0x1ACADCu;
            // 0x1acadc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAE0u;
        goto label_1acae0;
    }
    ctx->pc = 0x1ACAD8u;
    SET_GPR_U32(ctx, 31, 0x1ACAE0u);
    ctx->pc = 0x1ACADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAD8u;
            // 0x1acadc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1942A8u;
    if (runtime->hasFunction(0x1942A8u)) {
        auto targetFn = runtime->lookupFunction(0x1942A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAE0u; }
        if (ctx->pc != 0x1ACAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001942A8_0x1942a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACAE0u; }
        if (ctx->pc != 0x1ACAE0u) { return; }
    }
    ctx->pc = 0x1ACAE0u;
label_1acae0:
    // 0x1acae0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1acae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1acae4:
    // 0x1acae4: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1acae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1acae8:
    // 0x1acae8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1acaec:
    if (ctx->pc == 0x1ACAECu) {
        ctx->pc = 0x1ACAECu;
            // 0x1acaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ACAF0u;
        goto label_1acaf0;
    }
    ctx->pc = 0x1ACAE8u;
    {
        const bool branch_taken_0x1acae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ACAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAE8u;
            // 0x1acaec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acae8) {
            ctx->pc = 0x1ACB00u;
            goto label_1acb00;
        }
    }
    ctx->pc = 0x1ACAF0u;
label_1acaf0:
    // 0x1acaf0: 0xae63010c  sw          $v1, 0x10C($s3)
    ctx->pc = 0x1acaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
label_1acaf4:
    // 0x1acaf4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1acaf8:
    if (ctx->pc == 0x1ACAF8u) {
        ctx->pc = 0x1ACAF8u;
            // 0x1acaf8: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1ACAFCu;
        goto label_1acafc;
    }
    ctx->pc = 0x1ACAF4u;
    {
        const bool branch_taken_0x1acaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAF4u;
            // 0x1acaf8: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaf4) {
            ctx->pc = 0x1ACB04u;
            goto label_1acb04;
        }
    }
    ctx->pc = 0x1ACAFCu;
label_1acafc:
    // 0x1acafc: 0x0  nop
    ctx->pc = 0x1acafcu;
    // NOP
label_1acb00:
    // 0x1acb00: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x1acb00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_1acb04:
    // 0x1acb04: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_1acb08:
    if (ctx->pc == 0x1ACB08u) {
        ctx->pc = 0x1ACB08u;
            // 0x1acb08: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x1ACB0Cu;
        goto label_1acb0c;
    }
    ctx->pc = 0x1ACB04u;
    {
        const bool branch_taken_0x1acb04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb04) {
            ctx->pc = 0x1ACB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB04u;
            // 0x1acb08: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACB44u;
            goto label_1acb44;
        }
    }
    ctx->pc = 0x1ACB0Cu;
label_1acb0c:
    // 0x1acb0c: 0x8e900d54  lw          $s0, 0xD54($s4)
    ctx->pc = 0x1acb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3412)));
label_1acb10:
    // 0x1acb10: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1acb14:
    if (ctx->pc == 0x1ACB14u) {
        ctx->pc = 0x1ACB14u;
            // 0x1acb14: 0x8e910d58  lw          $s1, 0xD58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3416)));
        ctx->pc = 0x1ACB18u;
        goto label_1acb18;
    }
    ctx->pc = 0x1ACB10u;
    {
        const bool branch_taken_0x1acb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB10u;
            // 0x1acb14: 0x8e910d58  lw          $s1, 0xD58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb10) {
            ctx->pc = 0x1ACB40u;
            goto label_1acb40;
        }
    }
    ctx->pc = 0x1ACB18u;
label_1acb18:
    // 0x1acb18: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1acb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1acb1c:
    // 0x1acb1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acb20:
    // 0x1acb20: 0xc064bc8  jal         func_192F20
label_1acb24:
    if (ctx->pc == 0x1ACB24u) {
        ctx->pc = 0x1ACB24u;
            // 0x1acb24: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x1ACB28u;
        goto label_1acb28;
    }
    ctx->pc = 0x1ACB20u;
    SET_GPR_U32(ctx, 31, 0x1ACB28u);
    ctx->pc = 0x1ACB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB20u;
            // 0x1acb24: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB28u; }
        if (ctx->pc != 0x1ACB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB28u; }
        if (ctx->pc != 0x1ACB28u) { return; }
    }
    ctx->pc = 0x1ACB28u;
label_1acb28:
    // 0x1acb28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1acb2c:
    if (ctx->pc == 0x1ACB2Cu) {
        ctx->pc = 0x1ACB2Cu;
            // 0x1acb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB30u;
        goto label_1acb30;
    }
    ctx->pc = 0x1ACB28u;
    {
        const bool branch_taken_0x1acb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB28u;
            // 0x1acb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb28) {
            ctx->pc = 0x1ACB40u;
            goto label_1acb40;
        }
    }
    ctx->pc = 0x1ACB30u;
label_1acb30:
    // 0x1acb30: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1acb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1acb34:
    // 0x1acb34: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1acb38:
    // 0x1acb38: 0x200f809  jalr        $s0
label_1acb3c:
    if (ctx->pc == 0x1ACB3Cu) {
        ctx->pc = 0x1ACB3Cu;
            // 0x1acb3c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x1ACB40u;
        goto label_1acb40;
    }
    ctx->pc = 0x1ACB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1ACB40u);
        ctx->pc = 0x1ACB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB38u;
            // 0x1acb3c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ACB40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB40u; }
            if (ctx->pc != 0x1ACB40u) { return; }
        }
        }
    }
    ctx->pc = 0x1ACB40u;
label_1acb40:
    // 0x1acb40: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1acb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1acb44:
    // 0x1acb44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1acb48:
    // 0x1acb48: 0xc064bc8  jal         func_192F20
label_1acb4c:
    if (ctx->pc == 0x1ACB4Cu) {
        ctx->pc = 0x1ACB4Cu;
            // 0x1acb4c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x1ACB50u;
        goto label_1acb50;
    }
    ctx->pc = 0x1ACB48u;
    SET_GPR_U32(ctx, 31, 0x1ACB50u);
    ctx->pc = 0x1ACB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB48u;
            // 0x1acb4c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB50u; }
        if (ctx->pc != 0x1ACB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB50u; }
        if (ctx->pc != 0x1ACB50u) { return; }
    }
    ctx->pc = 0x1ACB50u;
label_1acb50:
    // 0x1acb50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acb54:
    // 0x1acb54: 0x8e690110  lw          $t1, 0x110($s3)
    ctx->pc = 0x1acb54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1acb58:
    // 0x1acb58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1acb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1acb5c:
    // 0x1acb5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1acb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acb60:
    // 0x1acb60: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1acb60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acb64:
    // 0x1acb64: 0xc06b302  jal         func_1ACC08
label_1acb68:
    if (ctx->pc == 0x1ACB68u) {
        ctx->pc = 0x1ACB68u;
            // 0x1acb68: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x1ACB6Cu;
        goto label_1acb6c;
    }
    ctx->pc = 0x1ACB64u;
    SET_GPR_U32(ctx, 31, 0x1ACB6Cu);
    ctx->pc = 0x1ACB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB64u;
            // 0x1acb68: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACC08u;
    if (runtime->hasFunction(0x1ACC08u)) {
        auto targetFn = runtime->lookupFunction(0x1ACC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB6Cu; }
        if (ctx->pc != 0x1ACB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACC08_0x1acc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB6Cu; }
        if (ctx->pc != 0x1ACB6Cu) { return; }
    }
    ctx->pc = 0x1ACB6Cu;
label_1acb6c:
    // 0x1acb6c: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x1acb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_1acb70:
    // 0x1acb70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1acb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1acb74:
    // 0x1acb74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb78:
    // 0x1acb78: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x1acb78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1acb7c:
    // 0x1acb7c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1acb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1acb80:
    // 0x1acb80: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1acb84:
    if (ctx->pc == 0x1ACB84u) {
        ctx->pc = 0x1ACB84u;
            // 0x1acb84: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->pc = 0x1ACB88u;
        goto label_1acb88;
    }
    ctx->pc = 0x1ACB80u;
    {
        const bool branch_taken_0x1acb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB80u;
            // 0x1acb84: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb80) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1ACB88u;
label_1acb88:
    // 0x1acb88: 0x8e660110  lw          $a2, 0x110($s3)
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1acb8c:
    // 0x1acb8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acb90:
    // 0x1acb90: 0xc06b3a6  jal         func_1ACE98
label_1acb94:
    if (ctx->pc == 0x1ACB94u) {
        ctx->pc = 0x1ACB94u;
            // 0x1acb94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB98u;
        goto label_1acb98;
    }
    ctx->pc = 0x1ACB90u;
    SET_GPR_U32(ctx, 31, 0x1ACB98u);
    ctx->pc = 0x1ACB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB90u;
            // 0x1acb94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE98u;
    if (runtime->hasFunction(0x1ACE98u)) {
        auto targetFn = runtime->lookupFunction(0x1ACE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB98u; }
        if (ctx->pc != 0x1ACB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACE98_0x1ace98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB98u; }
        if (ctx->pc != 0x1ACB98u) { return; }
    }
    ctx->pc = 0x1ACB98u;
label_1acb98:
    // 0x1acb98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acb9c:
    // 0x1acb9c: 0x8e670110  lw          $a3, 0x110($s3)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1acba0:
    // 0x1acba0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1acba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1acba4:
    // 0x1acba4: 0xc06b47c  jal         func_1AD1F0
label_1acba8:
    if (ctx->pc == 0x1ACBA8u) {
        ctx->pc = 0x1ACBA8u;
            // 0x1acba8: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1ACBACu;
        goto label_1acbac;
    }
    ctx->pc = 0x1ACBA4u;
    SET_GPR_U32(ctx, 31, 0x1ACBACu);
    ctx->pc = 0x1ACBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBA4u;
            // 0x1acba8: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD1F0u;
    if (runtime->hasFunction(0x1AD1F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBACu; }
        if (ctx->pc != 0x1ACBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD1F0_0x1ad1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBACu; }
        if (ctx->pc != 0x1ACBACu) { return; }
    }
    ctx->pc = 0x1ACBACu;
label_1acbac:
    // 0x1acbac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acbb0:
    // 0x1acbb0: 0xc06b5e6  jal         func_1AD798
label_1acbb4:
    if (ctx->pc == 0x1ACBB4u) {
        ctx->pc = 0x1ACBB4u;
            // 0x1acbb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBB8u;
        goto label_1acbb8;
    }
    ctx->pc = 0x1ACBB0u;
    SET_GPR_U32(ctx, 31, 0x1ACBB8u);
    ctx->pc = 0x1ACBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBB0u;
            // 0x1acbb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD798u;
    if (runtime->hasFunction(0x1AD798u)) {
        auto targetFn = runtime->lookupFunction(0x1AD798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBB8u; }
        if (ctx->pc != 0x1ACBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD798_0x1ad798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBB8u; }
        if (ctx->pc != 0x1ACBB8u) { return; }
    }
    ctx->pc = 0x1ACBB8u;
label_1acbb8:
    // 0x1acbb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acbbc:
    // 0x1acbbc: 0xc06b61e  jal         func_1AD878
label_1acbc0:
    if (ctx->pc == 0x1ACBC0u) {
        ctx->pc = 0x1ACBC0u;
            // 0x1acbc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBC4u;
        goto label_1acbc4;
    }
    ctx->pc = 0x1ACBBCu;
    SET_GPR_U32(ctx, 31, 0x1ACBC4u);
    ctx->pc = 0x1ACBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBBCu;
            // 0x1acbc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD878u;
    if (runtime->hasFunction(0x1AD878u)) {
        auto targetFn = runtime->lookupFunction(0x1AD878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBC4u; }
        if (ctx->pc != 0x1ACBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD878_0x1ad878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBC4u; }
        if (ctx->pc != 0x1ACBC4u) { return; }
    }
    ctx->pc = 0x1ACBC4u;
label_1acbc4:
    // 0x1acbc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acbc8:
    // 0x1acbc8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1acbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1acbcc:
    // 0x1acbcc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1acbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1acbd0:
    // 0x1acbd0: 0xc06b684  jal         func_1ADA10
label_1acbd4:
    if (ctx->pc == 0x1ACBD4u) {
        ctx->pc = 0x1ACBD4u;
            // 0x1acbd4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBD8u;
        goto label_1acbd8;
    }
    ctx->pc = 0x1ACBD0u;
    SET_GPR_U32(ctx, 31, 0x1ACBD8u);
    ctx->pc = 0x1ACBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBD0u;
            // 0x1acbd4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA10u;
    if (runtime->hasFunction(0x1ADA10u)) {
        auto targetFn = runtime->lookupFunction(0x1ADA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBD8u; }
        if (ctx->pc != 0x1ACBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADA10_0x1ada10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBD8u; }
        if (ctx->pc != 0x1ACBD8u) { return; }
    }
    ctx->pc = 0x1ACBD8u;
label_1acbd8:
    // 0x1acbd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1acbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acbdc:
    // 0x1acbdc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1acbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1acbe0:
    // 0x1acbe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1acbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acbe4:
    // 0x1acbe4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1acbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1acbe8:
    // 0x1acbe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1acbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1acbec:
    // 0x1acbec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1acbecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1acbf0:
    // 0x1acbf0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1acbf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1acbf4:
    // 0x1acbf4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1acbf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1acbf8:
    // 0x1acbf8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1acbf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1acbfc:
    // 0x1acbfc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1acbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1acc00:
    // 0x1acc00: 0x3e00008  jr          $ra
label_1acc04:
    if (ctx->pc == 0x1ACC04u) {
        ctx->pc = 0x1ACC04u;
            // 0x1acc04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1ACC08u;
        goto label_fallthrough_0x1acc00;
    }
    ctx->pc = 0x1ACC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC00u;
            // 0x1acc04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1acc00:
    ctx->pc = 0x1ACC08u;
}
