#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6880
// Address: 0x1a6880 - 0x1a68c8
void sub_001A6880_0x1a6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6880_0x1a6880");
#endif

    switch (ctx->pc) {
        case 0x1a6898u: goto label_1a6898;
        case 0x1a68acu: goto label_1a68ac;
        default: break;
    }

    ctx->pc = 0x1a6880u;

    // 0x1a6880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6884: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1a6884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1a6888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a688c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6890: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A6890u;
    SET_GPR_U32(ctx, 31, 0x1A6898u);
    ctx->pc = 0x1A6894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6890u;
            // 0x1a6894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6898u; }
        if (ctx->pc != 0x1A6898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6898u; }
        if (ctx->pc != 0x1A6898u) { return; }
    }
    ctx->pc = 0x1A6898u;
label_1a6898:
    // 0x1a6898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a689c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A689Cu;
    {
        const bool branch_taken_0x1a689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A68A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A689Cu;
            // 0x1a68a0: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a689c) {
            ctx->pc = 0x1A68B4u;
            goto label_1a68b4;
        }
    }
    ctx->pc = 0x1A68A4u;
    // 0x1a68a4: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A68A4u;
    SET_GPR_U32(ctx, 31, 0x1A68ACu);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68ACu; }
        if (ctx->pc != 0x1A68ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A68ACu; }
        if (ctx->pc != 0x1A68ACu) { return; }
    }
    ctx->pc = 0x1A68ACu;
label_1a68ac:
    // 0x1a68ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A68ACu;
    {
        const bool branch_taken_0x1a68ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68ACu;
            // 0x1a68b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68ac) {
            ctx->pc = 0x1A68BCu;
            goto label_1a68bc;
        }
    }
    ctx->pc = 0x1A68B4u;
label_1a68b4:
    // 0x1a68b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a68b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a68b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a68bc:
    // 0x1a68bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a68bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a68c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A68C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A68C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68C0u;
            // 0x1a68c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A68C8u;
}
