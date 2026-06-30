#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B13C0
// Address: 0x3b13c0 - 0x3b1460
void sub_003B13C0_0x3b13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B13C0_0x3b13c0");
#endif

    switch (ctx->pc) {
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b1404u: goto label_3b1404;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1440u: goto label_3b1440;
        default: break;
    }

    ctx->pc = 0x3b13c0u;

    // 0x3b13c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b13c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b13c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b13c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b13cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b13d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b13d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b13d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b13d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b13d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b13dc: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B13DCu;
    {
        const bool branch_taken_0x3b13dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B13DCu;
            // 0x3b13e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13dc) {
            ctx->pc = 0x3B1440u;
            goto label_3b1440;
        }
    }
    ctx->pc = 0x3B13E4u;
    // 0x3b13e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b13e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b13e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b13ec: 0x24428910  addiu       $v0, $v0, -0x76F0
    ctx->pc = 0x3b13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936848));
    // 0x3b13f0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3b13f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b13f4: 0xae620374  sw          $v0, 0x374($s3)
    ctx->pc = 0x3b13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 884), GPR_U32(ctx, 2));
label_3b13f8:
    // 0x3b13f8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x3b13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x3b13fc: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3B13FCu;
    SET_GPR_U32(ctx, 31, 0x3B1404u);
    ctx->pc = 0x3B1400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B13FCu;
            // 0x3b1400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1404u; }
        if (ctx->pc != 0x3B1404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1404u; }
        if (ctx->pc != 0x3B1404u) { return; }
    }
    ctx->pc = 0x3B1404u;
label_3b1404:
    // 0x3b1404: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x3b1404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x3b1408: 0xc1109cc  jal         func_442730
    ctx->pc = 0x3B1408u;
    SET_GPR_U32(ctx, 31, 0x3B1410u);
    ctx->pc = 0x3B140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1408u;
            // 0x3b140c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442730u;
    if (runtime->hasFunction(0x442730u)) {
        auto targetFn = runtime->lookupFunction(0x442730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1410u; }
        if (ctx->pc != 0x3B1410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442730_0x442730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1410u; }
        if (ctx->pc != 0x3B1410u) { return; }
    }
    ctx->pc = 0x3B1410u;
label_3b1410:
    // 0x3b1410: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3b1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b1414: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b1414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b1418: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3b1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b141c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3b141cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b1420: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3B1420u;
    {
        const bool branch_taken_0x3b1420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1420u;
            // 0x3b1424: 0x261000b8  addiu       $s0, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1420) {
            ctx->pc = 0x3B13F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b13f8;
        }
    }
    ctx->pc = 0x3B1428u;
    // 0x3b1428: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x3b1428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3b142c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b142cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b1430: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1430u;
    {
        const bool branch_taken_0x3b1430 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b1430) {
            ctx->pc = 0x3B1434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1430u;
            // 0x3b1434: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B1444u;
            goto label_3b1444;
        }
    }
    ctx->pc = 0x3B1438u;
    // 0x3b1438: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B1438u;
    SET_GPR_U32(ctx, 31, 0x3B1440u);
    ctx->pc = 0x3B143Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1438u;
            // 0x3b143c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1440u; }
        if (ctx->pc != 0x3B1440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B1440u; }
        if (ctx->pc != 0x3B1440u) { return; }
    }
    ctx->pc = 0x3B1440u;
label_3b1440:
    // 0x3b1440: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b1444:
    // 0x3b1444: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b1444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b1448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b1448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b144c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b144cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b1450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b1454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1458: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B1458u;
            // 0x3b145c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B1460u;
}
