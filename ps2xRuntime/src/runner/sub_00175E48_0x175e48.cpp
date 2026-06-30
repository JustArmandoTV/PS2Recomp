#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175E48
// Address: 0x175e48 - 0x175ea0
void sub_00175E48_0x175e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175E48_0x175e48");
#endif

    switch (ctx->pc) {
        case 0x175e7cu: goto label_175e7c;
        case 0x175e88u: goto label_175e88;
        default: break;
    }

    ctx->pc = 0x175e48u;

    // 0x175e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175e50: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e58: 0x805c00e  j           func_170038
    ctx->pc = 0x175E58u;
    ctx->pc = 0x175E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E58u;
            // 0x175e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170038u;
    {
        auto targetFn = runtime->lookupFunction(0x170038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x175E60u;
    // 0x175e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175e74: 0xc0599de  jal         func_166778
    ctx->pc = 0x175E74u;
    SET_GPR_U32(ctx, 31, 0x175E7Cu);
    ctx->pc = 0x175E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E74u;
            // 0x175e78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E7Cu; }
        if (ctx->pc != 0x175E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E7Cu; }
        if (ctx->pc != 0x175E7Cu) { return; }
    }
    ctx->pc = 0x175E7Cu;
label_175e7c:
    // 0x175e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e80: 0xc05d7a8  jal         func_175EA0
    ctx->pc = 0x175E80u;
    SET_GPR_U32(ctx, 31, 0x175E88u);
    ctx->pc = 0x175E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E80u;
            // 0x175e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175EA0u;
    if (runtime->hasFunction(0x175EA0u)) {
        auto targetFn = runtime->lookupFunction(0x175EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E88u; }
        if (ctx->pc != 0x175E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EA0_0x175ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E88u; }
        if (ctx->pc != 0x175E88u) { return; }
    }
    ctx->pc = 0x175E88u;
label_175e88:
    // 0x175e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e94: 0x80599e0  j           func_166780
    ctx->pc = 0x175E94u;
    ctx->pc = 0x175E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175E94u;
            // 0x175e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x175E9Cu;
    // 0x175e9c: 0x0  nop
    ctx->pc = 0x175e9cu;
    // NOP
}
