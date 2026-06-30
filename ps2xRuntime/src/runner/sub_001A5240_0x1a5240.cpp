#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5240
// Address: 0x1a5240 - 0x1a5280
void sub_001A5240_0x1a5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5240_0x1a5240");
#endif

    switch (ctx->pc) {
        case 0x1a5258u: goto label_1a5258;
        case 0x1a5264u: goto label_1a5264;
        default: break;
    }

    ctx->pc = 0x1a5240u;

    // 0x1a5240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a524c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a5250: 0xc0694a0  jal         func_1A5280
    ctx->pc = 0x1A5250u;
    SET_GPR_U32(ctx, 31, 0x1A5258u);
    ctx->pc = 0x1A5254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5250u;
            // 0x1a5254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5280u;
    if (runtime->hasFunction(0x1A5280u)) {
        auto targetFn = runtime->lookupFunction(0x1A5280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5258u; }
        if (ctx->pc != 0x1A5258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5280_0x1a5280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5258u; }
        if (ctx->pc != 0x1A5258u) { return; }
    }
    ctx->pc = 0x1A5258u;
label_1a5258:
    // 0x1a5258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a525c: 0xc0694a0  jal         func_1A5280
    ctx->pc = 0x1A525Cu;
    SET_GPR_U32(ctx, 31, 0x1A5264u);
    ctx->pc = 0x1A5260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A525Cu;
            // 0x1a5260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5280u;
    if (runtime->hasFunction(0x1A5280u)) {
        auto targetFn = runtime->lookupFunction(0x1A5280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5264u; }
        if (ctx->pc != 0x1A5264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5280_0x1a5280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5264u; }
        if (ctx->pc != 0x1A5264u) { return; }
    }
    ctx->pc = 0x1A5264u;
label_1a5264:
    // 0x1a5264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5268: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a526c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5274: 0x80694a0  j           func_1A5280
    ctx->pc = 0x1A5274u;
    ctx->pc = 0x1A5278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5274u;
            // 0x1a5278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5280u;
    if (runtime->hasFunction(0x1A5280u)) {
        auto targetFn = runtime->lookupFunction(0x1A5280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A5280_0x1a5280(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A527Cu;
    // 0x1a527c: 0x0  nop
    ctx->pc = 0x1a527cu;
    // NOP
}
