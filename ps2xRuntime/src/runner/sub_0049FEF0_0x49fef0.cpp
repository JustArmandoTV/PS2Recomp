#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049FEF0
// Address: 0x49fef0 - 0x49ff80
void sub_0049FEF0_0x49fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FEF0_0x49fef0");
#endif

    switch (ctx->pc) {
        case 0x49fef0u: goto label_49fef0;
        case 0x49fef4u: goto label_49fef4;
        case 0x49fef8u: goto label_49fef8;
        case 0x49fefcu: goto label_49fefc;
        case 0x49ff00u: goto label_49ff00;
        case 0x49ff04u: goto label_49ff04;
        case 0x49ff08u: goto label_49ff08;
        case 0x49ff0cu: goto label_49ff0c;
        case 0x49ff10u: goto label_49ff10;
        case 0x49ff14u: goto label_49ff14;
        case 0x49ff18u: goto label_49ff18;
        case 0x49ff1cu: goto label_49ff1c;
        case 0x49ff20u: goto label_49ff20;
        case 0x49ff24u: goto label_49ff24;
        case 0x49ff28u: goto label_49ff28;
        case 0x49ff2cu: goto label_49ff2c;
        case 0x49ff30u: goto label_49ff30;
        case 0x49ff34u: goto label_49ff34;
        case 0x49ff38u: goto label_49ff38;
        case 0x49ff3cu: goto label_49ff3c;
        case 0x49ff40u: goto label_49ff40;
        case 0x49ff44u: goto label_49ff44;
        case 0x49ff48u: goto label_49ff48;
        case 0x49ff4cu: goto label_49ff4c;
        case 0x49ff50u: goto label_49ff50;
        case 0x49ff54u: goto label_49ff54;
        case 0x49ff58u: goto label_49ff58;
        case 0x49ff5cu: goto label_49ff5c;
        case 0x49ff60u: goto label_49ff60;
        case 0x49ff64u: goto label_49ff64;
        case 0x49ff68u: goto label_49ff68;
        case 0x49ff6cu: goto label_49ff6c;
        case 0x49ff70u: goto label_49ff70;
        case 0x49ff74u: goto label_49ff74;
        case 0x49ff78u: goto label_49ff78;
        case 0x49ff7cu: goto label_49ff7c;
        default: break;
    }

    ctx->pc = 0x49fef0u;

label_49fef0:
    // 0x49fef0: 0x3e00008  jr          $ra
label_49fef4:
    if (ctx->pc == 0x49FEF4u) {
        ctx->pc = 0x49FEF4u;
            // 0x49fef4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x49FEF8u;
        goto label_49fef8;
    }
    ctx->pc = 0x49FEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FEF0u;
            // 0x49fef4: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FEF8u;
label_49fef8:
    // 0x49fef8: 0x0  nop
    ctx->pc = 0x49fef8u;
    // NOP
label_49fefc:
    // 0x49fefc: 0x0  nop
    ctx->pc = 0x49fefcu;
    // NOP
label_49ff00:
    // 0x49ff00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49ff04:
    // 0x49ff04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_49ff08:
    // 0x49ff08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49ff0c:
    // 0x49ff0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49ff10:
    // 0x49ff10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49ff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49ff14:
    // 0x49ff14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49ff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49ff18:
    // 0x49ff18: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x49ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49ff1c:
    // 0x49ff1c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_49ff20:
    if (ctx->pc == 0x49FF20u) {
        ctx->pc = 0x49FF20u;
            // 0x49ff20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49FF24u;
        goto label_49ff24;
    }
    ctx->pc = 0x49FF1Cu;
    {
        const bool branch_taken_0x49ff1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FF1Cu;
            // 0x49ff20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff1c) {
            ctx->pc = 0x49FF58u;
            goto label_49ff58;
        }
    }
    ctx->pc = 0x49FF24u;
label_49ff24:
    // 0x49ff24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49ff24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ff28:
    // 0x49ff28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49ff28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ff2c:
    // 0x49ff2c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x49ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_49ff30:
    // 0x49ff30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_49ff34:
    // 0x49ff34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49ff38:
    // 0x49ff38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49ff38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ff3c:
    // 0x49ff3c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x49ff3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_49ff40:
    // 0x49ff40: 0x320f809  jalr        $t9
label_49ff44:
    if (ctx->pc == 0x49FF44u) {
        ctx->pc = 0x49FF48u;
        goto label_49ff48;
    }
    ctx->pc = 0x49FF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49FF48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49FF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49FF48u; }
            if (ctx->pc != 0x49FF48u) { return; }
        }
        }
    }
    ctx->pc = 0x49FF48u;
label_49ff48:
    // 0x49ff48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49ff48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49ff4c:
    // 0x49ff4c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x49ff4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49ff50:
    // 0x49ff50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_49ff54:
    if (ctx->pc == 0x49FF54u) {
        ctx->pc = 0x49FF54u;
            // 0x49ff54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x49FF58u;
        goto label_49ff58;
    }
    ctx->pc = 0x49FF50u;
    {
        const bool branch_taken_0x49ff50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FF50u;
            // 0x49ff54: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff50) {
            ctx->pc = 0x49FF2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49ff2c;
        }
    }
    ctx->pc = 0x49FF58u;
label_49ff58:
    // 0x49ff58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_49ff5c:
    // 0x49ff5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49ff5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49ff60:
    // 0x49ff60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49ff60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49ff64:
    // 0x49ff64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49ff64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49ff68:
    // 0x49ff68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49ff68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49ff6c:
    // 0x49ff6c: 0x3e00008  jr          $ra
label_49ff70:
    if (ctx->pc == 0x49FF70u) {
        ctx->pc = 0x49FF70u;
            // 0x49ff70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x49FF74u;
        goto label_49ff74;
    }
    ctx->pc = 0x49FF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49FF6Cu;
            // 0x49ff70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FF74u;
label_49ff74:
    // 0x49ff74: 0x0  nop
    ctx->pc = 0x49ff74u;
    // NOP
label_49ff78:
    // 0x49ff78: 0x0  nop
    ctx->pc = 0x49ff78u;
    // NOP
label_49ff7c:
    // 0x49ff7c: 0x0  nop
    ctx->pc = 0x49ff7cu;
    // NOP
}
