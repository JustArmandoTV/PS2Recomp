#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034DA60
// Address: 0x34da60 - 0x34dad0
void sub_0034DA60_0x34da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DA60_0x34da60");
#endif

    switch (ctx->pc) {
        case 0x34da9cu: goto label_34da9c;
        case 0x34daa4u: goto label_34daa4;
        default: break;
    }

    ctx->pc = 0x34da60u;

    // 0x34da60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34da64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34da68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34da6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34da70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34da70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x34da74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34da78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x34da78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34da7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DA7Cu;
    {
        const bool branch_taken_0x34da7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA7Cu;
            // 0x34da80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34da7c) {
            ctx->pc = 0x34DAA4u;
            goto label_34daa4;
        }
    }
    ctx->pc = 0x34DA84u;
    // 0x34da84: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x34da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x34da88: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34da88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x34da8c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x34da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x34da90: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x34da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34da94: 0xc049e92  jal         func_127A48
    ctx->pc = 0x34DA94u;
    SET_GPR_U32(ctx, 31, 0x34DA9Cu);
    ctx->pc = 0x34DA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA94u;
            // 0x34da98: 0x24a530f0  addiu       $a1, $a1, 0x30F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA9Cu; }
        if (ctx->pc != 0x34DA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA9Cu; }
        if (ctx->pc != 0x34DA9Cu) { return; }
    }
    ctx->pc = 0x34DA9Cu;
label_34da9c:
    // 0x34da9c: 0xc04981a  jal         func_126068
    ctx->pc = 0x34DA9Cu;
    SET_GPR_U32(ctx, 31, 0x34DAA4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DAA4u; }
        if (ctx->pc != 0x34DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DAA4u; }
        if (ctx->pc != 0x34DAA4u) { return; }
    }
    ctx->pc = 0x34DAA4u;
label_34daa4:
    // 0x34daa4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x34daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34daa8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x34daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x34daac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34daacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34dab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34dab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34dab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34dabc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DABCu;
            // 0x34dac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DAC4u;
    // 0x34dac4: 0x0  nop
    ctx->pc = 0x34dac4u;
    // NOP
    // 0x34dac8: 0x0  nop
    ctx->pc = 0x34dac8u;
    // NOP
    // 0x34dacc: 0x0  nop
    ctx->pc = 0x34daccu;
    // NOP
}
