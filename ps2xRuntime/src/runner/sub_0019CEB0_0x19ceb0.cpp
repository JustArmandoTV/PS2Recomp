#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CEB0
// Address: 0x19ceb0 - 0x19cf20
void sub_0019CEB0_0x19ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CEB0_0x19ceb0");
#endif

    switch (ctx->pc) {
        case 0x19ced4u: goto label_19ced4;
        default: break;
    }

    ctx->pc = 0x19ceb0u;

    // 0x19ceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CEB8u;
    // 0x19ceb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19cec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cecc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19CECCu;
    SET_GPR_U32(ctx, 31, 0x19CED4u);
    ctx->pc = 0x19CED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CECCu;
            // 0x19ced0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CED4u; }
        if (ctx->pc != 0x19CED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CED4u; }
        if (ctx->pc != 0x19CED4u) { return; }
    }
    ctx->pc = 0x19CED4u;
label_19ced4:
    // 0x19ced4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19ced8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cedc: 0x24849700  addiu       $a0, $a0, -0x6900
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940416));
    // 0x19cee0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19CEE0u;
    {
        const bool branch_taken_0x19cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19CEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEE0u;
            // 0x19cee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cee0) {
            ctx->pc = 0x19CF00u;
            goto label_19cf00;
        }
    }
    ctx->pc = 0x19CEE8u;
    // 0x19cee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ceec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ceecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cef4: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19CEF4u;
    ctx->pc = 0x19CEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CEF4u;
            // 0x19cef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CEFCu;
    // 0x19cefc: 0x0  nop
    ctx->pc = 0x19cefcu;
    // NOP
label_19cf00:
    // 0x19cf00: 0xae11007c  sw          $s1, 0x7C($s0)
    ctx->pc = 0x19cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 17));
    // 0x19cf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19cf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cf0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf14: 0x80673c8  j           func_19CF20
    ctx->pc = 0x19CF14u;
    ctx->pc = 0x19CF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF14u;
            // 0x19cf18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF20u;
    if (runtime->hasFunction(0x19CF20u)) {
        auto targetFn = runtime->lookupFunction(0x19CF20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019CF20_0x19cf20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19CF1Cu;
    // 0x19cf1c: 0x0  nop
    ctx->pc = 0x19cf1cu;
    // NOP
}
