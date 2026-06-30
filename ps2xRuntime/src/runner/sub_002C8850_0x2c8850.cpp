#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8850
// Address: 0x2c8850 - 0x2c89d0
void sub_002C8850_0x2c8850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8850_0x2c8850");
#endif

    switch (ctx->pc) {
        case 0x2c8850u: goto label_2c8850;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8858u: goto label_2c8858;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8860u: goto label_2c8860;
        case 0x2c8864u: goto label_2c8864;
        case 0x2c8868u: goto label_2c8868;
        case 0x2c886cu: goto label_2c886c;
        case 0x2c8870u: goto label_2c8870;
        case 0x2c8874u: goto label_2c8874;
        case 0x2c8878u: goto label_2c8878;
        case 0x2c887cu: goto label_2c887c;
        case 0x2c8880u: goto label_2c8880;
        case 0x2c8884u: goto label_2c8884;
        case 0x2c8888u: goto label_2c8888;
        case 0x2c888cu: goto label_2c888c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c8894u: goto label_2c8894;
        case 0x2c8898u: goto label_2c8898;
        case 0x2c889cu: goto label_2c889c;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88a4u: goto label_2c88a4;
        case 0x2c88a8u: goto label_2c88a8;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c88b0u: goto label_2c88b0;
        case 0x2c88b4u: goto label_2c88b4;
        case 0x2c88b8u: goto label_2c88b8;
        case 0x2c88bcu: goto label_2c88bc;
        case 0x2c88c0u: goto label_2c88c0;
        case 0x2c88c4u: goto label_2c88c4;
        case 0x2c88c8u: goto label_2c88c8;
        case 0x2c88ccu: goto label_2c88cc;
        case 0x2c88d0u: goto label_2c88d0;
        case 0x2c88d4u: goto label_2c88d4;
        case 0x2c88d8u: goto label_2c88d8;
        case 0x2c88dcu: goto label_2c88dc;
        case 0x2c88e0u: goto label_2c88e0;
        case 0x2c88e4u: goto label_2c88e4;
        case 0x2c88e8u: goto label_2c88e8;
        case 0x2c88ecu: goto label_2c88ec;
        case 0x2c88f0u: goto label_2c88f0;
        case 0x2c88f4u: goto label_2c88f4;
        case 0x2c88f8u: goto label_2c88f8;
        case 0x2c88fcu: goto label_2c88fc;
        case 0x2c8900u: goto label_2c8900;
        case 0x2c8904u: goto label_2c8904;
        case 0x2c8908u: goto label_2c8908;
        case 0x2c890cu: goto label_2c890c;
        case 0x2c8910u: goto label_2c8910;
        case 0x2c8914u: goto label_2c8914;
        case 0x2c8918u: goto label_2c8918;
        case 0x2c891cu: goto label_2c891c;
        case 0x2c8920u: goto label_2c8920;
        case 0x2c8924u: goto label_2c8924;
        case 0x2c8928u: goto label_2c8928;
        case 0x2c892cu: goto label_2c892c;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8934u: goto label_2c8934;
        case 0x2c8938u: goto label_2c8938;
        case 0x2c893cu: goto label_2c893c;
        case 0x2c8940u: goto label_2c8940;
        case 0x2c8944u: goto label_2c8944;
        case 0x2c8948u: goto label_2c8948;
        case 0x2c894cu: goto label_2c894c;
        case 0x2c8950u: goto label_2c8950;
        case 0x2c8954u: goto label_2c8954;
        case 0x2c8958u: goto label_2c8958;
        case 0x2c895cu: goto label_2c895c;
        case 0x2c8960u: goto label_2c8960;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c8968u: goto label_2c8968;
        case 0x2c896cu: goto label_2c896c;
        case 0x2c8970u: goto label_2c8970;
        case 0x2c8974u: goto label_2c8974;
        case 0x2c8978u: goto label_2c8978;
        case 0x2c897cu: goto label_2c897c;
        case 0x2c8980u: goto label_2c8980;
        case 0x2c8984u: goto label_2c8984;
        case 0x2c8988u: goto label_2c8988;
        case 0x2c898cu: goto label_2c898c;
        case 0x2c8990u: goto label_2c8990;
        case 0x2c8994u: goto label_2c8994;
        case 0x2c8998u: goto label_2c8998;
        case 0x2c899cu: goto label_2c899c;
        case 0x2c89a0u: goto label_2c89a0;
        case 0x2c89a4u: goto label_2c89a4;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89acu: goto label_2c89ac;
        case 0x2c89b0u: goto label_2c89b0;
        case 0x2c89b4u: goto label_2c89b4;
        case 0x2c89b8u: goto label_2c89b8;
        case 0x2c89bcu: goto label_2c89bc;
        case 0x2c89c0u: goto label_2c89c0;
        case 0x2c89c4u: goto label_2c89c4;
        case 0x2c89c8u: goto label_2c89c8;
        case 0x2c89ccu: goto label_2c89cc;
        default: break;
    }

    ctx->pc = 0x2c8850u;

label_2c8850:
    // 0x2c8850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8854:
    // 0x2c8854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c8858:
    // 0x2c8858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c885c:
    // 0x2c885c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8860:
    // 0x2c8860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8864:
    // 0x2c8864: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c8868:
    if (ctx->pc == 0x2C8868u) {
        ctx->pc = 0x2C8868u;
            // 0x2c8868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C886Cu;
        goto label_2c886c;
    }
    ctx->pc = 0x2C8864u;
    {
        const bool branch_taken_0x2c8864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8864u;
            // 0x2c8868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8864) {
            ctx->pc = 0x2C89ACu;
            goto label_2c89ac;
        }
    }
    ctx->pc = 0x2C886Cu;
label_2c886c:
    // 0x2c886c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c886cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c8870:
    // 0x2c8870: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8874:
    // 0x2c8874: 0x246306b0  addiu       $v1, $v1, 0x6B0
    ctx->pc = 0x2c8874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
label_2c8878:
    // 0x2c8878: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2c887c:
    // 0x2c887c: 0x244206e8  addiu       $v0, $v0, 0x6E8
    ctx->pc = 0x2c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1768));
label_2c8880:
    // 0x2c8880: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c8880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c8884:
    // 0x2c8884: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c8884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c8888:
    // 0x2c8888: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c8888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c888c:
    // 0x2c888c: 0xc0407c0  jal         func_101F00
label_2c8890:
    if (ctx->pc == 0x2C8890u) {
        ctx->pc = 0x2C8890u;
            // 0x2c8890: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
        ctx->pc = 0x2C8894u;
        goto label_2c8894;
    }
    ctx->pc = 0x2C888Cu;
    SET_GPR_U32(ctx, 31, 0x2C8894u);
    ctx->pc = 0x2C8890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C888Cu;
            // 0x2c8890: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8894u; }
        if (ctx->pc != 0x2C8894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8894u; }
        if (ctx->pc != 0x2C8894u) { return; }
    }
    ctx->pc = 0x2C8894u;
label_2c8894:
    // 0x2c8894: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c8898:
    // 0x2c8898: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c889c:
    if (ctx->pc == 0x2C889Cu) {
        ctx->pc = 0x2C889Cu;
            // 0x2c889c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C88A0u;
        goto label_2c88a0;
    }
    ctx->pc = 0x2C8898u;
    {
        const bool branch_taken_0x2c8898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8898) {
            ctx->pc = 0x2C889Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8898u;
            // 0x2c889c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C88C0u;
            goto label_2c88c0;
        }
    }
    ctx->pc = 0x2C88A0u;
label_2c88a0:
    // 0x2c88a0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c88a4:
    // 0x2c88a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c88a8:
    if (ctx->pc == 0x2C88A8u) {
        ctx->pc = 0x2C88A8u;
            // 0x2c88a8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C88ACu;
        goto label_2c88ac;
    }
    ctx->pc = 0x2C88A4u;
    {
        const bool branch_taken_0x2c88a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88a4) {
            ctx->pc = 0x2C88A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88A4u;
            // 0x2c88a8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C88BCu;
            goto label_2c88bc;
        }
    }
    ctx->pc = 0x2C88ACu;
label_2c88ac:
    // 0x2c88ac: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c88acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c88b0:
    // 0x2c88b0: 0xc0407c0  jal         func_101F00
label_2c88b4:
    if (ctx->pc == 0x2C88B4u) {
        ctx->pc = 0x2C88B4u;
            // 0x2c88b4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2C88B8u;
        goto label_2c88b8;
    }
    ctx->pc = 0x2C88B0u;
    SET_GPR_U32(ctx, 31, 0x2C88B8u);
    ctx->pc = 0x2C88B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88B0u;
            // 0x2c88b4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C88B8u; }
        if (ctx->pc != 0x2C88B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C88B8u; }
        if (ctx->pc != 0x2C88B8u) { return; }
    }
    ctx->pc = 0x2C88B8u;
label_2c88b8:
    // 0x2c88b8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c88bc:
    // 0x2c88bc: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c88c0:
    // 0x2c88c0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c88c4:
    if (ctx->pc == 0x2C88C4u) {
        ctx->pc = 0x2C88C4u;
            // 0x2c88c4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C88C8u;
        goto label_2c88c8;
    }
    ctx->pc = 0x2C88C0u;
    {
        const bool branch_taken_0x2c88c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88c0) {
            ctx->pc = 0x2C88C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88C0u;
            // 0x2c88c4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C88F0u;
            goto label_2c88f0;
        }
    }
    ctx->pc = 0x2C88C8u;
label_2c88c8:
    // 0x2c88c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c88cc:
    if (ctx->pc == 0x2C88CCu) {
        ctx->pc = 0x2C88D0u;
        goto label_2c88d0;
    }
    ctx->pc = 0x2C88C8u;
    {
        const bool branch_taken_0x2c88c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88c8) {
            ctx->pc = 0x2C88ECu;
            goto label_2c88ec;
        }
    }
    ctx->pc = 0x2C88D0u;
label_2c88d0:
    // 0x2c88d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c88d4:
    if (ctx->pc == 0x2C88D4u) {
        ctx->pc = 0x2C88D8u;
        goto label_2c88d8;
    }
    ctx->pc = 0x2C88D0u;
    {
        const bool branch_taken_0x2c88d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88d0) {
            ctx->pc = 0x2C88ECu;
            goto label_2c88ec;
        }
    }
    ctx->pc = 0x2C88D8u;
label_2c88d8:
    // 0x2c88d8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c88dc:
    // 0x2c88dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c88e0:
    if (ctx->pc == 0x2C88E0u) {
        ctx->pc = 0x2C88E4u;
        goto label_2c88e4;
    }
    ctx->pc = 0x2C88DCu;
    {
        const bool branch_taken_0x2c88dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88dc) {
            ctx->pc = 0x2C88ECu;
            goto label_2c88ec;
        }
    }
    ctx->pc = 0x2C88E4u;
label_2c88e4:
    // 0x2c88e4: 0xc0400a8  jal         func_1002A0
label_2c88e8:
    if (ctx->pc == 0x2C88E8u) {
        ctx->pc = 0x2C88ECu;
        goto label_2c88ec;
    }
    ctx->pc = 0x2C88E4u;
    SET_GPR_U32(ctx, 31, 0x2C88ECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C88ECu; }
        if (ctx->pc != 0x2C88ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C88ECu; }
        if (ctx->pc != 0x2C88ECu) { return; }
    }
    ctx->pc = 0x2C88ECu;
label_2c88ec:
    // 0x2c88ec: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c88f0:
    // 0x2c88f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c88f4:
    if (ctx->pc == 0x2C88F4u) {
        ctx->pc = 0x2C88F4u;
            // 0x2c88f4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C88F8u;
        goto label_2c88f8;
    }
    ctx->pc = 0x2C88F0u;
    {
        const bool branch_taken_0x2c88f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88f0) {
            ctx->pc = 0x2C88F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88F0u;
            // 0x2c88f4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8920u;
            goto label_2c8920;
        }
    }
    ctx->pc = 0x2C88F8u;
label_2c88f8:
    // 0x2c88f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c88fc:
    if (ctx->pc == 0x2C88FCu) {
        ctx->pc = 0x2C8900u;
        goto label_2c8900;
    }
    ctx->pc = 0x2C88F8u;
    {
        const bool branch_taken_0x2c88f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88f8) {
            ctx->pc = 0x2C891Cu;
            goto label_2c891c;
        }
    }
    ctx->pc = 0x2C8900u;
label_2c8900:
    // 0x2c8900: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8904:
    if (ctx->pc == 0x2C8904u) {
        ctx->pc = 0x2C8908u;
        goto label_2c8908;
    }
    ctx->pc = 0x2C8900u;
    {
        const bool branch_taken_0x2c8900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8900) {
            ctx->pc = 0x2C891Cu;
            goto label_2c891c;
        }
    }
    ctx->pc = 0x2C8908u;
label_2c8908:
    // 0x2c8908: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c8908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c890c:
    // 0x2c890c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c8910:
    if (ctx->pc == 0x2C8910u) {
        ctx->pc = 0x2C8914u;
        goto label_2c8914;
    }
    ctx->pc = 0x2C890Cu;
    {
        const bool branch_taken_0x2c890c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c890c) {
            ctx->pc = 0x2C891Cu;
            goto label_2c891c;
        }
    }
    ctx->pc = 0x2C8914u;
label_2c8914:
    // 0x2c8914: 0xc0400a8  jal         func_1002A0
label_2c8918:
    if (ctx->pc == 0x2C8918u) {
        ctx->pc = 0x2C891Cu;
        goto label_2c891c;
    }
    ctx->pc = 0x2C8914u;
    SET_GPR_U32(ctx, 31, 0x2C891Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C891Cu; }
        if (ctx->pc != 0x2C891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C891Cu; }
        if (ctx->pc != 0x2C891Cu) { return; }
    }
    ctx->pc = 0x2C891Cu;
label_2c891c:
    // 0x2c891c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c8920:
    // 0x2c8920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8924:
    if (ctx->pc == 0x2C8924u) {
        ctx->pc = 0x2C8928u;
        goto label_2c8928;
    }
    ctx->pc = 0x2C8920u;
    {
        const bool branch_taken_0x2c8920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8920) {
            ctx->pc = 0x2C893Cu;
            goto label_2c893c;
        }
    }
    ctx->pc = 0x2C8928u;
label_2c8928:
    // 0x2c8928: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c892c:
    // 0x2c892c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c8930:
    // 0x2c8930: 0x246306a0  addiu       $v1, $v1, 0x6A0
    ctx->pc = 0x2c8930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1696));
label_2c8934:
    // 0x2c8934: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c8934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c8938:
    // 0x2c8938: 0xac400e10  sw          $zero, 0xE10($v0)
    ctx->pc = 0x2c8938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3600), GPR_U32(ctx, 0));
label_2c893c:
    // 0x2c893c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c8940:
    if (ctx->pc == 0x2C8940u) {
        ctx->pc = 0x2C8940u;
            // 0x2c8940: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C8944u;
        goto label_2c8944;
    }
    ctx->pc = 0x2C893Cu;
    {
        const bool branch_taken_0x2c893c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c893c) {
            ctx->pc = 0x2C8940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C893Cu;
            // 0x2c8940: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8998u;
            goto label_2c8998;
        }
    }
    ctx->pc = 0x2C8944u;
label_2c8944:
    // 0x2c8944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8948:
    // 0x2c8948: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c894c:
    // 0x2c894c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c894cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c8950:
    // 0x2c8950: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c8950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c8954:
    // 0x2c8954: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c8958:
    if (ctx->pc == 0x2C8958u) {
        ctx->pc = 0x2C8958u;
            // 0x2c8958: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C895Cu;
        goto label_2c895c;
    }
    ctx->pc = 0x2C8954u;
    {
        const bool branch_taken_0x2c8954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8954) {
            ctx->pc = 0x2C8958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8954u;
            // 0x2c8958: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8970u;
            goto label_2c8970;
        }
    }
    ctx->pc = 0x2C895Cu;
label_2c895c:
    // 0x2c895c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c895cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8960:
    // 0x2c8960: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c8960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c8964:
    // 0x2c8964: 0x320f809  jalr        $t9
label_2c8968:
    if (ctx->pc == 0x2C8968u) {
        ctx->pc = 0x2C8968u;
            // 0x2c8968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C896Cu;
        goto label_2c896c;
    }
    ctx->pc = 0x2C8964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C896Cu);
        ctx->pc = 0x2C8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8964u;
            // 0x2c8968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C896Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C896Cu; }
            if (ctx->pc != 0x2C896Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C896Cu;
label_2c896c:
    // 0x2c896c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c8970:
    // 0x2c8970: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c8974:
    if (ctx->pc == 0x2C8974u) {
        ctx->pc = 0x2C8974u;
            // 0x2c8974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8978u;
        goto label_2c8978;
    }
    ctx->pc = 0x2C8970u;
    {
        const bool branch_taken_0x2c8970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8970) {
            ctx->pc = 0x2C8974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8970u;
            // 0x2c8974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C898Cu;
            goto label_2c898c;
        }
    }
    ctx->pc = 0x2C8978u;
label_2c8978:
    // 0x2c8978: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c8978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c897c:
    // 0x2c897c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c897cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c8980:
    // 0x2c8980: 0x320f809  jalr        $t9
label_2c8984:
    if (ctx->pc == 0x2C8984u) {
        ctx->pc = 0x2C8984u;
            // 0x2c8984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C8988u;
        goto label_2c8988;
    }
    ctx->pc = 0x2C8980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8988u);
        ctx->pc = 0x2C8984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8980u;
            // 0x2c8984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8988u; }
            if (ctx->pc != 0x2C8988u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8988u;
label_2c8988:
    // 0x2c8988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c898c:
    // 0x2c898c: 0xc075bf8  jal         func_1D6FE0
label_2c8990:
    if (ctx->pc == 0x2C8990u) {
        ctx->pc = 0x2C8990u;
            // 0x2c8990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8994u;
        goto label_2c8994;
    }
    ctx->pc = 0x2C898Cu;
    SET_GPR_U32(ctx, 31, 0x2C8994u);
    ctx->pc = 0x2C8990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C898Cu;
            // 0x2c8990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8994u; }
        if (ctx->pc != 0x2C8994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8994u; }
        if (ctx->pc != 0x2C8994u) { return; }
    }
    ctx->pc = 0x2C8994u;
label_2c8994:
    // 0x2c8994: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c8994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c8998:
    // 0x2c8998: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c899c:
    // 0x2c899c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c89a0:
    if (ctx->pc == 0x2C89A0u) {
        ctx->pc = 0x2C89A0u;
            // 0x2c89a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C89A4u;
        goto label_2c89a4;
    }
    ctx->pc = 0x2C899Cu;
    {
        const bool branch_taken_0x2c899c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c899c) {
            ctx->pc = 0x2C89A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C899Cu;
            // 0x2c89a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C89B0u;
            goto label_2c89b0;
        }
    }
    ctx->pc = 0x2C89A4u;
label_2c89a4:
    // 0x2c89a4: 0xc0400a8  jal         func_1002A0
label_2c89a8:
    if (ctx->pc == 0x2C89A8u) {
        ctx->pc = 0x2C89A8u;
            // 0x2c89a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C89ACu;
        goto label_2c89ac;
    }
    ctx->pc = 0x2C89A4u;
    SET_GPR_U32(ctx, 31, 0x2C89ACu);
    ctx->pc = 0x2C89A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C89A4u;
            // 0x2c89a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89ACu; }
        if (ctx->pc != 0x2C89ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C89ACu; }
        if (ctx->pc != 0x2C89ACu) { return; }
    }
    ctx->pc = 0x2C89ACu;
label_2c89ac:
    // 0x2c89ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c89acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c89b0:
    // 0x2c89b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c89b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c89b4:
    // 0x2c89b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c89b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c89b8:
    // 0x2c89b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c89b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c89bc:
    // 0x2c89bc: 0x3e00008  jr          $ra
label_2c89c0:
    if (ctx->pc == 0x2C89C0u) {
        ctx->pc = 0x2C89C0u;
            // 0x2c89c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C89C4u;
        goto label_2c89c4;
    }
    ctx->pc = 0x2C89BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C89C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C89BCu;
            // 0x2c89c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C89C4u;
label_2c89c4:
    // 0x2c89c4: 0x0  nop
    ctx->pc = 0x2c89c4u;
    // NOP
label_2c89c8:
    // 0x2c89c8: 0x0  nop
    ctx->pc = 0x2c89c8u;
    // NOP
label_2c89cc:
    // 0x2c89cc: 0x0  nop
    ctx->pc = 0x2c89ccu;
    // NOP
}
