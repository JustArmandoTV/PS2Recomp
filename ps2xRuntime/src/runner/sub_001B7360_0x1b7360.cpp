#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7360
// Address: 0x1b7360 - 0x1b73d0
void sub_001B7360_0x1b7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7360_0x1b7360");
#endif

    switch (ctx->pc) {
        case 0x1b7384u: goto label_1b7384;
        default: break;
    }

    ctx->pc = 0x1b7360u;

    // 0x1b7360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b736c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b736cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7370: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b7370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b7378: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b7378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b737c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B737Cu;
    SET_GPR_U32(ctx, 31, 0x1B7384u);
    ctx->pc = 0x1B7380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B737Cu;
            // 0x1b7380: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7384u; }
        if (ctx->pc != 0x1B7384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7384u; }
        if (ctx->pc != 0x1B7384u) { return; }
    }
    ctx->pc = 0x1B7384u;
label_1b7384:
    // 0x1b7384: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b738c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B738Cu;
    {
        const bool branch_taken_0x1b738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B738Cu;
            // 0x1b7390: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b738c) {
            ctx->pc = 0x1B73B0u;
            goto label_1b73b0;
        }
    }
    ctx->pc = 0x1B7394u;
    // 0x1b7394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b739c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b739cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b73a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b73a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b73a4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B73A4u;
    ctx->pc = 0x1B73A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73A4u;
            // 0x1b73a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B73ACu;
    // 0x1b73ac: 0x0  nop
    ctx->pc = 0x1b73acu;
    // NOP
label_1b73b0:
    // 0x1b73b0: 0xae111060  sw          $s1, 0x1060($s0)
    ctx->pc = 0x1b73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 17));
    // 0x1b73b4: 0xae12105c  sw          $s2, 0x105C($s0)
    ctx->pc = 0x1b73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4188), GPR_U32(ctx, 18));
    // 0x1b73b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b73b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b73bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b73bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b73c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b73c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b73c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b73c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b73c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B73C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B73CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73C8u;
            // 0x1b73cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B73D0u;
}
