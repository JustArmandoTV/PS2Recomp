#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A14F0
// Address: 0x4a14f0 - 0x4a1560
void sub_004A14F0_0x4a14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A14F0_0x4a14f0");
#endif

    switch (ctx->pc) {
        case 0x4a1530u: goto label_4a1530;
        case 0x4a1548u: goto label_4a1548;
        default: break;
    }

    ctx->pc = 0x4a14f0u;

    // 0x4a14f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a14f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a14f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a14fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a1500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a1500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a1504: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A1504u;
    {
        const bool branch_taken_0x4a1504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1504u;
            // 0x4a1508: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1504) {
            ctx->pc = 0x4A1548u;
            goto label_4a1548;
        }
    }
    ctx->pc = 0x4A150Cu;
    // 0x4a150c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A150Cu;
    {
        const bool branch_taken_0x4a150c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a150c) {
            ctx->pc = 0x4A1510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A150Cu;
            // 0x4a1510: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A1534u;
            goto label_4a1534;
        }
    }
    ctx->pc = 0x4A1514u;
    // 0x4a1514: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A1514u;
    {
        const bool branch_taken_0x4a1514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1514) {
            ctx->pc = 0x4A1530u;
            goto label_4a1530;
        }
    }
    ctx->pc = 0x4A151Cu;
    // 0x4a151c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4a151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a1520: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A1520u;
    {
        const bool branch_taken_0x4a1520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1520) {
            ctx->pc = 0x4A1530u;
            goto label_4a1530;
        }
    }
    ctx->pc = 0x4A1528u;
    // 0x4a1528: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A1528u;
    SET_GPR_U32(ctx, 31, 0x4A1530u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1530u; }
        if (ctx->pc != 0x4A1530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1530u; }
        if (ctx->pc != 0x4A1530u) { return; }
    }
    ctx->pc = 0x4A1530u;
label_4a1530:
    // 0x4a1530: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4a1530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4a1534:
    // 0x4a1534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a1534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4a1538: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1538u;
    {
        const bool branch_taken_0x4a1538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a1538) {
            ctx->pc = 0x4A153Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1538u;
            // 0x4a153c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A154Cu;
            goto label_4a154c;
        }
    }
    ctx->pc = 0x4A1540u;
    // 0x4a1540: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A1540u;
    SET_GPR_U32(ctx, 31, 0x4A1548u);
    ctx->pc = 0x4A1544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1540u;
            // 0x4a1544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1548u; }
        if (ctx->pc != 0x4A1548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A1548u; }
        if (ctx->pc != 0x4A1548u) { return; }
    }
    ctx->pc = 0x4A1548u;
label_4a1548:
    // 0x4a1548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a1548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a154c:
    // 0x4a154c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a1550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a1550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a1554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a1554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1558: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A155Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A1558u;
            // 0x4a155c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1560u;
}
