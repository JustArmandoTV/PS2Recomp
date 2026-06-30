#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016F860
// Address: 0x16f860 - 0x16fad8
void sub_0016F860_0x16f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F860_0x16f860");
#endif

    switch (ctx->pc) {
        case 0x16f860u: goto label_16f860;
        case 0x16f864u: goto label_16f864;
        case 0x16f868u: goto label_16f868;
        case 0x16f86cu: goto label_16f86c;
        case 0x16f870u: goto label_16f870;
        case 0x16f874u: goto label_16f874;
        case 0x16f878u: goto label_16f878;
        case 0x16f87cu: goto label_16f87c;
        case 0x16f880u: goto label_16f880;
        case 0x16f884u: goto label_16f884;
        case 0x16f888u: goto label_16f888;
        case 0x16f88cu: goto label_16f88c;
        case 0x16f890u: goto label_16f890;
        case 0x16f894u: goto label_16f894;
        case 0x16f898u: goto label_16f898;
        case 0x16f89cu: goto label_16f89c;
        case 0x16f8a0u: goto label_16f8a0;
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8a8u: goto label_16f8a8;
        case 0x16f8acu: goto label_16f8ac;
        case 0x16f8b0u: goto label_16f8b0;
        case 0x16f8b4u: goto label_16f8b4;
        case 0x16f8b8u: goto label_16f8b8;
        case 0x16f8bcu: goto label_16f8bc;
        case 0x16f8c0u: goto label_16f8c0;
        case 0x16f8c4u: goto label_16f8c4;
        case 0x16f8c8u: goto label_16f8c8;
        case 0x16f8ccu: goto label_16f8cc;
        case 0x16f8d0u: goto label_16f8d0;
        case 0x16f8d4u: goto label_16f8d4;
        case 0x16f8d8u: goto label_16f8d8;
        case 0x16f8dcu: goto label_16f8dc;
        case 0x16f8e0u: goto label_16f8e0;
        case 0x16f8e4u: goto label_16f8e4;
        case 0x16f8e8u: goto label_16f8e8;
        case 0x16f8ecu: goto label_16f8ec;
        case 0x16f8f0u: goto label_16f8f0;
        case 0x16f8f4u: goto label_16f8f4;
        case 0x16f8f8u: goto label_16f8f8;
        case 0x16f8fcu: goto label_16f8fc;
        case 0x16f900u: goto label_16f900;
        case 0x16f904u: goto label_16f904;
        case 0x16f908u: goto label_16f908;
        case 0x16f90cu: goto label_16f90c;
        case 0x16f910u: goto label_16f910;
        case 0x16f914u: goto label_16f914;
        case 0x16f918u: goto label_16f918;
        case 0x16f91cu: goto label_16f91c;
        case 0x16f920u: goto label_16f920;
        case 0x16f924u: goto label_16f924;
        case 0x16f928u: goto label_16f928;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f930u: goto label_16f930;
        case 0x16f934u: goto label_16f934;
        case 0x16f938u: goto label_16f938;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f940u: goto label_16f940;
        case 0x16f944u: goto label_16f944;
        case 0x16f948u: goto label_16f948;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f950u: goto label_16f950;
        case 0x16f954u: goto label_16f954;
        case 0x16f958u: goto label_16f958;
        case 0x16f95cu: goto label_16f95c;
        case 0x16f960u: goto label_16f960;
        case 0x16f964u: goto label_16f964;
        case 0x16f968u: goto label_16f968;
        case 0x16f96cu: goto label_16f96c;
        case 0x16f970u: goto label_16f970;
        case 0x16f974u: goto label_16f974;
        case 0x16f978u: goto label_16f978;
        case 0x16f97cu: goto label_16f97c;
        case 0x16f980u: goto label_16f980;
        case 0x16f984u: goto label_16f984;
        case 0x16f988u: goto label_16f988;
        case 0x16f98cu: goto label_16f98c;
        case 0x16f990u: goto label_16f990;
        case 0x16f994u: goto label_16f994;
        case 0x16f998u: goto label_16f998;
        case 0x16f99cu: goto label_16f99c;
        case 0x16f9a0u: goto label_16f9a0;
        case 0x16f9a4u: goto label_16f9a4;
        case 0x16f9a8u: goto label_16f9a8;
        case 0x16f9acu: goto label_16f9ac;
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9b4u: goto label_16f9b4;
        case 0x16f9b8u: goto label_16f9b8;
        case 0x16f9bcu: goto label_16f9bc;
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9c4u: goto label_16f9c4;
        case 0x16f9c8u: goto label_16f9c8;
        case 0x16f9ccu: goto label_16f9cc;
        case 0x16f9d0u: goto label_16f9d0;
        case 0x16f9d4u: goto label_16f9d4;
        case 0x16f9d8u: goto label_16f9d8;
        case 0x16f9dcu: goto label_16f9dc;
        case 0x16f9e0u: goto label_16f9e0;
        case 0x16f9e4u: goto label_16f9e4;
        case 0x16f9e8u: goto label_16f9e8;
        case 0x16f9ecu: goto label_16f9ec;
        case 0x16f9f0u: goto label_16f9f0;
        case 0x16f9f4u: goto label_16f9f4;
        case 0x16f9f8u: goto label_16f9f8;
        case 0x16f9fcu: goto label_16f9fc;
        case 0x16fa00u: goto label_16fa00;
        case 0x16fa04u: goto label_16fa04;
        case 0x16fa08u: goto label_16fa08;
        case 0x16fa0cu: goto label_16fa0c;
        case 0x16fa10u: goto label_16fa10;
        case 0x16fa14u: goto label_16fa14;
        case 0x16fa18u: goto label_16fa18;
        case 0x16fa1cu: goto label_16fa1c;
        case 0x16fa20u: goto label_16fa20;
        case 0x16fa24u: goto label_16fa24;
        case 0x16fa28u: goto label_16fa28;
        case 0x16fa2cu: goto label_16fa2c;
        case 0x16fa30u: goto label_16fa30;
        case 0x16fa34u: goto label_16fa34;
        case 0x16fa38u: goto label_16fa38;
        case 0x16fa3cu: goto label_16fa3c;
        case 0x16fa40u: goto label_16fa40;
        case 0x16fa44u: goto label_16fa44;
        case 0x16fa48u: goto label_16fa48;
        case 0x16fa4cu: goto label_16fa4c;
        case 0x16fa50u: goto label_16fa50;
        case 0x16fa54u: goto label_16fa54;
        case 0x16fa58u: goto label_16fa58;
        case 0x16fa5cu: goto label_16fa5c;
        case 0x16fa60u: goto label_16fa60;
        case 0x16fa64u: goto label_16fa64;
        case 0x16fa68u: goto label_16fa68;
        case 0x16fa6cu: goto label_16fa6c;
        case 0x16fa70u: goto label_16fa70;
        case 0x16fa74u: goto label_16fa74;
        case 0x16fa78u: goto label_16fa78;
        case 0x16fa7cu: goto label_16fa7c;
        case 0x16fa80u: goto label_16fa80;
        case 0x16fa84u: goto label_16fa84;
        case 0x16fa88u: goto label_16fa88;
        case 0x16fa8cu: goto label_16fa8c;
        case 0x16fa90u: goto label_16fa90;
        case 0x16fa94u: goto label_16fa94;
        case 0x16fa98u: goto label_16fa98;
        case 0x16fa9cu: goto label_16fa9c;
        case 0x16faa0u: goto label_16faa0;
        case 0x16faa4u: goto label_16faa4;
        case 0x16faa8u: goto label_16faa8;
        case 0x16faacu: goto label_16faac;
        case 0x16fab0u: goto label_16fab0;
        case 0x16fab4u: goto label_16fab4;
        case 0x16fab8u: goto label_16fab8;
        case 0x16fabcu: goto label_16fabc;
        case 0x16fac0u: goto label_16fac0;
        case 0x16fac4u: goto label_16fac4;
        case 0x16fac8u: goto label_16fac8;
        case 0x16faccu: goto label_16facc;
        case 0x16fad0u: goto label_16fad0;
        case 0x16fad4u: goto label_16fad4;
        default: break;
    }

    ctx->pc = 0x16f860u;

label_16f860:
    // 0x16f860: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16f864:
    // 0x16f864: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_16f868:
    // 0x16f868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f86c:
    // 0x16f86c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16f86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_16f870:
    // 0x16f870: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16f870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16f874:
    // 0x16f874: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x16f874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_16f878:
    // 0x16f878: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x16f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_16f87c:
    // 0x16f87c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x16f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16f880:
    // 0x16f880: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x16f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_16f884:
    // 0x16f884: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x16f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_16f888:
    // 0x16f888: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x16f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_16f88c:
    // 0x16f88c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x16f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_16f890:
    // 0x16f890: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x16f890u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16f894:
    // 0x16f894: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x16f894u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16f898:
    // 0x16f898: 0xc0593bc  jal         func_164EF0
label_16f89c:
    if (ctx->pc == 0x16F89Cu) {
        ctx->pc = 0x16F89Cu;
            // 0x16f89c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8A0u;
        goto label_16f8a0;
    }
    ctx->pc = 0x16F898u;
    SET_GPR_U32(ctx, 31, 0x16F8A0u);
    ctx->pc = 0x16F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F898u;
            // 0x16f89c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164EF0u;
    if (runtime->hasFunction(0x164EF0u)) {
        auto targetFn = runtime->lookupFunction(0x164EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8A0u; }
        if (ctx->pc != 0x16F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164EF0_0x164ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8A0u; }
        if (ctx->pc != 0x16F8A0u) { return; }
    }
    ctx->pc = 0x16F8A0u;
label_16f8a0:
    // 0x16f8a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16f8a4:
    // 0x16f8a4: 0xc0594bc  jal         func_1652F0
label_16f8a8:
    if (ctx->pc == 0x16F8A8u) {
        ctx->pc = 0x16F8A8u;
            // 0x16f8a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8ACu;
        goto label_16f8ac;
    }
    ctx->pc = 0x16F8A4u;
    SET_GPR_U32(ctx, 31, 0x16F8ACu);
    ctx->pc = 0x16F8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8A4u;
            // 0x16f8a8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1652F0u;
    if (runtime->hasFunction(0x1652F0u)) {
        auto targetFn = runtime->lookupFunction(0x1652F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8ACu; }
        if (ctx->pc != 0x16F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001652F0_0x1652f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8ACu; }
        if (ctx->pc != 0x16F8ACu) { return; }
    }
    ctx->pc = 0x16F8ACu;
label_16f8ac:
    // 0x16f8ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16f8b0:
    // 0x16f8b0: 0xc0594be  jal         func_1652F8
label_16f8b4:
    if (ctx->pc == 0x16F8B4u) {
        ctx->pc = 0x16F8B4u;
            // 0x16f8b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8B8u;
        goto label_16f8b8;
    }
    ctx->pc = 0x16F8B0u;
    SET_GPR_U32(ctx, 31, 0x16F8B8u);
    ctx->pc = 0x16F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8B0u;
            // 0x16f8b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1652F8u;
    if (runtime->hasFunction(0x1652F8u)) {
        auto targetFn = runtime->lookupFunction(0x1652F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8B8u; }
        if (ctx->pc != 0x16F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001652F8_0x1652f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8B8u; }
        if (ctx->pc != 0x16F8B8u) { return; }
    }
    ctx->pc = 0x16F8B8u;
label_16f8b8:
    // 0x16f8b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16f8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16f8bc:
    // 0x16f8bc: 0xc059386  jal         func_164E18
label_16f8c0:
    if (ctx->pc == 0x16F8C0u) {
        ctx->pc = 0x16F8C0u;
            // 0x16f8c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8C4u;
        goto label_16f8c4;
    }
    ctx->pc = 0x16F8BCu;
    SET_GPR_U32(ctx, 31, 0x16F8C4u);
    ctx->pc = 0x16F8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8BCu;
            // 0x16f8c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E18u;
    if (runtime->hasFunction(0x164E18u)) {
        auto targetFn = runtime->lookupFunction(0x164E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8C4u; }
        if (ctx->pc != 0x16F8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E18_0x164e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8C4u; }
        if (ctx->pc != 0x16F8C4u) { return; }
    }
    ctx->pc = 0x16F8C4u;
label_16f8c4:
    // 0x16f8c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16f8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f8c8:
    // 0x16f8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f8cc:
    // 0x16f8cc: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_16f8d0:
    if (ctx->pc == 0x16F8D0u) {
        ctx->pc = 0x16F8D0u;
            // 0x16f8d0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x16F8D4u;
        goto label_16f8d4;
    }
    ctx->pc = 0x16F8CCu;
    {
        const bool branch_taken_0x16f8cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f8cc) {
            ctx->pc = 0x16F8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8CCu;
            // 0x16f8d0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F8E8u;
            goto label_16f8e8;
        }
    }
    ctx->pc = 0x16F8D4u;
label_16f8d4:
    // 0x16f8d4: 0xc05c0fe  jal         func_1703F8
label_16f8d8:
    if (ctx->pc == 0x16F8D8u) {
        ctx->pc = 0x16F8D8u;
            // 0x16f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8DCu;
        goto label_16f8dc;
    }
    ctx->pc = 0x16F8D4u;
    SET_GPR_U32(ctx, 31, 0x16F8DCu);
    ctx->pc = 0x16F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8D4u;
            // 0x16f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703F8u;
    if (runtime->hasFunction(0x1703F8u)) {
        auto targetFn = runtime->lookupFunction(0x1703F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8DCu; }
        if (ctx->pc != 0x16F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001703F8_0x1703f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8DCu; }
        if (ctx->pc != 0x16F8DCu) { return; }
    }
    ctx->pc = 0x16F8DCu;
label_16f8dc:
    // 0x16f8dc: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_16f8e0:
    if (ctx->pc == 0x16F8E0u) {
        ctx->pc = 0x16F8E0u;
            // 0x16f8e0: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16F8E4u;
        goto label_16f8e4;
    }
    ctx->pc = 0x16F8DCu;
    {
        const bool branch_taken_0x16f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x16F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8DCu;
            // 0x16f8e0: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8dc) {
            ctx->pc = 0x16F8F8u;
            goto label_16f8f8;
        }
    }
    ctx->pc = 0x16F8E4u;
label_16f8e4:
    // 0x16f8e4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x16f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_16f8e8:
    // 0x16f8e8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_16f8ec:
    // 0x16f8ec: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x16f8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16f8f0:
    // 0x16f8f0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x16f8f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_16f8f4:
    // 0x16f8f4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16f8f8:
    // 0x16f8f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16f8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f8fc:
    // 0x16f8fc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x16f8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16f900:
    // 0x16f900: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x16f900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_16f904:
    // 0x16f904: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x16f904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16f908:
    // 0x16f908: 0xc061c20  jal         func_187080
label_16f90c:
    if (ctx->pc == 0x16F90Cu) {
        ctx->pc = 0x16F90Cu;
            // 0x16f90c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F910u;
        goto label_16f910;
    }
    ctx->pc = 0x16F908u;
    SET_GPR_U32(ctx, 31, 0x16F910u);
    ctx->pc = 0x16F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F908u;
            // 0x16f90c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F910u; }
        if (ctx->pc != 0x16F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F910u; }
        if (ctx->pc != 0x16F910u) { return; }
    }
    ctx->pc = 0x16F910u;
label_16f910:
    // 0x16f910: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x16f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16f914:
    // 0x16f914: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16f914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f918:
    // 0x16f918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16f918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16f91c:
    // 0x16f91c: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_16f920:
    // 0x16f920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f924:
    // 0x16f924: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x16f924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_16f928:
    // 0x16f928: 0xe0f809  jalr        $a3
label_16f92c:
    if (ctx->pc == 0x16F92Cu) {
        ctx->pc = 0x16F92Cu;
            // 0x16f92c: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x16F930u;
        goto label_16f930;
    }
    ctx->pc = 0x16F928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x16F930u);
        ctx->pc = 0x16F92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F928u;
            // 0x16f92c: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F930u; }
            if (ctx->pc != 0x16F930u) { return; }
        }
        }
    }
    ctx->pc = 0x16F930u;
label_16f930:
    // 0x16f930: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_16f934:
    // 0x16f934: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16f938:
    // 0x16f938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f93c:
    // 0x16f93c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f940:
    // 0x16f940: 0x40f809  jalr        $v0
label_16f944:
    if (ctx->pc == 0x16F944u) {
        ctx->pc = 0x16F944u;
            // 0x16f944: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F948u;
        goto label_16f948;
    }
    ctx->pc = 0x16F940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F948u);
        ctx->pc = 0x16F944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F940u;
            // 0x16f944: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F948u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F948u; }
            if (ctx->pc != 0x16F948u) { return; }
        }
        }
    }
    ctx->pc = 0x16F948u;
label_16f948:
    // 0x16f948: 0x10000019  b           . + 4 + (0x19 << 2)
label_16f94c:
    if (ctx->pc == 0x16F94Cu) {
        ctx->pc = 0x16F950u;
        goto label_16f950;
    }
    ctx->pc = 0x16F948u;
    {
        const bool branch_taken_0x16f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f948) {
            ctx->pc = 0x16F9B0u;
            goto label_16f9b0;
        }
    }
    ctx->pc = 0x16F950u;
label_16f950:
    // 0x16f950: 0xc061c20  jal         func_187080
label_16f954:
    if (ctx->pc == 0x16F954u) {
        ctx->pc = 0x16F958u;
        goto label_16f958;
    }
    ctx->pc = 0x16F950u;
    SET_GPR_U32(ctx, 31, 0x16F958u);
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F958u; }
        if (ctx->pc != 0x16F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F958u; }
        if (ctx->pc != 0x16F958u) { return; }
    }
    ctx->pc = 0x16F958u;
label_16f958:
    // 0x16f958: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x16f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_16f95c:
    // 0x16f95c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16f95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f960:
    // 0x16f960: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16f964:
    if (ctx->pc == 0x16F964u) {
        ctx->pc = 0x16F964u;
            // 0x16f964: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x16F968u;
        goto label_16f968;
    }
    ctx->pc = 0x16F960u;
    {
        const bool branch_taken_0x16f960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F960u;
            // 0x16f964: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f960) {
            ctx->pc = 0x16F978u;
            goto label_16f978;
        }
    }
    ctx->pc = 0x16F968u;
label_16f968:
    // 0x16f968: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16f968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_16f96c:
    // 0x16f96c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16f96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f970:
    // 0x16f970: 0x40f809  jalr        $v0
label_16f974:
    if (ctx->pc == 0x16F974u) {
        ctx->pc = 0x16F974u;
            // 0x16f974: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x16F978u;
        goto label_16f978;
    }
    ctx->pc = 0x16F970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F978u);
        ctx->pc = 0x16F974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F970u;
            // 0x16f974: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F978u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F978u; }
            if (ctx->pc != 0x16F978u) { return; }
        }
        }
    }
    ctx->pc = 0x16F978u;
label_16f978:
    // 0x16f978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f97c:
    // 0x16f97c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16f97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f980:
    // 0x16f980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f984:
    // 0x16f984: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f988:
    // 0x16f988: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16f98c:
    // 0x16f98c: 0x40f809  jalr        $v0
label_16f990:
    if (ctx->pc == 0x16F990u) {
        ctx->pc = 0x16F990u;
            // 0x16f990: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x16F994u;
        goto label_16f994;
    }
    ctx->pc = 0x16F98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F994u);
        ctx->pc = 0x16F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F98Cu;
            // 0x16f990: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F994u; }
            if (ctx->pc != 0x16F994u) { return; }
        }
        }
    }
    ctx->pc = 0x16F994u;
label_16f994:
    // 0x16f994: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16f994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f998:
    // 0x16f998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f99c:
    // 0x16f99c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x16f99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16f9a0:
    // 0x16f9a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f9a4:
    // 0x16f9a4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16f9a8:
    // 0x16f9a8: 0x40f809  jalr        $v0
label_16f9ac:
    if (ctx->pc == 0x16F9ACu) {
        ctx->pc = 0x16F9ACu;
            // 0x16f9ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x16F9B0u;
        goto label_16f9b0;
    }
    ctx->pc = 0x16F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F9B0u);
        ctx->pc = 0x16F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9A8u;
            // 0x16f9ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F9B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F9B0u; }
            if (ctx->pc != 0x16F9B0u) { return; }
        }
        }
    }
    ctx->pc = 0x16F9B0u;
label_16f9b0:
    // 0x16f9b0: 0xc05938a  jal         func_164E28
label_16f9b4:
    if (ctx->pc == 0x16F9B4u) {
        ctx->pc = 0x16F9B4u;
            // 0x16f9b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16F9B8u;
        goto label_16f9b8;
    }
    ctx->pc = 0x16F9B0u;
    SET_GPR_U32(ctx, 31, 0x16F9B8u);
    ctx->pc = 0x16F9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9B0u;
            // 0x16f9b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164E28u;
    if (runtime->hasFunction(0x164E28u)) {
        auto targetFn = runtime->lookupFunction(0x164E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9B8u; }
        if (ctx->pc != 0x16F9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164E28_0x164e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9B8u; }
        if (ctx->pc != 0x16F9B8u) { return; }
    }
    ctx->pc = 0x16F9B8u;
label_16f9b8:
    // 0x16f9b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f9bc:
    // 0x16f9bc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x16f9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16f9c0:
    // 0x16f9c0: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_16f9c4:
    // 0x16f9c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16f9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f9c8:
    // 0x16f9c8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_16f9cc:
    if (ctx->pc == 0x16F9CCu) {
        ctx->pc = 0x16F9CCu;
            // 0x16f9cc: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F9D0u;
        goto label_16f9d0;
    }
    ctx->pc = 0x16F9C8u;
    {
        const bool branch_taken_0x16f9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9C8u;
            // 0x16f9cc: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9c8) {
            ctx->pc = 0x16F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16f950;
        }
    }
    ctx->pc = 0x16F9D0u;
label_16f9d0:
    // 0x16f9d0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x16f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16f9d4:
    // 0x16f9d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16f9d8:
    // 0x16f9d8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x16f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_16f9dc:
    // 0x16f9dc: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x16f9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_16f9e0:
    // 0x16f9e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_16f9e4:
    // 0x16f9e4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16f9e8:
    // 0x16f9e8: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x16f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_16f9ec:
    // 0x16f9ec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x16f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16f9f0:
    // 0x16f9f0: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_16f9f4:
    // 0x16f9f4: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x16f9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_16f9f8:
    // 0x16f9f8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x16f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_16f9fc:
    // 0x16f9fc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x16f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_16fa00:
    // 0x16fa00: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x16fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_16fa04:
    // 0x16fa04: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x16fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_16fa08:
    // 0x16fa08: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x16fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
label_16fa0c:
    // 0x16fa0c: 0xc0594ac  jal         func_1652B0
label_16fa10:
    if (ctx->pc == 0x16FA10u) {
        ctx->pc = 0x16FA10u;
            // 0x16fa10: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
        ctx->pc = 0x16FA14u;
        goto label_16fa14;
    }
    ctx->pc = 0x16FA0Cu;
    SET_GPR_U32(ctx, 31, 0x16FA14u);
    ctx->pc = 0x16FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA0Cu;
            // 0x16fa10: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1652B0u;
    if (runtime->hasFunction(0x1652B0u)) {
        auto targetFn = runtime->lookupFunction(0x1652B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA14u; }
        if (ctx->pc != 0x16FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001652B0_0x1652b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA14u; }
        if (ctx->pc != 0x16FA14u) { return; }
    }
    ctx->pc = 0x16FA14u;
label_16fa14:
    // 0x16fa14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16fa14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16fa18:
    // 0x16fa18: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16fa18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16fa1c:
    // 0x16fa1c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16fa1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16fa20:
    // 0x16fa20: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16fa20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16fa24:
    // 0x16fa24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x16fa24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16fa28:
    // 0x16fa28: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x16fa28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16fa2c:
    // 0x16fa2c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x16fa2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa30:
    // 0x16fa30: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x16fa30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_16fa34:
    // 0x16fa34: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x16fa34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16fa38:
    // 0x16fa38: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x16fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_16fa3c:
    // 0x16fa3c: 0x3e00008  jr          $ra
label_16fa40:
    if (ctx->pc == 0x16FA40u) {
        ctx->pc = 0x16FA40u;
            // 0x16fa40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16FA44u;
        goto label_16fa44;
    }
    ctx->pc = 0x16FA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA3Cu;
            // 0x16fa40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FA44u;
label_16fa44:
    // 0x16fa44: 0x0  nop
    ctx->pc = 0x16fa44u;
    // NOP
label_16fa48:
    // 0x16fa48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16fa4c:
    // 0x16fa4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16fa50:
    // 0x16fa50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16fa54:
    // 0x16fa54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16fa54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16fa58:
    // 0x16fa58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16fa5c:
    // 0x16fa5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16fa60:
    // 0x16fa60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16fa64:
    // 0x16fa64: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x16fa64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16fa68:
    // 0x16fa68: 0xc0593bc  jal         func_164EF0
label_16fa6c:
    if (ctx->pc == 0x16FA6Cu) {
        ctx->pc = 0x16FA6Cu;
            // 0x16fa6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA70u;
        goto label_16fa70;
    }
    ctx->pc = 0x16FA68u;
    SET_GPR_U32(ctx, 31, 0x16FA70u);
    ctx->pc = 0x16FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA68u;
            // 0x16fa6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164EF0u;
    if (runtime->hasFunction(0x164EF0u)) {
        auto targetFn = runtime->lookupFunction(0x164EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA70u; }
        if (ctx->pc != 0x16FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164EF0_0x164ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA70u; }
        if (ctx->pc != 0x16FA70u) { return; }
    }
    ctx->pc = 0x16FA70u;
label_16fa70:
    // 0x16fa70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fa74:
    // 0x16fa74: 0xc0594bc  jal         func_1652F0
label_16fa78:
    if (ctx->pc == 0x16FA78u) {
        ctx->pc = 0x16FA78u;
            // 0x16fa78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA7Cu;
        goto label_16fa7c;
    }
    ctx->pc = 0x16FA74u;
    SET_GPR_U32(ctx, 31, 0x16FA7Cu);
    ctx->pc = 0x16FA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA74u;
            // 0x16fa78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1652F0u;
    if (runtime->hasFunction(0x1652F0u)) {
        auto targetFn = runtime->lookupFunction(0x1652F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA7Cu; }
        if (ctx->pc != 0x16FA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001652F0_0x1652f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA7Cu; }
        if (ctx->pc != 0x16FA7Cu) { return; }
    }
    ctx->pc = 0x16FA7Cu;
label_16fa7c:
    // 0x16fa7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fa80:
    // 0x16fa80: 0xc0594be  jal         func_1652F8
label_16fa84:
    if (ctx->pc == 0x16FA84u) {
        ctx->pc = 0x16FA84u;
            // 0x16fa84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA88u;
        goto label_16fa88;
    }
    ctx->pc = 0x16FA80u;
    SET_GPR_U32(ctx, 31, 0x16FA88u);
    ctx->pc = 0x16FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA80u;
            // 0x16fa84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1652F8u;
    if (runtime->hasFunction(0x1652F8u)) {
        auto targetFn = runtime->lookupFunction(0x1652F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA88u; }
        if (ctx->pc != 0x16FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001652F8_0x1652f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA88u; }
        if (ctx->pc != 0x16FA88u) { return; }
    }
    ctx->pc = 0x16FA88u;
label_16fa88:
    // 0x16fa88: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x16fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_16fa8c:
    // 0x16fa8c: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_16fa90:
    // 0x16fa90: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_16fa94:
    // 0x16fa94: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x16fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_16fa98:
    // 0x16fa98: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x16fa98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_16fa9c:
    // 0x16fa9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fa9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16faa0:
    // 0x16faa0: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x16faa0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_16faa4:
    // 0x16faa4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_16faa8:
    // 0x16faa8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_16faac:
    // 0x16faac: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x16faacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_16fab0:
    // 0x16fab0: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x16fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
label_16fab4:
    // 0x16fab4: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x16fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
label_16fab8:
    // 0x16fab8: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x16fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
label_16fabc:
    // 0x16fabc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fac0:
    // 0x16fac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16fac4:
    // 0x16fac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16fac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16fac8:
    // 0x16fac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16fac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16facc:
    // 0x16facc: 0x3e00008  jr          $ra
label_16fad0:
    if (ctx->pc == 0x16FAD0u) {
        ctx->pc = 0x16FAD0u;
            // 0x16fad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16FAD4u;
        goto label_16fad4;
    }
    ctx->pc = 0x16FACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FACCu;
            // 0x16fad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FAD4u;
label_16fad4:
    // 0x16fad4: 0x0  nop
    ctx->pc = 0x16fad4u;
    // NOP
}
