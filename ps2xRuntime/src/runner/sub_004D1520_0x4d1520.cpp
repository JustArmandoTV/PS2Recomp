#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D1520
// Address: 0x4d1520 - 0x4d1580
void sub_004D1520_0x4d1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1520_0x4d1520");
#endif

    switch (ctx->pc) {
        case 0x4d1560u: goto label_4d1560;
        default: break;
    }

    ctx->pc = 0x4d1520u;

    // 0x4d1520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d1524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d1528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d152c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d152cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1530: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D1530u;
    {
        const bool branch_taken_0x4d1530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1530) {
            ctx->pc = 0x4D1534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1530u;
            // 0x4d1534: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1564u;
            goto label_4d1564;
        }
    }
    ctx->pc = 0x4D1538u;
    // 0x4d1538: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d1538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d153c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4d153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4d1540: 0x24422108  addiu       $v0, $v0, 0x2108
    ctx->pc = 0x4d1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8456));
    // 0x4d1544: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4d1544u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4d1548: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d1548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d154c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d154cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d1550: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1550u;
    {
        const bool branch_taken_0x4d1550 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4D1554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1550u;
            // 0x4d1554: 0xac40aa30  sw          $zero, -0x55D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1550) {
            ctx->pc = 0x4D1560u;
            goto label_4d1560;
        }
    }
    ctx->pc = 0x4D1558u;
    // 0x4d1558: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D1558u;
    SET_GPR_U32(ctx, 31, 0x4D1560u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1560u; }
        if (ctx->pc != 0x4D1560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1560u; }
        if (ctx->pc != 0x4D1560u) { return; }
    }
    ctx->pc = 0x4D1560u;
label_4d1560:
    // 0x4d1560: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d1560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d1564:
    // 0x4d1564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d156c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D156Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D156Cu;
            // 0x4d1570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1574u;
    // 0x4d1574: 0x0  nop
    ctx->pc = 0x4d1574u;
    // NOP
    // 0x4d1578: 0x0  nop
    ctx->pc = 0x4d1578u;
    // NOP
    // 0x4d157c: 0x0  nop
    ctx->pc = 0x4d157cu;
    // NOP
}
