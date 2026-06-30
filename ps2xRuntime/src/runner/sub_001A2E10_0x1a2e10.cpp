#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2E10
// Address: 0x1a2e10 - 0x1a2e60
void sub_001A2E10_0x1a2e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E10_0x1a2e10");
#endif

    switch (ctx->pc) {
        case 0x1a2e24u: goto label_1a2e24;
        case 0x1a2e4cu: goto label_1a2e4c;
        default: break;
    }

    ctx->pc = 0x1a2e10u;

    // 0x1a2e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2e18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2e1c: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x1A2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E24u);
    ctx->pc = 0x1A2E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E1Cu;
            // 0x1a2e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E24u; }
        if (ctx->pc != 0x1A2E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E24u; }
        if (ctx->pc != 0x1A2E24u) { return; }
    }
    ctx->pc = 0x1A2E24u;
label_1a2e24:
    // 0x1a2e24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e30: 0x805c296  j           func_170A58
    ctx->pc = 0x1A2E30u;
    ctx->pc = 0x1A2E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E30u;
            // 0x1a2e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170A58_0x170a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2E38u;
    // 0x1a2e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2e44: 0xc05c396  jal         func_170E58
    ctx->pc = 0x1A2E44u;
    SET_GPR_U32(ctx, 31, 0x1A2E4Cu);
    ctx->pc = 0x1A2E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E44u;
            // 0x1a2e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E4Cu; }
        if (ctx->pc != 0x1A2E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2E4Cu; }
        if (ctx->pc != 0x1A2E4Cu) { return; }
    }
    ctx->pc = 0x1A2E4Cu;
label_1a2e4c:
    // 0x1a2e4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e58: 0x805c2b2  j           func_170AC8
    ctx->pc = 0x1A2E58u;
    ctx->pc = 0x1A2E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E58u;
            // 0x1a2e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC8u;
    if (runtime->hasFunction(0x170AC8u)) {
        auto targetFn = runtime->lookupFunction(0x170AC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170AC8_0x170ac8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2E60u;
}
