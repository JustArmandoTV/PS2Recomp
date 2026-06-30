#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ECC0
// Address: 0x15ecc0 - 0x15ede0
void sub_0015ECC0_0x15ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ECC0_0x15ecc0");
#endif

    switch (ctx->pc) {
        case 0x15ecf0u: goto label_15ecf0;
        case 0x15ed00u: goto label_15ed00;
        case 0x15ed34u: goto label_15ed34;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed6cu: goto label_15ed6c;
        case 0x15ed74u: goto label_15ed74;
        case 0x15eda4u: goto label_15eda4;
        case 0x15edc0u: goto label_15edc0;
        default: break;
    }

    ctx->pc = 0x15ecc0u;

label_15ecc0:
    // 0x15ecc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15ecc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15ecc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15eccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ecd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ecd4: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x15ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x15ecd8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x15ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15ecdc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15ECDCu;
    {
        const bool branch_taken_0x15ecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECDCu;
            // 0x15ece0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecdc) {
            ctx->pc = 0x15ED20u;
            goto label_15ed20;
        }
    }
    ctx->pc = 0x15ECE4u;
    // 0x15ece4: 0x8cb2002c  lw          $s2, 0x2C($a1)
    ctx->pc = 0x15ece4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x15ece8: 0x24b10028  addiu       $s1, $a1, 0x28
    ctx->pc = 0x15ece8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x15ecec: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x15ececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_15ecf0:
    // 0x15ecf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15ecf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15ecf4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x15ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15ecf8: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15ECF8u;
    SET_GPR_U32(ctx, 31, 0x15ED00u);
    ctx->pc = 0x15ECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECF8u;
            // 0x15ecfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECC0u;
    goto label_15ecc0;
    ctx->pc = 0x15ED00u;
label_15ed00:
    // 0x15ed00: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x15ed00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x15ed04: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x15ed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x15ed08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x15ed08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x15ed0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15ed0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15ed10: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x15ed10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15ed14: 0x5642fff6  bnel        $s2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15ED14u;
    {
        const bool branch_taken_0x15ed14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ed14) {
            ctx->pc = 0x15ED18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED14u;
            // 0x15ed18: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ECF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ecf0;
        }
    }
    ctx->pc = 0x15ED1Cu;
    // 0x15ed1c: 0x0  nop
    ctx->pc = 0x15ed1cu;
    // NOP
label_15ed20:
    // 0x15ed20: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x15ed24: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15ed28: 0x24710048  addiu       $s1, $v1, 0x48
    ctx->pc = 0x15ed28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x15ed2c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x15ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x15ed30: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_15ed34:
    // 0x15ed34: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x15ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x15ed38: 0x260500c4  addiu       $a1, $s0, 0xC4
    ctx->pc = 0x15ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x15ed3c: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x15ed3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ed40: 0xc057f64  jal         func_15FD90
    ctx->pc = 0x15ED40u;
    SET_GPR_U32(ctx, 31, 0x15ED48u);
    ctx->pc = 0x15ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED40u;
            // 0x15ed44: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FD90u;
    if (runtime->hasFunction(0x15FD90u)) {
        auto targetFn = runtime->lookupFunction(0x15FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED48u; }
        if (ctx->pc != 0x15ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FD90_0x15fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED48u; }
        if (ctx->pc != 0x15ED48u) { return; }
    }
    ctx->pc = 0x15ED48u;
label_15ed48:
    // 0x15ed48: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x15ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15ed4c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x15ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x15ed50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15ed50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15ed54: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x15ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x15ed58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ed5c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15ed60: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x15ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15ed64: 0xc0582ac  jal         func_160AB0
    ctx->pc = 0x15ED64u;
    SET_GPR_U32(ctx, 31, 0x15ED6Cu);
    ctx->pc = 0x15ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED64u;
            // 0x15ed68: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED6Cu; }
        if (ctx->pc != 0x15ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED6Cu; }
        if (ctx->pc != 0x15ED6Cu) { return; }
    }
    ctx->pc = 0x15ED6Cu;
label_15ed6c:
    // 0x15ed6c: 0xc057fa4  jal         func_15FE90
    ctx->pc = 0x15ED6Cu;
    SET_GPR_U32(ctx, 31, 0x15ED74u);
    ctx->pc = 0x15ED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED6Cu;
            // 0x15ed70: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED74u; }
        if (ctx->pc != 0x15ED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ED74u; }
        if (ctx->pc != 0x15ED74u) { return; }
    }
    ctx->pc = 0x15ED74u;
label_15ed74:
    // 0x15ed74: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x15ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15ed78: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x15ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x15ed7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15ed7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x15ed80: 0x5462ffec  bnel        $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15ED80u;
    {
        const bool branch_taken_0x15ed80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ed80) {
            ctx->pc = 0x15ED84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED80u;
            // 0x15ed84: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ED34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ed34;
        }
    }
    ctx->pc = 0x15ED88u;
    // 0x15ed88: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x15ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x15ed8c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x15ed90: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x15ed94: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x15ed94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x15ed98: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x15ed9c: 0xc0582ac  jal         func_160AB0
    ctx->pc = 0x15ED9Cu;
    SET_GPR_U32(ctx, 31, 0x15EDA4u);
    ctx->pc = 0x15EDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED9Cu;
            // 0x15eda0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160AB0u;
    if (runtime->hasFunction(0x160AB0u)) {
        auto targetFn = runtime->lookupFunction(0x160AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDA4u; }
        if (ctx->pc != 0x15EDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160AB0_0x160ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDA4u; }
        if (ctx->pc != 0x15EDA4u) { return; }
    }
    ctx->pc = 0x15EDA4u;
label_15eda4:
    // 0x15eda4: 0x26020114  addiu       $v0, $s0, 0x114
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x15eda8: 0x26050108  addiu       $a1, $s0, 0x108
    ctx->pc = 0x15eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x15edac: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x15edacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x15edb0: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x15edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x15edb4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15edb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15edb8: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15EDB8u;
    SET_GPR_U32(ctx, 31, 0x15EDC0u);
    ctx->pc = 0x15EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDB8u;
            // 0x15edbc: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDC0u; }
        if (ctx->pc != 0x15EDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EDC0u; }
        if (ctx->pc != 0x15EDC0u) { return; }
    }
    ctx->pc = 0x15EDC0u;
label_15edc0:
    // 0x15edc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15edc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15edc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15edc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15edc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15edc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15edcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15edccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDD0u;
            // 0x15edd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EDD8u;
    // 0x15edd8: 0x0  nop
    ctx->pc = 0x15edd8u;
    // NOP
    // 0x15eddc: 0x0  nop
    ctx->pc = 0x15eddcu;
    // NOP
}
