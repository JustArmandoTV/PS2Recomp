#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D9F0
// Address: 0x34d9f0 - 0x34da60
void sub_0034D9F0_0x34d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D9F0_0x34d9f0");
#endif

    switch (ctx->pc) {
        case 0x34da2cu: goto label_34da2c;
        case 0x34da34u: goto label_34da34;
        default: break;
    }

    ctx->pc = 0x34d9f0u;

    // 0x34d9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34da00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34da00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x34da04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34da08: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x34da08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34da0c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DA0Cu;
    {
        const bool branch_taken_0x34da0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA0Cu;
            // 0x34da10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34da0c) {
            ctx->pc = 0x34DA34u;
            goto label_34da34;
        }
    }
    ctx->pc = 0x34DA14u;
    // 0x34da14: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x34da14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x34da18: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34da18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x34da1c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x34da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x34da20: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x34da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34da24: 0xc049e92  jal         func_127A48
    ctx->pc = 0x34DA24u;
    SET_GPR_U32(ctx, 31, 0x34DA2Cu);
    ctx->pc = 0x34DA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA24u;
            // 0x34da28: 0x24a530f0  addiu       $a1, $a1, 0x30F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA2Cu; }
        if (ctx->pc != 0x34DA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA2Cu; }
        if (ctx->pc != 0x34DA2Cu) { return; }
    }
    ctx->pc = 0x34DA2Cu;
label_34da2c:
    // 0x34da2c: 0xc04981a  jal         func_126068
    ctx->pc = 0x34DA2Cu;
    SET_GPR_U32(ctx, 31, 0x34DA34u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA34u; }
        if (ctx->pc != 0x34DA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA34u; }
        if (ctx->pc != 0x34DA34u) { return; }
    }
    ctx->pc = 0x34DA34u;
label_34da34:
    // 0x34da34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x34da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34da38: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x34da38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x34da3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34da40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34da40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34da44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34da44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34da48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34da4c: 0x3e00008  jr          $ra
    ctx->pc = 0x34DA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA4Cu;
            // 0x34da50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DA54u;
    // 0x34da54: 0x0  nop
    ctx->pc = 0x34da54u;
    // NOP
    // 0x34da58: 0x0  nop
    ctx->pc = 0x34da58u;
    // NOP
    // 0x34da5c: 0x0  nop
    ctx->pc = 0x34da5cu;
    // NOP
}
