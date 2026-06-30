#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034DF70
// Address: 0x34df70 - 0x34dfb0
void sub_0034DF70_0x34df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DF70_0x34df70");
#endif

    switch (ctx->pc) {
        case 0x34df98u: goto label_34df98;
        default: break;
    }

    ctx->pc = 0x34df70u;

    // 0x34df70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34df74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34df78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34df7c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x34df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34df80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DF80u;
    {
        const bool branch_taken_0x34df80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF80u;
            // 0x34df84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df80) {
            ctx->pc = 0x34DF9Cu;
            goto label_34df9c;
        }
    }
    ctx->pc = 0x34DF88u;
    // 0x34df88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34df88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x34df8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x34df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x34df90: 0xc08c8fc  jal         func_2323F0
    ctx->pc = 0x34DF90u;
    SET_GPR_U32(ctx, 31, 0x34DF98u);
    ctx->pc = 0x34DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF90u;
            // 0x34df94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF98u; }
        if (ctx->pc != 0x34DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF98u; }
        if (ctx->pc != 0x34DF98u) { return; }
    }
    ctx->pc = 0x34DF98u;
label_34df98:
    // 0x34df98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34df98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_34df9c:
    // 0x34df9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dfa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34dfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x34DFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DFA4u;
            // 0x34dfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DFACu;
    // 0x34dfac: 0x0  nop
    ctx->pc = 0x34dfacu;
    // NOP
}
