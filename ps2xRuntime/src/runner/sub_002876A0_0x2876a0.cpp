#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002876A0
// Address: 0x2876a0 - 0x287890
void sub_002876A0_0x2876a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002876A0_0x2876a0");
#endif

    switch (ctx->pc) {
        case 0x287704u: goto label_287704;
        case 0x287728u: goto label_287728;
        case 0x287784u: goto label_287784;
        case 0x287808u: goto label_287808;
        default: break;
    }

    ctx->pc = 0x2876a0u;

    // 0x2876a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2876a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2876a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2876a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2876a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2876a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2876ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2876acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2876b0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2876b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2876b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2876b8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2876b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2876bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2876c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2876c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2876c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2876c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2876c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2876c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2876cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2876ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2876d0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2876d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2876d4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2876d8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2876d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2876dc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2876dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2876e0: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x2876e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2876e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2876E4u;
    {
        const bool branch_taken_0x2876e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876E4u;
            // 0x2876e8: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876e4) {
            ctx->pc = 0x287708u;
            goto label_287708;
        }
    }
    ctx->pc = 0x2876ECu;
    // 0x2876ec: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2876ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2876f0: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x2876f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2876f4: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x2876f4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x2876f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2876f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876fc: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2876FCu;
    SET_GPR_U32(ctx, 31, 0x287704u);
    ctx->pc = 0x287700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2876FCu;
            // 0x287700: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287704u; }
        if (ctx->pc != 0x287704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287704u; }
        if (ctx->pc != 0x287704u) { return; }
    }
    ctx->pc = 0x287704u;
label_287704:
    // 0x287704: 0x0  nop
    ctx->pc = 0x287704u;
    // NOP
label_287708:
    // 0x287708: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x287708u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    // 0x28770c: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x28770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x287710: 0x8ed30008  lw          $s3, 0x8($s6)
    ctx->pc = 0x287710u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x287714: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x287714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287718: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x287718u;
    {
        const bool branch_taken_0x287718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287718u;
            // 0x28771c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287718) {
            ctx->pc = 0x2877F0u;
            goto label_2877f0;
        }
    }
    ctx->pc = 0x287720u;
    // 0x287720: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287728:
    // 0x287728: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x287728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x28772c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287730: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x287734: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x287734u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x287738: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x287738u;
    {
        const bool branch_taken_0x287738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x287738) {
            ctx->pc = 0x287750u;
            goto label_287750;
        }
    }
    ctx->pc = 0x287740u;
    // 0x287740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x287740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287744: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x287744u;
    {
        const bool branch_taken_0x287744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x287744) {
            ctx->pc = 0x2877C8u;
            goto label_2877c8;
        }
    }
    ctx->pc = 0x28774Cu;
    // 0x28774c: 0x0  nop
    ctx->pc = 0x28774cu;
    // NOP
label_287750:
    // 0x287750: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x287754: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x287754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x287758: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28775c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x28775cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x287760: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x287760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x287764: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x287764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x287768: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x287768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28776c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28776cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x287770: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x287770u;
    {
        const bool branch_taken_0x287770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x287770) {
            ctx->pc = 0x287788u;
            goto label_287788;
        }
    }
    ctx->pc = 0x287778u;
    // 0x287778: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x287778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x28777c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28777Cu;
    SET_GPR_U32(ctx, 31, 0x287784u);
    ctx->pc = 0x287780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28777Cu;
            // 0x287780: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287784u; }
        if (ctx->pc != 0x287784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287784u; }
        if (ctx->pc != 0x287784u) { return; }
    }
    ctx->pc = 0x287784u;
label_287784:
    // 0x287784: 0x0  nop
    ctx->pc = 0x287784u;
    // NOP
label_287788:
    // 0x287788: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x287788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x28778c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x287790: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x287790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x287794: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x287794u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x287798: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x287798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28779c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x28779cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2877a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2877a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2877a4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2877a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2877a8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x2877a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2877ac: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x2877acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2877b0: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x2877b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2877b4: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x2877b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x2877b8: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x2877b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2877bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2877BCu;
    {
        const bool branch_taken_0x2877bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2877BCu;
            // 0x2877c0: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877bc) {
            ctx->pc = 0x2877D8u;
            goto label_2877d8;
        }
    }
    ctx->pc = 0x2877C4u;
    // 0x2877c4: 0x0  nop
    ctx->pc = 0x2877c4u;
    // NOP
label_2877c8:
    // 0x2877c8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2877c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2877cc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2877ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2877d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2877d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2877d4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2877d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_2877d8:
    // 0x2877d8: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x2877d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2877dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2877dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2877e0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2877e4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2877e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2877e8: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2877E8u;
    {
        const bool branch_taken_0x2877e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2877ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2877E8u;
            // 0x2877ec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877e8) {
            ctx->pc = 0x287728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287728;
        }
    }
    ctx->pc = 0x2877F0u;
label_2877f0:
    // 0x2877f0: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2877f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2877f4: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x2877f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2877f8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2877F8u;
    {
        const bool branch_taken_0x2877f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877f8) {
            ctx->pc = 0x287858u;
            goto label_287858;
        }
    }
    ctx->pc = 0x287800u;
    // 0x287800: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x287800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x287804: 0x0  nop
    ctx->pc = 0x287804u;
    // NOP
label_287808:
    // 0x287808: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x287808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28780c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x287810: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x287810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x287814: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x287814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x287818: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x287818u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x28781c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x28781cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x287820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x287820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x287824: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x287824u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287828: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x287828u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x28782c: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x28782cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x287830: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x287830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x287834: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x287834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x287838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x287838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28783c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28783cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287840: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x287840u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x287844: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x287848: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x287848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28784c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28784Cu;
    {
        const bool branch_taken_0x28784c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28784Cu;
            // 0x287850: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28784c) {
            ctx->pc = 0x287808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287808;
        }
    }
    ctx->pc = 0x287854u;
    // 0x287854: 0x0  nop
    ctx->pc = 0x287854u;
    // NOP
label_287858:
    // 0x287858: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28785c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28785cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287860: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x287860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x287864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x287868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28786c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28786cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x287870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x287878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28787c: 0x3e00008  jr          $ra
    ctx->pc = 0x28787Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28787Cu;
            // 0x287880: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287884u;
    // 0x287884: 0x0  nop
    ctx->pc = 0x287884u;
    // NOP
    // 0x287888: 0x0  nop
    ctx->pc = 0x287888u;
    // NOP
    // 0x28788c: 0x0  nop
    ctx->pc = 0x28788cu;
    // NOP
}
