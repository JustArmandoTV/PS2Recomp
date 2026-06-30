#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160B30
// Address: 0x160b30 - 0x160c00
void sub_00160B30_0x160b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160B30_0x160b30");
#endif

    switch (ctx->pc) {
        case 0x160b6cu: goto label_160b6c;
        case 0x160bd4u: goto label_160bd4;
        default: break;
    }

    ctx->pc = 0x160b30u;

    // 0x160b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x160b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x160b34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x160b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x160b38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x160b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x160b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160b40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160b44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x160b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160b4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x160b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160b54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x160b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b58: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x160b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x160b5c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b60: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x160b64: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x160B64u;
    SET_GPR_U32(ctx, 31, 0x160B6Cu);
    ctx->pc = 0x160B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160B64u;
            // 0x160b68: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B6Cu; }
        if (ctx->pc != 0x160B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B6Cu; }
        if (ctx->pc != 0x160B6Cu) { return; }
    }
    ctx->pc = 0x160B6Cu;
label_160b6c:
    // 0x160b6c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x160b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x160b70: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x160b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x160b74: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x160b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x160b78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160B78u;
    {
        const bool branch_taken_0x160b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B78u;
            // 0x160b7c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b78) {
            ctx->pc = 0x160B88u;
            goto label_160b88;
        }
    }
    ctx->pc = 0x160B80u;
    // 0x160b80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160b84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x160b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_160b88:
    // 0x160b88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x160b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b90: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x160b94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160b98: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x160b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x160b9c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x160b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x160ba0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160ba4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x160ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x160ba8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x160ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x160bac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x160bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x160bb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x160bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x160bb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160bb8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x160bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x160bbc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160BBCu;
    {
        const bool branch_taken_0x160bbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160BBCu;
            // 0x160bc0: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bbc) {
            ctx->pc = 0x160BD4u;
            goto label_160bd4;
        }
    }
    ctx->pc = 0x160BC4u;
    // 0x160bc4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160BC4u;
    {
        const bool branch_taken_0x160bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160BC4u;
            // 0x160bc8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bc4) {
            ctx->pc = 0x160BD4u;
            goto label_160bd4;
        }
    }
    ctx->pc = 0x160BCCu;
    // 0x160bcc: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160BCCu;
    SET_GPR_U32(ctx, 31, 0x160BD4u);
    ctx->pc = 0x160BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160BCCu;
            // 0x160bd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BD4u; }
        if (ctx->pc != 0x160BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BD4u; }
        if (ctx->pc != 0x160BD4u) { return; }
    }
    ctx->pc = 0x160BD4u;
label_160bd4:
    // 0x160bd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x160bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160bec: 0x3e00008  jr          $ra
    ctx->pc = 0x160BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160BECu;
            // 0x160bf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160BF4u;
    // 0x160bf4: 0x0  nop
    ctx->pc = 0x160bf4u;
    // NOP
    // 0x160bf8: 0x0  nop
    ctx->pc = 0x160bf8u;
    // NOP
    // 0x160bfc: 0x0  nop
    ctx->pc = 0x160bfcu;
    // NOP
}
