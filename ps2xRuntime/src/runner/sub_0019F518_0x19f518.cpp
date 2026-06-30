#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F518
// Address: 0x19f518 - 0x19f5a0
void sub_0019F518_0x19f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F518_0x19f518");
#endif

    switch (ctx->pc) {
        case 0x19f518u: goto label_19f518;
        case 0x19f51cu: goto label_19f51c;
        case 0x19f520u: goto label_19f520;
        case 0x19f524u: goto label_19f524;
        case 0x19f528u: goto label_19f528;
        case 0x19f52cu: goto label_19f52c;
        case 0x19f530u: goto label_19f530;
        case 0x19f534u: goto label_19f534;
        case 0x19f538u: goto label_19f538;
        case 0x19f53cu: goto label_19f53c;
        case 0x19f540u: goto label_19f540;
        case 0x19f544u: goto label_19f544;
        case 0x19f548u: goto label_19f548;
        case 0x19f54cu: goto label_19f54c;
        case 0x19f550u: goto label_19f550;
        case 0x19f554u: goto label_19f554;
        case 0x19f558u: goto label_19f558;
        case 0x19f55cu: goto label_19f55c;
        case 0x19f560u: goto label_19f560;
        case 0x19f564u: goto label_19f564;
        case 0x19f568u: goto label_19f568;
        case 0x19f56cu: goto label_19f56c;
        case 0x19f570u: goto label_19f570;
        case 0x19f574u: goto label_19f574;
        case 0x19f578u: goto label_19f578;
        case 0x19f57cu: goto label_19f57c;
        case 0x19f580u: goto label_19f580;
        case 0x19f584u: goto label_19f584;
        case 0x19f588u: goto label_19f588;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f590u: goto label_19f590;
        case 0x19f594u: goto label_19f594;
        case 0x19f598u: goto label_19f598;
        case 0x19f59cu: goto label_19f59c;
        default: break;
    }

    ctx->pc = 0x19f518u;

label_19f518:
    // 0x19f518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19f51c:
    // 0x19f51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19f520:
    // 0x19f520: 0x8c8203f0  lw          $v0, 0x3F0($a0)
    ctx->pc = 0x19f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1008)));
label_19f524:
    // 0x19f524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f528:
    if (ctx->pc == 0x19F528u) {
        ctx->pc = 0x19F528u;
            // 0x19f528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F52Cu;
        goto label_19f52c;
    }
    ctx->pc = 0x19F524u;
    {
        const bool branch_taken_0x19f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F524u;
            // 0x19f528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f524) {
            ctx->pc = 0x19F53Cu;
            goto label_19f53c;
        }
    }
    ctx->pc = 0x19F52Cu;
label_19f52c:
    // 0x19f52c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f530:
    // 0x19f530: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_19f534:
    // 0x19f534: 0x60f809  jalr        $v1
label_19f538:
    if (ctx->pc == 0x19F538u) {
        ctx->pc = 0x19F53Cu;
        goto label_19f53c;
    }
    ctx->pc = 0x19F534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19F53Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F53Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F53Cu; }
            if (ctx->pc != 0x19F53Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19F53Cu;
label_19f53c:
    // 0x19f53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f540:
    // 0x19f540: 0x3e00008  jr          $ra
label_19f544:
    if (ctx->pc == 0x19F544u) {
        ctx->pc = 0x19F544u;
            // 0x19f544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19F548u;
        goto label_19f548;
    }
    ctx->pc = 0x19F540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F540u;
            // 0x19f544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F548u;
label_19f548:
    // 0x19f548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19f54c:
    // 0x19f54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f550:
    // 0x19f550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f554:
    // 0x19f554: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19f558:
    // 0x19f558: 0x8e0203f0  lw          $v0, 0x3F0($s0)
    ctx->pc = 0x19f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
label_19f55c:
    // 0x19f55c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19f560:
    if (ctx->pc == 0x19F560u) {
        ctx->pc = 0x19F560u;
            // 0x19f560: 0x26030408  addiu       $v1, $s0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
        ctx->pc = 0x19F564u;
        goto label_19f564;
    }
    ctx->pc = 0x19F55Cu;
    {
        const bool branch_taken_0x19f55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F55Cu;
            // 0x19f560: 0x26030408  addiu       $v1, $s0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f55c) {
            ctx->pc = 0x19F590u;
            goto label_19f590;
        }
    }
    ctx->pc = 0x19F564u;
label_19f564:
    // 0x19f564: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f568:
    // 0x19f568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19f56c:
    // 0x19f56c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_19f570:
    if (ctx->pc == 0x19F570u) {
        ctx->pc = 0x19F570u;
            // 0x19f570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x19F574u;
        goto label_19f574;
    }
    ctx->pc = 0x19F56Cu;
    {
        const bool branch_taken_0x19f56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f56c) {
            ctx->pc = 0x19F570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F56Cu;
            // 0x19f570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F594u;
            goto label_19f594;
        }
    }
    ctx->pc = 0x19F574u;
label_19f574:
    // 0x19f574: 0xc067d7a  jal         func_19F5E8
label_19f578:
    if (ctx->pc == 0x19F578u) {
        ctx->pc = 0x19F57Cu;
        goto label_19f57c;
    }
    ctx->pc = 0x19F574u;
    SET_GPR_U32(ctx, 31, 0x19F57Cu);
    ctx->pc = 0x19F5E8u;
    if (runtime->hasFunction(0x19F5E8u)) {
        auto targetFn = runtime->lookupFunction(0x19F5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F57Cu; }
        if (ctx->pc != 0x19F57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5E8_0x19f5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F57Cu; }
        if (ctx->pc != 0x19F57Cu) { return; }
    }
    ctx->pc = 0x19F57Cu;
label_19f57c:
    // 0x19f57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f580:
    // 0x19f580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f584:
    // 0x19f584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f588:
    // 0x19f588: 0x8067de6  j           func_19F798
label_19f58c:
    if (ctx->pc == 0x19F58Cu) {
        ctx->pc = 0x19F58Cu;
            // 0x19f58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19F590u;
        goto label_19f590;
    }
    ctx->pc = 0x19F588u;
    ctx->pc = 0x19F58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F588u;
            // 0x19f58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F798u;
    {
        auto targetFn = runtime->lookupFunction(0x19F798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19F590u;
label_19f590:
    // 0x19f590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f594:
    // 0x19f594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f598:
    // 0x19f598: 0x3e00008  jr          $ra
label_19f59c:
    if (ctx->pc == 0x19F59Cu) {
        ctx->pc = 0x19F59Cu;
            // 0x19f59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19F5A0u;
        goto label_fallthrough_0x19f598;
    }
    ctx->pc = 0x19F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F598u;
            // 0x19f59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x19f598:
    ctx->pc = 0x19F5A0u;
}
