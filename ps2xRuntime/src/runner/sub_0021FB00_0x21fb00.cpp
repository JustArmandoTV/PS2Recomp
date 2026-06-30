#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FB00
// Address: 0x21fb00 - 0x21fba0
void sub_0021FB00_0x21fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FB00_0x21fb00");
#endif

    switch (ctx->pc) {
        case 0x21fb20u: goto label_21fb20;
        case 0x21fb5cu: goto label_21fb5c;
        default: break;
    }

    ctx->pc = 0x21fb00u;

    // 0x21fb00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21fb04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21fb08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21fb0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fb10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21fb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fb18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21fb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fb1c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x21fb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fb20:
    // 0x21fb20: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x21fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21fb24: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x21FB24u;
    {
        const bool branch_taken_0x21fb24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fb24) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FB2Cu;
    // 0x21fb2c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x21fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x21fb30: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x21fb34: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x21fb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x21fb38: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x21fb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x21fb3c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FB3Cu;
    {
        const bool branch_taken_0x21fb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb3c) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FB44u;
    // 0x21fb44: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x21fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21fb48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FB48u;
    {
        const bool branch_taken_0x21fb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fb48) {
            ctx->pc = 0x21FB60u;
            goto label_21fb60;
        }
    }
    ctx->pc = 0x21FB50u;
    // 0x21fb50: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x21fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x21fb54: 0xc08d40c  jal         func_235030
    ctx->pc = 0x21FB54u;
    SET_GPR_U32(ctx, 31, 0x21FB5Cu);
    ctx->pc = 0x21FB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB54u;
            // 0x21fb58: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB5Cu; }
        if (ctx->pc != 0x21FB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB5Cu; }
        if (ctx->pc != 0x21FB5Cu) { return; }
    }
    ctx->pc = 0x21FB5Cu;
label_21fb5c:
    // 0x21fb5c: 0x0  nop
    ctx->pc = 0x21fb5cu;
    // NOP
label_21fb60:
    // 0x21fb60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21fb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21fb64: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x21fb64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21fb68: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21FB68u;
    {
        const bool branch_taken_0x21fb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB68u;
            // 0x21fb6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb68) {
            ctx->pc = 0x21FB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21fb20;
        }
    }
    ctx->pc = 0x21FB70u;
    // 0x21fb70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21fb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21fb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21fb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21fb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB80u;
            // 0x21fb84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FB88u;
    // 0x21fb88: 0x0  nop
    ctx->pc = 0x21fb88u;
    // NOP
    // 0x21fb8c: 0x0  nop
    ctx->pc = 0x21fb8cu;
    // NOP
    // 0x21fb90: 0x3e00008  jr          $ra
    ctx->pc = 0x21FB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB90u;
            // 0x21fb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FB98u;
    // 0x21fb98: 0x0  nop
    ctx->pc = 0x21fb98u;
    // NOP
    // 0x21fb9c: 0x0  nop
    ctx->pc = 0x21fb9cu;
    // NOP
}
