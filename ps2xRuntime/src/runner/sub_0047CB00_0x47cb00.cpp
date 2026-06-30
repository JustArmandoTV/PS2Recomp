#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CB00
// Address: 0x47cb00 - 0x47cb70
void sub_0047CB00_0x47cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CB00_0x47cb00");
#endif

    switch (ctx->pc) {
        case 0x47cb2cu: goto label_47cb2c;
        case 0x47cb30u: goto label_47cb30;
        case 0x47cb38u: goto label_47cb38;
        default: break;
    }

    ctx->pc = 0x47cb00u;

    // 0x47cb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47cb04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47cb08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47cb0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47cb10: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x47cb10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x47cb14: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x47CB14u;
    {
        const bool branch_taken_0x47cb14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CB14u;
            // 0x47cb18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47cb14) {
            ctx->pc = 0x47CB50u;
            goto label_47cb50;
        }
    }
    ctx->pc = 0x47CB1Cu;
    // 0x47cb1c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x47cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x47cb20: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x47cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x47cb24: 0xc04a508  jal         func_129420
    ctx->pc = 0x47CB24u;
    SET_GPR_U32(ctx, 31, 0x47CB2Cu);
    ctx->pc = 0x47CB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CB24u;
            // 0x47cb28: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CB2Cu; }
        if (ctx->pc != 0x47CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CB2Cu; }
        if (ctx->pc != 0x47CB2Cu) { return; }
    }
    ctx->pc = 0x47CB2Cu;
label_47cb2c:
    // 0x47cb2c: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x47cb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_47cb30:
    // 0x47cb30: 0xc11ef60  jal         func_47BD80
    ctx->pc = 0x47CB30u;
    SET_GPR_U32(ctx, 31, 0x47CB38u);
    ctx->pc = 0x47CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CB30u;
            // 0x47cb34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47BD80u;
    if (runtime->hasFunction(0x47BD80u)) {
        auto targetFn = runtime->lookupFunction(0x47BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CB38u; }
        if (ctx->pc != 0x47CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047BD80_0x47bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CB38u; }
        if (ctx->pc != 0x47CB38u) { return; }
    }
    ctx->pc = 0x47CB38u;
label_47cb38:
    // 0x47cb38: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47cb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x47cb3c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x47cb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x47cb40: 0x0  nop
    ctx->pc = 0x47cb40u;
    // NOP
    // 0x47cb44: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x47CB44u;
    {
        const bool branch_taken_0x47cb44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cb44) {
            ctx->pc = 0x47CB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47cb30;
        }
    }
    ctx->pc = 0x47CB4Cu;
    // 0x47cb4c: 0x0  nop
    ctx->pc = 0x47cb4cu;
    // NOP
label_47cb50:
    // 0x47cb50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47cb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47cb54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47cb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x47CB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CB5Cu;
            // 0x47cb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CB64u;
    // 0x47cb64: 0x0  nop
    ctx->pc = 0x47cb64u;
    // NOP
    // 0x47cb68: 0x0  nop
    ctx->pc = 0x47cb68u;
    // NOP
    // 0x47cb6c: 0x0  nop
    ctx->pc = 0x47cb6cu;
    // NOP
}
