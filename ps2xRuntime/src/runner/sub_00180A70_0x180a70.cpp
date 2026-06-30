#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180A70
// Address: 0x180a70 - 0x180ab0
void sub_00180A70_0x180a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180A70_0x180a70");
#endif

    switch (ctx->pc) {
        case 0x180a8cu: goto label_180a8c;
        case 0x180a98u: goto label_180a98;
        default: break;
    }

    ctx->pc = 0x180a70u;

    // 0x180a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180a84: 0xc06031a  jal         func_180C68
    ctx->pc = 0x180A84u;
    SET_GPR_U32(ctx, 31, 0x180A8Cu);
    ctx->pc = 0x180A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A84u;
            // 0x180a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A8Cu; }
        if (ctx->pc != 0x180A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A8Cu; }
        if (ctx->pc != 0x180A8Cu) { return; }
    }
    ctx->pc = 0x180A8Cu;
label_180a8c:
    // 0x180a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a90: 0xc0602ac  jal         func_180AB0
    ctx->pc = 0x180A90u;
    SET_GPR_U32(ctx, 31, 0x180A98u);
    ctx->pc = 0x180A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A90u;
            // 0x180a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180AB0u;
    if (runtime->hasFunction(0x180AB0u)) {
        auto targetFn = runtime->lookupFunction(0x180AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A98u; }
        if (ctx->pc != 0x180A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180AB0_0x180ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A98u; }
        if (ctx->pc != 0x180A98u) { return; }
    }
    ctx->pc = 0x180A98u;
label_180a98:
    // 0x180a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180aa4: 0x806031c  j           func_180C70
    ctx->pc = 0x180AA4u;
    ctx->pc = 0x180AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180AA4u;
            // 0x180aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180AACu;
    // 0x180aac: 0x0  nop
    ctx->pc = 0x180aacu;
    // NOP
}
