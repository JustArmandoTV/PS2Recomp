#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285720
// Address: 0x285720 - 0x285950
void sub_00285720_0x285720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285720_0x285720");
#endif

    switch (ctx->pc) {
        case 0x285768u: goto label_285768;
        case 0x285788u: goto label_285788;
        case 0x2857e8u: goto label_2857e8;
        case 0x2857fcu: goto label_2857fc;
        case 0x28580cu: goto label_28580c;
        case 0x28583cu: goto label_28583c;
        case 0x285850u: goto label_285850;
        case 0x285878u: goto label_285878;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858ccu: goto label_2858cc;
        case 0x2858e8u: goto label_2858e8;
        case 0x2858f0u: goto label_2858f0;
        case 0x285924u: goto label_285924;
        default: break;
    }

    ctx->pc = 0x285720u;

    // 0x285720: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x285720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x285724: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x285724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x285728: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28572c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285730: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x285730u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285734: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285738: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x285738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x28573c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285740: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285748: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x285748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28574c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x285750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285758: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x285758u;
    {
        const bool branch_taken_0x285758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285758u;
            // 0x28575c: 0xad000004  sw          $zero, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285758) {
            ctx->pc = 0x2857D0u;
            goto label_2857d0;
        }
    }
    ctx->pc = 0x285760u;
    // 0x285760: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x285760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285764: 0x0  nop
    ctx->pc = 0x285764u;
    // NOP
label_285768:
    // 0x285768: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x285768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28576c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x28576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x285770: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x285770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x285774: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x285774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x285778: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285778u;
    {
        const bool branch_taken_0x285778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285778u;
            // 0x28577c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285778) {
            ctx->pc = 0x285788u;
            goto label_285788;
        }
    }
    ctx->pc = 0x285780u;
    // 0x285780: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x285780u;
    SET_GPR_U32(ctx, 31, 0x285788u);
    ctx->pc = 0x285784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285780u;
            // 0x285784: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285788u; }
        if (ctx->pc != 0x285788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285788u; }
        if (ctx->pc != 0x285788u) { return; }
    }
    ctx->pc = 0x285788u;
label_285788:
    // 0x285788: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28578c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28578cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x285790: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x285790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x285794: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x285794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285798: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x285798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x28579c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28579cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2857a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2857a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2857a4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2857a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2857a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2857ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2857acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2857b0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2857b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2857b4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2857b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2857b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2857b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2857bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2857bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2857c0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2857c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2857c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2857c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2857c8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2857C8u;
    {
        const bool branch_taken_0x2857c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2857CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857C8u;
            // 0x2857cc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857c8) {
            ctx->pc = 0x285768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285768;
        }
    }
    ctx->pc = 0x2857D0u;
label_2857d0:
    // 0x2857d0: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x2857d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2857d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2857D4u;
    {
        const bool branch_taken_0x2857d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857D4u;
            // 0x2857d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857d4) {
            ctx->pc = 0x2857E8u;
            goto label_2857e8;
        }
    }
    ctx->pc = 0x2857DCu;
    // 0x2857dc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2857dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2857e0: 0xc0a1498  jal         func_285260
    ctx->pc = 0x2857E0u;
    SET_GPR_U32(ctx, 31, 0x2857E8u);
    ctx->pc = 0x2857E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857E0u;
            // 0x2857e4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285260u;
    if (runtime->hasFunction(0x285260u)) {
        auto targetFn = runtime->lookupFunction(0x285260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857E8u; }
        if (ctx->pc != 0x2857E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285260_0x285260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857E8u; }
        if (ctx->pc != 0x2857E8u) { return; }
    }
    ctx->pc = 0x2857E8u;
label_2857e8:
    // 0x2857e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2857ec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2857ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2857f0: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2857f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x2857f4: 0xc0a2a40  jal         func_28A900
    ctx->pc = 0x2857F4u;
    SET_GPR_U32(ctx, 31, 0x2857FCu);
    ctx->pc = 0x2857F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857F4u;
            // 0x2857f8: 0x24c6a520  addiu       $a2, $a2, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A900u;
    if (runtime->hasFunction(0x28A900u)) {
        auto targetFn = runtime->lookupFunction(0x28A900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857FCu; }
        if (ctx->pc != 0x2857FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A900_0x28a900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857FCu; }
        if (ctx->pc != 0x2857FCu) { return; }
    }
    ctx->pc = 0x2857FCu;
label_2857fc:
    // 0x2857fc: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2857fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x285800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285804: 0xc0a0ab4  jal         func_282AD0
    ctx->pc = 0x285804u;
    SET_GPR_U32(ctx, 31, 0x28580Cu);
    ctx->pc = 0x285808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285804u;
            // 0x285808: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AD0u;
    if (runtime->hasFunction(0x282AD0u)) {
        auto targetFn = runtime->lookupFunction(0x282AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28580Cu; }
        if (ctx->pc != 0x28580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282AD0_0x282ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28580Cu; }
        if (ctx->pc != 0x28580Cu) { return; }
    }
    ctx->pc = 0x28580Cu;
label_28580c:
    // 0x28580c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x28580cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x285810: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x285810u;
    {
        const bool branch_taken_0x285810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285810) {
            ctx->pc = 0x285840u;
            goto label_285840;
        }
    }
    ctx->pc = 0x285818u;
    // 0x285818: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x285818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28581c: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x28581cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x285820: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x285820u;
    {
        const bool branch_taken_0x285820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x285820) {
            ctx->pc = 0x285840u;
            goto label_285840;
        }
    }
    ctx->pc = 0x285828u;
    // 0x285828: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x285828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x28582c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x28582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x285830: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x285830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285834: 0xc0a0bb8  jal         func_282EE0
    ctx->pc = 0x285834u;
    SET_GPR_U32(ctx, 31, 0x28583Cu);
    ctx->pc = 0x285838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285834u;
            // 0x285838: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282EE0u;
    if (runtime->hasFunction(0x282EE0u)) {
        auto targetFn = runtime->lookupFunction(0x282EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28583Cu; }
        if (ctx->pc != 0x28583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282EE0_0x282ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28583Cu; }
        if (ctx->pc != 0x28583Cu) { return; }
    }
    ctx->pc = 0x28583Cu;
label_28583c:
    // 0x28583c: 0x0  nop
    ctx->pc = 0x28583cu;
    // NOP
label_285840:
    // 0x285840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285844: 0xa3a30098  sb          $v1, 0x98($sp)
    ctx->pc = 0x285844u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x285848: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x285848u;
    {
        const bool branch_taken_0x285848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285848u;
            // 0x28584c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285848) {
            ctx->pc = 0x2858F0u;
            goto label_2858f0;
        }
    }
    ctx->pc = 0x285850u;
label_285850:
    // 0x285850: 0x83a30098  lb          $v1, 0x98($sp)
    ctx->pc = 0x285850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x285854: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x285854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x285858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x285858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28585c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28585cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x285860: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x285860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x285864: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x285864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285868: 0x38e3c  dsll32      $s1, $v1, 24
    ctx->pc = 0x285868u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28586c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x28586Cu;
    {
        const bool branch_taken_0x28586c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28586Cu;
            // 0x285870: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28586c) {
            ctx->pc = 0x285898u;
            goto label_285898;
        }
    }
    ctx->pc = 0x285874u;
    // 0x285874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x285874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285878:
    // 0x285878: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x285878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28587c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285884: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x285884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x285888: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x285888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28588c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x28588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285890: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x285890u;
    {
        const bool branch_taken_0x285890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285890u;
            // 0x285894: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285890) {
            ctx->pc = 0x285878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285878;
        }
    }
    ctx->pc = 0x285898u;
label_285898:
    // 0x285898: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x285898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x28589c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2858a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2858a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2858a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2858a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2858acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858b0: 0xc0a1654  jal         func_285950
    ctx->pc = 0x2858B0u;
    SET_GPR_U32(ctx, 31, 0x2858B8u);
    ctx->pc = 0x2858B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858B0u;
            // 0x2858b4: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285950u;
    if (runtime->hasFunction(0x285950u)) {
        auto targetFn = runtime->lookupFunction(0x285950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858B8u; }
        if (ctx->pc != 0x2858B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285950_0x285950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858B8u; }
        if (ctx->pc != 0x2858B8u) { return; }
    }
    ctx->pc = 0x2858B8u;
label_2858b8:
    // 0x2858b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2858b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858bc: 0xc0a1ce4  jal         func_287390
    ctx->pc = 0x2858BCu;
    SET_GPR_U32(ctx, 31, 0x2858C4u);
    ctx->pc = 0x2858C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858BCu;
            // 0x2858c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287390u;
    if (runtime->hasFunction(0x287390u)) {
        auto targetFn = runtime->lookupFunction(0x287390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858C4u; }
        if (ctx->pc != 0x2858C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287390_0x287390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858C4u; }
        if (ctx->pc != 0x2858C4u) { return; }
    }
    ctx->pc = 0x2858C4u;
label_2858c4:
    // 0x2858c4: 0xc0a1cac  jal         func_2872B0
    ctx->pc = 0x2858C4u;
    SET_GPR_U32(ctx, 31, 0x2858CCu);
    ctx->pc = 0x2858C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858C4u;
            // 0x2858c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2872B0u;
    if (runtime->hasFunction(0x2872B0u)) {
        auto targetFn = runtime->lookupFunction(0x2872B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858CCu; }
        if (ctx->pc != 0x2858CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002872B0_0x2872b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858CCu; }
        if (ctx->pc != 0x2858CCu) { return; }
    }
    ctx->pc = 0x2858CCu;
label_2858cc:
    // 0x2858cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2858ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2858d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2858d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2858d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2858d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858dc: 0x27a80098  addiu       $t0, $sp, 0x98
    ctx->pc = 0x2858dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2858e0: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x2858E0u;
    SET_GPR_U32(ctx, 31, 0x2858E8u);
    ctx->pc = 0x2858E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858E0u;
            // 0x2858e4: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858E8u; }
        if (ctx->pc != 0x2858E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283270_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858E8u; }
        if (ctx->pc != 0x2858E8u) { return; }
    }
    ctx->pc = 0x2858E8u;
label_2858e8:
    // 0x2858e8: 0xc0a1cac  jal         func_2872B0
    ctx->pc = 0x2858E8u;
    SET_GPR_U32(ctx, 31, 0x2858F0u);
    ctx->pc = 0x2858ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858E8u;
            // 0x2858ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2872B0u;
    if (runtime->hasFunction(0x2872B0u)) {
        auto targetFn = runtime->lookupFunction(0x2872B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858F0u; }
        if (ctx->pc != 0x2858F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002872B0_0x2872b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858F0u; }
        if (ctx->pc != 0x2858F0u) { return; }
    }
    ctx->pc = 0x2858F0u;
label_2858f0:
    // 0x2858f0: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x2858f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x2858f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2858f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2858f8: 0x1060ffd5  beqz        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2858F8u;
    {
        const bool branch_taken_0x2858f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2858f8) {
            ctx->pc = 0x285850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285850;
        }
    }
    ctx->pc = 0x285900u;
    // 0x285900: 0x83a30098  lb          $v1, 0x98($sp)
    ctx->pc = 0x285900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x285904: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x285904u;
    {
        const bool branch_taken_0x285904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285904) {
            ctx->pc = 0x285850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285850;
        }
    }
    ctx->pc = 0x28590Cu;
    // 0x28590c: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x28590cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x285910: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x285910u;
    {
        const bool branch_taken_0x285910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285910u;
            // 0x285914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285910) {
            ctx->pc = 0x285928u;
            goto label_285928;
        }
    }
    ctx->pc = 0x285918u;
    // 0x285918: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x285918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28591c: 0xc0a154c  jal         func_285530
    ctx->pc = 0x28591Cu;
    SET_GPR_U32(ctx, 31, 0x285924u);
    ctx->pc = 0x285920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28591Cu;
            // 0x285920: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285530u;
    if (runtime->hasFunction(0x285530u)) {
        auto targetFn = runtime->lookupFunction(0x285530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285924u; }
        if (ctx->pc != 0x285924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285530_0x285530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285924u; }
        if (ctx->pc != 0x285924u) { return; }
    }
    ctx->pc = 0x285924u;
label_285924:
    // 0x285924: 0x0  nop
    ctx->pc = 0x285924u;
    // NOP
label_285928:
    // 0x285928: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x285928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28592c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28592cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285930: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285934: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28593c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28593cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285944: 0x3e00008  jr          $ra
    ctx->pc = 0x285944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285944u;
            // 0x285948: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28594Cu;
    // 0x28594c: 0x0  nop
    ctx->pc = 0x28594cu;
    // NOP
}
