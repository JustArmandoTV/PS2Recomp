#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7EE0
// Address: 0x4d7ee0 - 0x4d7f50
void sub_004D7EE0_0x4d7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7EE0_0x4d7ee0");
#endif

    switch (ctx->pc) {
        case 0x4d7ee0u: goto label_4d7ee0;
        case 0x4d7ee4u: goto label_4d7ee4;
        case 0x4d7ee8u: goto label_4d7ee8;
        case 0x4d7eecu: goto label_4d7eec;
        case 0x4d7ef0u: goto label_4d7ef0;
        case 0x4d7ef4u: goto label_4d7ef4;
        case 0x4d7ef8u: goto label_4d7ef8;
        case 0x4d7efcu: goto label_4d7efc;
        case 0x4d7f00u: goto label_4d7f00;
        case 0x4d7f04u: goto label_4d7f04;
        case 0x4d7f08u: goto label_4d7f08;
        case 0x4d7f0cu: goto label_4d7f0c;
        case 0x4d7f10u: goto label_4d7f10;
        case 0x4d7f14u: goto label_4d7f14;
        case 0x4d7f18u: goto label_4d7f18;
        case 0x4d7f1cu: goto label_4d7f1c;
        case 0x4d7f20u: goto label_4d7f20;
        case 0x4d7f24u: goto label_4d7f24;
        case 0x4d7f28u: goto label_4d7f28;
        case 0x4d7f2cu: goto label_4d7f2c;
        case 0x4d7f30u: goto label_4d7f30;
        case 0x4d7f34u: goto label_4d7f34;
        case 0x4d7f38u: goto label_4d7f38;
        case 0x4d7f3cu: goto label_4d7f3c;
        case 0x4d7f40u: goto label_4d7f40;
        case 0x4d7f44u: goto label_4d7f44;
        case 0x4d7f48u: goto label_4d7f48;
        case 0x4d7f4cu: goto label_4d7f4c;
        default: break;
    }

    ctx->pc = 0x4d7ee0u;

label_4d7ee0:
    // 0x4d7ee0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x4d7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4d7ee4:
    // 0x4d7ee4: 0x3e00008  jr          $ra
label_4d7ee8:
    if (ctx->pc == 0x4D7EE8u) {
        ctx->pc = 0x4D7EE8u;
            // 0x4d7ee8: 0xac8300ec  sw          $v1, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = 0x4D7EECu;
        goto label_4d7eec;
    }
    ctx->pc = 0x4D7EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7EE4u;
            // 0x4d7ee8: 0xac8300ec  sw          $v1, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7EECu;
label_4d7eec:
    // 0x4d7eec: 0x0  nop
    ctx->pc = 0x4d7eecu;
    // NOP
label_4d7ef0:
    // 0x4d7ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d7ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d7ef4:
    // 0x4d7ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d7ef8:
    // 0x4d7ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d7efc:
    // 0x4d7efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d7efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d7f00:
    // 0x4d7f00: 0x8c840300  lw          $a0, 0x300($a0)
    ctx->pc = 0x4d7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
label_4d7f04:
    // 0x4d7f04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d7f08:
    if (ctx->pc == 0x4D7F08u) {
        ctx->pc = 0x4D7F08u;
            // 0x4d7f08: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->pc = 0x4D7F0Cu;
        goto label_4d7f0c;
    }
    ctx->pc = 0x4D7F04u;
    {
        const bool branch_taken_0x4d7f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7f04) {
            ctx->pc = 0x4D7F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F04u;
            // 0x4d7f08: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7F20u;
            goto label_4d7f20;
        }
    }
    ctx->pc = 0x4D7F0Cu;
label_4d7f0c:
    // 0x4d7f0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d7f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d7f10:
    // 0x4d7f10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d7f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d7f14:
    // 0x4d7f14: 0x320f809  jalr        $t9
label_4d7f18:
    if (ctx->pc == 0x4D7F18u) {
        ctx->pc = 0x4D7F18u;
            // 0x4d7f18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D7F1Cu;
        goto label_4d7f1c;
    }
    ctx->pc = 0x4D7F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7F1Cu);
        ctx->pc = 0x4D7F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F14u;
            // 0x4d7f18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7F1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7F1Cu; }
            if (ctx->pc != 0x4D7F1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D7F1Cu;
label_4d7f1c:
    // 0x4d7f1c: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x4d7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
label_4d7f20:
    // 0x4d7f20: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d7f24:
    // 0x4d7f24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d7f28:
    if (ctx->pc == 0x4D7F28u) {
        ctx->pc = 0x4D7F28u;
            // 0x4d7f28: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4D7F2Cu;
        goto label_4d7f2c;
    }
    ctx->pc = 0x4D7F24u;
    {
        const bool branch_taken_0x4d7f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7f24) {
            ctx->pc = 0x4D7F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F24u;
            // 0x4d7f28: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7F40u;
            goto label_4d7f40;
        }
    }
    ctx->pc = 0x4D7F2Cu;
label_4d7f2c:
    // 0x4d7f2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d7f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d7f30:
    // 0x4d7f30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d7f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d7f34:
    // 0x4d7f34: 0x320f809  jalr        $t9
label_4d7f38:
    if (ctx->pc == 0x4D7F38u) {
        ctx->pc = 0x4D7F38u;
            // 0x4d7f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D7F3Cu;
        goto label_4d7f3c;
    }
    ctx->pc = 0x4D7F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D7F3Cu);
        ctx->pc = 0x4D7F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F34u;
            // 0x4d7f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D7F3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D7F3Cu; }
            if (ctx->pc != 0x4D7F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D7F3Cu;
label_4d7f3c:
    // 0x4d7f3c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4d7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4d7f40:
    // 0x4d7f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d7f44:
    // 0x4d7f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7f48:
    // 0x4d7f48: 0x3e00008  jr          $ra
label_4d7f4c:
    if (ctx->pc == 0x4D7F4Cu) {
        ctx->pc = 0x4D7F4Cu;
            // 0x4d7f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D7F50u;
        goto label_fallthrough_0x4d7f48;
    }
    ctx->pc = 0x4D7F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F48u;
            // 0x4d7f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4d7f48:
    ctx->pc = 0x4D7F50u;
}
