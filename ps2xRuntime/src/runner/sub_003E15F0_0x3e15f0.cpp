#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E15F0
// Address: 0x3e15f0 - 0x3e1640
void sub_003E15F0_0x3e15f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E15F0_0x3e15f0");
#endif

    switch (ctx->pc) {
        case 0x3e15f0u: goto label_3e15f0;
        case 0x3e15f4u: goto label_3e15f4;
        case 0x3e15f8u: goto label_3e15f8;
        case 0x3e15fcu: goto label_3e15fc;
        case 0x3e1600u: goto label_3e1600;
        case 0x3e1604u: goto label_3e1604;
        case 0x3e1608u: goto label_3e1608;
        case 0x3e160cu: goto label_3e160c;
        case 0x3e1610u: goto label_3e1610;
        case 0x3e1614u: goto label_3e1614;
        case 0x3e1618u: goto label_3e1618;
        case 0x3e161cu: goto label_3e161c;
        case 0x3e1620u: goto label_3e1620;
        case 0x3e1624u: goto label_3e1624;
        case 0x3e1628u: goto label_3e1628;
        case 0x3e162cu: goto label_3e162c;
        case 0x3e1630u: goto label_3e1630;
        case 0x3e1634u: goto label_3e1634;
        case 0x3e1638u: goto label_3e1638;
        case 0x3e163cu: goto label_3e163c;
        default: break;
    }

    ctx->pc = 0x3e15f0u;

label_3e15f0:
    // 0x3e15f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e15f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e15f4:
    // 0x3e15f4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3e15f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3e15f8:
    // 0x3e15f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e15f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e15fc:
    // 0x3e15fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e1600:
    // 0x3e1600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e1604:
    // 0x3e1604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e1604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e1608:
    // 0x3e1608: 0x8c640350  lw          $a0, 0x350($v1)
    ctx->pc = 0x3e1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
label_3e160c:
    // 0x3e160c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e1610:
    if (ctx->pc == 0x3E1610u) {
        ctx->pc = 0x3E1610u;
            // 0x3e1610: 0x24700350  addiu       $s0, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->pc = 0x3E1614u;
        goto label_3e1614;
    }
    ctx->pc = 0x3E160Cu;
    {
        const bool branch_taken_0x3e160c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E160Cu;
            // 0x3e1610: 0x24700350  addiu       $s0, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e160c) {
            ctx->pc = 0x3E1628u;
            goto label_3e1628;
        }
    }
    ctx->pc = 0x3E1614u;
label_3e1614:
    // 0x3e1614: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e1614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e1618:
    // 0x3e1618: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3e1618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3e161c:
    // 0x3e161c: 0x320f809  jalr        $t9
label_3e1620:
    if (ctx->pc == 0x3E1620u) {
        ctx->pc = 0x3E1620u;
            // 0x3e1620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E1624u;
        goto label_3e1624;
    }
    ctx->pc = 0x3E161Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E1624u);
        ctx->pc = 0x3E1620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E161Cu;
            // 0x3e1620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E1624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E1624u; }
            if (ctx->pc != 0x3E1624u) { return; }
        }
        }
    }
    ctx->pc = 0x3E1624u;
label_3e1624:
    // 0x3e1624: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3e1624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3e1628:
    // 0x3e1628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e162c:
    // 0x3e162c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e162cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1630:
    // 0x3e1630: 0x3e00008  jr          $ra
label_3e1634:
    if (ctx->pc == 0x3E1634u) {
        ctx->pc = 0x3E1634u;
            // 0x3e1634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E1638u;
        goto label_3e1638;
    }
    ctx->pc = 0x3E1630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1630u;
            // 0x3e1634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1638u;
label_3e1638:
    // 0x3e1638: 0x0  nop
    ctx->pc = 0x3e1638u;
    // NOP
label_3e163c:
    // 0x3e163c: 0x0  nop
    ctx->pc = 0x3e163cu;
    // NOP
}
