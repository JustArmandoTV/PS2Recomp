#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C13D0
// Address: 0x4c13d0 - 0x4c1440
void sub_004C13D0_0x4c13d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C13D0_0x4c13d0");
#endif

    switch (ctx->pc) {
        case 0x4c1410u: goto label_4c1410;
        case 0x4c1428u: goto label_4c1428;
        default: break;
    }

    ctx->pc = 0x4c13d0u;

    // 0x4c13d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c13d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c13d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c13d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c13d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c13dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c13dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c13e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c13e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c13e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C13E4u;
    {
        const bool branch_taken_0x4c13e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C13E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C13E4u;
            // 0x4c13e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c13e4) {
            ctx->pc = 0x4C1428u;
            goto label_4c1428;
        }
    }
    ctx->pc = 0x4C13ECu;
    // 0x4c13ec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C13ECu;
    {
        const bool branch_taken_0x4c13ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c13ec) {
            ctx->pc = 0x4C13F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C13ECu;
            // 0x4c13f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1414u;
            goto label_4c1414;
        }
    }
    ctx->pc = 0x4C13F4u;
    // 0x4c13f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C13F4u;
    {
        const bool branch_taken_0x4c13f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c13f4) {
            ctx->pc = 0x4C1410u;
            goto label_4c1410;
        }
    }
    ctx->pc = 0x4C13FCu;
    // 0x4c13fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4c13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c1400: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C1400u;
    {
        const bool branch_taken_0x4c1400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1400) {
            ctx->pc = 0x4C1410u;
            goto label_4c1410;
        }
    }
    ctx->pc = 0x4C1408u;
    // 0x4c1408: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C1408u;
    SET_GPR_U32(ctx, 31, 0x4C1410u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1410u; }
        if (ctx->pc != 0x4C1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1410u; }
        if (ctx->pc != 0x4C1410u) { return; }
    }
    ctx->pc = 0x4C1410u;
label_4c1410:
    // 0x4c1410: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c1410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c1414:
    // 0x4c1414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c1414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c1418: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C1418u;
    {
        const bool branch_taken_0x4c1418 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c1418) {
            ctx->pc = 0x4C141Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1418u;
            // 0x4c141c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C142Cu;
            goto label_4c142c;
        }
    }
    ctx->pc = 0x4C1420u;
    // 0x4c1420: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C1420u;
    SET_GPR_U32(ctx, 31, 0x4C1428u);
    ctx->pc = 0x4C1424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1420u;
            // 0x4c1424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1428u; }
        if (ctx->pc != 0x4C1428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1428u; }
        if (ctx->pc != 0x4C1428u) { return; }
    }
    ctx->pc = 0x4C1428u;
label_4c1428:
    // 0x4c1428: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c1428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c142c:
    // 0x4c142c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c1430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c1430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c1434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1438: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1438u;
            // 0x4c143c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C1440u;
}
