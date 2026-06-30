#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199408
// Address: 0x199408 - 0x1994b0
void sub_00199408_0x199408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199408_0x199408");
#endif

    switch (ctx->pc) {
        case 0x19943cu: goto label_19943c;
        case 0x199464u: goto label_199464;
        case 0x199478u: goto label_199478;
        case 0x199498u: goto label_199498;
        default: break;
    }

    ctx->pc = 0x199408u;

    // 0x199408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19940c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19940cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19941c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199420: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x199424: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x199424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x199428: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199428u;
    {
        const bool branch_taken_0x199428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199428u;
            // 0x19942c: 0x26230460  addiu       $v1, $s1, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199428) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x199430u;
    // 0x199430: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x199434: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x199434u;
    SET_GPR_U32(ctx, 31, 0x19943Cu);
    ctx->pc = 0x199438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199434u;
            // 0x199438: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19943Cu; }
        if (ctx->pc != 0x19943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19943Cu; }
        if (ctx->pc != 0x19943Cu) { return; }
    }
    ctx->pc = 0x19943Cu;
label_19943c:
    // 0x19943c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19943Cu;
    {
        const bool branch_taken_0x19943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19943Cu;
            // 0x199440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19943c) {
            ctx->pc = 0x19949Cu;
            goto label_19949c;
        }
    }
    ctx->pc = 0x199444u;
    // 0x199444: 0x0  nop
    ctx->pc = 0x199444u;
    // NOP
label_199448:
    // 0x199448: 0x4c00014  bltz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x199448u;
    {
        const bool branch_taken_0x199448 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x19944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199448u;
            // 0x19944c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199448) {
            ctx->pc = 0x19949Cu;
            goto label_19949c;
        }
    }
    ctx->pc = 0x199450u;
    // 0x199450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199454u;
    {
        const bool branch_taken_0x199454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199454) {
            ctx->pc = 0x199470u;
            goto label_199470;
        }
    }
    ctx->pc = 0x19945Cu;
    // 0x19945c: 0xc06652c  jal         func_1994B0
    ctx->pc = 0x19945Cu;
    SET_GPR_U32(ctx, 31, 0x199464u);
    ctx->pc = 0x1994B0u;
    if (runtime->hasFunction(0x1994B0u)) {
        auto targetFn = runtime->lookupFunction(0x1994B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199464u; }
        if (ctx->pc != 0x199464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001994B0_0x1994b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199464u; }
        if (ctx->pc != 0x199464u) { return; }
    }
    ctx->pc = 0x199464u;
label_199464:
    // 0x199464: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199464u;
    {
        const bool branch_taken_0x199464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199464u;
            // 0x199468: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199464) {
            ctx->pc = 0x19947Cu;
            goto label_19947c;
        }
    }
    ctx->pc = 0x19946Cu;
    // 0x19946c: 0x0  nop
    ctx->pc = 0x19946cu;
    // NOP
label_199470:
    // 0x199470: 0xc06653a  jal         func_1994E8
    ctx->pc = 0x199470u;
    SET_GPR_U32(ctx, 31, 0x199478u);
    ctx->pc = 0x199474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199470u;
            // 0x199474: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E8u;
    if (runtime->hasFunction(0x1994E8u)) {
        auto targetFn = runtime->lookupFunction(0x1994E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199478u; }
        if (ctx->pc != 0x199478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001994E8_0x1994e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199478u; }
        if (ctx->pc != 0x199478u) { return; }
    }
    ctx->pc = 0x199478u;
label_199478:
    // 0x199478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19947c:
    // 0x19947c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19947Cu;
    {
        const bool branch_taken_0x19947c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19947Cu;
            // 0x199480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19947c) {
            ctx->pc = 0x199498u;
            goto label_199498;
        }
    }
    ctx->pc = 0x199484u;
    // 0x199484: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x199484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
    // 0x199488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19948c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199490: 0xc066584  jal         func_199610
    ctx->pc = 0x199490u;
    SET_GPR_U32(ctx, 31, 0x199498u);
    ctx->pc = 0x199494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199490u;
            // 0x199494: 0xac500478  sw          $s0, 0x478($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199610u;
    if (runtime->hasFunction(0x199610u)) {
        auto targetFn = runtime->lookupFunction(0x199610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199498u; }
        if (ctx->pc != 0x199498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199610_0x199610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199498u; }
        if (ctx->pc != 0x199498u) { return; }
    }
    ctx->pc = 0x199498u;
label_199498:
    // 0x199498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19949c:
    // 0x19949c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19949cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1994a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1994a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1994a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1994a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1994a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1994A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1994ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1994A8u;
            // 0x1994ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1994B0u;
}
