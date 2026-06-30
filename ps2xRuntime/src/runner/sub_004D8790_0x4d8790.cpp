#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D8790
// Address: 0x4d8790 - 0x4d8b30
void sub_004D8790_0x4d8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8790_0x4d8790");
#endif

    switch (ctx->pc) {
        case 0x4d8830u: goto label_4d8830;
        case 0x4d8838u: goto label_4d8838;
        case 0x4d8878u: goto label_4d8878;
        case 0x4d8880u: goto label_4d8880;
        case 0x4d88acu: goto label_4d88ac;
        case 0x4d88d8u: goto label_4d88d8;
        case 0x4d88f0u: goto label_4d88f0;
        case 0x4d8910u: goto label_4d8910;
        case 0x4d893cu: goto label_4d893c;
        case 0x4d8974u: goto label_4d8974;
        case 0x4d89bcu: goto label_4d89bc;
        case 0x4d8a04u: goto label_4d8a04;
        case 0x4d8a4cu: goto label_4d8a4c;
        case 0x4d8a94u: goto label_4d8a94;
        case 0x4d8adcu: goto label_4d8adc;
        default: break;
    }

    ctx->pc = 0x4d8790u;

    // 0x4d8790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d8794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d8798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d8798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4d879c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d87a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d87a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d87a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d87a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d87a8: 0x8c8400f4  lw          $a0, 0xF4($a0)
    ctx->pc = 0x4d87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x4d87ac: 0x2c81000d  sltiu       $at, $a0, 0xD
    ctx->pc = 0x4d87acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x4d87b0: 0x102000d7  beqz        $at, . + 4 + (0xD7 << 2)
    ctx->pc = 0x4D87B0u;
    {
        const bool branch_taken_0x4d87b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D87B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D87B0u;
            // 0x4d87b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d87b0) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D87B8u;
    // 0x4d87b8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4d87b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4d87bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d87c0: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x4d87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
    // 0x4d87c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4d87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d87c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d87cc: 0x800008  jr          $a0
    ctx->pc = 0x4D87CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4D87D4u: goto label_4d87d4;
            case 0x4D8860u: goto label_4d8860;
            case 0x4D88A8u: goto label_4d88a8;
            case 0x4D8908u: goto label_4d8908;
            case 0x4D8938u: goto label_4d8938;
            case 0x4D8968u: goto label_4d8968;
            case 0x4D89B0u: goto label_4d89b0;
            case 0x4D89F8u: goto label_4d89f8;
            case 0x4D8A40u: goto label_4d8a40;
            case 0x4D8A88u: goto label_4d8a88;
            case 0x4D8AD0u: goto label_4d8ad0;
            case 0x4D8B10u: goto label_4d8b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4D87D4u;
label_4d87d4:
    // 0x4d87d4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x4d87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d87d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4d87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4d87dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4d87dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d87e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d87e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4d87e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4d87e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d87e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d87ec: 0x0  nop
    ctx->pc = 0x4d87ecu;
    // NOP
    // 0x4d87f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d87f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d87f4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D87F4u;
    {
        const bool branch_taken_0x4d87f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d87f4) {
            ctx->pc = 0x4D87F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D87F4u;
            // 0x4d87f8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D880Cu;
            goto label_4d880c;
        }
    }
    ctx->pc = 0x4D87FCu;
    // 0x4d87fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d87fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8800: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d8800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d8804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D8804u;
    {
        const bool branch_taken_0x4d8804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8804) {
            ctx->pc = 0x4D8820u;
            goto label_4d8820;
        }
    }
    ctx->pc = 0x4D880Cu;
label_4d880c:
    // 0x4d880c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d8810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d8810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d8814: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4d8814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4d8818: 0x0  nop
    ctx->pc = 0x4d8818u;
    // NOP
    // 0x4d881c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d881cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4d8820:
    // 0x4d8820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d8820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d8824: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4d8824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4d8828: 0xc0c2bcc  jal         func_30AF30
    ctx->pc = 0x4D8828u;
    SET_GPR_U32(ctx, 31, 0x4D8830u);
    ctx->pc = 0x4D882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8828u;
            // 0x4d882c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF30u;
    if (runtime->hasFunction(0x30AF30u)) {
        auto targetFn = runtime->lookupFunction(0x30AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8830u; }
        if (ctx->pc != 0x4D8830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030AF30_0x30af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8830u; }
        if (ctx->pc != 0x4D8830u) { return; }
    }
    ctx->pc = 0x4D8830u;
label_4d8830:
    // 0x4d8830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d8830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d8834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d8838:
    // 0x4d8838: 0x8c83016c  lw          $v1, 0x16C($a0)
    ctx->pc = 0x4d8838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x4d883c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D883Cu;
    {
        const bool branch_taken_0x4d883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d883c) {
            ctx->pc = 0x4D8848u;
            goto label_4d8848;
        }
    }
    ctx->pc = 0x4D8844u;
    // 0x4d8844: 0xa060004e  sb          $zero, 0x4E($v1)
    ctx->pc = 0x4d8844u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 0));
label_4d8848:
    // 0x4d8848: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4d8848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4d884c: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x4d884cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d8850: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4D8850u;
    {
        const bool branch_taken_0x4d8850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8850u;
            // 0x4d8854: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8850) {
            ctx->pc = 0x4D8838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8838;
        }
    }
    ctx->pc = 0x4D8858u;
    // 0x4d8858: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x4D8858u;
    {
        const bool branch_taken_0x4d8858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8858) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8860u;
label_4d8860:
    // 0x4d8860: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x4d8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x4d8864: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8864u;
    {
        const bool branch_taken_0x4d8864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8864) {
            ctx->pc = 0x4D8868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8864u;
            // 0x4d8868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D887Cu;
            goto label_4d887c;
        }
    }
    ctx->pc = 0x4D886Cu;
    // 0x4d886c: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d886cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8870: 0xc0f2918  jal         func_3CA460
    ctx->pc = 0x4D8870u;
    SET_GPR_U32(ctx, 31, 0x4D8878u);
    ctx->pc = 0x4D8874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8870u;
            // 0x4d8874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA460u;
    if (runtime->hasFunction(0x3CA460u)) {
        auto targetFn = runtime->lookupFunction(0x3CA460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8878u; }
        if (ctx->pc != 0x4D8878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CA460_0x3ca460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D8878u; }
        if (ctx->pc != 0x4D8878u) { return; }
    }
    ctx->pc = 0x4D8878u;
label_4d8878:
    // 0x4d8878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4d8878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d887c:
    // 0x4d887c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d887cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d8880:
    // 0x4d8880: 0x8ca30158  lw          $v1, 0x158($a1)
    ctx->pc = 0x4d8880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x4d8884: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8884u;
    {
        const bool branch_taken_0x4d8884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8884) {
            ctx->pc = 0x4D8890u;
            goto label_4d8890;
        }
    }
    ctx->pc = 0x4D888Cu;
    // 0x4d888c: 0xa060004e  sb          $zero, 0x4E($v1)
    ctx->pc = 0x4d888cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 0));
label_4d8890:
    // 0x4d8890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d8890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d8894: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x4d8894u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d8898: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4D8898u;
    {
        const bool branch_taken_0x4d8898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8898u;
            // 0x4d889c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8898) {
            ctx->pc = 0x4D8880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8880;
        }
    }
    ctx->pc = 0x4D88A0u;
    // 0x4d88a0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x4D88A0u;
    {
        const bool branch_taken_0x4d88a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d88a0) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D88A8u;
label_4d88a8:
    // 0x4d88a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d88a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d88ac:
    // 0x4d88ac: 0x8ca400fc  lw          $a0, 0xFC($a1)
    ctx->pc = 0x4d88acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x4d88b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D88B0u;
    {
        const bool branch_taken_0x4d88b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d88b0) {
            ctx->pc = 0x4D88C0u;
            goto label_4d88c0;
        }
    }
    ctx->pc = 0x4D88B8u;
    // 0x4d88b8: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d88b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d88bc: 0x0  nop
    ctx->pc = 0x4d88bcu;
    // NOP
label_4d88c0:
    // 0x4d88c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d88c4: 0x2c640002  sltiu       $a0, $v1, 0x2
    ctx->pc = 0x4d88c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d88c8: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D88C8u;
    {
        const bool branch_taken_0x4d88c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D88CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D88C8u;
            // 0x4d88cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d88c8) {
            ctx->pc = 0x4D88ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d88ac;
        }
    }
    ctx->pc = 0x4D88D0u;
    // 0x4d88d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d88d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d88d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4d88d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d88d8:
    // 0x4d88d8: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x4d88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x4d88dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D88DCu;
    {
        const bool branch_taken_0x4d88dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d88dc) {
            ctx->pc = 0x4D88F0u;
            goto label_4d88f0;
        }
    }
    ctx->pc = 0x4D88E4u;
    // 0x4d88e4: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d88e8: 0xc13c78c  jal         func_4F1E30
    ctx->pc = 0x4D88E8u;
    SET_GPR_U32(ctx, 31, 0x4D88F0u);
    ctx->pc = 0x4D88ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D88E8u;
            // 0x4d88ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F1E30u;
    if (runtime->hasFunction(0x4F1E30u)) {
        auto targetFn = runtime->lookupFunction(0x4F1E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D88F0u; }
        if (ctx->pc != 0x4D88F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F1E30_0x4f1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D88F0u; }
        if (ctx->pc != 0x4D88F0u) { return; }
    }
    ctx->pc = 0x4D88F0u;
label_4d88f0:
    // 0x4d88f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d88f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4d88f4: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x4d88f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d88f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4D88F8u;
    {
        const bool branch_taken_0x4d88f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D88FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D88F8u;
            // 0x4d88fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d88f8) {
            ctx->pc = 0x4D88D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d88d8;
        }
    }
    ctx->pc = 0x4D8900u;
    // 0x4d8900: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x4D8900u;
    {
        const bool branch_taken_0x4d8900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8900) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8908u;
label_4d8908:
    // 0x4d8908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4d8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d890c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d8910:
    // 0x4d8910: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x4d8910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x4d8914: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8914u;
    {
        const bool branch_taken_0x4d8914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8914) {
            ctx->pc = 0x4D8920u;
            goto label_4d8920;
        }
    }
    ctx->pc = 0x4D891Cu;
    // 0x4d891c: 0xa060004e  sb          $zero, 0x4E($v1)
    ctx->pc = 0x4d891cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 78), (uint8_t)GPR_U32(ctx, 0));
label_4d8920:
    // 0x4d8920: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d8920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d8924: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x4d8924u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4d8928: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4D8928u;
    {
        const bool branch_taken_0x4d8928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8928u;
            // 0x4d892c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8928) {
            ctx->pc = 0x4D8910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8910;
        }
    }
    ctx->pc = 0x4D8930u;
    // 0x4d8930: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x4D8930u;
    {
        const bool branch_taken_0x4d8930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8930) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8938u;
label_4d8938:
    // 0x4d8938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d8938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d893c:
    // 0x4d893c: 0x8ca400fc  lw          $a0, 0xFC($a1)
    ctx->pc = 0x4d893cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x4d8940: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8940u;
    {
        const bool branch_taken_0x4d8940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8940) {
            ctx->pc = 0x4D8950u;
            goto label_4d8950;
        }
    }
    ctx->pc = 0x4D8948u;
    // 0x4d8948: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d8948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d894c: 0x0  nop
    ctx->pc = 0x4d894cu;
    // NOP
label_4d8950:
    // 0x4d8950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8954: 0x2c640002  sltiu       $a0, $v1, 0x2
    ctx->pc = 0x4d8954u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d8958: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4D8958u;
    {
        const bool branch_taken_0x4d8958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8958u;
            // 0x4d895c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8958) {
            ctx->pc = 0x4D893Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d893c;
        }
    }
    ctx->pc = 0x4D8960u;
    // 0x4d8960: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x4D8960u;
    {
        const bool branch_taken_0x4d8960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8960) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8968u;
label_4d8968:
    // 0x4d8968: 0x3c044110  lui         $a0, 0x4110
    ctx->pc = 0x4d8968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16656 << 16));
    // 0x4d896c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d896cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8970: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8970u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8974:
    // 0x4d8974: 0x8ca40118  lw          $a0, 0x118($a1)
    ctx->pc = 0x4d8974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x4d8978: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8978u;
    {
        const bool branch_taken_0x4d8978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8978) {
            ctx->pc = 0x4D8998u;
            goto label_4d8998;
        }
    }
    ctx->pc = 0x4D8980u;
    // 0x4d8980: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8984: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8984u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8988: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8988u;
    {
        const bool branch_taken_0x4d8988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8988) {
            ctx->pc = 0x4D8998u;
            goto label_4d8998;
        }
    }
    ctx->pc = 0x4D8990u;
    // 0x4d8990: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d8990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8994: 0x0  nop
    ctx->pc = 0x4d8994u;
    // NOP
label_4d8998:
    // 0x4d8998: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d899c: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d899cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d89a0: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D89A0u;
    {
        const bool branch_taken_0x4d89a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D89A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D89A0u;
            // 0x4d89a4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d89a0) {
            ctx->pc = 0x4D8974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8974;
        }
    }
    ctx->pc = 0x4D89A8u;
    // 0x4d89a8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x4D89A8u;
    {
        const bool branch_taken_0x4d89a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d89a8) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D89B0u;
label_4d89b0:
    // 0x4d89b0: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x4d89b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x4d89b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d89b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d89b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d89b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d89bc:
    // 0x4d89bc: 0x8ca40118  lw          $a0, 0x118($a1)
    ctx->pc = 0x4d89bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x4d89c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D89C0u;
    {
        const bool branch_taken_0x4d89c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d89c0) {
            ctx->pc = 0x4D89E0u;
            goto label_4d89e0;
        }
    }
    ctx->pc = 0x4D89C8u;
    // 0x4d89c8: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d89c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d89cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d89ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d89d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D89D0u;
    {
        const bool branch_taken_0x4d89d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d89d0) {
            ctx->pc = 0x4D89E0u;
            goto label_4d89e0;
        }
    }
    ctx->pc = 0x4D89D8u;
    // 0x4d89d8: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d89d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d89dc: 0x0  nop
    ctx->pc = 0x4d89dcu;
    // NOP
label_4d89e0:
    // 0x4d89e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d89e4: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d89e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d89e8: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D89E8u;
    {
        const bool branch_taken_0x4d89e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D89E8u;
            // 0x4d89ec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d89e8) {
            ctx->pc = 0x4D89BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d89bc;
        }
    }
    ctx->pc = 0x4D89F0u;
    // 0x4d89f0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x4D89F0u;
    {
        const bool branch_taken_0x4d89f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d89f0) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D89F8u;
label_4d89f8:
    // 0x4d89f8: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x4d89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x4d89fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d89fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8a00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8a04:
    // 0x4d8a04: 0x8ca40118  lw          $a0, 0x118($a1)
    ctx->pc = 0x4d8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x4d8a08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8A08u;
    {
        const bool branch_taken_0x4d8a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a08) {
            ctx->pc = 0x4D8A28u;
            goto label_4d8a28;
        }
    }
    ctx->pc = 0x4D8A10u;
    // 0x4d8a10: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8a14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8a14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8a18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8A18u;
    {
        const bool branch_taken_0x4d8a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8a18) {
            ctx->pc = 0x4D8A28u;
            goto label_4d8a28;
        }
    }
    ctx->pc = 0x4D8A20u;
    // 0x4d8a20: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d8a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8a24: 0x0  nop
    ctx->pc = 0x4d8a24u;
    // NOP
label_4d8a28:
    // 0x4d8a28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8a2c: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8a2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8a30: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8A30u;
    {
        const bool branch_taken_0x4d8a30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8A30u;
            // 0x4d8a34: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8a30) {
            ctx->pc = 0x4D8A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8a04;
        }
    }
    ctx->pc = 0x4D8A38u;
    // 0x4d8a38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4D8A38u;
    {
        const bool branch_taken_0x4d8a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a38) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8A40u;
label_4d8a40:
    // 0x4d8a40: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x4d8a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x4d8a44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d8a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8a48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8a4c:
    // 0x4d8a4c: 0x8ca40118  lw          $a0, 0x118($a1)
    ctx->pc = 0x4d8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x4d8a50: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8A50u;
    {
        const bool branch_taken_0x4d8a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a50) {
            ctx->pc = 0x4D8A70u;
            goto label_4d8a70;
        }
    }
    ctx->pc = 0x4D8A58u;
    // 0x4d8a58: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8a5c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8a5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8a60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8A60u;
    {
        const bool branch_taken_0x4d8a60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8a60) {
            ctx->pc = 0x4D8A70u;
            goto label_4d8a70;
        }
    }
    ctx->pc = 0x4D8A68u;
    // 0x4d8a68: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d8a68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8a6c: 0x0  nop
    ctx->pc = 0x4d8a6cu;
    // NOP
label_4d8a70:
    // 0x4d8a70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8a74: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8a74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8a78: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8A78u;
    {
        const bool branch_taken_0x4d8a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8A78u;
            // 0x4d8a7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8a78) {
            ctx->pc = 0x4D8A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8a4c;
        }
    }
    ctx->pc = 0x4D8A80u;
    // 0x4d8a80: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4D8A80u;
    {
        const bool branch_taken_0x4d8a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a80) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8A88u;
label_4d8a88:
    // 0x4d8a88: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x4d8a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x4d8a8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d8a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8a90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8a90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8a94:
    // 0x4d8a94: 0x8ca40118  lw          $a0, 0x118($a1)
    ctx->pc = 0x4d8a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x4d8a98: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8A98u;
    {
        const bool branch_taken_0x4d8a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a98) {
            ctx->pc = 0x4D8AB8u;
            goto label_4d8ab8;
        }
    }
    ctx->pc = 0x4D8AA0u;
    // 0x4d8aa0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8aa4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8aa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8aa8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8AA8u;
    {
        const bool branch_taken_0x4d8aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8aa8) {
            ctx->pc = 0x4D8AB8u;
            goto label_4d8ab8;
        }
    }
    ctx->pc = 0x4D8AB0u;
    // 0x4d8ab0: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d8ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8ab4: 0x0  nop
    ctx->pc = 0x4d8ab4u;
    // NOP
label_4d8ab8:
    // 0x4d8ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8abc: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8abcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8ac0: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8AC0u;
    {
        const bool branch_taken_0x4d8ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8AC0u;
            // 0x4d8ac4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ac0) {
            ctx->pc = 0x4D8A94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8a94;
        }
    }
    ctx->pc = 0x4D8AC8u;
    // 0x4d8ac8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4D8AC8u;
    {
        const bool branch_taken_0x4d8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8ac8) {
            ctx->pc = 0x4D8B10u;
            goto label_4d8b10;
        }
    }
    ctx->pc = 0x4D8AD0u;
label_4d8ad0:
    // 0x4d8ad0: 0x3c044130  lui         $a0, 0x4130
    ctx->pc = 0x4d8ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16688 << 16));
    // 0x4d8ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d8ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8ad8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d8ad8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d8adc:
    // 0x4d8adc: 0x8ca40118  lw          $a0, 0x118($a1)
    ctx->pc = 0x4d8adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x4d8ae0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8AE0u;
    {
        const bool branch_taken_0x4d8ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8ae0) {
            ctx->pc = 0x4D8B00u;
            goto label_4d8b00;
        }
    }
    ctx->pc = 0x4D8AE8u;
    // 0x4d8ae8: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4d8ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d8aec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d8aecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d8af0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8AF0u;
    {
        const bool branch_taken_0x4d8af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d8af0) {
            ctx->pc = 0x4D8B00u;
            goto label_4d8b00;
        }
    }
    ctx->pc = 0x4D8AF8u;
    // 0x4d8af8: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x4d8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d8afc: 0x0  nop
    ctx->pc = 0x4d8afcu;
    // NOP
label_4d8b00:
    // 0x4d8b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4d8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4d8b04: 0x2c64000c  sltiu       $a0, $v1, 0xC
    ctx->pc = 0x4d8b04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4d8b08: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D8B08u;
    {
        const bool branch_taken_0x4d8b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8B08u;
            // 0x4d8b0c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8b08) {
            ctx->pc = 0x4D8ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d8adc;
        }
    }
    ctx->pc = 0x4D8B10u;
label_4d8b10:
    // 0x4d8b10: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x4d8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4d8b14: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x4d8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x4d8b18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d8b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d8b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d8b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d8b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d8b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d8b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8b28: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D8B28u;
            // 0x4d8b2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D8B30u;
}
