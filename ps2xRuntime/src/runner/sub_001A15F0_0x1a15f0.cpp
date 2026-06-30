#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A15F0
// Address: 0x1a15f0 - 0x1a1658
void sub_001A15F0_0x1a15f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A15F0_0x1a15f0");
#endif

    switch (ctx->pc) {
        case 0x1a15f0u: goto label_1a15f0;
        case 0x1a15f4u: goto label_1a15f4;
        case 0x1a15f8u: goto label_1a15f8;
        case 0x1a15fcu: goto label_1a15fc;
        case 0x1a1600u: goto label_1a1600;
        case 0x1a1604u: goto label_1a1604;
        case 0x1a1608u: goto label_1a1608;
        case 0x1a160cu: goto label_1a160c;
        case 0x1a1610u: goto label_1a1610;
        case 0x1a1614u: goto label_1a1614;
        case 0x1a1618u: goto label_1a1618;
        case 0x1a161cu: goto label_1a161c;
        case 0x1a1620u: goto label_1a1620;
        case 0x1a1624u: goto label_1a1624;
        case 0x1a1628u: goto label_1a1628;
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1630u: goto label_1a1630;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a1638u: goto label_1a1638;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1640u: goto label_1a1640;
        case 0x1a1644u: goto label_1a1644;
        case 0x1a1648u: goto label_1a1648;
        case 0x1a164cu: goto label_1a164c;
        case 0x1a1650u: goto label_1a1650;
        case 0x1a1654u: goto label_1a1654;
        default: break;
    }

    ctx->pc = 0x1a15f0u;

label_1a15f0:
    // 0x1a15f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a15f4:
    // 0x1a15f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a15f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a15f8:
    // 0x1a15f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a15fc:
    // 0x1a15fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a15fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1600:
    // 0x1a1600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a1600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a1604:
    // 0x1a1604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1608:
    // 0x1a1608: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a160c:
    // 0x1a160c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1610:
    // 0x1a1610: 0x261004f8  addiu       $s0, $s0, 0x4F8
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
label_1a1614:
    // 0x1a1614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1618:
    // 0x1a1618: 0xc0685d4  jal         func_1A1750
label_1a161c:
    if (ctx->pc == 0x1A161Cu) {
        ctx->pc = 0x1A161Cu;
            // 0x1a161c: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1A1620u;
        goto label_1a1620;
    }
    ctx->pc = 0x1A1618u;
    SET_GPR_U32(ctx, 31, 0x1A1620u);
    ctx->pc = 0x1A161Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1618u;
            // 0x1a161c: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1620u; }
        if (ctx->pc != 0x1A1620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1620u; }
        if (ctx->pc != 0x1A1620u) { return; }
    }
    ctx->pc = 0x1A1620u;
label_1a1620:
    // 0x1a1620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1624:
    // 0x1a1624: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1a1628:
    if (ctx->pc == 0x1A1628u) {
        ctx->pc = 0x1A1628u;
            // 0x1a1628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A162Cu;
        goto label_1a162c;
    }
    ctx->pc = 0x1A1624u;
    {
        const bool branch_taken_0x1a1624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1624u;
            // 0x1a1628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1624) {
            ctx->pc = 0x1A1644u;
            goto label_1a1644;
        }
    }
    ctx->pc = 0x1A162Cu;
label_1a162c:
    // 0x1a162c: 0xc068488  jal         func_1A1220
label_1a1630:
    if (ctx->pc == 0x1A1630u) {
        ctx->pc = 0x1A1634u;
        goto label_1a1634;
    }
    ctx->pc = 0x1A162Cu;
    SET_GPR_U32(ctx, 31, 0x1A1634u);
    ctx->pc = 0x1A1220u;
    if (runtime->hasFunction(0x1A1220u)) {
        auto targetFn = runtime->lookupFunction(0x1A1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1634u; }
        if (ctx->pc != 0x1A1634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1220_0x1a1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1634u; }
        if (ctx->pc != 0x1A1634u) { return; }
    }
    ctx->pc = 0x1A1634u;
label_1a1634:
    // 0x1a1634: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a1634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a1638:
    // 0x1a1638: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a163c:
    // 0x1a163c: 0x40f809  jalr        $v0
label_1a1640:
    if (ctx->pc == 0x1A1640u) {
        ctx->pc = 0x1A1640u;
            // 0x1a1640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1644u;
        goto label_1a1644;
    }
    ctx->pc = 0x1A163Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1644u);
        ctx->pc = 0x1A1640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A163Cu;
            // 0x1a1640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1644u; }
            if (ctx->pc != 0x1A1644u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1644u;
label_1a1644:
    // 0x1a1644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1648:
    // 0x1a1648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a164c:
    // 0x1a164c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1650:
    // 0x1a1650: 0x3e00008  jr          $ra
label_1a1654:
    if (ctx->pc == 0x1A1654u) {
        ctx->pc = 0x1A1654u;
            // 0x1a1654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A1658u;
        goto label_fallthrough_0x1a1650;
    }
    ctx->pc = 0x1A1650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1650u;
            // 0x1a1654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a1650:
    ctx->pc = 0x1A1658u;
}
