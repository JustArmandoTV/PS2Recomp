#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DF58
// Address: 0x11df58 - 0x11dfc8
void sub_0011DF58_0x11df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DF58_0x11df58");
#endif

    switch (ctx->pc) {
        case 0x11df8cu: goto label_11df8c;
        case 0x11df94u: goto label_11df94;
        case 0x11dfa8u: goto label_11dfa8;
        default: break;
    }

    ctx->pc = 0x11df58u;

    // 0x11df58: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11df5c: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11df5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11df60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11df64: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11df64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11df68: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11df68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11df6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11df70: 0x35ce0fda  ori         $t6, $t6, 0xFDA
    ctx->pc = 0x11df70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4058);
    // 0x11df74: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11df74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11df78: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11df78u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11df7c: 0x15c00008  bnez        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DF7Cu;
    {
        const bool branch_taken_0x11df7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x11df7c) {
            ctx->pc = 0x11DFA0u;
            goto label_11dfa0;
        }
    }
    ctx->pc = 0x11DF84u;
    // 0x11df84: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11df84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11df88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11df8c:
    // 0x11df8c: 0xc0472f0  jal         func_11CBC0
    ctx->pc = 0x11DF8Cu;
    SET_GPR_U32(ctx, 31, 0x11DF94u);
    ctx->pc = 0x11CBC0u;
    if (runtime->hasFunction(0x11CBC0u)) {
        auto targetFn = runtime->lookupFunction(0x11CBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF94u; }
        if (ctx->pc != 0x11DF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CBC0_0x11cbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF94u; }
        if (ctx->pc != 0x11DF94u) { return; }
    }
    ctx->pc = 0x11DF94u;
label_11df94:
    // 0x11df94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11df94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11df98: 0x3e00008  jr          $ra
    ctx->pc = 0x11DF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF98u;
            // 0x11df9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DFA0u;
label_11dfa0:
    // 0x11dfa0: 0xc046ba0  jal         func_11AE80
    ctx->pc = 0x11DFA0u;
    SET_GPR_U32(ctx, 31, 0x11DFA8u);
    ctx->pc = 0x11DFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFA0u;
            // 0x11dfa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AE80u;
    if (runtime->hasFunction(0x11AE80u)) {
        auto targetFn = runtime->lookupFunction(0x11AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFA8u; }
        if (ctx->pc != 0x11DFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AE80_0x11ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFA8u; }
        if (ctx->pc != 0x11DFA8u) { return; }
    }
    ctx->pc = 0x11DFA8u;
label_11dfa8:
    // 0x11dfa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11dfac: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11dfb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11dfb4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11dfb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dfbc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11DFBCu;
    {
        const bool branch_taken_0x11dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFBCu;
            // 0x11dfc0: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfbc) {
            ctx->pc = 0x11DF8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11df8c;
        }
    }
    ctx->pc = 0x11DFC4u;
    // 0x11dfc4: 0x0  nop
    ctx->pc = 0x11dfc4u;
    // NOP
}
