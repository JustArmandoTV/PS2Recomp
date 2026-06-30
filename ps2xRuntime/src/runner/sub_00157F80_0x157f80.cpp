#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157F80
// Address: 0x157f80 - 0x1580e0
void sub_00157F80_0x157f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157F80_0x157f80");
#endif

    switch (ctx->pc) {
        case 0x157fecu: goto label_157fec;
        case 0x157ffcu: goto label_157ffc;
        case 0x1580a0u: goto label_1580a0;
        case 0x1580b0u: goto label_1580b0;
        case 0x1580c0u: goto label_1580c0;
        case 0x1580d0u: goto label_1580d0;
        default: break;
    }

    ctx->pc = 0x157f80u;

    // 0x157f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157f84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x157f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157f8c: 0x3c0800e0  lui         $t0, 0xE0
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)224 << 16));
    // 0x157f90: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x157f90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157f94: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x157f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x157f98: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x157f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x157f9c: 0x14e80019  bne         $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x157F9Cu;
    {
        const bool branch_taken_0x157f9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x157FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F9Cu;
            // 0x157fa0: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f9c) {
            ctx->pc = 0x158004u;
            goto label_158004;
        }
    }
    ctx->pc = 0x157FA4u;
    // 0x157fa4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x157fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x157fa8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157fac: 0x30e70e77  andi        $a3, $a3, 0xE77
    ctx->pc = 0x157facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3703);
    // 0x157fb0: 0x50e40048  beql        $a3, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x157FB0u;
    {
        const bool branch_taken_0x157fb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x157fb0) {
            ctx->pc = 0x157FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157FB0u;
            // 0x157fb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1580D4u;
            goto label_1580d4;
        }
    }
    ctx->pc = 0x157FB8u;
    // 0x157fb8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157fbc: 0x50e4000d  beql        $a3, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x157FBCu;
    {
        const bool branch_taken_0x157fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x157fbc) {
            ctx->pc = 0x157FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157FBCu;
            // 0x157fc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157FF4u;
            goto label_157ff4;
        }
    }
    ctx->pc = 0x157FC4u;
    // 0x157fc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157fc8: 0x50e40006  beql        $a3, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157FC8u;
    {
        const bool branch_taken_0x157fc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x157fc8) {
            ctx->pc = 0x157FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157FC8u;
            // 0x157fcc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157FE4u;
            goto label_157fe4;
        }
    }
    ctx->pc = 0x157FD0u;
    // 0x157fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157fd4: 0x10e3003e  beq         $a3, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x157FD4u;
    {
        const bool branch_taken_0x157fd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x157fd4) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x157FDCu;
    // 0x157fdc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x157FDCu;
    {
        const bool branch_taken_0x157fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fdc) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x157FE4u;
label_157fe4:
    // 0x157fe4: 0xc04d894  jal         func_136250
    ctx->pc = 0x157FE4u;
    SET_GPR_U32(ctx, 31, 0x157FECu);
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FECu; }
        if (ctx->pc != 0x157FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FECu; }
        if (ctx->pc != 0x157FECu) { return; }
    }
    ctx->pc = 0x157FECu;
label_157fec:
    // 0x157fec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x157FECu;
    {
        const bool branch_taken_0x157fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fec) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x157FF4u;
label_157ff4:
    // 0x157ff4: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x157FF4u;
    SET_GPR_U32(ctx, 31, 0x157FFCu);
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FFCu; }
        if (ctx->pc != 0x157FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FFCu; }
        if (ctx->pc != 0x157FFCu) { return; }
    }
    ctx->pc = 0x157FFCu;
label_157ffc:
    // 0x157ffc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x157FFCu;
    {
        const bool branch_taken_0x157ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ffc) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x158004u;
label_158004:
    // 0x158004: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x158004u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x158008: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x158008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x15800c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15800Cu;
    {
        const bool branch_taken_0x15800c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x158010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15800Cu;
            // 0x158010: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15800c) {
            ctx->pc = 0x15801Cu;
            goto label_15801c;
        }
    }
    ctx->pc = 0x158014u;
    // 0x158014: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x158014u;
    {
        const bool branch_taken_0x158014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158014u;
            // 0x158018: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158014) {
            ctx->pc = 0x158044u;
            goto label_158044;
        }
    }
    ctx->pc = 0x15801Cu;
label_15801c:
    // 0x15801c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x15801cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x158020: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x158020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x158024: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x158024u;
    {
        const bool branch_taken_0x158024 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x158024) {
            ctx->pc = 0x158028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158024u;
            // 0x158028: 0x3c070080  lui         $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158034u;
            goto label_158034;
        }
    }
    ctx->pc = 0x15802Cu;
    // 0x15802c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15802Cu;
    {
        const bool branch_taken_0x15802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15802Cu;
            // 0x158030: 0x24c80004  addiu       $t0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15802c) {
            ctx->pc = 0x158044u;
            goto label_158044;
        }
    }
    ctx->pc = 0x158034u;
label_158034:
    // 0x158034: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x158034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x158038: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x158038u;
    {
        const bool branch_taken_0x158038 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x158038) {
            ctx->pc = 0x158044u;
            goto label_158044;
        }
    }
    ctx->pc = 0x158040u;
    // 0x158040: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x158040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_158044:
    // 0x158044: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x158044u;
    {
        const bool branch_taken_0x158044 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x158044) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x15804Cu;
    // 0x15804c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x15804cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x158050: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x158050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x158054: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x158054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x158058: 0x50c4001b  beql        $a2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x158058u;
    {
        const bool branch_taken_0x158058 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x158058) {
            ctx->pc = 0x15805Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158058u;
            // 0x15805c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1580C8u;
            goto label_1580c8;
        }
    }
    ctx->pc = 0x158060u;
    // 0x158060: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x158060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x158064: 0x50c40014  beql        $a2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x158064u;
    {
        const bool branch_taken_0x158064 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x158064) {
            ctx->pc = 0x158068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158064u;
            // 0x158068: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1580B8u;
            goto label_1580b8;
        }
    }
    ctx->pc = 0x15806Cu;
    // 0x15806c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158070: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x158070u;
    {
        const bool branch_taken_0x158070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x158070) {
            ctx->pc = 0x158074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158070u;
            // 0x158074: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1580A8u;
            goto label_1580a8;
        }
    }
    ctx->pc = 0x158078u;
    // 0x158078: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x158078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15807c: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15807Cu;
    {
        const bool branch_taken_0x15807c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x15807c) {
            ctx->pc = 0x158080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15807Cu;
            // 0x158080: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158098u;
            goto label_158098;
        }
    }
    ctx->pc = 0x158084u;
    // 0x158084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158088: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158088u;
    {
        const bool branch_taken_0x158088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x158088) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x158090u;
    // 0x158090: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x158090u;
    {
        const bool branch_taken_0x158090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158090) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x158098u;
label_158098:
    // 0x158098: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x158098u;
    SET_GPR_U32(ctx, 31, 0x1580A0u);
    ctx->pc = 0x15809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158098u;
            // 0x15809c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A0u; }
        if (ctx->pc != 0x1580A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580A0u; }
        if (ctx->pc != 0x1580A0u) { return; }
    }
    ctx->pc = 0x1580A0u;
label_1580a0:
    // 0x1580a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1580A0u;
    {
        const bool branch_taken_0x1580a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580a0) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x1580A8u;
label_1580a8:
    // 0x1580a8: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x1580A8u;
    SET_GPR_U32(ctx, 31, 0x1580B0u);
    ctx->pc = 0x1580ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580A8u;
            // 0x1580ac: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580B0u; }
        if (ctx->pc != 0x1580B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580B0u; }
        if (ctx->pc != 0x1580B0u) { return; }
    }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1580B0u;
    {
        const bool branch_taken_0x1580b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580b0) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x1580B8u;
label_1580b8:
    // 0x1580b8: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x1580B8u;
    SET_GPR_U32(ctx, 31, 0x1580C0u);
    ctx->pc = 0x1580BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580B8u;
            // 0x1580bc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580C0u; }
        if (ctx->pc != 0x1580C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580C0u; }
        if (ctx->pc != 0x1580C0u) { return; }
    }
    ctx->pc = 0x1580C0u;
label_1580c0:
    // 0x1580c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1580C0u;
    {
        const bool branch_taken_0x1580c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580c0) {
            ctx->pc = 0x1580D0u;
            goto label_1580d0;
        }
    }
    ctx->pc = 0x1580C8u;
label_1580c8:
    // 0x1580c8: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x1580C8u;
    SET_GPR_U32(ctx, 31, 0x1580D0u);
    ctx->pc = 0x1580CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1580C8u;
            // 0x1580cc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580D0u; }
        if (ctx->pc != 0x1580D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1580D0u; }
        if (ctx->pc != 0x1580D0u) { return; }
    }
    ctx->pc = 0x1580D0u;
label_1580d0:
    // 0x1580d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1580d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1580d4:
    // 0x1580d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1580D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1580D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1580D4u;
            // 0x1580d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1580DCu;
    // 0x1580dc: 0x0  nop
    ctx->pc = 0x1580dcu;
    // NOP
}
