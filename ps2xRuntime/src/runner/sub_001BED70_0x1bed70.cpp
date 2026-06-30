#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BED70
// Address: 0x1bed70 - 0x1bedc8
void sub_001BED70_0x1bed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BED70_0x1bed70");
#endif

    switch (ctx->pc) {
        case 0x1bed84u: goto label_1bed84;
        case 0x1bed98u: goto label_1bed98;
        default: break;
    }

    ctx->pc = 0x1bed70u;

    // 0x1bed70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bed74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bed78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bed7c: 0xc06fb72  jal         func_1BEDC8
    ctx->pc = 0x1BED7Cu;
    SET_GPR_U32(ctx, 31, 0x1BED84u);
    ctx->pc = 0x1BEDC8u;
    if (runtime->hasFunction(0x1BEDC8u)) {
        auto targetFn = runtime->lookupFunction(0x1BEDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED84u; }
        if (ctx->pc != 0x1BED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEDC8_0x1bedc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED84u; }
        if (ctx->pc != 0x1BED84u) { return; }
    }
    ctx->pc = 0x1BED84u;
label_1bed84:
    // 0x1bed84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed88: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BED88u;
    {
        const bool branch_taken_0x1bed88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED88u;
            // 0x1bed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed88) {
            ctx->pc = 0x1BEDB8u;
            goto label_1bedb8;
        }
    }
    ctx->pc = 0x1BED90u;
    // 0x1bed90: 0xc06fb86  jal         func_1BEE18
    ctx->pc = 0x1BED90u;
    SET_GPR_U32(ctx, 31, 0x1BED98u);
    ctx->pc = 0x1BEE18u;
    if (runtime->hasFunction(0x1BEE18u)) {
        auto targetFn = runtime->lookupFunction(0x1BEE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED98u; }
        if (ctx->pc != 0x1BED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEE18_0x1bee18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED98u; }
        if (ctx->pc != 0x1BED98u) { return; }
    }
    ctx->pc = 0x1BED98u;
label_1bed98:
    // 0x1bed98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bed9c: 0x2463a240  addiu       $v1, $v1, -0x5DC0
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943296));
    // 0x1beda0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1beda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beda4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beda8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1beda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bedacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bedb0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1bedb4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1bedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1bedb8:
    // 0x1bedb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bedb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bedbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bedbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bedc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDC0u;
            // 0x1bedc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEDC8u;
}
