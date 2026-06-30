#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1620
// Address: 0x2d1620 - 0x2d1690
void sub_002D1620_0x2d1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1620_0x2d1620");
#endif

    switch (ctx->pc) {
        case 0x2d165cu: goto label_2d165c;
        case 0x2d1664u: goto label_2d1664;
        default: break;
    }

    ctx->pc = 0x2d1620u;

    // 0x2d1620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d1628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d162c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1630: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d1630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1634: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d1634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d1638: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d1638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d163c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D163Cu;
    {
        const bool branch_taken_0x2d163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D163Cu;
            // 0x2d1640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d163c) {
            ctx->pc = 0x2D1664u;
            goto label_2d1664;
        }
    }
    ctx->pc = 0x2D1644u;
    // 0x2d1644: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d1644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d1648: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d1648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d164c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d1650: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d1654: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D1654u;
    SET_GPR_U32(ctx, 31, 0x2D165Cu);
    ctx->pc = 0x2D1658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1654u;
            // 0x2d1658: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D165Cu; }
        if (ctx->pc != 0x2D165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D165Cu; }
        if (ctx->pc != 0x2D165Cu) { return; }
    }
    ctx->pc = 0x2D165Cu;
label_2d165c:
    // 0x2d165c: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D165Cu;
    SET_GPR_U32(ctx, 31, 0x2D1664u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1664u; }
        if (ctx->pc != 0x2D1664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1664u; }
        if (ctx->pc != 0x2D1664u) { return; }
    }
    ctx->pc = 0x2D1664u;
label_2d1664:
    // 0x2d1664: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d1664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d1668: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2d1668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d166c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d1678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d167c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D167Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D167Cu;
            // 0x2d1680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1684u;
    // 0x2d1684: 0x0  nop
    ctx->pc = 0x2d1684u;
    // NOP
    // 0x2d1688: 0x0  nop
    ctx->pc = 0x2d1688u;
    // NOP
    // 0x2d168c: 0x0  nop
    ctx->pc = 0x2d168cu;
    // NOP
}
