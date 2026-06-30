#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517B10
// Address: 0x517b10 - 0x517b60
void sub_00517B10_0x517b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517B10_0x517b10");
#endif

    switch (ctx->pc) {
        case 0x517b10u: goto label_517b10;
        case 0x517b14u: goto label_517b14;
        case 0x517b18u: goto label_517b18;
        case 0x517b1cu: goto label_517b1c;
        case 0x517b20u: goto label_517b20;
        case 0x517b24u: goto label_517b24;
        case 0x517b28u: goto label_517b28;
        case 0x517b2cu: goto label_517b2c;
        case 0x517b30u: goto label_517b30;
        case 0x517b34u: goto label_517b34;
        case 0x517b38u: goto label_517b38;
        case 0x517b3cu: goto label_517b3c;
        case 0x517b40u: goto label_517b40;
        case 0x517b44u: goto label_517b44;
        case 0x517b48u: goto label_517b48;
        case 0x517b4cu: goto label_517b4c;
        case 0x517b50u: goto label_517b50;
        case 0x517b54u: goto label_517b54;
        case 0x517b58u: goto label_517b58;
        case 0x517b5cu: goto label_517b5c;
        default: break;
    }

    ctx->pc = 0x517b10u;

label_517b10:
    // 0x517b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x517b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_517b14:
    // 0x517b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x517b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_517b18:
    // 0x517b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_517b1c:
    // 0x517b1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x517b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_517b20:
    // 0x517b20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_517b24:
    if (ctx->pc == 0x517B24u) {
        ctx->pc = 0x517B24u;
            // 0x517b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517B28u;
        goto label_517b28;
    }
    ctx->pc = 0x517B20u;
    {
        const bool branch_taken_0x517b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x517B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517B20u;
            // 0x517b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517b20) {
            ctx->pc = 0x517B48u;
            goto label_517b48;
        }
    }
    ctx->pc = 0x517B28u;
label_517b28:
    // 0x517b28: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x517b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_517b2c:
    // 0x517b2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517b30:
    // 0x517b30: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x517b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_517b34:
    // 0x517b34: 0x320f809  jalr        $t9
label_517b38:
    if (ctx->pc == 0x517B38u) {
        ctx->pc = 0x517B3Cu;
        goto label_517b3c;
    }
    ctx->pc = 0x517B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517B3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517B3Cu; }
            if (ctx->pc != 0x517B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x517B3Cu;
label_517b3c:
    // 0x517b3c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x517b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_517b40:
    // 0x517b40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x517b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_517b44:
    // 0x517b44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x517b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_517b48:
    // 0x517b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x517b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_517b4c:
    // 0x517b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x517b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_517b50:
    // 0x517b50: 0x3e00008  jr          $ra
label_517b54:
    if (ctx->pc == 0x517B54u) {
        ctx->pc = 0x517B54u;
            // 0x517b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x517B58u;
        goto label_517b58;
    }
    ctx->pc = 0x517B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517B50u;
            // 0x517b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517B58u;
label_517b58:
    // 0x517b58: 0x0  nop
    ctx->pc = 0x517b58u;
    // NOP
label_517b5c:
    // 0x517b5c: 0x0  nop
    ctx->pc = 0x517b5cu;
    // NOP
}
