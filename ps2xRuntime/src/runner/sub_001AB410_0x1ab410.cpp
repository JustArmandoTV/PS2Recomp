#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB410
// Address: 0x1ab410 - 0x1ab480
void sub_001AB410_0x1ab410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB410_0x1ab410");
#endif

    switch (ctx->pc) {
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab438u: goto label_1ab438;
        default: break;
    }

    ctx->pc = 0x1ab410u;

    // 0x1ab410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab414: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ab414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ab418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab41c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab420: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AB420u;
    SET_GPR_U32(ctx, 31, 0x1AB428u);
    ctx->pc = 0x1AB424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB420u;
            // 0x1ab424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB428u; }
        if (ctx->pc != 0x1AB428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB428u; }
        if (ctx->pc != 0x1AB428u) { return; }
    }
    ctx->pc = 0x1AB428u;
label_1ab428:
    // 0x1ab428: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB428u;
    {
        const bool branch_taken_0x1ab428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB428u;
            // 0x1ab42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab428) {
            ctx->pc = 0x1AB470u;
            goto label_1ab470;
        }
    }
    ctx->pc = 0x1AB430u;
    // 0x1ab430: 0xc06a116  jal         func_1A8458
    ctx->pc = 0x1AB430u;
    SET_GPR_U32(ctx, 31, 0x1AB438u);
    ctx->pc = 0x1A8458u;
    if (runtime->hasFunction(0x1A8458u)) {
        auto targetFn = runtime->lookupFunction(0x1A8458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB438u; }
        if (ctx->pc != 0x1AB438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8458_0x1a8458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB438u; }
        if (ctx->pc != 0x1AB438u) { return; }
    }
    ctx->pc = 0x1AB438u;
label_1ab438:
    // 0x1ab438: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab43c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ab43cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab444: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB444u;
    {
        const bool branch_taken_0x1ab444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB444u;
            // 0x1ab448: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab444) {
            ctx->pc = 0x1AB460u;
            goto label_1ab460;
        }
    }
    ctx->pc = 0x1AB44Cu;
    // 0x1ab44c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB44Cu;
    {
        const bool branch_taken_0x1ab44c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AB450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB44Cu;
            // 0x1ab450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab44c) {
            ctx->pc = 0x1AB460u;
            goto label_1ab460;
        }
    }
    ctx->pc = 0x1AB454u;
    // 0x1ab454: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab458: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB458u;
    {
        const bool branch_taken_0x1ab458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AB45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB458u;
            // 0x1ab45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab458) {
            ctx->pc = 0x1AB474u;
            goto label_1ab474;
        }
    }
    ctx->pc = 0x1AB460u;
label_1ab460:
    // 0x1ab460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab468: 0x806ab74  j           func_1AADD0
    ctx->pc = 0x1AB468u;
    ctx->pc = 0x1AB46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB468u;
            // 0x1ab46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AB470u;
label_1ab470:
    // 0x1ab470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab474:
    // 0x1ab474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab478: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB478u;
            // 0x1ab47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB480u;
}
