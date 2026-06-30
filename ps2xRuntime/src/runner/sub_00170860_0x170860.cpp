#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170860
// Address: 0x170860 - 0x1708b8
void sub_00170860_0x170860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170860_0x170860");
#endif

    switch (ctx->pc) {
        case 0x17087cu: goto label_17087c;
        case 0x170884u: goto label_170884;
        default: break;
    }

    ctx->pc = 0x170860u;

    // 0x170860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17086c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x17086Cu;
    {
        const bool branch_taken_0x17086c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17086Cu;
            // 0x170870: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17086c) {
            ctx->pc = 0x1708A8u;
            goto label_1708a8;
        }
    }
    ctx->pc = 0x170874u;
    // 0x170874: 0xc05c396  jal         func_170E58
    ctx->pc = 0x170874u;
    SET_GPR_U32(ctx, 31, 0x17087Cu);
    ctx->pc = 0x170E58u;
    if (runtime->hasFunction(0x170E58u)) {
        auto targetFn = runtime->lookupFunction(0x170E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17087Cu; }
        if (ctx->pc != 0x17087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E58_0x170e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17087Cu; }
        if (ctx->pc != 0x17087Cu) { return; }
    }
    ctx->pc = 0x17087Cu;
label_17087c:
    // 0x17087c: 0xc05c2b2  jal         func_170AC8
    ctx->pc = 0x17087Cu;
    SET_GPR_U32(ctx, 31, 0x170884u);
    ctx->pc = 0x170880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17087Cu;
            // 0x170880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AC8u;
    if (runtime->hasFunction(0x170AC8u)) {
        auto targetFn = runtime->lookupFunction(0x170AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170884u; }
        if (ctx->pc != 0x170884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170AC8_0x170ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170884u; }
        if (ctx->pc != 0x170884u) { return; }
    }
    ctx->pc = 0x170884u;
label_170884:
    // 0x170884: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x170884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x170888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17088c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17088cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170890: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170898: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x17089c: 0x804a576  j           func_1295D8
    ctx->pc = 0x17089Cu;
    ctx->pc = 0x1708A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17089Cu;
            // 0x1708a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1708A4u;
    // 0x1708a4: 0x0  nop
    ctx->pc = 0x1708a4u;
    // NOP
label_1708a8:
    // 0x1708a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1708a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1708ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1708acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1708b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1708B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1708B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708B0u;
            // 0x1708b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1708B8u;
}
