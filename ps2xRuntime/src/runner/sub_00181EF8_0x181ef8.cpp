#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181EF8
// Address: 0x181ef8 - 0x181f48
void sub_00181EF8_0x181ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181EF8_0x181ef8");
#endif

    switch (ctx->pc) {
        case 0x181f18u: goto label_181f18;
        case 0x181f2cu: goto label_181f2c;
        case 0x181f34u: goto label_181f34;
        default: break;
    }

    ctx->pc = 0x181ef8u;

    // 0x181ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181f04: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x181f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x181f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f0c: 0x804a576  j           func_1295D8
    ctx->pc = 0x181F0Cu;
    ctx->pc = 0x181F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F0Cu;
            // 0x181f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181F14u;
    // 0x181f14: 0x0  nop
    ctx->pc = 0x181f14u;
    // NOP
label_181f18:
    // 0x181f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x181f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x181f24: 0xc060704  jal         func_181C10
    ctx->pc = 0x181F24u;
    SET_GPR_U32(ctx, 31, 0x181F2Cu);
    ctx->pc = 0x181F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F24u;
            // 0x181f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F2Cu; }
        if (ctx->pc != 0x181F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F2Cu; }
        if (ctx->pc != 0x181F2Cu) { return; }
    }
    ctx->pc = 0x181F2Cu;
label_181f2c:
    // 0x181f2c: 0xc0607d2  jal         func_181F48
    ctx->pc = 0x181F2Cu;
    SET_GPR_U32(ctx, 31, 0x181F34u);
    ctx->pc = 0x181F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F2Cu;
            // 0x181f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F48u;
    if (runtime->hasFunction(0x181F48u)) {
        auto targetFn = runtime->lookupFunction(0x181F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F34u; }
        if (ctx->pc != 0x181F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181F48_0x181f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F34u; }
        if (ctx->pc != 0x181F34u) { return; }
    }
    ctx->pc = 0x181F34u;
label_181f34:
    // 0x181f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181f3c: 0x806070a  j           func_181C28
    ctx->pc = 0x181F3Cu;
    ctx->pc = 0x181F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F3Cu;
            // 0x181f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181F44u;
    // 0x181f44: 0x0  nop
    ctx->pc = 0x181f44u;
    // NOP
}
