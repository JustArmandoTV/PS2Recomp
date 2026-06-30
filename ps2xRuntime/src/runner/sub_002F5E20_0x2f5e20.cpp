#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5E20
// Address: 0x2f5e20 - 0x2f5e80
void sub_002F5E20_0x2f5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5E20_0x2f5e20");
#endif

    switch (ctx->pc) {
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e24u: goto label_2f5e24;
        case 0x2f5e28u: goto label_2f5e28;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e30u: goto label_2f5e30;
        case 0x2f5e34u: goto label_2f5e34;
        case 0x2f5e38u: goto label_2f5e38;
        case 0x2f5e3cu: goto label_2f5e3c;
        case 0x2f5e40u: goto label_2f5e40;
        case 0x2f5e44u: goto label_2f5e44;
        case 0x2f5e48u: goto label_2f5e48;
        case 0x2f5e4cu: goto label_2f5e4c;
        case 0x2f5e50u: goto label_2f5e50;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5e58u: goto label_2f5e58;
        case 0x2f5e5cu: goto label_2f5e5c;
        case 0x2f5e60u: goto label_2f5e60;
        case 0x2f5e64u: goto label_2f5e64;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e6cu: goto label_2f5e6c;
        case 0x2f5e70u: goto label_2f5e70;
        case 0x2f5e74u: goto label_2f5e74;
        case 0x2f5e78u: goto label_2f5e78;
        case 0x2f5e7cu: goto label_2f5e7c;
        default: break;
    }

    ctx->pc = 0x2f5e20u;

label_2f5e20:
    // 0x2f5e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f5e24:
    // 0x2f5e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f5e28:
    // 0x2f5e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f5e2c:
    // 0x2f5e2c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2f5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f5e30:
    // 0x2f5e30: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2f5e34:
    if (ctx->pc == 0x2F5E34u) {
        ctx->pc = 0x2F5E38u;
        goto label_2f5e38;
    }
    ctx->pc = 0x2F5E30u;
    {
        const bool branch_taken_0x2f5e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e30) {
            ctx->pc = 0x2F5E60u;
            goto label_2f5e60;
        }
    }
    ctx->pc = 0x2F5E38u;
label_2f5e38:
    // 0x2f5e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e3c:
    // 0x2f5e3c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2f5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f5e40:
    // 0x2f5e40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f5e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5e44:
    // 0x2f5e44: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2f5e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2f5e48:
    // 0x2f5e48: 0x320f809  jalr        $t9
label_2f5e4c:
    if (ctx->pc == 0x2F5E4Cu) {
        ctx->pc = 0x2F5E50u;
        goto label_2f5e50;
    }
    ctx->pc = 0x2F5E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F5E50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F5E50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F5E50u; }
            if (ctx->pc != 0x2F5E50u) { return; }
        }
        }
    }
    ctx->pc = 0x2F5E50u;
label_2f5e50:
    // 0x2f5e50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2f5e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2f5e54:
    // 0x2f5e54: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2f5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f5e58:
    // 0x2f5e58: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_2f5e5c:
    if (ctx->pc == 0x2F5E5Cu) {
        ctx->pc = 0x2F5E5Cu;
            // 0x2f5e5c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2F5E60u;
        goto label_2f5e60;
    }
    ctx->pc = 0x2F5E58u;
    {
        const bool branch_taken_0x2f5e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e58) {
            ctx->pc = 0x2F5E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E58u;
            // 0x2f5e5c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5e40;
        }
    }
    ctx->pc = 0x2F5E60u;
label_2f5e60:
    // 0x2f5e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5e64:
    // 0x2f5e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5e68:
    // 0x2f5e68: 0x3e00008  jr          $ra
label_2f5e6c:
    if (ctx->pc == 0x2F5E6Cu) {
        ctx->pc = 0x2F5E6Cu;
            // 0x2f5e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F5E70u;
        goto label_2f5e70;
    }
    ctx->pc = 0x2F5E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5E68u;
            // 0x2f5e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5E70u;
label_2f5e70:
    // 0x2f5e70: 0x3e00008  jr          $ra
label_2f5e74:
    if (ctx->pc == 0x2F5E74u) {
        ctx->pc = 0x2F5E78u;
        goto label_2f5e78;
    }
    ctx->pc = 0x2F5E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5E78u;
label_2f5e78:
    // 0x2f5e78: 0x0  nop
    ctx->pc = 0x2f5e78u;
    // NOP
label_2f5e7c:
    // 0x2f5e7c: 0x0  nop
    ctx->pc = 0x2f5e7cu;
    // NOP
}
