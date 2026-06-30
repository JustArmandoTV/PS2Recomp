#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2B20
// Address: 0x1e2b20 - 0x1e2b90
void sub_001E2B20_0x1e2b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2B20_0x1e2b20");
#endif

    switch (ctx->pc) {
        case 0x1e2b20u: goto label_1e2b20;
        case 0x1e2b24u: goto label_1e2b24;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b2cu: goto label_1e2b2c;
        case 0x1e2b30u: goto label_1e2b30;
        case 0x1e2b34u: goto label_1e2b34;
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b3cu: goto label_1e2b3c;
        case 0x1e2b40u: goto label_1e2b40;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2b4cu: goto label_1e2b4c;
        case 0x1e2b50u: goto label_1e2b50;
        case 0x1e2b54u: goto label_1e2b54;
        case 0x1e2b58u: goto label_1e2b58;
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b60u: goto label_1e2b60;
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b68u: goto label_1e2b68;
        case 0x1e2b6cu: goto label_1e2b6c;
        case 0x1e2b70u: goto label_1e2b70;
        case 0x1e2b74u: goto label_1e2b74;
        case 0x1e2b78u: goto label_1e2b78;
        case 0x1e2b7cu: goto label_1e2b7c;
        case 0x1e2b80u: goto label_1e2b80;
        case 0x1e2b84u: goto label_1e2b84;
        case 0x1e2b88u: goto label_1e2b88;
        case 0x1e2b8cu: goto label_1e2b8c;
        default: break;
    }

    ctx->pc = 0x1e2b20u;

label_1e2b20:
    // 0x1e2b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2b24:
    // 0x1e2b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2b28:
    // 0x1e2b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2b2c:
    // 0x1e2b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b30:
    // 0x1e2b30: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e2b34:
    // 0x1e2b34: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1e2b34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1e2b38:
    // 0x1e2b38: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_1e2b3c:
    if (ctx->pc == 0x1E2B3Cu) {
        ctx->pc = 0x1E2B3Cu;
            // 0x1e2b3c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2B40u;
        goto label_1e2b40;
    }
    ctx->pc = 0x1E2B38u;
    {
        const bool branch_taken_0x1e2b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b38) {
            ctx->pc = 0x1E2B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B38u;
            // 0x1e2b3c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B78u;
            goto label_1e2b78;
        }
    }
    ctx->pc = 0x1E2B40u;
label_1e2b40:
    // 0x1e2b40: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x1e2b40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_1e2b44:
    // 0x1e2b44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e2b48:
    // 0x1e2b48: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1e2b48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_1e2b4c:
    // 0x1e2b4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e2b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1e2b50:
    // 0x1e2b50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e2b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1e2b54:
    // 0x1e2b54: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1e2b58:
    if (ctx->pc == 0x1E2B58u) {
        ctx->pc = 0x1E2B5Cu;
        goto label_1e2b5c;
    }
    ctx->pc = 0x1E2B54u;
    {
        const bool branch_taken_0x1e2b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b54) {
            ctx->pc = 0x1E2B74u;
            goto label_1e2b74;
        }
    }
    ctx->pc = 0x1E2B5Cu;
label_1e2b5c:
    // 0x1e2b5c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e2b60:
    if (ctx->pc == 0x1E2B60u) {
        ctx->pc = 0x1E2B64u;
        goto label_1e2b64;
    }
    ctx->pc = 0x1E2B5Cu;
    {
        const bool branch_taken_0x1e2b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b5c) {
            ctx->pc = 0x1E2B74u;
            goto label_1e2b74;
        }
    }
    ctx->pc = 0x1E2B64u;
label_1e2b64:
    // 0x1e2b64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e2b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2b68:
    // 0x1e2b68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e2b6c:
    // 0x1e2b6c: 0x320f809  jalr        $t9
label_1e2b70:
    if (ctx->pc == 0x1E2B70u) {
        ctx->pc = 0x1E2B70u;
            // 0x1e2b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E2B74u;
        goto label_1e2b74;
    }
    ctx->pc = 0x1E2B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2B74u);
        ctx->pc = 0x1E2B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B6Cu;
            // 0x1e2b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B74u; }
            if (ctx->pc != 0x1E2B74u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2B74u;
label_1e2b74:
    // 0x1e2b74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1e2b78:
    // 0x1e2b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2b7c:
    // 0x1e2b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2b80:
    // 0x1e2b80: 0x3e00008  jr          $ra
label_1e2b84:
    if (ctx->pc == 0x1E2B84u) {
        ctx->pc = 0x1E2B84u;
            // 0x1e2b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E2B88u;
        goto label_1e2b88;
    }
    ctx->pc = 0x1E2B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B80u;
            // 0x1e2b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2B88u;
label_1e2b88:
    // 0x1e2b88: 0x0  nop
    ctx->pc = 0x1e2b88u;
    // NOP
label_1e2b8c:
    // 0x1e2b8c: 0x0  nop
    ctx->pc = 0x1e2b8cu;
    // NOP
}
