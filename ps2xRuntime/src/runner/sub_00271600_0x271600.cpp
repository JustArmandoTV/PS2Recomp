#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271600
// Address: 0x271600 - 0x271730
void sub_00271600_0x271600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271600_0x271600");
#endif

    switch (ctx->pc) {
        case 0x271674u: goto label_271674;
        case 0x2716a0u: goto label_2716a0;
        case 0x2716e0u: goto label_2716e0;
        default: break;
    }

    ctx->pc = 0x271600u;

    // 0x271600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x271604: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x271604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x271608: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27160c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271610: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x271610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271614: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271618: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x271618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27161c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271620: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x271620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271628: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x271628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27162c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271630: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x271630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x271634: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x271634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x271638: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x271638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x27163c: 0xe58821  addu        $s1, $a3, $a1
    ctx->pc = 0x27163cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x271640: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x271640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x271644: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x271644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x271648: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x271648u;
    {
        const bool branch_taken_0x271648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271648u;
            // 0x27164c: 0xb48023  subu        $s0, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271648) {
            ctx->pc = 0x271678u;
            goto label_271678;
        }
    }
    ctx->pc = 0x271650u;
    // 0x271650: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x271650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x271654: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x271654u;
    {
        const bool branch_taken_0x271654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271654) {
            ctx->pc = 0x271678u;
            goto label_271678;
        }
    }
    ctx->pc = 0x27165Cu;
    // 0x27165c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x27165cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x271660: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x271660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x271664: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x271664u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x271668: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27166c: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x27166Cu;
    SET_GPR_U32(ctx, 31, 0x271674u);
    ctx->pc = 0x271670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27166Cu;
            // 0x271670: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271674u; }
        if (ctx->pc != 0x271674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271674u; }
        if (ctx->pc != 0x271674u) { return; }
    }
    ctx->pc = 0x271674u;
label_271674:
    // 0x271674: 0x0  nop
    ctx->pc = 0x271674u;
    // NOP
label_271678:
    // 0x271678: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x271678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27167c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x27167cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x271680: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x271680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x271684: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x271684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x271688: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x271688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27168c: 0x4e0000c  bltz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x27168Cu;
    {
        const bool branch_taken_0x27168c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x271690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27168Cu;
            // 0x271690: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27168c) {
            ctx->pc = 0x2716C0u;
            goto label_2716c0;
        }
    }
    ctx->pc = 0x271694u;
    // 0x271694: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x271694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x271698: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x271698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27169c: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x27169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2716a0:
    // 0x2716a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2716a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2716a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2716a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2716a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2716a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2716ac: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2716acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2716b0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2716b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2716b4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2716B4u;
    {
        const bool branch_taken_0x2716b4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2716b4) {
            ctx->pc = 0x2716A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2716a0;
        }
    }
    ctx->pc = 0x2716BCu;
    // 0x2716bc: 0x0  nop
    ctx->pc = 0x2716bcu;
    // NOP
label_2716c0:
    // 0x2716c0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2716c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2716c4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x2716c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2716c8: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2716C8u;
    {
        const bool branch_taken_0x2716c8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2716CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2716C8u;
            // 0x2716cc: 0x652021  addu        $a0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716c8) {
            ctx->pc = 0x271700u;
            goto label_271700;
        }
    }
    ctx->pc = 0x2716D0u;
    // 0x2716d0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2716d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2716d4: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2716d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2716d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2716d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2716dc: 0x0  nop
    ctx->pc = 0x2716dcu;
    // NOP
label_2716e0:
    // 0x2716e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2716e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2716e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2716e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2716e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2716e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2716ec: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2716ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x2716f0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2716f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2716f4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2716F4u;
    {
        const bool branch_taken_0x2716f4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2716f4) {
            ctx->pc = 0x2716E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2716e0;
        }
    }
    ctx->pc = 0x2716FCu;
    // 0x2716fc: 0x0  nop
    ctx->pc = 0x2716fcu;
    // NOP
label_271700:
    // 0x271700: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x271700u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x271704: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x271704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27170c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27170cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27171c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27171cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271720: 0x3e00008  jr          $ra
    ctx->pc = 0x271720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271720u;
            // 0x271724: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271728u;
    // 0x271728: 0x0  nop
    ctx->pc = 0x271728u;
    // NOP
    // 0x27172c: 0x0  nop
    ctx->pc = 0x27172cu;
    // NOP
}
