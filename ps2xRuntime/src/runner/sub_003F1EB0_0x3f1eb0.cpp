#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1EB0
// Address: 0x3f1eb0 - 0x3f1f40
void sub_003F1EB0_0x3f1eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1EB0_0x3f1eb0");
#endif

    switch (ctx->pc) {
        case 0x3f1eb0u: goto label_3f1eb0;
        case 0x3f1eb4u: goto label_3f1eb4;
        case 0x3f1eb8u: goto label_3f1eb8;
        case 0x3f1ebcu: goto label_3f1ebc;
        case 0x3f1ec0u: goto label_3f1ec0;
        case 0x3f1ec4u: goto label_3f1ec4;
        case 0x3f1ec8u: goto label_3f1ec8;
        case 0x3f1eccu: goto label_3f1ecc;
        case 0x3f1ed0u: goto label_3f1ed0;
        case 0x3f1ed4u: goto label_3f1ed4;
        case 0x3f1ed8u: goto label_3f1ed8;
        case 0x3f1edcu: goto label_3f1edc;
        case 0x3f1ee0u: goto label_3f1ee0;
        case 0x3f1ee4u: goto label_3f1ee4;
        case 0x3f1ee8u: goto label_3f1ee8;
        case 0x3f1eecu: goto label_3f1eec;
        case 0x3f1ef0u: goto label_3f1ef0;
        case 0x3f1ef4u: goto label_3f1ef4;
        case 0x3f1ef8u: goto label_3f1ef8;
        case 0x3f1efcu: goto label_3f1efc;
        case 0x3f1f00u: goto label_3f1f00;
        case 0x3f1f04u: goto label_3f1f04;
        case 0x3f1f08u: goto label_3f1f08;
        case 0x3f1f0cu: goto label_3f1f0c;
        case 0x3f1f10u: goto label_3f1f10;
        case 0x3f1f14u: goto label_3f1f14;
        case 0x3f1f18u: goto label_3f1f18;
        case 0x3f1f1cu: goto label_3f1f1c;
        case 0x3f1f20u: goto label_3f1f20;
        case 0x3f1f24u: goto label_3f1f24;
        case 0x3f1f28u: goto label_3f1f28;
        case 0x3f1f2cu: goto label_3f1f2c;
        case 0x3f1f30u: goto label_3f1f30;
        case 0x3f1f34u: goto label_3f1f34;
        case 0x3f1f38u: goto label_3f1f38;
        case 0x3f1f3cu: goto label_3f1f3c;
        default: break;
    }

    ctx->pc = 0x3f1eb0u;

label_3f1eb0:
    // 0x3f1eb0: 0x3e00008  jr          $ra
label_3f1eb4:
    if (ctx->pc == 0x3F1EB4u) {
        ctx->pc = 0x3F1EB4u;
            // 0x3f1eb4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x3F1EB8u;
        goto label_3f1eb8;
    }
    ctx->pc = 0x3F1EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1EB0u;
            // 0x3f1eb4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1EB8u;
label_3f1eb8:
    // 0x3f1eb8: 0x0  nop
    ctx->pc = 0x3f1eb8u;
    // NOP
label_3f1ebc:
    // 0x3f1ebc: 0x0  nop
    ctx->pc = 0x3f1ebcu;
    // NOP
label_3f1ec0:
    // 0x3f1ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f1ec4:
    // 0x3f1ec4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f1ec8:
    // 0x3f1ec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f1ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f1ecc:
    // 0x3f1ecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f1eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f1ed0:
    // 0x3f1ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f1ed4:
    // 0x3f1ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f1ed8:
    // 0x3f1ed8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3f1ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3f1edc:
    // 0x3f1edc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3f1ee0:
    if (ctx->pc == 0x3F1EE0u) {
        ctx->pc = 0x3F1EE0u;
            // 0x3f1ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F1EE4u;
        goto label_3f1ee4;
    }
    ctx->pc = 0x3F1EDCu;
    {
        const bool branch_taken_0x3f1edc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1EDCu;
            // 0x3f1ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1edc) {
            ctx->pc = 0x3F1F18u;
            goto label_3f1f18;
        }
    }
    ctx->pc = 0x3F1EE4u;
label_3f1ee4:
    // 0x3f1ee4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f1ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1ee8:
    // 0x3f1ee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f1ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f1eec:
    // 0x3f1eec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3f1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3f1ef0:
    // 0x3f1ef0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3f1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3f1ef4:
    // 0x3f1ef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f1ef8:
    // 0x3f1ef8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f1ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f1efc:
    // 0x3f1efc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f1efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f1f00:
    // 0x3f1f00: 0x320f809  jalr        $t9
label_3f1f04:
    if (ctx->pc == 0x3F1F04u) {
        ctx->pc = 0x3F1F08u;
        goto label_3f1f08;
    }
    ctx->pc = 0x3F1F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F1F08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F1F08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F1F08u; }
            if (ctx->pc != 0x3F1F08u) { return; }
        }
        }
    }
    ctx->pc = 0x3F1F08u;
label_3f1f08:
    // 0x3f1f08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3f1f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3f1f0c:
    // 0x3f1f0c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3f1f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3f1f10:
    // 0x3f1f10: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3f1f14:
    if (ctx->pc == 0x3F1F14u) {
        ctx->pc = 0x3F1F14u;
            // 0x3f1f14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3F1F18u;
        goto label_3f1f18;
    }
    ctx->pc = 0x3F1F10u;
    {
        const bool branch_taken_0x3f1f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1F10u;
            // 0x3f1f14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1f10) {
            ctx->pc = 0x3F1EECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f1eec;
        }
    }
    ctx->pc = 0x3F1F18u;
label_3f1f18:
    // 0x3f1f18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f1f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f1f1c:
    // 0x3f1f1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f1f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f1f20:
    // 0x3f1f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f1f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f1f24:
    // 0x3f1f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f1f28:
    // 0x3f1f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1f2c:
    // 0x3f1f2c: 0x3e00008  jr          $ra
label_3f1f30:
    if (ctx->pc == 0x3F1F30u) {
        ctx->pc = 0x3F1F30u;
            // 0x3f1f30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F1F34u;
        goto label_3f1f34;
    }
    ctx->pc = 0x3F1F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1F2Cu;
            // 0x3f1f30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1F34u;
label_3f1f34:
    // 0x3f1f34: 0x0  nop
    ctx->pc = 0x3f1f34u;
    // NOP
label_3f1f38:
    // 0x3f1f38: 0x0  nop
    ctx->pc = 0x3f1f38u;
    // NOP
label_3f1f3c:
    // 0x3f1f3c: 0x0  nop
    ctx->pc = 0x3f1f3cu;
    // NOP
}
