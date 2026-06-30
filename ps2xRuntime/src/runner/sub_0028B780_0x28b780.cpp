#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B780
// Address: 0x28b780 - 0x28bb70
void sub_0028B780_0x28b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B780_0x28b780");
#endif

    switch (ctx->pc) {
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b808u: goto label_28b808;
        case 0x28b890u: goto label_28b890;
        case 0x28ba50u: goto label_28ba50;
        default: break;
    }

    ctx->pc = 0x28b780u;

    // 0x28b780: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28b784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28b788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28b78c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28b790: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28b790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b794: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28b798: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x28b798u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b79c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28b7a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28b7a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b7a8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x28b7a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b7b0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28b7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b7b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28b7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b7c0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b7c8: 0xc0a2ce4  jal         func_28B390
    ctx->pc = 0x28B7C8u;
    SET_GPR_U32(ctx, 31, 0x28B7D0u);
    ctx->pc = 0x28B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7C8u;
            // 0x28b7cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B390u;
    if (runtime->hasFunction(0x28B390u)) {
        auto targetFn = runtime->lookupFunction(0x28B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7D0u; }
        if (ctx->pc != 0x28B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B390_0x28b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B7D0u; }
        if (ctx->pc != 0x28B7D0u) { return; }
    }
    ctx->pc = 0x28B7D0u;
label_28b7d0:
    // 0x28b7d0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x28b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28b7d4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x28b7d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b7d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B7D8u;
    {
        const bool branch_taken_0x28b7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7d8) {
            ctx->pc = 0x28B7E8u;
            goto label_28b7e8;
        }
    }
    ctx->pc = 0x28B7E0u;
    // 0x28b7e0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x28b7e0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x28b7e4: 0x0  nop
    ctx->pc = 0x28b7e4u;
    // NOP
label_28b7e8:
    // 0x28b7e8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x28b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28b7ec: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x28b7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x28b7f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28b7f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7f4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28b7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b7f8: 0x102000b9  beqz        $at, . + 4 + (0xB9 << 2)
    ctx->pc = 0x28B7F8u;
    {
        const bool branch_taken_0x28b7f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7F8u;
            // 0x28b7fc: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7f8) {
            ctx->pc = 0x28BAE0u;
            goto label_28bae0;
        }
    }
    ctx->pc = 0x28B800u;
    // 0x28b800: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b804: 0x0  nop
    ctx->pc = 0x28b804u;
    // NOP
label_28b808:
    // 0x28b808: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28b808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x28b80c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b80cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b810: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B810u;
    {
        const bool branch_taken_0x28b810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B810u;
            // 0x28b814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b810) {
            ctx->pc = 0x28B868u;
            goto label_28b868;
        }
    }
    ctx->pc = 0x28B818u;
    // 0x28b818: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28b81c: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x28b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28b820: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x28b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28b824: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x28b824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x28b828: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x28b828u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28b82c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28b82cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b830: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B830u;
    {
        const bool branch_taken_0x28b830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28B834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B830u;
            // 0x28b834: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b830) {
            ctx->pc = 0x28B850u;
            goto label_28b850;
        }
    }
    ctx->pc = 0x28B838u;
    // 0x28b838: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x28b83c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x28b83cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b840: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B840u;
    {
        const bool branch_taken_0x28b840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b840) {
            ctx->pc = 0x28B850u;
            goto label_28b850;
        }
    }
    ctx->pc = 0x28B848u;
    // 0x28b848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b84c: 0x0  nop
    ctx->pc = 0x28b84cu;
    // NOP
label_28b850:
    // 0x28b850: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x28b850u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28b854: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x28b854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x28b858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B858u;
    {
        const bool branch_taken_0x28b858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b858) {
            ctx->pc = 0x28B868u;
            goto label_28b868;
        }
    }
    ctx->pc = 0x28B860u;
    // 0x28b860: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x28b860u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x28b864: 0x0  nop
    ctx->pc = 0x28b864u;
    // NOP
label_28b868:
    // 0x28b868: 0xa3a000bc  sb          $zero, 0xBC($sp)
    ctx->pc = 0x28b868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b86c: 0xa3a000b8  sb          $zero, 0xB8($sp)
    ctx->pc = 0x28b86cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b870: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x28b870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x28b874: 0xa3a000b4  sb          $zero, 0xB4($sp)
    ctx->pc = 0x28b874u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 180), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b878: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28b878u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28b87c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28b880: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x28b880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28b884: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x28B884u;
    {
        const bool branch_taken_0x28b884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B884u;
            // 0x28b888: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b884) {
            ctx->pc = 0x28BA88u;
            goto label_28ba88;
        }
    }
    ctx->pc = 0x28B88Cu;
    // 0x28b88c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b890:
    // 0x28b890: 0x12740077  beq         $s3, $s4, . + 4 + (0x77 << 2)
    ctx->pc = 0x28B890u;
    {
        const bool branch_taken_0x28b890 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x28B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B890u;
            // 0x28b894: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b890) {
            ctx->pc = 0x28BA70u;
            goto label_28ba70;
        }
    }
    ctx->pc = 0x28B898u;
    // 0x28b898: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b898u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b89c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28b89cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28b8a0: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x28B8A0u;
    {
        const bool branch_taken_0x28b8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8a0) {
            ctx->pc = 0x28BA20u;
            goto label_28ba20;
        }
    }
    ctx->pc = 0x28B8A8u;
    // 0x28b8a8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x28b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28b8ac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x28b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28b8b0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x28b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x28b8b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x28b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28b8b8: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x28b8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28b8bc: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x28b8bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b8c0: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x28b8c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28b8c4: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x28b8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x28b8c8: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x28b8c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28b8cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B8CCu;
    {
        const bool branch_taken_0x28b8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b8cc) {
            ctx->pc = 0x28B8F0u;
            goto label_28b8f0;
        }
    }
    ctx->pc = 0x28B8D4u;
    // 0x28b8d4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x28b8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x28b8d8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x28b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28b8dc: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x28b8dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28b8e0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x28b8e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b8e4: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x28b8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x28b8e8: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x28b8e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28b8ec: 0x0  nop
    ctx->pc = 0x28b8ecu;
    // NOP
label_28b8f0:
    // 0x28b8f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B8F0u;
    {
        const bool branch_taken_0x28b8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8F0u;
            // 0x28b8f4: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8f0) {
            ctx->pc = 0x28B910u;
            goto label_28b910;
        }
    }
    ctx->pc = 0x28B8F8u;
    // 0x28b8f8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x28b8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x28b8fc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x28b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x28b900: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x28b900u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28b904: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x28b904u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b908: 0xc53026  xor         $a2, $a2, $a1
    ctx->pc = 0x28b908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x28b90c: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x28b90cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28b910:
    // 0x28b910: 0x10c0003f  beqz        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x28B910u;
    {
        const bool branch_taken_0x28b910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B910u;
            // 0x28b914: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b910) {
            ctx->pc = 0x28BA10u;
            goto label_28ba10;
        }
    }
    ctx->pc = 0x28B918u;
    // 0x28b918: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x28b918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28b91c: 0x3c053a83  lui         $a1, 0x3A83
    ctx->pc = 0x28b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14979 << 16));
    // 0x28b920: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b924: 0x34a5126f  ori         $a1, $a1, 0x126F
    ctx->pc = 0x28b924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4719);
    // 0x28b928: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28b928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b92c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x28b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28b930: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x28b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28b934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b938: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x28b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28b93c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x28b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28b940: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x28b940u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x28b944: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x28b944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b948: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x28b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28b94c: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x28b94cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x28b950: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x28b950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28b954: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x28b954u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x28b958: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x28b958u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x28b95c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28b95cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b960: 0x46003985  abs.s       $f6, $f7
    ctx->pc = 0x28b960u;
    ctx->f[6] = FPU_ABS_S(ctx->f[7]);
    // 0x28b964: 0x46002905  abs.s       $f4, $f5
    ctx->pc = 0x28b964u;
    ctx->f[4] = FPU_ABS_S(ctx->f[5]);
    // 0x28b968: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B968u;
    {
        const bool branch_taken_0x28b968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B968u;
            // 0x28b96c: 0x46001885  abs.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ABS_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b968) {
            ctx->pc = 0x28B974u;
            goto label_28b974;
        }
    }
    ctx->pc = 0x28B970u;
    // 0x28b970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b974:
    // 0x28b974: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x28b974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x28b978: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x28b978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x28b97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b980: 0x0  nop
    ctx->pc = 0x28b980u;
    // NOP
    // 0x28b984: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28b984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b988: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28B988u;
    {
        const bool branch_taken_0x28b988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B988u;
            // 0x28b98c: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b988) {
            ctx->pc = 0x28B998u;
            goto label_28b998;
        }
    }
    ctx->pc = 0x28B990u;
    // 0x28b990: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B990u;
    {
        const bool branch_taken_0x28b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B990u;
            // 0x28b994: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b990) {
            ctx->pc = 0x28B99Cu;
            goto label_28b99c;
        }
    }
    ctx->pc = 0x28B998u;
label_28b998:
    // 0x28b998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b99c:
    // 0x28b99c: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x28b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x28b9a0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x28b9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x28b9a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b9a8: 0x0  nop
    ctx->pc = 0x28b9a8u;
    // NOP
    // 0x28b9ac: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x28b9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b9b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B9B0u;
    {
        const bool branch_taken_0x28b9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9B0u;
            // 0x28b9b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9b0) {
            ctx->pc = 0x28B9BCu;
            goto label_28b9bc;
        }
    }
    ctx->pc = 0x28B9B8u;
    // 0x28b9b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28b9bc:
    // 0x28b9bc: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x28b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x28b9c0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x28b9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x28b9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28b9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28b9c8: 0x0  nop
    ctx->pc = 0x28b9c8u;
    // NOP
    // 0x28b9cc: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x28b9ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b9d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28B9D0u;
    {
        const bool branch_taken_0x28b9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9D0u;
            // 0x28b9d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9d0) {
            ctx->pc = 0x28B9DCu;
            goto label_28b9dc;
        }
    }
    ctx->pc = 0x28B9D8u;
    // 0x28b9d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28b9dc:
    // 0x28b9dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x28b9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28b9e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x28b9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x28b9e4: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x28b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x28b9e8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x28b9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x28b9ec: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x28b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x28b9f0: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x28b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x28b9f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b9f8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28b9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28b9fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x28b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x28ba00: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x28ba00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x28ba04: 0x3863000f  xori        $v1, $v1, 0xF
    ctx->pc = 0x28ba04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
    // 0x28ba08: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28ba08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28ba0c: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x28ba0cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28ba10:
    // 0x28ba10: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x28ba10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28ba14: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x28ba14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x28ba18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28ba18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28ba1c: 0x0  nop
    ctx->pc = 0x28ba1cu;
    // NOP
label_28ba20:
    // 0x28ba20: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28ba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28ba24: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28ba24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28ba28: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28BA28u;
    {
        const bool branch_taken_0x28ba28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA28u;
            // 0x28ba2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba28) {
            ctx->pc = 0x28BA68u;
            goto label_28ba68;
        }
    }
    ctx->pc = 0x28BA30u;
    // 0x28ba30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28ba34: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x28ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28ba38: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x28ba38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x28ba3c: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x28ba3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x28ba40: 0x27a900b4  addiu       $t1, $sp, 0xB4
    ctx->pc = 0x28ba40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x28ba44: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x28ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28ba48: 0xc0a2d40  jal         func_28B500
    ctx->pc = 0x28BA48u;
    SET_GPR_U32(ctx, 31, 0x28BA50u);
    ctx->pc = 0x28BA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA48u;
            // 0x28ba4c: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B500u;
    if (runtime->hasFunction(0x28B500u)) {
        auto targetFn = runtime->lookupFunction(0x28B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA50u; }
        if (ctx->pc != 0x28BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B500_0x28b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA50u; }
        if (ctx->pc != 0x28BA50u) { return; }
    }
    ctx->pc = 0x28BA50u;
label_28ba50:
    // 0x28ba50: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x28ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x28ba54: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x28ba54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ba58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA58u;
    {
        const bool branch_taken_0x28ba58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba58) {
            ctx->pc = 0x28BA68u;
            goto label_28ba68;
        }
    }
    ctx->pc = 0x28BA60u;
    // 0x28ba60: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x28ba60u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x28ba64: 0x0  nop
    ctx->pc = 0x28ba64u;
    // NOP
label_28ba68:
    // 0x28ba68: 0x12263c  dsll32      $a0, $s2, 24
    ctx->pc = 0x28ba68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 24));
    // 0x28ba6c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28ba6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_28ba70:
    // 0x28ba70: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28ba74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28ba74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28ba78: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x28ba78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28ba7c: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x28BA7Cu;
    {
        const bool branch_taken_0x28ba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA7Cu;
            // 0x28ba80: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba7c) {
            ctx->pc = 0x28B890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b890;
        }
    }
    ctx->pc = 0x28BA84u;
    // 0x28ba84: 0x0  nop
    ctx->pc = 0x28ba84u;
    // NOP
label_28ba88:
    // 0x28ba88: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x28ba8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28ba8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28ba90: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28ba90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28ba94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA94u;
    {
        const bool branch_taken_0x28ba94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba94) {
            ctx->pc = 0x28BAA4u;
            goto label_28baa4;
        }
    }
    ctx->pc = 0x28BA9Cu;
    // 0x28ba9c: 0x83a300bc  lb          $v1, 0xBC($sp)
    ctx->pc = 0x28ba9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x28baa0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28baa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28baa4:
    // 0x28baa4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BAA4u;
    {
        const bool branch_taken_0x28baa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28baa4) {
            ctx->pc = 0x28BAB4u;
            goto label_28bab4;
        }
    }
    ctx->pc = 0x28BAACu;
    // 0x28baac: 0x83a300b8  lb          $v1, 0xB8($sp)
    ctx->pc = 0x28baacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x28bab0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28bab0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28bab4:
    // 0x28bab4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BAB4u;
    {
        const bool branch_taken_0x28bab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAB4u;
            // 0x28bab8: 0x3263c  dsll32      $a0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bab4) {
            ctx->pc = 0x28BAC8u;
            goto label_28bac8;
        }
    }
    ctx->pc = 0x28BABCu;
    // 0x28babc: 0x83a300b4  lb          $v1, 0xB4($sp)
    ctx->pc = 0x28babcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x28bac0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28bac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28bac4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x28bac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_28bac8:
    // 0x28bac8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28bac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28bacc: 0x285182a  slt         $v1, $s4, $a1
    ctx->pc = 0x28baccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28bad0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28bad0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28bad4: 0x1460ff4c  bnez        $v1, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x28BAD4u;
    {
        const bool branch_taken_0x28bad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAD4u;
            // 0x28bad8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bad4) {
            ctx->pc = 0x28B808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b808;
        }
    }
    ctx->pc = 0x28BADCu;
    // 0x28badc: 0x0  nop
    ctx->pc = 0x28badcu;
    // NOP
label_28bae0:
    // 0x28bae0: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x28bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x28bae4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BAE4u;
    {
        const bool branch_taken_0x28bae4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAE4u;
            // 0x28bae8: 0x33843  sra         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bae4) {
            ctx->pc = 0x28BAF4u;
            goto label_28baf4;
        }
    }
    ctx->pc = 0x28BAECu;
    // 0x28baec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28baf0: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x28baf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_28baf4:
    // 0x28baf4: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x28baf8: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x28baf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28bafc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x28BAFCu;
    {
        const bool branch_taken_0x28bafc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAFCu;
            // 0x28bb00: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bafc) {
            ctx->pc = 0x28BB38u;
            goto label_28bb38;
        }
    }
    ctx->pc = 0x28BB04u;
    // 0x28bb04: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28bb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x28bb08: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28bb08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28bb0c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28bb0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28bb10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BB10u;
    {
        const bool branch_taken_0x28bb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bb10) {
            ctx->pc = 0x28BB2Cu;
            goto label_28bb2c;
        }
    }
    ctx->pc = 0x28BB18u;
    // 0x28bb18: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x28bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28bb1c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x28bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28bb20: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x28bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x28bb24: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x28bb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x28bb28: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x28bb28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28bb2c:
    // 0x28bb2c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x28bb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28bb30: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28bb30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28bb34: 0x0  nop
    ctx->pc = 0x28bb34u;
    // NOP
label_28bb38:
    // 0x28bb38: 0xa3c40000  sb          $a0, 0x0($fp)
    ctx->pc = 0x28bb38u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x28bb3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28bb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28bb40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28bb40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28bb44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28bb44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28bb48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28bb48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28bb4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28bb4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28bb50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28bb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bb54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28bb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bb58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bb60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x28BB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB64u;
            // 0x28bb68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BB6Cu;
    // 0x28bb6c: 0x0  nop
    ctx->pc = 0x28bb6cu;
    // NOP
}
