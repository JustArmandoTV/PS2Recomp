#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149780
// Address: 0x149780 - 0x1498c0
void sub_00149780_0x149780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149780_0x149780");
#endif

    switch (ctx->pc) {
        case 0x1497c4u: goto label_1497c4;
        case 0x1497d4u: goto label_1497d4;
        case 0x149808u: goto label_149808;
        case 0x149854u: goto label_149854;
        case 0x14986cu: goto label_14986c;
        default: break;
    }

    ctx->pc = 0x149780u;

    // 0x149780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x149780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x149784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x149784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x149788: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x149788u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x14978c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149794: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x149794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14979c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1497a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1497a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497a4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1497a8: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x1497a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1497ac: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1497ACu;
    {
        const bool branch_taken_0x1497ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497ACu;
            // 0x1497b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497ac) {
            ctx->pc = 0x1498A0u;
            goto label_1498a0;
        }
    }
    ctx->pc = 0x1497B4u;
    // 0x1497b4: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x1497b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1497b8: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x1497b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1497bc: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x1497BCu;
    SET_GPR_U32(ctx, 31, 0x1497C4u);
    ctx->pc = 0x1497C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497BCu;
            // 0x1497c0: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497C4u; }
        if (ctx->pc != 0x1497C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497C4u; }
        if (ctx->pc != 0x1497C4u) { return; }
    }
    ctx->pc = 0x1497C4u;
label_1497c4:
    // 0x1497c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1497c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1497c8: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1497C8u;
    {
        const bool branch_taken_0x1497c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1497CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497C8u;
            // 0x1497cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497c8) {
            ctx->pc = 0x1497F0u;
            goto label_1497f0;
        }
    }
    ctx->pc = 0x1497D0u;
    // 0x1497d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1497d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1497d4:
    // 0x1497d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1497d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1497d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1497d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1497dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1497dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1497e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1497e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1497e4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1497e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1497e8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1497E8u;
    {
        const bool branch_taken_0x1497e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1497e8) {
            ctx->pc = 0x1497D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1497d4;
        }
    }
    ctx->pc = 0x1497F0u;
label_1497f0:
    // 0x1497f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1497F0u;
    {
        const bool branch_taken_0x1497f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1497f0) {
            ctx->pc = 0x1498A0u;
            goto label_1498a0;
        }
    }
    ctx->pc = 0x1497F8u;
    // 0x1497f8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1497f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1497fc: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1497fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x149800: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x149800u;
    {
        const bool branch_taken_0x149800 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x149804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149800u;
            // 0x149804: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149800) {
            ctx->pc = 0x1498A0u;
            goto label_1498a0;
        }
    }
    ctx->pc = 0x149808u;
label_149808:
    // 0x149808: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x149808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14980c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x149810: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x149810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x149814: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x149814u;
    {
        const bool branch_taken_0x149814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149814) {
            ctx->pc = 0x149888u;
            goto label_149888;
        }
    }
    ctx->pc = 0x14981Cu;
    // 0x14981c: 0xc7ae005c  lwc1        $f14, 0x5C($sp)
    ctx->pc = 0x14981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x149820: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x149820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149824: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x149824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149828: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x149828u;
    {
        const bool branch_taken_0x149828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149828) {
            ctx->pc = 0x149888u;
            goto label_149888;
        }
    }
    ctx->pc = 0x149830u;
    // 0x149830: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x149830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149834: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x149834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149838: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x149838u;
    {
        const bool branch_taken_0x149838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149838) {
            ctx->pc = 0x149888u;
            goto label_149888;
        }
    }
    ctx->pc = 0x149840u;
    // 0x149840: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x149840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149844: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x149844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149848: 0xc62d0018  lwc1        $f13, 0x18($s1)
    ctx->pc = 0x149848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14984c: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x14984Cu;
    SET_GPR_U32(ctx, 31, 0x149854u);
    ctx->pc = 0x149850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14984Cu;
            // 0x149850: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149854u; }
        if (ctx->pc != 0x149854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149854u; }
        if (ctx->pc != 0x149854u) { return; }
    }
    ctx->pc = 0x149854u;
label_149854:
    // 0x149854: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x149854u;
    {
        const bool branch_taken_0x149854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149854) {
            ctx->pc = 0x149888u;
            goto label_149888;
        }
    }
    ctx->pc = 0x14985Cu;
    // 0x14985c: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x14985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149864: 0xc0525b4  jal         func_1496D0
    ctx->pc = 0x149864u;
    SET_GPR_U32(ctx, 31, 0x14986Cu);
    ctx->pc = 0x149868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149864u;
            // 0x149868: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1496D0u;
    if (runtime->hasFunction(0x1496D0u)) {
        auto targetFn = runtime->lookupFunction(0x1496D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14986Cu; }
        if (ctx->pc != 0x14986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001496D0_0x1496d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14986Cu; }
        if (ctx->pc != 0x14986Cu) { return; }
    }
    ctx->pc = 0x14986Cu;
label_14986c:
    // 0x14986c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14986Cu;
    {
        const bool branch_taken_0x14986c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14986c) {
            ctx->pc = 0x149888u;
            goto label_149888;
        }
    }
    ctx->pc = 0x149874u;
    // 0x149874: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x149874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x149878: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x149878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14987c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149880: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x149884: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x149884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_149888:
    // 0x149888: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x149888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14988c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x149890: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x149890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149894: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x149894u;
    {
        const bool branch_taken_0x149894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149894u;
            // 0x149898: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149894) {
            ctx->pc = 0x149808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149808;
        }
    }
    ctx->pc = 0x14989Cu;
    // 0x14989c: 0x0  nop
    ctx->pc = 0x14989cu;
    // NOP
label_1498a0:
    // 0x1498a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1498a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1498a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1498a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1498a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1498a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1498ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1498acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1498b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1498b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1498b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1498B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1498B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1498B4u;
            // 0x1498b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1498BCu;
    // 0x1498bc: 0x0  nop
    ctx->pc = 0x1498bcu;
    // NOP
}
