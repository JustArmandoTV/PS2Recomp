#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040D530
// Address: 0x40d530 - 0x40d590
void sub_0040D530_0x40d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D530_0x40d530");
#endif

    switch (ctx->pc) {
        case 0x40d570u: goto label_40d570;
        default: break;
    }

    ctx->pc = 0x40d530u;

    // 0x40d530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40d534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40d538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40d53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40d53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d540: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x40D540u;
    {
        const bool branch_taken_0x40d540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d540) {
            ctx->pc = 0x40D544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D540u;
            // 0x40d544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D574u;
            goto label_40d574;
        }
    }
    ctx->pc = 0x40D548u;
    // 0x40d548: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40d54c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x40d54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x40d550: 0x2442ad98  addiu       $v0, $v0, -0x5268
    ctx->pc = 0x40d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946200));
    // 0x40d554: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x40d554u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x40d558: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40d558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x40d55c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x40d560: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x40D560u;
    {
        const bool branch_taken_0x40d560 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x40D564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D560u;
            // 0x40d564: 0xac407300  sw          $zero, 0x7300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d560) {
            ctx->pc = 0x40D570u;
            goto label_40d570;
        }
    }
    ctx->pc = 0x40D568u;
    // 0x40d568: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x40D568u;
    SET_GPR_U32(ctx, 31, 0x40D570u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D570u; }
        if (ctx->pc != 0x40D570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D570u; }
        if (ctx->pc != 0x40D570u) { return; }
    }
    ctx->pc = 0x40D570u;
label_40d570:
    // 0x40d570: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d574:
    // 0x40d574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40d578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40d57c: 0x3e00008  jr          $ra
    ctx->pc = 0x40D57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D57Cu;
            // 0x40d580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D584u;
    // 0x40d584: 0x0  nop
    ctx->pc = 0x40d584u;
    // NOP
    // 0x40d588: 0x0  nop
    ctx->pc = 0x40d588u;
    // NOP
    // 0x40d58c: 0x0  nop
    ctx->pc = 0x40d58cu;
    // NOP
}
