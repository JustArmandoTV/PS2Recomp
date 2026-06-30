#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224B00
// Address: 0x224b00 - 0x224b40
void sub_00224B00_0x224b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B00_0x224b00");
#endif

    switch (ctx->pc) {
        case 0x224b00u: goto label_224b00;
        case 0x224b04u: goto label_224b04;
        case 0x224b08u: goto label_224b08;
        case 0x224b0cu: goto label_224b0c;
        case 0x224b10u: goto label_224b10;
        case 0x224b14u: goto label_224b14;
        case 0x224b18u: goto label_224b18;
        case 0x224b1cu: goto label_224b1c;
        case 0x224b20u: goto label_224b20;
        case 0x224b24u: goto label_224b24;
        case 0x224b28u: goto label_224b28;
        case 0x224b2cu: goto label_224b2c;
        case 0x224b30u: goto label_224b30;
        case 0x224b34u: goto label_224b34;
        case 0x224b38u: goto label_224b38;
        case 0x224b3cu: goto label_224b3c;
        default: break;
    }

    ctx->pc = 0x224b00u;

label_224b00:
    // 0x224b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_224b04:
    // 0x224b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224b08:
    // 0x224b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224b0c:
    // 0x224b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224b10:
    // 0x224b10: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x224b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_224b14:
    // 0x224b14: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_224b18:
    // 0x224b18: 0x320f809  jalr        $t9
label_224b1c:
    if (ctx->pc == 0x224B1Cu) {
        ctx->pc = 0x224B1Cu;
            // 0x224b1c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x224B20u;
        goto label_224b20;
    }
    ctx->pc = 0x224B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224B20u);
        ctx->pc = 0x224B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B18u;
            // 0x224b1c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224B20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224B20u; }
            if (ctx->pc != 0x224B20u) { return; }
        }
        }
    }
    ctx->pc = 0x224B20u;
label_224b20:
    // 0x224b20: 0xc08923c  jal         func_2248F0
label_224b24:
    if (ctx->pc == 0x224B24u) {
        ctx->pc = 0x224B24u;
            // 0x224b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224B28u;
        goto label_224b28;
    }
    ctx->pc = 0x224B20u;
    SET_GPR_U32(ctx, 31, 0x224B28u);
    ctx->pc = 0x224B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224B20u;
            // 0x224b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248F0u;
    if (runtime->hasFunction(0x2248F0u)) {
        auto targetFn = runtime->lookupFunction(0x2248F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B28u; }
        if (ctx->pc != 0x224B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002248F0_0x2248f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224B28u; }
        if (ctx->pc != 0x224B28u) { return; }
    }
    ctx->pc = 0x224B28u;
label_224b28:
    // 0x224b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224b2c:
    // 0x224b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224b30:
    // 0x224b30: 0x3e00008  jr          $ra
label_224b34:
    if (ctx->pc == 0x224B34u) {
        ctx->pc = 0x224B34u;
            // 0x224b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224B38u;
        goto label_224b38;
    }
    ctx->pc = 0x224B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224B30u;
            // 0x224b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224B38u;
label_224b38:
    // 0x224b38: 0x0  nop
    ctx->pc = 0x224b38u;
    // NOP
label_224b3c:
    // 0x224b3c: 0x0  nop
    ctx->pc = 0x224b3cu;
    // NOP
}
