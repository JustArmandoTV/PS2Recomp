#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2500
// Address: 0x2c2500 - 0x2c2560
void sub_002C2500_0x2c2500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2500_0x2c2500");
#endif

    switch (ctx->pc) {
        case 0x2c2540u: goto label_2c2540;
        default: break;
    }

    ctx->pc = 0x2c2500u;

    // 0x2c2500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c250c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2510: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2510u;
    {
        const bool branch_taken_0x2c2510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2510) {
            ctx->pc = 0x2C2514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2510u;
            // 0x2c2514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2544u;
            goto label_2c2544;
        }
    }
    ctx->pc = 0x2C2518u;
    // 0x2c2518: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c251c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c2520: 0x24421470  addiu       $v0, $v0, 0x1470
    ctx->pc = 0x2c2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5232));
    // 0x2c2524: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2524u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2528: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c2528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c252c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c252cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c2530: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2530u;
    {
        const bool branch_taken_0x2c2530 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C2534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2530u;
            // 0x2c2534: 0xac400e28  sw          $zero, 0xE28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2530) {
            ctx->pc = 0x2C2540u;
            goto label_2c2540;
        }
    }
    ctx->pc = 0x2C2538u;
    // 0x2c2538: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C2538u;
    SET_GPR_U32(ctx, 31, 0x2C2540u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2540u; }
        if (ctx->pc != 0x2C2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2540u; }
        if (ctx->pc != 0x2C2540u) { return; }
    }
    ctx->pc = 0x2C2540u;
label_2c2540:
    // 0x2c2540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2544:
    // 0x2c2544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c254c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C254Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C254Cu;
            // 0x2c2550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2554u;
    // 0x2c2554: 0x0  nop
    ctx->pc = 0x2c2554u;
    // NOP
    // 0x2c2558: 0x0  nop
    ctx->pc = 0x2c2558u;
    // NOP
    // 0x2c255c: 0x0  nop
    ctx->pc = 0x2c255cu;
    // NOP
}
