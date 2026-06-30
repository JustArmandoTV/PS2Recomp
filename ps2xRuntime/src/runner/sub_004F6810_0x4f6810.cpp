#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F6810
// Address: 0x4f6810 - 0x4f7700
void sub_004F6810_0x4f6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6810_0x4f6810");
#endif

    switch (ctx->pc) {
        case 0x4f687cu: goto label_4f687c;
        case 0x4f6908u: goto label_4f6908;
        case 0x4f6914u: goto label_4f6914;
        case 0x4f6920u: goto label_4f6920;
        case 0x4f692cu: goto label_4f692c;
        case 0x4f6940u: goto label_4f6940;
        case 0x4f696cu: goto label_4f696c;
        case 0x4f6be0u: goto label_4f6be0;
        case 0x4f6c14u: goto label_4f6c14;
        case 0x4f6d38u: goto label_4f6d38;
        case 0x4f6d4cu: goto label_4f6d4c;
        case 0x4f6e48u: goto label_4f6e48;
        case 0x4f6e5cu: goto label_4f6e5c;
        case 0x4f6f58u: goto label_4f6f58;
        case 0x4f6f6cu: goto label_4f6f6c;
        case 0x4f7068u: goto label_4f7068;
        case 0x4f707cu: goto label_4f707c;
        case 0x4f73f8u: goto label_4f73f8;
        case 0x4f7418u: goto label_4f7418;
        case 0x4f7478u: goto label_4f7478;
        case 0x4f7498u: goto label_4f7498;
        case 0x4f7564u: goto label_4f7564;
        case 0x4f7578u: goto label_4f7578;
        case 0x4f758cu: goto label_4f758c;
        case 0x4f75a0u: goto label_4f75a0;
        case 0x4f75bcu: goto label_4f75bc;
        case 0x4f75f8u: goto label_4f75f8;
        case 0x4f7618u: goto label_4f7618;
        case 0x4f768cu: goto label_4f768c;
        case 0x4f76a0u: goto label_4f76a0;
        case 0x4f76b4u: goto label_4f76b4;
        case 0x4f76c8u: goto label_4f76c8;
        default: break;
    }

    ctx->pc = 0x4f6810u;

    // 0x4f6810: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4f6810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x4f6814: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f6814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f6818: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4f6818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x4f681c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4f681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x4f6820: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4f6820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4f6824: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4f6824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4f6828: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4f682c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4f6830: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f6830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6834: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f6834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4f6838: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4f6838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f683c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4f6840: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4f6840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x4f6844: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f6844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4f6848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4f684c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f684cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4f6850: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4f6850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4f6854: 0x94a50010  lhu         $a1, 0x10($a1)
    ctx->pc = 0x4f6854u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4f6858: 0x8c840ea4  lw          $a0, 0xEA4($a0)
    ctx->pc = 0x4f6858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3748)));
    // 0x4f685c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x4f685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x4f6860: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x4f6860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4f6864: 0x24830130  addiu       $v1, $a0, 0x130
    ctx->pc = 0x4f6864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x4f6868: 0x14200397  bnez        $at, . + 4 + (0x397 << 2)
    ctx->pc = 0x4F6868u;
    {
        const bool branch_taken_0x4f6868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6868u;
            // 0x4f686c: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6868) {
            ctx->pc = 0x4F76C8u;
            goto label_4f76c8;
        }
    }
    ctx->pc = 0x4F6870u;
    // 0x4f6870: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f6870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6874: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x4f6874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4f6878: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x4f6878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_4f687c:
    // 0x4f687c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f687cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f6880: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x4f6880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4f6884: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f6884u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f6888: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F6888u;
    {
        const bool branch_taken_0x4f6888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f6888) {
            ctx->pc = 0x4F688Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6888u;
            // 0x4f688c: 0x96850010  lhu         $a1, 0x10($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F689Cu;
            goto label_4f689c;
        }
    }
    ctx->pc = 0x4F6890u;
    // 0x4f6890: 0x1000038d  b           . + 4 + (0x38D << 2)
    ctx->pc = 0x4F6890u;
    {
        const bool branch_taken_0x4f6890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6890u;
            // 0x4f6894: 0xa6860012  sh          $a2, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6890) {
            ctx->pc = 0x4F76C8u;
            goto label_4f76c8;
        }
    }
    ctx->pc = 0x4F6898u;
    // 0x4f6898: 0x96850010  lhu         $a1, 0x10($s4)
    ctx->pc = 0x4f6898u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_4f689c:
    // 0x4f689c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4f689cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4f68a0: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x4f68a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4f68a4: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x4F68A4u;
    {
        const bool branch_taken_0x4f68a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f68a4) {
            ctx->pc = 0x4F68A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F68A4u;
            // 0x4f68a8: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F687Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f687c;
        }
    }
    ctx->pc = 0x4F68ACu;
    // 0x4f68ac: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x4f68acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4f68b0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x4f68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x4f68b4: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x4f68b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x4f68b8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4f68b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f68bc: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x4f68bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x4f68c0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x4f68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x4f68c4: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x4f68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x4f68c8: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x4f68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x4f68cc: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x4f68ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x4f68d0: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x4f68d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x4f68d4: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x4f68d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x4f68d8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x4f68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x4f68dc: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x4f68dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x4f68e0: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x4f68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x4f68e4: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x4f68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x4f68e8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4f68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4f68ec: 0x96830014  lhu         $v1, 0x14($s4)
    ctx->pc = 0x4f68ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4f68f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4f68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4f68f4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4f68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x4f68f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f68fc: 0x94500002  lhu         $s0, 0x2($v0)
    ctx->pc = 0x4f68fcu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4f6900: 0xc13f220  jal         func_4FC880
    ctx->pc = 0x4F6900u;
    SET_GPR_U32(ctx, 31, 0x4F6908u);
    ctx->pc = 0x4F6904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6900u;
            // 0x4f6904: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC880u;
    if (runtime->hasFunction(0x4FC880u)) {
        auto targetFn = runtime->lookupFunction(0x4FC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6908u; }
        if (ctx->pc != 0x4F6908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC880_0x4fc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6908u; }
        if (ctx->pc != 0x4F6908u) { return; }
    }
    ctx->pc = 0x4F6908u;
label_4f6908:
    // 0x4f6908: 0x96850010  lhu         $a1, 0x10($s4)
    ctx->pc = 0x4f6908u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4f690c: 0xc13f220  jal         func_4FC880
    ctx->pc = 0x4F690Cu;
    SET_GPR_U32(ctx, 31, 0x4F6914u);
    ctx->pc = 0x4F6910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F690Cu;
            // 0x4f6910: 0x27a400f8  addiu       $a0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC880u;
    if (runtime->hasFunction(0x4FC880u)) {
        auto targetFn = runtime->lookupFunction(0x4FC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6914u; }
        if (ctx->pc != 0x4F6914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC880_0x4fc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6914u; }
        if (ctx->pc != 0x4F6914u) { return; }
    }
    ctx->pc = 0x4F6914u;
label_4f6914:
    // 0x4f6914: 0x96850010  lhu         $a1, 0x10($s4)
    ctx->pc = 0x4f6914u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4f6918: 0xc13f220  jal         func_4FC880
    ctx->pc = 0x4F6918u;
    SET_GPR_U32(ctx, 31, 0x4F6920u);
    ctx->pc = 0x4F691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6918u;
            // 0x4f691c: 0x27a40108  addiu       $a0, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC880u;
    if (runtime->hasFunction(0x4FC880u)) {
        auto targetFn = runtime->lookupFunction(0x4FC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6920u; }
        if (ctx->pc != 0x4F6920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC880_0x4fc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6920u; }
        if (ctx->pc != 0x4F6920u) { return; }
    }
    ctx->pc = 0x4F6920u;
label_4f6920:
    // 0x4f6920: 0x96850010  lhu         $a1, 0x10($s4)
    ctx->pc = 0x4f6920u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4f6924: 0xc13f220  jal         func_4FC880
    ctx->pc = 0x4F6924u;
    SET_GPR_U32(ctx, 31, 0x4F692Cu);
    ctx->pc = 0x4F6928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6924u;
            // 0x4f6928: 0x27a400e8  addiu       $a0, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC880u;
    if (runtime->hasFunction(0x4FC880u)) {
        auto targetFn = runtime->lookupFunction(0x4FC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F692Cu; }
        if (ctx->pc != 0x4F692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC880_0x4fc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F692Cu; }
        if (ctx->pc != 0x4F692Cu) { return; }
    }
    ctx->pc = 0x4F692Cu;
label_4f692c:
    // 0x4f692c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x4f692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4f6930: 0xa7a0012e  sh          $zero, 0x12E($sp)
    ctx->pc = 0x4f6930u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f6934: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4f6934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x4f6938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f6938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f693c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x4f693cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4f6940:
    // 0x4f6940: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x4f6940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x4f6944: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f6944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f6948: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x4f6948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4f694c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4f694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4f6950: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4f6950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f6954: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4f6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4f6958: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4f6958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x4f695c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x4f695cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6960: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x4f6960u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f6964: 0xc13ddc0  jal         func_4F7700
    ctx->pc = 0x4F6964u;
    SET_GPR_U32(ctx, 31, 0x4F696Cu);
    ctx->pc = 0x4F6968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6964u;
            // 0x4f6968: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7700u;
    if (runtime->hasFunction(0x4F7700u)) {
        auto targetFn = runtime->lookupFunction(0x4F7700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F696Cu; }
        if (ctx->pc != 0x4F696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7700_0x4f7700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F696Cu; }
        if (ctx->pc != 0x4F696Cu) { return; }
    }
    ctx->pc = 0x4F696Cu;
label_4f696c:
    // 0x4f696c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4f696cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4f6970: 0x0  nop
    ctx->pc = 0x4f6970u;
    // NOP
    // 0x4f6974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6978: 0x450102c9  bc1t        . + 4 + (0x2C9 << 2)
    ctx->pc = 0x4F6978u;
    {
        const bool branch_taken_0x4f6978 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4F697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6978u;
            // 0x4f697c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6978) {
            ctx->pc = 0x4F74A0u;
            goto label_4f74a0;
        }
    }
    ctx->pc = 0x4F6980u;
    // 0x4f6980: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4f6980u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f6984: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x4f6984u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4f6988: 0x148302a7  bne         $a0, $v1, . + 4 + (0x2A7 << 2)
    ctx->pc = 0x4F6988u;
    {
        const bool branch_taken_0x4f6988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f6988) {
            ctx->pc = 0x4F7428u;
            goto label_4f7428;
        }
    }
    ctx->pc = 0x4F6990u;
    // 0x4f6990: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4f6990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4f6994: 0x8c430968  lw          $v1, 0x968($v0)
    ctx->pc = 0x4f6994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x4f6998: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4f6998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4f699c: 0x14620086  bne         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x4F699Cu;
    {
        const bool branch_taken_0x4f699c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f699c) {
            ctx->pc = 0x4F6BB8u;
            goto label_4f6bb8;
        }
    }
    ctx->pc = 0x4F69A4u;
    // 0x4f69a4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4f69a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f69a8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x4f69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4f69ac: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x4F69ACu;
    {
        const bool branch_taken_0x4f69ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f69ac) {
            ctx->pc = 0x4F6B30u;
            goto label_4f6b30;
        }
    }
    ctx->pc = 0x4F69B4u;
    // 0x4f69b4: 0x82a200e5  lb          $v0, 0xE5($s5)
    ctx->pc = 0x4f69b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 229)));
    // 0x4f69b8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4F69B8u;
    {
        const bool branch_taken_0x4f69b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f69b8) {
            ctx->pc = 0x4F6AA8u;
            goto label_4f6aa8;
        }
    }
    ctx->pc = 0x4F69C0u;
    // 0x4f69c0: 0xc6a200ec  lwc1        $f2, 0xEC($s5)
    ctx->pc = 0x4f69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4f69c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x4f69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x4f69c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f69c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f69cc: 0x0  nop
    ctx->pc = 0x4f69ccu;
    // NOP
    // 0x4f69d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4f69d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f69d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x4F69D4u;
    {
        const bool branch_taken_0x4f69d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f69d4) {
            ctx->pc = 0x4F6A20u;
            goto label_4f6a20;
        }
    }
    ctx->pc = 0x4F69DCu;
    // 0x4f69dc: 0xc6a100f0  lwc1        $f1, 0xF0($s5)
    ctx->pc = 0x4f69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f69e0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x4f69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x4f69e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f69e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f69e8: 0x0  nop
    ctx->pc = 0x4f69e8u;
    // NOP
    // 0x4f69ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4f69ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4f69f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x4f69f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f69f4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x4F69F4u;
    {
        const bool branch_taken_0x4f69f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f69f4) {
            ctx->pc = 0x4F6A20u;
            goto label_4f6a20;
        }
    }
    ctx->pc = 0x4F69FCu;
    // 0x4f69fc: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f69fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6a00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6A00u;
    {
        const bool branch_taken_0x4f6a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f6a00) {
            ctx->pc = 0x4F6A18u;
            goto label_4f6a18;
        }
    }
    ctx->pc = 0x4F6A08u;
    // 0x4f6a08: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x4f6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x4f6a0c: 0x10000270  b           . + 4 + (0x270 << 2)
    ctx->pc = 0x4F6A0Cu;
    {
        const bool branch_taken_0x4f6a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A0Cu;
            // 0x4f6a10: 0xa7a2012e  sh          $v0, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6a0c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6A14u;
    // 0x4f6a14: 0x0  nop
    ctx->pc = 0x4f6a14u;
    // NOP
label_4f6a18:
    // 0x4f6a18: 0x1000026d  b           . + 4 + (0x26D << 2)
    ctx->pc = 0x4F6A18u;
    {
        const bool branch_taken_0x4f6a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A18u;
            // 0x4f6a1c: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6a18) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6A20u;
label_4f6a20:
    // 0x4f6a20: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6a20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6a24: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6A24u;
    {
        const bool branch_taken_0x4f6a24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6a24) {
            ctx->pc = 0x4F6A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A24u;
            // 0x4f6a28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6A3Cu;
            goto label_4f6a3c;
        }
    }
    ctx->pc = 0x4F6A2Cu;
    // 0x4f6a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6a30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6A30u;
    {
        const bool branch_taken_0x4f6a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A30u;
            // 0x4f6a34: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6a30) {
            ctx->pc = 0x4F6A54u;
            goto label_4f6a54;
        }
    }
    ctx->pc = 0x4F6A38u;
    // 0x4f6a38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6a3c:
    // 0x4f6a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6a48: 0x0  nop
    ctx->pc = 0x4f6a48u;
    // NOP
    // 0x4f6a4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6a50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6a54:
    // 0x4f6a54: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6a58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6a60: 0x0  nop
    ctx->pc = 0x4f6a60u;
    // NOP
    // 0x4f6a64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6a68: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F6A68u;
    {
        const bool branch_taken_0x4f6a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6a68) {
            ctx->pc = 0x4F6A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A68u;
            // 0x4f6a6c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6A84u;
            goto label_4f6a84;
        }
    }
    ctx->pc = 0x4F6A70u;
    // 0x4f6a70: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6a70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6a74: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6a74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6a78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6A78u;
    {
        const bool branch_taken_0x4f6a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A78u;
            // 0x4f6a7c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6a78) {
            ctx->pc = 0x4F6A9Cu;
            goto label_4f6a9c;
        }
    }
    ctx->pc = 0x4F6A80u;
    // 0x4f6a80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6a80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f6a84:
    // 0x4f6a84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6a88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6a88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6a8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6a90: 0x0  nop
    ctx->pc = 0x4f6a90u;
    // NOP
    // 0x4f6a94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6a98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f6a9c:
    // 0x4f6a9c: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x4F6A9Cu;
    {
        const bool branch_taken_0x4f6a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6A9Cu;
            // 0x4f6aa0: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6a9c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6AA4u;
    // 0x4f6aa4: 0x0  nop
    ctx->pc = 0x4f6aa4u;
    // NOP
label_4f6aa8:
    // 0x4f6aa8: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6aa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6aac: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6AACu;
    {
        const bool branch_taken_0x4f6aac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6aac) {
            ctx->pc = 0x4F6AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6AACu;
            // 0x4f6ab0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6AC4u;
            goto label_4f6ac4;
        }
    }
    ctx->pc = 0x4F6AB4u;
    // 0x4f6ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6ab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6AB8u;
    {
        const bool branch_taken_0x4f6ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6AB8u;
            // 0x4f6abc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6ab8) {
            ctx->pc = 0x4F6ADCu;
            goto label_4f6adc;
        }
    }
    ctx->pc = 0x4F6AC0u;
    // 0x4f6ac0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6ac4:
    // 0x4f6ac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6ac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6ad0: 0x0  nop
    ctx->pc = 0x4f6ad0u;
    // NOP
    // 0x4f6ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6ad8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6adc:
    // 0x4f6adc: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6ae0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6ae8: 0x0  nop
    ctx->pc = 0x4f6ae8u;
    // NOP
    // 0x4f6aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6af0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F6AF0u;
    {
        const bool branch_taken_0x4f6af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6af0) {
            ctx->pc = 0x4F6AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6AF0u;
            // 0x4f6af4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6B0Cu;
            goto label_4f6b0c;
        }
    }
    ctx->pc = 0x4F6AF8u;
    // 0x4f6af8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6afc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6B00u;
    {
        const bool branch_taken_0x4f6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6B00u;
            // 0x4f6b04: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6b00) {
            ctx->pc = 0x4F6B24u;
            goto label_4f6b24;
        }
    }
    ctx->pc = 0x4F6B08u;
    // 0x4f6b08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f6b0c:
    // 0x4f6b0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6b10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6b14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6b18: 0x0  nop
    ctx->pc = 0x4f6b18u;
    // NOP
    // 0x4f6b1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6b20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f6b24:
    // 0x4f6b24: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x4F6B24u;
    {
        const bool branch_taken_0x4f6b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6B24u;
            // 0x4f6b28: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6b24) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6B2Cu;
    // 0x4f6b2c: 0x0  nop
    ctx->pc = 0x4f6b2cu;
    // NOP
label_4f6b30:
    // 0x4f6b30: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6b30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6b34: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6B34u;
    {
        const bool branch_taken_0x4f6b34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6b34) {
            ctx->pc = 0x4F6B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6B34u;
            // 0x4f6b38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6B4Cu;
            goto label_4f6b4c;
        }
    }
    ctx->pc = 0x4F6B3Cu;
    // 0x4f6b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6b40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6B40u;
    {
        const bool branch_taken_0x4f6b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6B40u;
            // 0x4f6b44: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6b40) {
            ctx->pc = 0x4F6B64u;
            goto label_4f6b64;
        }
    }
    ctx->pc = 0x4F6B48u;
    // 0x4f6b48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6b4c:
    // 0x4f6b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6b50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6b58: 0x0  nop
    ctx->pc = 0x4f6b58u;
    // NOP
    // 0x4f6b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6b60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6b64:
    // 0x4f6b64: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6b68: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6b70: 0x0  nop
    ctx->pc = 0x4f6b70u;
    // NOP
    // 0x4f6b74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6b78: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F6B78u;
    {
        const bool branch_taken_0x4f6b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6b78) {
            ctx->pc = 0x4F6B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6B78u;
            // 0x4f6b7c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6B94u;
            goto label_4f6b94;
        }
    }
    ctx->pc = 0x4F6B80u;
    // 0x4f6b80: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6b80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6b84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6b84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6b88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6B88u;
    {
        const bool branch_taken_0x4f6b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6B88u;
            // 0x4f6b8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6b88) {
            ctx->pc = 0x4F6BACu;
            goto label_4f6bac;
        }
    }
    ctx->pc = 0x4F6B90u;
    // 0x4f6b90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f6b94:
    // 0x4f6b94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6b98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6b98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6b9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6ba0: 0x0  nop
    ctx->pc = 0x4f6ba0u;
    // NOP
    // 0x4f6ba4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6ba8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f6bac:
    // 0x4f6bac: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x4F6BACu;
    {
        const bool branch_taken_0x4f6bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6BACu;
            // 0x4f6bb0: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6bac) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6BB4u;
    // 0x4f6bb4: 0x0  nop
    ctx->pc = 0x4f6bb4u;
    // NOP
label_4f6bb8:
    // 0x4f6bb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4f6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4f6bbc: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4F6BBCu;
    {
        const bool branch_taken_0x4f6bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f6bbc) {
            ctx->pc = 0x4F6CB8u;
            goto label_4f6cb8;
        }
    }
    ctx->pc = 0x4F6BC4u;
    // 0x4f6bc4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4f6bc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f6bc8: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x4f6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x4f6bcc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F6BCCu;
    {
        const bool branch_taken_0x4f6bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f6bcc) {
            ctx->pc = 0x4F6BF8u;
            goto label_4f6bf8;
        }
    }
    ctx->pc = 0x4F6BD4u;
    // 0x4f6bd4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6bd8: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F6BD8u;
    SET_GPR_U32(ctx, 31, 0x4F6BE0u);
    ctx->pc = 0x4F6BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6BD8u;
            // 0x4f6bdc: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6BE0u; }
        if (ctx->pc != 0x4F6BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6BE0u; }
        if (ctx->pc != 0x4F6BE0u) { return; }
    }
    ctx->pc = 0x4F6BE0u;
label_4f6be0:
    // 0x4f6be0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4f6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f6be4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6be8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6BE8u;
    {
        const bool branch_taken_0x4f6be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f6be8) {
            ctx->pc = 0x4F6BF8u;
            goto label_4f6bf8;
        }
    }
    ctx->pc = 0x4F6BF0u;
    // 0x4f6bf0: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x4F6BF0u;
    {
        const bool branch_taken_0x4f6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6BF0u;
            // 0x4f6bf4: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6bf0) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6BF8u;
label_4f6bf8:
    // 0x4f6bf8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4f6bf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f6bfc: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x4f6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x4f6c00: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4F6C00u;
    {
        const bool branch_taken_0x4f6c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f6c00) {
            ctx->pc = 0x4F6C30u;
            goto label_4f6c30;
        }
    }
    ctx->pc = 0x4F6C08u;
    // 0x4f6c08: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6c0c: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F6C0Cu;
    SET_GPR_U32(ctx, 31, 0x4F6C14u);
    ctx->pc = 0x4F6C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6C0Cu;
            // 0x4f6c10: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6C14u; }
        if (ctx->pc != 0x4F6C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6C14u; }
        if (ctx->pc != 0x4F6C14u) { return; }
    }
    ctx->pc = 0x4F6C14u;
label_4f6c14:
    // 0x4f6c14: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x4f6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f6c18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4f6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4f6c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F6C1Cu;
    {
        const bool branch_taken_0x4f6c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f6c1c) {
            ctx->pc = 0x4F6C30u;
            goto label_4f6c30;
        }
    }
    ctx->pc = 0x4F6C24u;
    // 0x4f6c24: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x4F6C24u;
    {
        const bool branch_taken_0x4f6c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6C24u;
            // 0x4f6c28: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6c24) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6C2Cu;
    // 0x4f6c2c: 0x0  nop
    ctx->pc = 0x4f6c2cu;
    // NOP
label_4f6c30:
    // 0x4f6c30: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6c34: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6C34u;
    {
        const bool branch_taken_0x4f6c34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6c34) {
            ctx->pc = 0x4F6C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6C34u;
            // 0x4f6c38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6C4Cu;
            goto label_4f6c4c;
        }
    }
    ctx->pc = 0x4F6C3Cu;
    // 0x4f6c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6c40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6C40u;
    {
        const bool branch_taken_0x4f6c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6C40u;
            // 0x4f6c44: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6c40) {
            ctx->pc = 0x4F6C64u;
            goto label_4f6c64;
        }
    }
    ctx->pc = 0x4F6C48u;
    // 0x4f6c48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6c4c:
    // 0x4f6c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6c50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6c58: 0x0  nop
    ctx->pc = 0x4f6c58u;
    // NOP
    // 0x4f6c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6c60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6c64:
    // 0x4f6c64: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6c68: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6c70: 0x0  nop
    ctx->pc = 0x4f6c70u;
    // NOP
    // 0x4f6c74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6c78: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F6C78u;
    {
        const bool branch_taken_0x4f6c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6c78) {
            ctx->pc = 0x4F6C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6C78u;
            // 0x4f6c7c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6C94u;
            goto label_4f6c94;
        }
    }
    ctx->pc = 0x4F6C80u;
    // 0x4f6c80: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6c80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6c84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6c88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6C88u;
    {
        const bool branch_taken_0x4f6c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6C88u;
            // 0x4f6c8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6c88) {
            ctx->pc = 0x4F6CACu;
            goto label_4f6cac;
        }
    }
    ctx->pc = 0x4F6C90u;
    // 0x4f6c90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6c90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f6c94:
    // 0x4f6c94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6c98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6c98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6c9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6ca0: 0x0  nop
    ctx->pc = 0x4f6ca0u;
    // NOP
    // 0x4f6ca4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6ca8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f6cac:
    // 0x4f6cac: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x4F6CACu;
    {
        const bool branch_taken_0x4f6cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6CACu;
            // 0x4f6cb0: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6cac) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6CB4u;
    // 0x4f6cb4: 0x0  nop
    ctx->pc = 0x4f6cb4u;
    // NOP
label_4f6cb8:
    // 0x4f6cb8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4f6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4f6cbc: 0x1462018c  bne         $v1, $v0, . + 4 + (0x18C << 2)
    ctx->pc = 0x4F6CBCu;
    {
        const bool branch_taken_0x4f6cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f6cbc) {
            ctx->pc = 0x4F72F0u;
            goto label_4f72f0;
        }
    }
    ctx->pc = 0x4F6CC4u;
    // 0x4f6cc4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4f6cc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f6cc8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x4f6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4f6ccc: 0x14620166  bne         $v1, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x4F6CCCu;
    {
        const bool branch_taken_0x4f6ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f6ccc) {
            ctx->pc = 0x4F7268u;
            goto label_4f7268;
        }
    }
    ctx->pc = 0x4F6CD4u;
    // 0x4f6cd4: 0x8ea400f4  lw          $a0, 0xF4($s5)
    ctx->pc = 0x4f6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
    // 0x4f6cd8: 0x10800141  beqz        $a0, . + 4 + (0x141 << 2)
    ctx->pc = 0x4F6CD8u;
    {
        const bool branch_taken_0x4f6cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6cd8) {
            ctx->pc = 0x4F71E0u;
            goto label_4f71e0;
        }
    }
    ctx->pc = 0x4F6CE0u;
    // 0x4f6ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4f6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f6ce4: 0x108200d8  beq         $a0, $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x4F6CE4u;
    {
        const bool branch_taken_0x4f6ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F6CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6CE4u;
            // 0x4f6ce8: 0x92030025  lbu         $v1, 0x25($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6ce4) {
            ctx->pc = 0x4F7048u;
            goto label_4f7048;
        }
    }
    ctx->pc = 0x4F6CECu;
    // 0x4f6cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4f6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4f6cf0: 0x10820091  beq         $a0, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x4F6CF0u;
    {
        const bool branch_taken_0x4f6cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f6cf0) {
            ctx->pc = 0x4F6F38u;
            goto label_4f6f38;
        }
    }
    ctx->pc = 0x4F6CF8u;
    // 0x4f6cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f6cfc: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4F6CFCu;
    {
        const bool branch_taken_0x4f6cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f6cfc) {
            ctx->pc = 0x4F6E28u;
            goto label_4f6e28;
        }
    }
    ctx->pc = 0x4F6D04u;
    // 0x4f6d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f6d08: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6D08u;
    {
        const bool branch_taken_0x4f6d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f6d08) {
            ctx->pc = 0x4F6D18u;
            goto label_4f6d18;
        }
    }
    ctx->pc = 0x4F6D10u;
    // 0x4f6d10: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x4F6D10u;
    {
        const bool branch_taken_0x4f6d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6d10) {
            ctx->pc = 0x4F7158u;
            goto label_4f7158;
        }
    }
    ctx->pc = 0x4F6D18u;
label_4f6d18:
    // 0x4f6d18: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4f6d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4f6d1c: 0x1444001e  bne         $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4F6D1Cu;
    {
        const bool branch_taken_0x4f6d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f6d1c) {
            ctx->pc = 0x4F6D98u;
            goto label_4f6d98;
        }
    }
    ctx->pc = 0x4F6D24u;
    // 0x4f6d24: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6d28: 0x8c500d70  lw          $s0, 0xD70($v0)
    ctx->pc = 0x4f6d28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x4f6d2c: 0x8c510da0  lw          $s1, 0xDA0($v0)
    ctx->pc = 0x4f6d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4f6d30: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F6D30u;
    SET_GPR_U32(ctx, 31, 0x4F6D38u);
    ctx->pc = 0x4F6D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6D30u;
            // 0x4f6d34: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6D38u; }
        if (ctx->pc != 0x4F6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6D38u; }
        if (ctx->pc != 0x4F6D38u) { return; }
    }
    ctx->pc = 0x4F6D38u;
label_4f6d38:
    // 0x4f6d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6d3c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x4f6d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f6d40: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6d44: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4F6D44u;
    SET_GPR_U32(ctx, 31, 0x4F6D4Cu);
    ctx->pc = 0x4F6D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6D44u;
            // 0x4f6d48: 0x8c560da0  lw          $s6, 0xDA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6D4Cu; }
        if (ctx->pc != 0x4F6D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6D4Cu; }
        if (ctx->pc != 0x4F6D4Cu) { return; }
    }
    ctx->pc = 0x4F6D4Cu;
label_4f6d4c:
    // 0x4f6d4c: 0x38430004  xori        $v1, $v0, 0x4
    ctx->pc = 0x4f6d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x4f6d50: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4f6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4f6d54: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f6d54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4f6d58: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4f6d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4f6d5c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x4f6d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f6d60: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4f6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4f6d64: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x4f6d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4f6d68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f6d6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f6d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f6d70: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4f6d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x4f6d74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f6d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f6d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6D78u;
    {
        const bool branch_taken_0x4f6d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6d78) {
            ctx->pc = 0x4F6D88u;
            goto label_4f6d88;
        }
    }
    ctx->pc = 0x4F6D80u;
    // 0x4f6d80: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x4F6D80u;
    {
        const bool branch_taken_0x4f6d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6D80u;
            // 0x4f6d84: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6d80) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6D88u;
label_4f6d88:
    // 0x4f6d88: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x4f6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x4f6d8c: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x4F6D8Cu;
    {
        const bool branch_taken_0x4f6d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6D8Cu;
            // 0x4f6d90: 0xa7a2012e  sh          $v0, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6d8c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6D94u;
    // 0x4f6d94: 0x0  nop
    ctx->pc = 0x4f6d94u;
    // NOP
label_4f6d98:
    // 0x4f6d98: 0x1044018d  beq         $v0, $a0, . + 4 + (0x18D << 2)
    ctx->pc = 0x4F6D98u;
    {
        const bool branch_taken_0x4f6d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f6d98) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6DA0u;
    // 0x4f6da0: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6da0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6da4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6DA4u;
    {
        const bool branch_taken_0x4f6da4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6da4) {
            ctx->pc = 0x4F6DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6DA4u;
            // 0x4f6da8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6DBCu;
            goto label_4f6dbc;
        }
    }
    ctx->pc = 0x4F6DACu;
    // 0x4f6dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6DB0u;
    {
        const bool branch_taken_0x4f6db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6DB0u;
            // 0x4f6db4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6db0) {
            ctx->pc = 0x4F6DD4u;
            goto label_4f6dd4;
        }
    }
    ctx->pc = 0x4F6DB8u;
    // 0x4f6db8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6dbc:
    // 0x4f6dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6dc8: 0x0  nop
    ctx->pc = 0x4f6dc8u;
    // NOP
    // 0x4f6dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6dd0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6dd4:
    // 0x4f6dd4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6dd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6de0: 0x0  nop
    ctx->pc = 0x4f6de0u;
    // NOP
    // 0x4f6de4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6de4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6de8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F6DE8u;
    {
        const bool branch_taken_0x4f6de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6de8) {
            ctx->pc = 0x4F6DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6DE8u;
            // 0x4f6dec: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6E04u;
            goto label_4f6e04;
        }
    }
    ctx->pc = 0x4F6DF0u;
    // 0x4f6df0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6df4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6df8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6DF8u;
    {
        const bool branch_taken_0x4f6df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6DF8u;
            // 0x4f6dfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6df8) {
            ctx->pc = 0x4F6E1Cu;
            goto label_4f6e1c;
        }
    }
    ctx->pc = 0x4F6E00u;
    // 0x4f6e00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f6e04:
    // 0x4f6e04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6e08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6e08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6e0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6e0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6e10: 0x0  nop
    ctx->pc = 0x4f6e10u;
    // NOP
    // 0x4f6e14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6e18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f6e1c:
    // 0x4f6e1c: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x4F6E1Cu;
    {
        const bool branch_taken_0x4f6e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6E1Cu;
            // 0x4f6e20: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6e1c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6E24u;
    // 0x4f6e24: 0x0  nop
    ctx->pc = 0x4f6e24u;
    // NOP
label_4f6e28:
    // 0x4f6e28: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4f6e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4f6e2c: 0x1444001e  bne         $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4F6E2Cu;
    {
        const bool branch_taken_0x4f6e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f6e2c) {
            ctx->pc = 0x4F6EA8u;
            goto label_4f6ea8;
        }
    }
    ctx->pc = 0x4F6E34u;
    // 0x4f6e34: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6e38: 0x8c500d70  lw          $s0, 0xD70($v0)
    ctx->pc = 0x4f6e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x4f6e3c: 0x8c510da0  lw          $s1, 0xDA0($v0)
    ctx->pc = 0x4f6e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4f6e40: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F6E40u;
    SET_GPR_U32(ctx, 31, 0x4F6E48u);
    ctx->pc = 0x4F6E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6E40u;
            // 0x4f6e44: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6E48u; }
        if (ctx->pc != 0x4F6E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6E48u; }
        if (ctx->pc != 0x4F6E48u) { return; }
    }
    ctx->pc = 0x4F6E48u;
label_4f6e48:
    // 0x4f6e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6e4c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x4f6e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f6e50: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6e54: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4F6E54u;
    SET_GPR_U32(ctx, 31, 0x4F6E5Cu);
    ctx->pc = 0x4F6E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6E54u;
            // 0x4f6e58: 0x8c560da0  lw          $s6, 0xDA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6E5Cu; }
        if (ctx->pc != 0x4F6E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6E5Cu; }
        if (ctx->pc != 0x4F6E5Cu) { return; }
    }
    ctx->pc = 0x4F6E5Cu;
label_4f6e5c:
    // 0x4f6e5c: 0x38430004  xori        $v1, $v0, 0x4
    ctx->pc = 0x4f6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x4f6e60: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4f6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4f6e64: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f6e64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4f6e68: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4f6e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4f6e6c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x4f6e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f6e70: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4f6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4f6e74: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x4f6e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4f6e78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f6e7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f6e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f6e80: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4f6e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x4f6e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f6e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f6e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6E88u;
    {
        const bool branch_taken_0x4f6e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6e88) {
            ctx->pc = 0x4F6E98u;
            goto label_4f6e98;
        }
    }
    ctx->pc = 0x4F6E90u;
    // 0x4f6e90: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x4F6E90u;
    {
        const bool branch_taken_0x4f6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6E90u;
            // 0x4f6e94: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6e90) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6E98u;
label_4f6e98:
    // 0x4f6e98: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x4f6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x4f6e9c: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x4F6E9Cu;
    {
        const bool branch_taken_0x4f6e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6E9Cu;
            // 0x4f6ea0: 0xa7a2012e  sh          $v0, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6e9c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6EA4u;
    // 0x4f6ea4: 0x0  nop
    ctx->pc = 0x4f6ea4u;
    // NOP
label_4f6ea8:
    // 0x4f6ea8: 0x10440149  beq         $v0, $a0, . + 4 + (0x149 << 2)
    ctx->pc = 0x4F6EA8u;
    {
        const bool branch_taken_0x4f6ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f6ea8) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6EB0u;
    // 0x4f6eb0: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6eb4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6EB4u;
    {
        const bool branch_taken_0x4f6eb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6eb4) {
            ctx->pc = 0x4F6EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6EB4u;
            // 0x4f6eb8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6ECCu;
            goto label_4f6ecc;
        }
    }
    ctx->pc = 0x4F6EBCu;
    // 0x4f6ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6ec0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6EC0u;
    {
        const bool branch_taken_0x4f6ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6EC0u;
            // 0x4f6ec4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6ec0) {
            ctx->pc = 0x4F6EE4u;
            goto label_4f6ee4;
        }
    }
    ctx->pc = 0x4F6EC8u;
    // 0x4f6ec8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6ecc:
    // 0x4f6ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6ed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6ed8: 0x0  nop
    ctx->pc = 0x4f6ed8u;
    // NOP
    // 0x4f6edc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6ee0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6ee4:
    // 0x4f6ee4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6ee8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6ef0: 0x0  nop
    ctx->pc = 0x4f6ef0u;
    // NOP
    // 0x4f6ef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f6ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f6ef8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F6EF8u;
    {
        const bool branch_taken_0x4f6ef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f6ef8) {
            ctx->pc = 0x4F6EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6EF8u;
            // 0x4f6efc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6F14u;
            goto label_4f6f14;
        }
    }
    ctx->pc = 0x4F6F00u;
    // 0x4f6f00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6f04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6f08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6F08u;
    {
        const bool branch_taken_0x4f6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6F08u;
            // 0x4f6f0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6f08) {
            ctx->pc = 0x4F6F2Cu;
            goto label_4f6f2c;
        }
    }
    ctx->pc = 0x4F6F10u;
    // 0x4f6f10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f6f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f6f14:
    // 0x4f6f14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f6f18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f6f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f6f1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f6f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f6f20: 0x0  nop
    ctx->pc = 0x4f6f20u;
    // NOP
    // 0x4f6f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6f28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f6f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f6f2c:
    // 0x4f6f2c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x4F6F2Cu;
    {
        const bool branch_taken_0x4f6f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6F2Cu;
            // 0x4f6f30: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6f2c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6F34u;
    // 0x4f6f34: 0x0  nop
    ctx->pc = 0x4f6f34u;
    // NOP
label_4f6f38:
    // 0x4f6f38: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4f6f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4f6f3c: 0x1444001e  bne         $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4F6F3Cu;
    {
        const bool branch_taken_0x4f6f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f6f3c) {
            ctx->pc = 0x4F6FB8u;
            goto label_4f6fb8;
        }
    }
    ctx->pc = 0x4F6F44u;
    // 0x4f6f44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6f48: 0x8c500d70  lw          $s0, 0xD70($v0)
    ctx->pc = 0x4f6f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x4f6f4c: 0x8c510da0  lw          $s1, 0xDA0($v0)
    ctx->pc = 0x4f6f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4f6f50: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F6F50u;
    SET_GPR_U32(ctx, 31, 0x4F6F58u);
    ctx->pc = 0x4F6F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6F50u;
            // 0x4f6f54: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6F58u; }
        if (ctx->pc != 0x4F6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6F58u; }
        if (ctx->pc != 0x4F6F58u) { return; }
    }
    ctx->pc = 0x4F6F58u;
label_4f6f58:
    // 0x4f6f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f6f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6f5c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x4f6f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f6f60: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f6f64: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4F6F64u;
    SET_GPR_U32(ctx, 31, 0x4F6F6Cu);
    ctx->pc = 0x4F6F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6F64u;
            // 0x4f6f68: 0x8c560da0  lw          $s6, 0xDA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6F6Cu; }
        if (ctx->pc != 0x4F6F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6F6Cu; }
        if (ctx->pc != 0x4F6F6Cu) { return; }
    }
    ctx->pc = 0x4F6F6Cu;
label_4f6f6c:
    // 0x4f6f6c: 0x38430004  xori        $v1, $v0, 0x4
    ctx->pc = 0x4f6f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x4f6f70: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4f6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4f6f74: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f6f74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4f6f78: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4f6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4f6f7c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x4f6f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f6f80: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4f6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4f6f84: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x4f6f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4f6f88: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f6f8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f6f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f6f90: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4f6f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x4f6f94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f6f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f6f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F6F98u;
    {
        const bool branch_taken_0x4f6f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f6f98) {
            ctx->pc = 0x4F6FA8u;
            goto label_4f6fa8;
        }
    }
    ctx->pc = 0x4F6FA0u;
    // 0x4f6fa0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x4F6FA0u;
    {
        const bool branch_taken_0x4f6fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6FA0u;
            // 0x4f6fa4: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6fa0) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6FA8u;
label_4f6fa8:
    // 0x4f6fa8: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x4f6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x4f6fac: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x4F6FACu;
    {
        const bool branch_taken_0x4f6fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6FACu;
            // 0x4f6fb0: 0xa7a2012e  sh          $v0, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6fac) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6FB4u;
    // 0x4f6fb4: 0x0  nop
    ctx->pc = 0x4f6fb4u;
    // NOP
label_4f6fb8:
    // 0x4f6fb8: 0x10440105  beq         $v0, $a0, . + 4 + (0x105 << 2)
    ctx->pc = 0x4F6FB8u;
    {
        const bool branch_taken_0x4f6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f6fb8) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F6FC0u;
    // 0x4f6fc0: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f6fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f6fc4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F6FC4u;
    {
        const bool branch_taken_0x4f6fc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f6fc4) {
            ctx->pc = 0x4F6FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6FC4u;
            // 0x4f6fc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6FDCu;
            goto label_4f6fdc;
        }
    }
    ctx->pc = 0x4F6FCCu;
    // 0x4f6fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6fd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F6FD0u;
    {
        const bool branch_taken_0x4f6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6FD0u;
            // 0x4f6fd4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6fd0) {
            ctx->pc = 0x4F6FF4u;
            goto label_4f6ff4;
        }
    }
    ctx->pc = 0x4F6FD8u;
    // 0x4f6fd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f6fdc:
    // 0x4f6fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f6fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f6fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f6fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f6fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f6fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f6fe8: 0x0  nop
    ctx->pc = 0x4f6fe8u;
    // NOP
    // 0x4f6fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f6fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f6ff0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f6ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f6ff4:
    // 0x4f6ff4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f6ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f6ff8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f6ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f6ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7000: 0x0  nop
    ctx->pc = 0x4f7000u;
    // NOP
    // 0x4f7004: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f7004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f7008: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7008u;
    {
        const bool branch_taken_0x4f7008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f7008) {
            ctx->pc = 0x4F700Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7008u;
            // 0x4f700c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7024u;
            goto label_4f7024;
        }
    }
    ctx->pc = 0x4F7010u;
    // 0x4f7010: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f7014: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f7014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7018u;
    {
        const bool branch_taken_0x4f7018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7018u;
            // 0x4f701c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7018) {
            ctx->pc = 0x4F703Cu;
            goto label_4f703c;
        }
    }
    ctx->pc = 0x4F7020u;
    // 0x4f7020: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f7020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f7024:
    // 0x4f7024: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f7024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f7028: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f702c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f702cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7030: 0x0  nop
    ctx->pc = 0x4f7030u;
    // NOP
    // 0x4f7034: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7038: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f703c:
    // 0x4f703c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x4F703Cu;
    {
        const bool branch_taken_0x4f703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F703Cu;
            // 0x4f7040: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f703c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F7044u;
    // 0x4f7044: 0x0  nop
    ctx->pc = 0x4f7044u;
    // NOP
label_4f7048:
    // 0x4f7048: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4f7048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4f704c: 0x1444001e  bne         $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4F704Cu;
    {
        const bool branch_taken_0x4f704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f704c) {
            ctx->pc = 0x4F70C8u;
            goto label_4f70c8;
        }
    }
    ctx->pc = 0x4F7054u;
    // 0x4f7054: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f7058: 0x8c500d70  lw          $s0, 0xD70($v0)
    ctx->pc = 0x4f7058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x4f705c: 0x8c510da0  lw          $s1, 0xDA0($v0)
    ctx->pc = 0x4f705cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x4f7060: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F7060u;
    SET_GPR_U32(ctx, 31, 0x4F7068u);
    ctx->pc = 0x4F7064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7060u;
            // 0x4f7064: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7068u; }
        if (ctx->pc != 0x4F7068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7068u; }
        if (ctx->pc != 0x4F7068u) { return; }
    }
    ctx->pc = 0x4F7068u;
label_4f7068:
    // 0x4f7068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f7068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f706c: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x4f706cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f7070: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4f7074: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4F7074u;
    SET_GPR_U32(ctx, 31, 0x4F707Cu);
    ctx->pc = 0x4F7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7074u;
            // 0x4f7078: 0x8c560da0  lw          $s6, 0xDA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F707Cu; }
        if (ctx->pc != 0x4F707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F707Cu; }
        if (ctx->pc != 0x4F707Cu) { return; }
    }
    ctx->pc = 0x4F707Cu;
label_4f707c:
    // 0x4f707c: 0x38430004  xori        $v1, $v0, 0x4
    ctx->pc = 0x4f707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x4f7080: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4f7080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4f7084: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f7084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4f7088: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4f7088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4f708c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x4f708cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f7090: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4f7090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4f7094: 0x2021824  and         $v1, $s0, $v0
    ctx->pc = 0x4f7094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4f7098: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4f709c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f709cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f70a0: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x4f70a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x4f70a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f70a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f70a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F70A8u;
    {
        const bool branch_taken_0x4f70a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f70a8) {
            ctx->pc = 0x4F70B8u;
            goto label_4f70b8;
        }
    }
    ctx->pc = 0x4F70B0u;
    // 0x4f70b0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x4F70B0u;
    {
        const bool branch_taken_0x4f70b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F70B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F70B0u;
            // 0x4f70b4: 0xa7a0012e  sh          $zero, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f70b0) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F70B8u;
label_4f70b8:
    // 0x4f70b8: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x4f70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x4f70bc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x4F70BCu;
    {
        const bool branch_taken_0x4f70bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F70C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F70BCu;
            // 0x4f70c0: 0xa7a2012e  sh          $v0, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f70bc) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F70C4u;
    // 0x4f70c4: 0x0  nop
    ctx->pc = 0x4f70c4u;
    // NOP
label_4f70c8:
    // 0x4f70c8: 0x104400c1  beq         $v0, $a0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x4F70C8u;
    {
        const bool branch_taken_0x4f70c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f70c8) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F70D0u;
    // 0x4f70d0: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f70d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f70d4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F70D4u;
    {
        const bool branch_taken_0x4f70d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f70d4) {
            ctx->pc = 0x4F70D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F70D4u;
            // 0x4f70d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F70ECu;
            goto label_4f70ec;
        }
    }
    ctx->pc = 0x4F70DCu;
    // 0x4f70dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f70dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f70e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F70E0u;
    {
        const bool branch_taken_0x4f70e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F70E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F70E0u;
            // 0x4f70e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f70e0) {
            ctx->pc = 0x4F7104u;
            goto label_4f7104;
        }
    }
    ctx->pc = 0x4F70E8u;
    // 0x4f70e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f70ec:
    // 0x4f70ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f70ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f70f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f70f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f70f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f70f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f70f8: 0x0  nop
    ctx->pc = 0x4f70f8u;
    // NOP
    // 0x4f70fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f70fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f7100: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f7100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f7104:
    // 0x4f7104: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f7104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f7108: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f7108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f710c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f710cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7110: 0x0  nop
    ctx->pc = 0x4f7110u;
    // NOP
    // 0x4f7114: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f7114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f7118: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7118u;
    {
        const bool branch_taken_0x4f7118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f7118) {
            ctx->pc = 0x4F711Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7118u;
            // 0x4f711c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7134u;
            goto label_4f7134;
        }
    }
    ctx->pc = 0x4F7120u;
    // 0x4f7120: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f7124: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f7124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7128: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7128u;
    {
        const bool branch_taken_0x4f7128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7128u;
            // 0x4f712c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7128) {
            ctx->pc = 0x4F714Cu;
            goto label_4f714c;
        }
    }
    ctx->pc = 0x4F7130u;
    // 0x4f7130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f7130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f7134:
    // 0x4f7134: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f7138: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f713c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f713cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7140: 0x0  nop
    ctx->pc = 0x4f7140u;
    // NOP
    // 0x4f7144: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7148: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f714c:
    // 0x4f714c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x4F714Cu;
    {
        const bool branch_taken_0x4f714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F714Cu;
            // 0x4f7150: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f714c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F7154u;
    // 0x4f7154: 0x0  nop
    ctx->pc = 0x4f7154u;
    // NOP
label_4f7158:
    // 0x4f7158: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f7158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f715c: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F715Cu;
    {
        const bool branch_taken_0x4f715c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f715c) {
            ctx->pc = 0x4F7160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F715Cu;
            // 0x4f7160: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7174u;
            goto label_4f7174;
        }
    }
    ctx->pc = 0x4F7164u;
    // 0x4f7164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7168u;
    {
        const bool branch_taken_0x4f7168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7168u;
            // 0x4f716c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7168) {
            ctx->pc = 0x4F718Cu;
            goto label_4f718c;
        }
    }
    ctx->pc = 0x4F7170u;
    // 0x4f7170: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f7170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f7174:
    // 0x4f7174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f7174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f7178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f717c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f717cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7180: 0x0  nop
    ctx->pc = 0x4f7180u;
    // NOP
    // 0x4f7184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f7184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f7188: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f7188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f718c:
    // 0x4f718c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f718cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f7190: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f7190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f7194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7198: 0x0  nop
    ctx->pc = 0x4f7198u;
    // NOP
    // 0x4f719c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f719cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f71a0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F71A0u;
    {
        const bool branch_taken_0x4f71a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f71a0) {
            ctx->pc = 0x4F71A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F71A0u;
            // 0x4f71a4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F71BCu;
            goto label_4f71bc;
        }
    }
    ctx->pc = 0x4F71A8u;
    // 0x4f71a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f71a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f71ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f71acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f71b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F71B0u;
    {
        const bool branch_taken_0x4f71b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F71B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F71B0u;
            // 0x4f71b4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f71b0) {
            ctx->pc = 0x4F71D4u;
            goto label_4f71d4;
        }
    }
    ctx->pc = 0x4F71B8u;
    // 0x4f71b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f71b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f71bc:
    // 0x4f71bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f71c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f71c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f71c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f71c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f71c8: 0x0  nop
    ctx->pc = 0x4f71c8u;
    // NOP
    // 0x4f71cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f71ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f71d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f71d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f71d4:
    // 0x4f71d4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x4F71D4u;
    {
        const bool branch_taken_0x4f71d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F71D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F71D4u;
            // 0x4f71d8: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f71d4) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F71DCu;
    // 0x4f71dc: 0x0  nop
    ctx->pc = 0x4f71dcu;
    // NOP
label_4f71e0:
    // 0x4f71e0: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f71e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f71e4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F71E4u;
    {
        const bool branch_taken_0x4f71e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f71e4) {
            ctx->pc = 0x4F71E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F71E4u;
            // 0x4f71e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F71FCu;
            goto label_4f71fc;
        }
    }
    ctx->pc = 0x4F71ECu;
    // 0x4f71ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f71ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f71f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F71F0u;
    {
        const bool branch_taken_0x4f71f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F71F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F71F0u;
            // 0x4f71f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f71f0) {
            ctx->pc = 0x4F7214u;
            goto label_4f7214;
        }
    }
    ctx->pc = 0x4F71F8u;
    // 0x4f71f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f71fc:
    // 0x4f71fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f71fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f7200: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f7204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7208: 0x0  nop
    ctx->pc = 0x4f7208u;
    // NOP
    // 0x4f720c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f720cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f7210: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f7210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f7214:
    // 0x4f7214: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f7214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f7218: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f721c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f721cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7220: 0x0  nop
    ctx->pc = 0x4f7220u;
    // NOP
    // 0x4f7224: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f7224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f7228: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7228u;
    {
        const bool branch_taken_0x4f7228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f7228) {
            ctx->pc = 0x4F722Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7228u;
            // 0x4f722c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7244u;
            goto label_4f7244;
        }
    }
    ctx->pc = 0x4F7230u;
    // 0x4f7230: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f7234: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f7234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7238u;
    {
        const bool branch_taken_0x4f7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7238u;
            // 0x4f723c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7238) {
            ctx->pc = 0x4F725Cu;
            goto label_4f725c;
        }
    }
    ctx->pc = 0x4F7240u;
    // 0x4f7240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f7240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f7244:
    // 0x4f7244: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f7244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f7248: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f724c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f724cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7250: 0x0  nop
    ctx->pc = 0x4f7250u;
    // NOP
    // 0x4f7254: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7258: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f725c:
    // 0x4f725c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x4F725Cu;
    {
        const bool branch_taken_0x4f725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F725Cu;
            // 0x4f7260: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f725c) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F7264u;
    // 0x4f7264: 0x0  nop
    ctx->pc = 0x4f7264u;
    // NOP
label_4f7268:
    // 0x4f7268: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f7268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f726c: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F726Cu;
    {
        const bool branch_taken_0x4f726c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f726c) {
            ctx->pc = 0x4F7270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F726Cu;
            // 0x4f7270: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7284u;
            goto label_4f7284;
        }
    }
    ctx->pc = 0x4F7274u;
    // 0x4f7274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f7274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7278u;
    {
        const bool branch_taken_0x4f7278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7278u;
            // 0x4f727c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7278) {
            ctx->pc = 0x4F729Cu;
            goto label_4f729c;
        }
    }
    ctx->pc = 0x4F7280u;
    // 0x4f7280: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f7280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f7284:
    // 0x4f7284: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f7284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f7288: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f728c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f728cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7290: 0x0  nop
    ctx->pc = 0x4f7290u;
    // NOP
    // 0x4f7294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f7294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f7298: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f7298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f729c:
    // 0x4f729c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f729cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f72a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f72a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f72a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f72a8: 0x0  nop
    ctx->pc = 0x4f72a8u;
    // NOP
    // 0x4f72ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f72acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f72b0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F72B0u;
    {
        const bool branch_taken_0x4f72b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f72b0) {
            ctx->pc = 0x4F72B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F72B0u;
            // 0x4f72b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F72CCu;
            goto label_4f72cc;
        }
    }
    ctx->pc = 0x4F72B8u;
    // 0x4f72b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f72b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f72bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f72bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f72c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F72C0u;
    {
        const bool branch_taken_0x4f72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F72C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F72C0u;
            // 0x4f72c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f72c0) {
            ctx->pc = 0x4F72E4u;
            goto label_4f72e4;
        }
    }
    ctx->pc = 0x4F72C8u;
    // 0x4f72c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f72c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f72cc:
    // 0x4f72cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f72d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f72d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f72d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f72d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f72d8: 0x0  nop
    ctx->pc = 0x4f72d8u;
    // NOP
    // 0x4f72dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f72dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f72e0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f72e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f72e4:
    // 0x4f72e4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x4F72E4u;
    {
        const bool branch_taken_0x4f72e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F72E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F72E4u;
            // 0x4f72e8: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f72e4) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F72ECu;
    // 0x4f72ec: 0x0  nop
    ctx->pc = 0x4f72ecu;
    // NOP
label_4f72f0:
    // 0x4f72f0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4f72f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4f72f4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4f72f8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4F72F8u;
    {
        const bool branch_taken_0x4f72f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f72f8) {
            ctx->pc = 0x4F7350u;
            goto label_4f7350;
        }
    }
    ctx->pc = 0x4F7300u;
    // 0x4f7300: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f7300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f7304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4f7304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4f7308: 0x0  nop
    ctx->pc = 0x4f7308u;
    // NOP
    // 0x4f730c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4f730cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f7310: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7310u;
    {
        const bool branch_taken_0x4f7310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f7310) {
            ctx->pc = 0x4F7314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7310u;
            // 0x4f7314: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F732Cu;
            goto label_4f732c;
        }
    }
    ctx->pc = 0x4F7318u;
    // 0x4f7318: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f731c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f731cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7320: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7320u;
    {
        const bool branch_taken_0x4f7320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7320u;
            // 0x4f7324: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7320) {
            ctx->pc = 0x4F7344u;
            goto label_4f7344;
        }
    }
    ctx->pc = 0x4F7328u;
    // 0x4f7328: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4f7328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4f732c:
    // 0x4f732c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f7330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f7330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f7334: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f7334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f7338: 0x0  nop
    ctx->pc = 0x4f7338u;
    // NOP
    // 0x4f733c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7340: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f7344:
    // 0x4f7344: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4F7344u;
    {
        const bool branch_taken_0x4f7344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7344u;
            // 0x4f7348: 0xa7a3012e  sh          $v1, 0x12E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7344) {
            ctx->pc = 0x4F73D0u;
            goto label_4f73d0;
        }
    }
    ctx->pc = 0x4F734Cu;
    // 0x4f734c: 0x0  nop
    ctx->pc = 0x4f734cu;
    // NOP
label_4f7350:
    // 0x4f7350: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f7350u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f7354: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7354u;
    {
        const bool branch_taken_0x4f7354 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f7354) {
            ctx->pc = 0x4F7358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7354u;
            // 0x4f7358: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F736Cu;
            goto label_4f736c;
        }
    }
    ctx->pc = 0x4F735Cu;
    // 0x4f735c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F7360u;
    {
        const bool branch_taken_0x4f7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7360u;
            // 0x4f7364: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7360) {
            ctx->pc = 0x4F7384u;
            goto label_4f7384;
        }
    }
    ctx->pc = 0x4F7368u;
    // 0x4f7368: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4f7368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f736c:
    // 0x4f736c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f7370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f7370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f7374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f7374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7378: 0x0  nop
    ctx->pc = 0x4f7378u;
    // NOP
    // 0x4f737c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f737cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4f7380: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4f7380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4f7384:
    // 0x4f7384: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4f7384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4f7388: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4f7388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4f738c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f738cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7390: 0x0  nop
    ctx->pc = 0x4f7390u;
    // NOP
    // 0x4f7394: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f7394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4f7398: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7398u;
    {
        const bool branch_taken_0x4f7398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f7398) {
            ctx->pc = 0x4F739Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7398u;
            // 0x4f739c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F73B4u;
            goto label_4f73b4;
        }
    }
    ctx->pc = 0x4F73A0u;
    // 0x4f73a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f73a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f73a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f73a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f73a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4F73A8u;
    {
        const bool branch_taken_0x4f73a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F73ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F73A8u;
            // 0x4f73ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f73a8) {
            ctx->pc = 0x4F73CCu;
            goto label_4f73cc;
        }
    }
    ctx->pc = 0x4F73B0u;
    // 0x4f73b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4f73b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f73b4:
    // 0x4f73b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4f73b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f73b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4f73bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f73bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4f73c0: 0x0  nop
    ctx->pc = 0x4f73c0u;
    // NOP
    // 0x4f73c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f73c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f73c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4f73c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_4f73cc:
    // 0x4f73cc: 0xa7a3012e  sh          $v1, 0x12E($sp)
    ctx->pc = 0x4f73ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 3));
label_4f73d0:
    // 0x4f73d0: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4f73d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f73d4: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x4f73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x4f73d8: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x4f73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x4f73dc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x4f73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4f73e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f73e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f73e4: 0xa7a5012c  sh          $a1, 0x12C($sp)
    ctx->pc = 0x4f73e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 300), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f73e8: 0x27a7012c  addiu       $a3, $sp, 0x12C
    ctx->pc = 0x4f73e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x4f73ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f73f0: 0xc13f168  jal         func_4FC5A0
    ctx->pc = 0x4F73F0u;
    SET_GPR_U32(ctx, 31, 0x4F73F8u);
    ctx->pc = 0x4F73F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F73F0u;
            // 0x4f73f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC5A0u;
    if (runtime->hasFunction(0x4FC5A0u)) {
        auto targetFn = runtime->lookupFunction(0x4FC5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F73F8u; }
        if (ctx->pc != 0x4F73F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC5A0_0x4fc5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F73F8u; }
        if (ctx->pc != 0x4F73F8u) { return; }
    }
    ctx->pc = 0x4F73F8u;
label_4f73f8:
    // 0x4f73f8: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x4f73f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x4f73fc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x4f73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x4f7400: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x4f7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4f7404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f7404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7408: 0x27a7012e  addiu       $a3, $sp, 0x12E
    ctx->pc = 0x4f7408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 302));
    // 0x4f740c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f740cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f7410: 0xc13f168  jal         func_4FC5A0
    ctx->pc = 0x4F7410u;
    SET_GPR_U32(ctx, 31, 0x4F7418u);
    ctx->pc = 0x4F7414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7410u;
            // 0x4f7414: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC5A0u;
    if (runtime->hasFunction(0x4FC5A0u)) {
        auto targetFn = runtime->lookupFunction(0x4FC5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7418u; }
        if (ctx->pc != 0x4F7418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC5A0_0x4fc5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7418u; }
        if (ctx->pc != 0x4F7418u) { return; }
    }
    ctx->pc = 0x4F7418u;
label_4f7418:
    // 0x4f7418: 0x97a3012e  lhu         $v1, 0x12E($sp)
    ctx->pc = 0x4f7418u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 302)));
    // 0x4f741c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4F741Cu;
    {
        const bool branch_taken_0x4f741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F741Cu;
            // 0x4f7420: 0x2e3b821  addu        $s7, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f741c) {
            ctx->pc = 0x4F74A0u;
            goto label_4f74a0;
        }
    }
    ctx->pc = 0x4F7424u;
    // 0x4f7424: 0x0  nop
    ctx->pc = 0x4f7424u;
    // NOP
label_4f7428:
    // 0x4f7428: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x4f7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x4f742c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4F742Cu;
    {
        const bool branch_taken_0x4f742c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f742c) {
            ctx->pc = 0x4F74A0u;
            goto label_4f74a0;
        }
    }
    ctx->pc = 0x4F7434u;
    // 0x4f7434: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x4f7434u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4f7438: 0xa7a2012e  sh          $v0, 0x12E($sp)
    ctx->pc = 0x4f7438u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f743c: 0x97a2012e  lhu         $v0, 0x12E($sp)
    ctx->pc = 0x4f743cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 302)));
    // 0x4f7440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F7440u;
    {
        const bool branch_taken_0x4f7440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7440) {
            ctx->pc = 0x4F7450u;
            goto label_4f7450;
        }
    }
    ctx->pc = 0x4F7448u;
    // 0x4f7448: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x4f7448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4f744c: 0xa7a2012e  sh          $v0, 0x12E($sp)
    ctx->pc = 0x4f744cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 302), (uint16_t)GPR_U32(ctx, 2));
label_4f7450:
    // 0x4f7450: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4f7450u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f7454: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x4f7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x4f7458: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x4f7458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x4f745c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x4f745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4f7460: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f7460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7464: 0xa7a5012a  sh          $a1, 0x12A($sp)
    ctx->pc = 0x4f7464u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 298), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f7468: 0x27a7012a  addiu       $a3, $sp, 0x12A
    ctx->pc = 0x4f7468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 298));
    // 0x4f746c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f746cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f7470: 0xc13f168  jal         func_4FC5A0
    ctx->pc = 0x4F7470u;
    SET_GPR_U32(ctx, 31, 0x4F7478u);
    ctx->pc = 0x4F7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7470u;
            // 0x4f7474: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC5A0u;
    if (runtime->hasFunction(0x4FC5A0u)) {
        auto targetFn = runtime->lookupFunction(0x4FC5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7478u; }
        if (ctx->pc != 0x4F7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC5A0_0x4fc5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7478u; }
        if (ctx->pc != 0x4F7478u) { return; }
    }
    ctx->pc = 0x4F7478u;
label_4f7478:
    // 0x4f7478: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x4f7478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x4f747c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x4f747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x4f7480: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x4f7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4f7484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4f7484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7488: 0x27a7012e  addiu       $a3, $sp, 0x12E
    ctx->pc = 0x4f7488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 302));
    // 0x4f748c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f748cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f7490: 0xc13f168  jal         func_4FC5A0
    ctx->pc = 0x4F7490u;
    SET_GPR_U32(ctx, 31, 0x4F7498u);
    ctx->pc = 0x4F7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7490u;
            // 0x4f7494: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FC5A0u;
    if (runtime->hasFunction(0x4FC5A0u)) {
        auto targetFn = runtime->lookupFunction(0x4FC5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7498u; }
        if (ctx->pc != 0x4F7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FC5A0_0x4fc5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7498u; }
        if (ctx->pc != 0x4F7498u) { return; }
    }
    ctx->pc = 0x4F7498u;
label_4f7498:
    // 0x4f7498: 0x97a3012e  lhu         $v1, 0x12E($sp)
    ctx->pc = 0x4f7498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 302)));
    // 0x4f749c: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x4f749cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_4f74a0:
    // 0x4f74a0: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x4f74a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4f74a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f74a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4f74a8: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x4f74a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f74ac: 0x5460fd24  bnel        $v1, $zero, . + 4 + (-0x2DC << 2)
    ctx->pc = 0x4F74ACu;
    {
        const bool branch_taken_0x4f74ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f74ac) {
            ctx->pc = 0x4F74B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F74ACu;
            // 0x4f74b0: 0x7ba200d0  lq          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f6940;
        }
    }
    ctx->pc = 0x4F74B4u;
    // 0x4f74b4: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x4f74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x4f74b8: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x4F74B8u;
    {
        const bool branch_taken_0x4f74b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f74b8) {
            ctx->pc = 0x4F74BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F74B8u;
            // 0x4f74bc: 0x8fb0011c  lw          $s0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7548u;
            goto label_4f7548;
        }
    }
    ctx->pc = 0x4F74C0u;
    // 0x4f74c0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x4f74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x4f74c4: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x4f74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x4f74c8: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4F74C8u;
    {
        const bool branch_taken_0x4f74c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f74c8) {
            ctx->pc = 0x4F74CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F74C8u;
            // 0x4f74cc: 0x27a400f8  addiu       $a0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7504u;
            goto label_4f7504;
        }
    }
    ctx->pc = 0x4F74D0u;
    // 0x4f74d0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x4f74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4f74d4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x4f74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4f74d8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x4f74d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x4f74dc: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x4f74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x4f74e0: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x4f74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x4f74e4: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x4f74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x4f74e8: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x4f74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x4f74ec: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x4f74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x4f74f0: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x4f74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x4f74f4: 0xafa60108  sw          $a2, 0x108($sp)
    ctx->pc = 0x4f74f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 6));
    // 0x4f74f8: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x4f74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x4f74fc: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x4f74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x4f7500: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x4f7500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_4f7504:
    // 0x4f7504: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x4f7504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x4f7508: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4F7508u;
    {
        const bool branch_taken_0x4f7508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f7508) {
            ctx->pc = 0x4F750Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7508u;
            // 0x4f750c: 0x3c0b82d  daddu       $s7, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7544u;
            goto label_4f7544;
        }
    }
    ctx->pc = 0x4F7510u;
    // 0x4f7510: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x4f7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4f7514: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x4f7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4f7518: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x4f7518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x4f751c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x4f751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x4f7520: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x4f7520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x4f7524: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x4f7524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x4f7528: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x4f7528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x4f752c: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x4f752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x4f7530: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x4f7530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x4f7534: 0xafa600e8  sw          $a2, 0xE8($sp)
    ctx->pc = 0x4f7534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x4f7538: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x4f7538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x4f753c: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x4f753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x4f7540: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x4f7540u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4f7544:
    // 0x4f7544: 0x8fb0011c  lw          $s0, 0x11C($sp)
    ctx->pc = 0x4f7544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4f7548:
    // 0x4f7548: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F7548u;
    {
        const bool branch_taken_0x4f7548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7548) {
            ctx->pc = 0x4F75A8u;
            goto label_4f75a8;
        }
    }
    ctx->pc = 0x4F7550u;
    // 0x4f7550: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4f7550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4f7554: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7554u;
    {
        const bool branch_taken_0x4f7554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7554) {
            ctx->pc = 0x4F7558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7554u;
            // 0x4f7558: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7568u;
            goto label_4f7568;
        }
    }
    ctx->pc = 0x4F755Cu;
    // 0x4f755c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F755Cu;
    SET_GPR_U32(ctx, 31, 0x4F7564u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7564u; }
        if (ctx->pc != 0x4F7564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7564u; }
        if (ctx->pc != 0x4F7564u) { return; }
    }
    ctx->pc = 0x4F7564u;
label_4f7564:
    // 0x4f7564: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x4f7564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4f7568:
    // 0x4f7568: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7568u;
    {
        const bool branch_taken_0x4f7568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7568) {
            ctx->pc = 0x4F756Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7568u;
            // 0x4f756c: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F757Cu;
            goto label_4f757c;
        }
    }
    ctx->pc = 0x4F7570u;
    // 0x4f7570: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F7570u;
    SET_GPR_U32(ctx, 31, 0x4F7578u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7578u; }
        if (ctx->pc != 0x4F7578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7578u; }
        if (ctx->pc != 0x4F7578u) { return; }
    }
    ctx->pc = 0x4F7578u;
label_4f7578:
    // 0x4f7578: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x4f7578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_4f757c:
    // 0x4f757c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F757Cu;
    {
        const bool branch_taken_0x4f757c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f757c) {
            ctx->pc = 0x4F7580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F757Cu;
            // 0x4f7580: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7590u;
            goto label_4f7590;
        }
    }
    ctx->pc = 0x4F7584u;
    // 0x4f7584: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F7584u;
    SET_GPR_U32(ctx, 31, 0x4F758Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F758Cu; }
        if (ctx->pc != 0x4F758Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F758Cu; }
        if (ctx->pc != 0x4F758Cu) { return; }
    }
    ctx->pc = 0x4F758Cu;
label_4f758c:
    // 0x4f758c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x4f758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4f7590:
    // 0x4f7590: 0x5080004e  beql        $a0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x4F7590u;
    {
        const bool branch_taken_0x4f7590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7590) {
            ctx->pc = 0x4F7594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7590u;
            // 0x4f7594: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F76CCu;
            goto label_4f76cc;
        }
    }
    ctx->pc = 0x4F7598u;
    // 0x4f7598: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F7598u;
    SET_GPR_U32(ctx, 31, 0x4F75A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F75A0u; }
        if (ctx->pc != 0x4F75A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F75A0u; }
        if (ctx->pc != 0x4F75A0u) { return; }
    }
    ctx->pc = 0x4F75A0u;
label_4f75a0:
    // 0x4f75a0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x4F75A0u;
    {
        const bool branch_taken_0x4f75a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f75a0) {
            ctx->pc = 0x4F76C8u;
            goto label_4f76c8;
        }
    }
    ctx->pc = 0x4F75A8u;
label_4f75a8:
    // 0x4f75a8: 0x56e0000e  bnel        $s7, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4F75A8u;
    {
        const bool branch_taken_0x4f75a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f75a8) {
            ctx->pc = 0x4F75ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F75A8u;
            // 0x4f75ac: 0x2e010002  sltiu       $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F75E4u;
            goto label_4f75e4;
        }
    }
    ctx->pc = 0x4F75B0u;
    // 0x4f75b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f75b4: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4F75B4u;
    SET_GPR_U32(ctx, 31, 0x4F75BCu);
    ctx->pc = 0x4F75B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F75B4u;
            // 0x4f75b8: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F75BCu; }
        if (ctx->pc != 0x4F75BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F75BCu; }
        if (ctx->pc != 0x4F75BCu) { return; }
    }
    ctx->pc = 0x4F75BCu;
label_4f75bc:
    // 0x4f75bc: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x4f75bcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4f75c0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x4f75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4f75c4: 0x0  nop
    ctx->pc = 0x4f75c4u;
    // NOP
    // 0x4f75c8: 0x2010  mfhi        $a0
    ctx->pc = 0x4f75c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x4f75cc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4f75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f75d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4f75d4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f75d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f75d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x4F75D8u;
    {
        const bool branch_taken_0x4f75d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F75DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F75D8u;
            // 0x4f75dc: 0xa6830012  sh          $v1, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f75d8) {
            ctx->pc = 0x4F7678u;
            goto label_4f7678;
        }
    }
    ctx->pc = 0x4F75E0u;
    // 0x4f75e0: 0x2e010002  sltiu       $at, $s0, 0x2
    ctx->pc = 0x4f75e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4f75e4:
    // 0x4f75e4: 0x54200022  bnel        $at, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4F75E4u;
    {
        const bool branch_taken_0x4f75e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f75e4) {
            ctx->pc = 0x4F75E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F75E4u;
            // 0x4f75e8: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7670u;
            goto label_4f7670;
        }
    }
    ctx->pc = 0x4F75ECu;
    // 0x4f75ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f75f0: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4F75F0u;
    SET_GPR_U32(ctx, 31, 0x4F75F8u);
    ctx->pc = 0x4F75F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F75F0u;
            // 0x4f75f4: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F75F8u; }
        if (ctx->pc != 0x4F75F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F75F8u; }
        if (ctx->pc != 0x4F75F8u) { return; }
    }
    ctx->pc = 0x4F75F8u;
label_4f75f8:
    // 0x4f75f8: 0x57001b  divu        $zero, $v0, $s7
    ctx->pc = 0x4f75f8u;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4f75fc: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x4f75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x4f7600: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x4f7600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4f7604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f7604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f7608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f760c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f760cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4f7610: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x4f7610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4f7614: 0x3010  mfhi        $a2
    ctx->pc = 0x4f7614u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4f7618:
    // 0x4f7618: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4f7618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4f761c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4f761cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4f7620: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4f7620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f7624: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x4f7624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4f7628: 0xc8082b  sltu        $at, $a2, $t0
    ctx->pc = 0x4f7628u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4f762c: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F762Cu;
    {
        const bool branch_taken_0x4f762c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f762c) {
            ctx->pc = 0x4F7630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F762Cu;
            // 0x4f7630: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7650u;
            goto label_4f7650;
        }
    }
    ctx->pc = 0x4F7634u;
    // 0x4f7634: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x4f7634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4f7638: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x4f7638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4f763c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4f7640: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f7640u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f7644: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4F7644u;
    {
        const bool branch_taken_0x4f7644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7644u;
            // 0x4f7648: 0xa6830012  sh          $v1, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7644) {
            ctx->pc = 0x4F7678u;
            goto label_4f7678;
        }
    }
    ctx->pc = 0x4F764Cu;
    // 0x4f764c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4f764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_4f7650:
    // 0x4f7650: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x4f7650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x4f7654: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f7654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4f7658: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4f7658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x4f765c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4F765Cu;
    {
        const bool branch_taken_0x4f765c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F7660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F765Cu;
            // 0x4f7660: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f765c) {
            ctx->pc = 0x4F7618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f7618;
        }
    }
    ctx->pc = 0x4F7664u;
    // 0x4f7664: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7664u;
    {
        const bool branch_taken_0x4f7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7664u;
            // 0x4f7668: 0x8fa400f0  lw          $a0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7664) {
            ctx->pc = 0x4F767Cu;
            goto label_4f767c;
        }
    }
    ctx->pc = 0x4F766Cu;
    // 0x4f766c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x4f766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4f7670:
    // 0x4f7670: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f7670u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f7674: 0xa6830012  sh          $v1, 0x12($s4)
    ctx->pc = 0x4f7674u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 3));
label_4f7678:
    // 0x4f7678: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4f7678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4f767c:
    // 0x4f767c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F767Cu;
    {
        const bool branch_taken_0x4f767c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f767c) {
            ctx->pc = 0x4F7680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F767Cu;
            // 0x4f7680: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7690u;
            goto label_4f7690;
        }
    }
    ctx->pc = 0x4F7684u;
    // 0x4f7684: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F7684u;
    SET_GPR_U32(ctx, 31, 0x4F768Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F768Cu; }
        if (ctx->pc != 0x4F768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F768Cu; }
        if (ctx->pc != 0x4F768Cu) { return; }
    }
    ctx->pc = 0x4F768Cu;
label_4f768c:
    // 0x4f768c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x4f768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4f7690:
    // 0x4f7690: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F7690u;
    {
        const bool branch_taken_0x4f7690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7690) {
            ctx->pc = 0x4F7694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7690u;
            // 0x4f7694: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F76A4u;
            goto label_4f76a4;
        }
    }
    ctx->pc = 0x4F7698u;
    // 0x4f7698: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F7698u;
    SET_GPR_U32(ctx, 31, 0x4F76A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F76A0u; }
        if (ctx->pc != 0x4F76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F76A0u; }
        if (ctx->pc != 0x4F76A0u) { return; }
    }
    ctx->pc = 0x4F76A0u;
label_4f76a0:
    // 0x4f76a0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x4f76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_4f76a4:
    // 0x4f76a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F76A4u;
    {
        const bool branch_taken_0x4f76a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f76a4) {
            ctx->pc = 0x4F76A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F76A4u;
            // 0x4f76a8: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F76B8u;
            goto label_4f76b8;
        }
    }
    ctx->pc = 0x4F76ACu;
    // 0x4f76ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F76ACu;
    SET_GPR_U32(ctx, 31, 0x4F76B4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F76B4u; }
        if (ctx->pc != 0x4F76B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F76B4u; }
        if (ctx->pc != 0x4F76B4u) { return; }
    }
    ctx->pc = 0x4F76B4u;
label_4f76b4:
    // 0x4f76b4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x4f76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4f76b8:
    // 0x4f76b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F76B8u;
    {
        const bool branch_taken_0x4f76b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f76b8) {
            ctx->pc = 0x4F76C8u;
            goto label_4f76c8;
        }
    }
    ctx->pc = 0x4F76C0u;
    // 0x4f76c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F76C0u;
    SET_GPR_U32(ctx, 31, 0x4F76C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F76C8u; }
        if (ctx->pc != 0x4F76C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F76C8u; }
        if (ctx->pc != 0x4F76C8u) { return; }
    }
    ctx->pc = 0x4F76C8u;
label_4f76c8:
    // 0x4f76c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4f76c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4f76cc:
    // 0x4f76cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f76ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4f76d0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4f76d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4f76d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4f76d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4f76d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4f76d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4f76dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4f76dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4f76e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f76e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f76e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f76e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f76e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f76e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f76ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f76ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f76f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f76f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f76f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F76F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F76F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F76F4u;
            // 0x4f76f8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F76FCu;
    // 0x4f76fc: 0x0  nop
    ctx->pc = 0x4f76fcu;
    // NOP
}
