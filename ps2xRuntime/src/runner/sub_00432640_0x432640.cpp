#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00432640
// Address: 0x432640 - 0x4326d0
void sub_00432640_0x432640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432640_0x432640");
#endif

    switch (ctx->pc) {
        case 0x432668u: goto label_432668;
        case 0x432678u: goto label_432678;
        case 0x4326b8u: goto label_4326b8;
        default: break;
    }

    ctx->pc = 0x432640u;

    // 0x432640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x432644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x432644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x432648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43264c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x432650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x432650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432654: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x432654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x432658: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x432658u;
    {
        const bool branch_taken_0x432658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432658u;
            // 0x43265c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432658) {
            ctx->pc = 0x432670u;
            goto label_432670;
        }
    }
    ctx->pc = 0x432660u;
    // 0x432660: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x432660u;
    SET_GPR_U32(ctx, 31, 0x432668u);
    ctx->pc = 0x432664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432660u;
            // 0x432664: 0x92240004  lbu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432668u; }
        if (ctx->pc != 0x432668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432668u; }
        if (ctx->pc != 0x432668u) { return; }
    }
    ctx->pc = 0x432668u;
label_432668:
    // 0x432668: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x432668u;
    {
        const bool branch_taken_0x432668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432668u;
            // 0x43266c: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432668) {
            ctx->pc = 0x4326A4u;
            goto label_4326a4;
        }
    }
    ctx->pc = 0x432670u;
label_432670:
    // 0x432670: 0xc072b78  jal         func_1CADE0
    ctx->pc = 0x432670u;
    SET_GPR_U32(ctx, 31, 0x432678u);
    ctx->pc = 0x432674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432670u;
            // 0x432674: 0x92240004  lbu         $a0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432678u; }
        if (ctx->pc != 0x432678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432678u; }
        if (ctx->pc != 0x432678u) { return; }
    }
    ctx->pc = 0x432678u;
label_432678:
    // 0x432678: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x432678u;
    {
        const bool branch_taken_0x432678 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x432678) {
            ctx->pc = 0x43267Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432678u;
            // 0x43267c: 0xa2200008  sb          $zero, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4326A0u;
            goto label_4326a0;
        }
    }
    ctx->pc = 0x432680u;
    // 0x432680: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x432680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x432684: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x432684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x432688: 0xa2230009  sb          $v1, 0x9($s1)
    ctx->pc = 0x432688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x43268c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x43268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x432690: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x432690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x432694: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x432694u;
    {
        const bool branch_taken_0x432694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x432694) {
            ctx->pc = 0x432698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432694u;
            // 0x432698: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4326A4u;
            goto label_4326a4;
        }
    }
    ctx->pc = 0x43269Cu;
    // 0x43269c: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x43269cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_4326a0:
    // 0x4326a0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x4326a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4326a4:
    // 0x4326a4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4326A4u;
    {
        const bool branch_taken_0x4326a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4326a4) {
            ctx->pc = 0x4326A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4326A4u;
            // 0x4326a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4326BCu;
            goto label_4326bc;
        }
    }
    ctx->pc = 0x4326ACu;
    // 0x4326ac: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x4326acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4326b0: 0xc072ac6  jal         func_1CAB18
    ctx->pc = 0x4326B0u;
    SET_GPR_U32(ctx, 31, 0x4326B8u);
    ctx->pc = 0x4326B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4326B0u;
            // 0x4326b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB18u;
    if (runtime->hasFunction(0x1CAB18u)) {
        auto targetFn = runtime->lookupFunction(0x1CAB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4326B8u; }
        if (ctx->pc != 0x4326B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAB18_0x1cab18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4326B8u; }
        if (ctx->pc != 0x4326B8u) { return; }
    }
    ctx->pc = 0x4326B8u;
label_4326b8:
    // 0x4326b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4326b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4326bc:
    // 0x4326bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4326bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4326c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4326c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4326c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4326C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4326C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4326C4u;
            // 0x4326c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4326CCu;
    // 0x4326cc: 0x0  nop
    ctx->pc = 0x4326ccu;
    // NOP
}
