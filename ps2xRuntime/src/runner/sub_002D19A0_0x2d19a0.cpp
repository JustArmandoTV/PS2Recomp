#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D19A0
// Address: 0x2d19a0 - 0x2d1bf0
void sub_002D19A0_0x2d19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D19A0_0x2d19a0");
#endif

    switch (ctx->pc) {
        case 0x2d19e8u: goto label_2d19e8;
        case 0x2d19fcu: goto label_2d19fc;
        case 0x2d1a08u: goto label_2d1a08;
        case 0x2d1a14u: goto label_2d1a14;
        case 0x2d1a1cu: goto label_2d1a1c;
        case 0x2d1a2cu: goto label_2d1a2c;
        case 0x2d1a4cu: goto label_2d1a4c;
        case 0x2d1a60u: goto label_2d1a60;
        case 0x2d1a6cu: goto label_2d1a6c;
        case 0x2d1a78u: goto label_2d1a78;
        case 0x2d1a80u: goto label_2d1a80;
        case 0x2d1a90u: goto label_2d1a90;
        case 0x2d1a9cu: goto label_2d1a9c;
        case 0x2d1aa4u: goto label_2d1aa4;
        case 0x2d1ab8u: goto label_2d1ab8;
        case 0x2d1ae4u: goto label_2d1ae4;
        case 0x2d1af8u: goto label_2d1af8;
        case 0x2d1b04u: goto label_2d1b04;
        case 0x2d1b10u: goto label_2d1b10;
        case 0x2d1b18u: goto label_2d1b18;
        case 0x2d1b28u: goto label_2d1b28;
        case 0x2d1b48u: goto label_2d1b48;
        case 0x2d1b5cu: goto label_2d1b5c;
        case 0x2d1b68u: goto label_2d1b68;
        case 0x2d1b74u: goto label_2d1b74;
        case 0x2d1b7cu: goto label_2d1b7c;
        case 0x2d1b8cu: goto label_2d1b8c;
        case 0x2d1b98u: goto label_2d1b98;
        case 0x2d1ba0u: goto label_2d1ba0;
        case 0x2d1bb4u: goto label_2d1bb4;
        case 0x2d1bccu: goto label_2d1bcc;
        default: break;
    }

    ctx->pc = 0x2d19a0u;

label_2d19a0:
    // 0x2d19a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d19a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d19a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d19a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d19a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d19ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d19acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d19b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d19b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d19b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d19b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d19b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d19b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19bc: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2d19bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d19c0: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D19C0u;
    {
        const bool branch_taken_0x2d19c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D19C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19C0u;
            // 0x2d19c4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19c0) {
            ctx->pc = 0x2D1AB8u;
            goto label_2d1ab8;
        }
    }
    ctx->pc = 0x2D19C8u;
    // 0x2d19c8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d19c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d19cc: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D19CCu;
    {
        const bool branch_taken_0x2d19cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19cc) {
            ctx->pc = 0x2D19D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19CCu;
            // 0x2d19d0: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A30u;
            goto label_2d1a30;
        }
    }
    ctx->pc = 0x2D19D4u;
    // 0x2d19d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d19d8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D19D8u;
    {
        const bool branch_taken_0x2d19d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19d8) {
            ctx->pc = 0x2D19DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19D8u;
            // 0x2d19dc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D19ECu;
            goto label_2d19ec;
        }
    }
    ctx->pc = 0x2D19E0u;
    // 0x2d19e0: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D19E0u;
    SET_GPR_U32(ctx, 31, 0x2D19E8u);
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D19E8u;
label_2d19e8:
    // 0x2d19e8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d19ec:
    // 0x2d19ec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D19ECu;
    {
        const bool branch_taken_0x2d19ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19ec) {
            ctx->pc = 0x2D19F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19ECu;
            // 0x2d19f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A00u;
            goto label_2d1a00;
        }
    }
    ctx->pc = 0x2D19F4u;
    // 0x2d19f4: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D19F4u;
    SET_GPR_U32(ctx, 31, 0x2D19FCu);
    ctx->pc = 0x2D19F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19F4u;
            // 0x2d19f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D19FCu;
label_2d19fc:
    // 0x2d19fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d19fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1a00:
    // 0x2d1a00: 0xc0b470c  jal         func_2D1C30
    ctx->pc = 0x2D1A00u;
    SET_GPR_U32(ctx, 31, 0x2D1A08u);
    ctx->pc = 0x2D1C30u;
    if (runtime->hasFunction(0x2D1C30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A08u; }
        if (ctx->pc != 0x2D1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C30_0x2d1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A08u; }
        if (ctx->pc != 0x2D1A08u) { return; }
    }
    ctx->pc = 0x2D1A08u;
label_2d1a08:
    // 0x2d1a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a0c: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A14u);
    ctx->pc = 0x2D1A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A0Cu;
            // 0x2d1a10: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C20u;
    if (runtime->hasFunction(0x2D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A14u; }
        if (ctx->pc != 0x2D1A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C20_0x2d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A14u; }
        if (ctx->pc != 0x2D1A14u) { return; }
    }
    ctx->pc = 0x2D1A14u;
label_2d1a14:
    // 0x2d1a14: 0xc0b4704  jal         func_2D1C10
    ctx->pc = 0x2D1A14u;
    SET_GPR_U32(ctx, 31, 0x2D1A1Cu);
    ctx->pc = 0x2D1A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A14u;
            // 0x2d1a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C10u;
    if (runtime->hasFunction(0x2D1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A1Cu; }
        if (ctx->pc != 0x2D1A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C10_0x2d1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A1Cu; }
        if (ctx->pc != 0x2D1A1Cu) { return; }
    }
    ctx->pc = 0x2D1A1Cu;
label_2d1a1c:
    // 0x2d1a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a24: 0xc0b46fc  jal         func_2D1BF0
    ctx->pc = 0x2D1A24u;
    SET_GPR_U32(ctx, 31, 0x2D1A2Cu);
    ctx->pc = 0x2D1A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A24u;
            // 0x2d1a28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1BF0u;
    if (runtime->hasFunction(0x2D1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A2Cu; }
        if (ctx->pc != 0x2D1A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1BF0_0x2d1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A2Cu; }
        if (ctx->pc != 0x2D1A2Cu) { return; }
    }
    ctx->pc = 0x2D1A2Cu;
label_2d1a2c:
    // 0x2d1a2c: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2d1a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d1a30:
    // 0x2d1a30: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1A30u;
    {
        const bool branch_taken_0x2d1a30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a30) {
            ctx->pc = 0x2D1A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A30u;
            // 0x2d1a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A94u;
            goto label_2d1a94;
        }
    }
    ctx->pc = 0x2D1A38u;
    // 0x2d1a38: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1a3c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1A3Cu;
    {
        const bool branch_taken_0x2d1a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a3c) {
            ctx->pc = 0x2D1A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A3Cu;
            // 0x2d1a40: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A50u;
            goto label_2d1a50;
        }
    }
    ctx->pc = 0x2D1A44u;
    // 0x2d1a44: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D1A44u;
    SET_GPR_U32(ctx, 31, 0x2D1A4Cu);
    ctx->pc = 0x2D1A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A44u;
            // 0x2d1a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D1A4Cu;
label_2d1a4c:
    // 0x2d1a4c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1a50:
    // 0x2d1a50: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1A50u;
    {
        const bool branch_taken_0x2d1a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a50) {
            ctx->pc = 0x2D1A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A50u;
            // 0x2d1a54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1A64u;
            goto label_2d1a64;
        }
    }
    ctx->pc = 0x2D1A58u;
    // 0x2d1a58: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D1A58u;
    SET_GPR_U32(ctx, 31, 0x2D1A60u);
    ctx->pc = 0x2D1A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A58u;
            // 0x2d1a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D1A60u;
label_2d1a60:
    // 0x2d1a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1a64:
    // 0x2d1a64: 0xc0b470c  jal         func_2D1C30
    ctx->pc = 0x2D1A64u;
    SET_GPR_U32(ctx, 31, 0x2D1A6Cu);
    ctx->pc = 0x2D1C30u;
    if (runtime->hasFunction(0x2D1C30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A6Cu; }
        if (ctx->pc != 0x2D1A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C30_0x2d1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A6Cu; }
        if (ctx->pc != 0x2D1A6Cu) { return; }
    }
    ctx->pc = 0x2D1A6Cu;
label_2d1a6c:
    // 0x2d1a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a70: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1A70u;
    SET_GPR_U32(ctx, 31, 0x2D1A78u);
    ctx->pc = 0x2D1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A70u;
            // 0x2d1a74: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C20u;
    if (runtime->hasFunction(0x2D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A78u; }
        if (ctx->pc != 0x2D1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C20_0x2d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A78u; }
        if (ctx->pc != 0x2D1A78u) { return; }
    }
    ctx->pc = 0x2D1A78u;
label_2d1a78:
    // 0x2d1a78: 0xc0b4704  jal         func_2D1C10
    ctx->pc = 0x2D1A78u;
    SET_GPR_U32(ctx, 31, 0x2D1A80u);
    ctx->pc = 0x2D1A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A78u;
            // 0x2d1a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C10u;
    if (runtime->hasFunction(0x2D1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A80u; }
        if (ctx->pc != 0x2D1A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C10_0x2d1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A80u; }
        if (ctx->pc != 0x2D1A80u) { return; }
    }
    ctx->pc = 0x2D1A80u;
label_2d1a80:
    // 0x2d1a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a88: 0xc0b46fc  jal         func_2D1BF0
    ctx->pc = 0x2D1A88u;
    SET_GPR_U32(ctx, 31, 0x2D1A90u);
    ctx->pc = 0x2D1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A88u;
            // 0x2d1a8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1BF0u;
    if (runtime->hasFunction(0x2D1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A90u; }
        if (ctx->pc != 0x2D1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1BF0_0x2d1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A90u; }
        if (ctx->pc != 0x2D1A90u) { return; }
    }
    ctx->pc = 0x2D1A90u;
label_2d1a90:
    // 0x2d1a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1a94:
    // 0x2d1a94: 0xc0b470c  jal         func_2D1C30
    ctx->pc = 0x2D1A94u;
    SET_GPR_U32(ctx, 31, 0x2D1A9Cu);
    ctx->pc = 0x2D1C30u;
    if (runtime->hasFunction(0x2D1C30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A9Cu; }
        if (ctx->pc != 0x2D1A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C30_0x2d1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1A9Cu; }
        if (ctx->pc != 0x2D1A9Cu) { return; }
    }
    ctx->pc = 0x2D1A9Cu;
label_2d1a9c:
    // 0x2d1a9c: 0xc0b4704  jal         func_2D1C10
    ctx->pc = 0x2D1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D1AA4u);
    ctx->pc = 0x2D1AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1A9Cu;
            // 0x2d1aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C10u;
    if (runtime->hasFunction(0x2D1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1AA4u; }
        if (ctx->pc != 0x2D1AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C10_0x2d1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1AA4u; }
        if (ctx->pc != 0x2D1AA4u) { return; }
    }
    ctx->pc = 0x2D1AA4u;
label_2d1aa4:
    // 0x2d1aa4: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1AA4u;
    {
        const bool branch_taken_0x2d1aa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1aa4) {
            ctx->pc = 0x2D1AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AA4u;
            // 0x2d1aa8: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1ABCu;
            goto label_2d1abc;
        }
    }
    ctx->pc = 0x2D1AACu;
    // 0x2d1aac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d1aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1ab0: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1AB0u;
    SET_GPR_U32(ctx, 31, 0x2D1AB8u);
    ctx->pc = 0x2D1AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AB0u;
            // 0x2d1ab4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1AB8u; }
        if (ctx->pc != 0x2D1AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1AB8u; }
        if (ctx->pc != 0x2D1AB8u) { return; }
    }
    ctx->pc = 0x2D1AB8u;
label_2d1ab8:
    // 0x2d1ab8: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x2d1ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d1abc:
    // 0x2d1abc: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D1ABCu;
    {
        const bool branch_taken_0x2d1abc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1abc) {
            ctx->pc = 0x2D1AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1ABCu;
            // 0x2d1ac0: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1BB8u;
            goto label_2d1bb8;
        }
    }
    ctx->pc = 0x2D1AC4u;
    // 0x2d1ac4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d1ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d1ac8: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1AC8u;
    {
        const bool branch_taken_0x2d1ac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ac8) {
            ctx->pc = 0x2D1ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AC8u;
            // 0x2d1acc: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B2Cu;
            goto label_2d1b2c;
        }
    }
    ctx->pc = 0x2D1AD0u;
    // 0x2d1ad0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1ad4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1AD4u;
    {
        const bool branch_taken_0x2d1ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ad4) {
            ctx->pc = 0x2D1AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AD4u;
            // 0x2d1ad8: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1AE8u;
            goto label_2d1ae8;
        }
    }
    ctx->pc = 0x2D1ADCu;
    // 0x2d1adc: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D1ADCu;
    SET_GPR_U32(ctx, 31, 0x2D1AE4u);
    ctx->pc = 0x2D1AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1ADCu;
            // 0x2d1ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D1AE4u;
label_2d1ae4:
    // 0x2d1ae4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1ae8:
    // 0x2d1ae8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1AE8u;
    {
        const bool branch_taken_0x2d1ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ae8) {
            ctx->pc = 0x2D1AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AE8u;
            // 0x2d1aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1AFCu;
            goto label_2d1afc;
        }
    }
    ctx->pc = 0x2D1AF0u;
    // 0x2d1af0: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D1AF0u;
    SET_GPR_U32(ctx, 31, 0x2D1AF8u);
    ctx->pc = 0x2D1AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1AF0u;
            // 0x2d1af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D1AF8u;
label_2d1af8:
    // 0x2d1af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1afc:
    // 0x2d1afc: 0xc0b470c  jal         func_2D1C30
    ctx->pc = 0x2D1AFCu;
    SET_GPR_U32(ctx, 31, 0x2D1B04u);
    ctx->pc = 0x2D1C30u;
    if (runtime->hasFunction(0x2D1C30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B04u; }
        if (ctx->pc != 0x2D1B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C30_0x2d1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B04u; }
        if (ctx->pc != 0x2D1B04u) { return; }
    }
    ctx->pc = 0x2D1B04u;
label_2d1b04:
    // 0x2d1b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b08: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1B08u;
    SET_GPR_U32(ctx, 31, 0x2D1B10u);
    ctx->pc = 0x2D1B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B08u;
            // 0x2d1b0c: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C20u;
    if (runtime->hasFunction(0x2D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B10u; }
        if (ctx->pc != 0x2D1B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C20_0x2d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B10u; }
        if (ctx->pc != 0x2D1B10u) { return; }
    }
    ctx->pc = 0x2D1B10u;
label_2d1b10:
    // 0x2d1b10: 0xc0b4704  jal         func_2D1C10
    ctx->pc = 0x2D1B10u;
    SET_GPR_U32(ctx, 31, 0x2D1B18u);
    ctx->pc = 0x2D1B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B10u;
            // 0x2d1b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C10u;
    if (runtime->hasFunction(0x2D1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B18u; }
        if (ctx->pc != 0x2D1B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C10_0x2d1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B18u; }
        if (ctx->pc != 0x2D1B18u) { return; }
    }
    ctx->pc = 0x2D1B18u;
label_2d1b18:
    // 0x2d1b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b20: 0xc0b46fc  jal         func_2D1BF0
    ctx->pc = 0x2D1B20u;
    SET_GPR_U32(ctx, 31, 0x2D1B28u);
    ctx->pc = 0x2D1B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B20u;
            // 0x2d1b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1BF0u;
    if (runtime->hasFunction(0x2D1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B28u; }
        if (ctx->pc != 0x2D1B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1BF0_0x2d1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B28u; }
        if (ctx->pc != 0x2D1B28u) { return; }
    }
    ctx->pc = 0x2D1B28u;
label_2d1b28:
    // 0x2d1b28: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x2d1b28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d1b2c:
    // 0x2d1b2c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1B2Cu;
    {
        const bool branch_taken_0x2d1b2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b2c) {
            ctx->pc = 0x2D1B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B2Cu;
            // 0x2d1b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B90u;
            goto label_2d1b90;
        }
    }
    ctx->pc = 0x2D1B34u;
    // 0x2d1b34: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d1b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1b38: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1B38u;
    {
        const bool branch_taken_0x2d1b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b38) {
            ctx->pc = 0x2D1B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B38u;
            // 0x2d1b3c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B4Cu;
            goto label_2d1b4c;
        }
    }
    ctx->pc = 0x2D1B40u;
    // 0x2d1b40: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D1B40u;
    SET_GPR_U32(ctx, 31, 0x2D1B48u);
    ctx->pc = 0x2D1B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B40u;
            // 0x2d1b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D1B48u;
label_2d1b48:
    // 0x2d1b48: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2d1b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d1b4c:
    // 0x2d1b4c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1B4Cu;
    {
        const bool branch_taken_0x2d1b4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b4c) {
            ctx->pc = 0x2D1B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B4Cu;
            // 0x2d1b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1B60u;
            goto label_2d1b60;
        }
    }
    ctx->pc = 0x2D1B54u;
    // 0x2d1b54: 0xc0b4668  jal         func_2D19A0
    ctx->pc = 0x2D1B54u;
    SET_GPR_U32(ctx, 31, 0x2D1B5Cu);
    ctx->pc = 0x2D1B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B54u;
            // 0x2d1b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A0u;
    goto label_2d19a0;
    ctx->pc = 0x2D1B5Cu;
label_2d1b5c:
    // 0x2d1b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b60:
    // 0x2d1b60: 0xc0b470c  jal         func_2D1C30
    ctx->pc = 0x2D1B60u;
    SET_GPR_U32(ctx, 31, 0x2D1B68u);
    ctx->pc = 0x2D1C30u;
    if (runtime->hasFunction(0x2D1C30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B68u; }
        if (ctx->pc != 0x2D1B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C30_0x2d1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B68u; }
        if (ctx->pc != 0x2D1B68u) { return; }
    }
    ctx->pc = 0x2D1B68u;
label_2d1b68:
    // 0x2d1b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b6c: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D1B6Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B74u);
    ctx->pc = 0x2D1B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B6Cu;
            // 0x2d1b70: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C20u;
    if (runtime->hasFunction(0x2D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B74u; }
        if (ctx->pc != 0x2D1B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C20_0x2d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B74u; }
        if (ctx->pc != 0x2D1B74u) { return; }
    }
    ctx->pc = 0x2D1B74u;
label_2d1b74:
    // 0x2d1b74: 0xc0b4704  jal         func_2D1C10
    ctx->pc = 0x2D1B74u;
    SET_GPR_U32(ctx, 31, 0x2D1B7Cu);
    ctx->pc = 0x2D1B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B74u;
            // 0x2d1b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C10u;
    if (runtime->hasFunction(0x2D1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B7Cu; }
        if (ctx->pc != 0x2D1B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C10_0x2d1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B7Cu; }
        if (ctx->pc != 0x2D1B7Cu) { return; }
    }
    ctx->pc = 0x2D1B7Cu;
label_2d1b7c:
    // 0x2d1b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b84: 0xc0b46fc  jal         func_2D1BF0
    ctx->pc = 0x2D1B84u;
    SET_GPR_U32(ctx, 31, 0x2D1B8Cu);
    ctx->pc = 0x2D1B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B84u;
            // 0x2d1b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1BF0u;
    if (runtime->hasFunction(0x2D1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B8Cu; }
        if (ctx->pc != 0x2D1B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1BF0_0x2d1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B8Cu; }
        if (ctx->pc != 0x2D1B8Cu) { return; }
    }
    ctx->pc = 0x2D1B8Cu;
label_2d1b8c:
    // 0x2d1b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d1b90:
    // 0x2d1b90: 0xc0b470c  jal         func_2D1C30
    ctx->pc = 0x2D1B90u;
    SET_GPR_U32(ctx, 31, 0x2D1B98u);
    ctx->pc = 0x2D1C30u;
    if (runtime->hasFunction(0x2D1C30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B98u; }
        if (ctx->pc != 0x2D1B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C30_0x2d1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1B98u; }
        if (ctx->pc != 0x2D1B98u) { return; }
    }
    ctx->pc = 0x2D1B98u;
label_2d1b98:
    // 0x2d1b98: 0xc0b4704  jal         func_2D1C10
    ctx->pc = 0x2D1B98u;
    SET_GPR_U32(ctx, 31, 0x2D1BA0u);
    ctx->pc = 0x2D1B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1B98u;
            // 0x2d1b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C10u;
    if (runtime->hasFunction(0x2D1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2D1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BA0u; }
        if (ctx->pc != 0x2D1BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1C10_0x2d1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BA0u; }
        if (ctx->pc != 0x2D1BA0u) { return; }
    }
    ctx->pc = 0x2D1BA0u;
label_2d1ba0:
    // 0x2d1ba0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1BA0u;
    {
        const bool branch_taken_0x2d1ba0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ba0) {
            ctx->pc = 0x2D1BB4u;
            goto label_2d1bb4;
        }
    }
    ctx->pc = 0x2D1BA8u;
    // 0x2d1ba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1bac: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1BACu;
    SET_GPR_U32(ctx, 31, 0x2D1BB4u);
    ctx->pc = 0x2D1BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BACu;
            // 0x2d1bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BB4u; }
        if (ctx->pc != 0x2D1BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BB4u; }
        if (ctx->pc != 0x2D1BB4u) { return; }
    }
    ctx->pc = 0x2D1BB4u;
label_2d1bb4:
    // 0x2d1bb4: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2d1bb8:
    // 0x2d1bb8: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1BB8u;
    {
        const bool branch_taken_0x2d1bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1bb8) {
            ctx->pc = 0x2D1BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BB8u;
            // 0x2d1bbc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1BD0u;
            goto label_2d1bd0;
        }
    }
    ctx->pc = 0x2D1BC0u;
    // 0x2d1bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1bc4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2D1BC4u;
    SET_GPR_U32(ctx, 31, 0x2D1BCCu);
    ctx->pc = 0x2D1BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BC4u;
            // 0x2d1bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BCCu; }
        if (ctx->pc != 0x2D1BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1BCCu; }
        if (ctx->pc != 0x2D1BCCu) { return; }
    }
    ctx->pc = 0x2D1BCCu;
label_2d1bcc:
    // 0x2d1bcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d1bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d1bd0:
    // 0x2d1bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1BE0u;
            // 0x2d1be4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1BE8u;
    // 0x2d1be8: 0x0  nop
    ctx->pc = 0x2d1be8u;
    // NOP
    // 0x2d1bec: 0x0  nop
    ctx->pc = 0x2d1becu;
    // NOP
}
