#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E86F0
// Address: 0x4e86f0 - 0x4e8b00
void sub_004E86F0_0x4e86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E86F0_0x4e86f0");
#endif

    switch (ctx->pc) {
        case 0x4e8738u: goto label_4e8738;
        case 0x4e8798u: goto label_4e8798;
        case 0x4e8858u: goto label_4e8858;
        case 0x4e88d8u: goto label_4e88d8;
        case 0x4e89b0u: goto label_4e89b0;
        case 0x4e8a30u: goto label_4e8a30;
        case 0x4e8abcu: goto label_4e8abc;
        default: break;
    }

    ctx->pc = 0x4e86f0u;

    // 0x4e86f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4e86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4e86f4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e86f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4e86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4e86fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4e86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4e8700: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e8700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4e8704: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4e8704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4e870c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4e870cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e8710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4e8714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e8714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e8718: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e8718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e871c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e8720: 0x8c428560  lw          $v0, -0x7AA0($v0)
    ctx->pc = 0x4e8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935904)));
    // 0x4e8724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e8724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8728: 0xa495015e  sh          $s5, 0x15E($a0)
    ctx->pc = 0x4e8728u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 350), (uint16_t)GPR_U32(ctx, 21));
    // 0x4e872c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4e872cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8730: 0xa4860160  sh          $a2, 0x160($a0)
    ctx->pc = 0x4e8730u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 352), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e8734: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x4e8734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e8738:
    // 0x4e8738: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x4e8738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x4e873c: 0x80430168  lb          $v1, 0x168($v0)
    ctx->pc = 0x4e873cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x4e8740: 0x82020197  lb          $v0, 0x197($s0)
    ctx->pc = 0x4e8740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
    // 0x4e8744: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E8744u;
    {
        const bool branch_taken_0x4e8744 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E8748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8744u;
            // 0x4e8748: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8744) {
            ctx->pc = 0x4E8758u;
            goto label_4e8758;
        }
    }
    ctx->pc = 0x4E874Cu;
    // 0x4e874c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E874Cu;
    {
        const bool branch_taken_0x4e874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E874Cu;
            // 0x4e8750: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e874c) {
            ctx->pc = 0x4E8768u;
            goto label_4e8768;
        }
    }
    ctx->pc = 0x4E8754u;
    // 0x4e8754: 0x0  nop
    ctx->pc = 0x4e8754u;
    // NOP
label_4e8758:
    // 0x4e8758: 0x82020198  lb          $v0, 0x198($s0)
    ctx->pc = 0x4e8758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x4e875c: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E875Cu;
    {
        const bool branch_taken_0x4e875c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e875c) {
            ctx->pc = 0x4E8768u;
            goto label_4e8768;
        }
    }
    ctx->pc = 0x4E8764u;
    // 0x4e8764: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x4e8764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e8768:
    // 0x4e8768: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x4e8768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x4e876c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4e876cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x4e8770: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e8770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e8774: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x4E8774u;
    {
        const bool branch_taken_0x4e8774 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8774) {
            ctx->pc = 0x4E87A0u;
            goto label_4e87a0;
        }
    }
    ctx->pc = 0x4E877Cu;
    // 0x4e877c: 0x8605015e  lh          $a1, 0x15E($s0)
    ctx->pc = 0x4e877cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e8780: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x4e8780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4e8784: 0x86060160  lh          $a2, 0x160($s0)
    ctx->pc = 0x4e8784u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8788: 0x3482b  sltu        $t1, $zero, $v1
    ctx->pc = 0x4e8788u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e878c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8790: 0xc13a138  jal         func_4E84E0
    ctx->pc = 0x4E8790u;
    SET_GPR_U32(ctx, 31, 0x4E8798u);
    ctx->pc = 0x4E8794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8790u;
            // 0x4e8794: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E84E0u;
    if (runtime->hasFunction(0x4E84E0u)) {
        auto targetFn = runtime->lookupFunction(0x4E84E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8798u; }
        if (ctx->pc != 0x4E8798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E84E0_0x4e84e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8798u; }
        if (ctx->pc != 0x4E8798u) { return; }
    }
    ctx->pc = 0x4E8798u;
label_4e8798:
    // 0x4e8798: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E8798u;
    {
        const bool branch_taken_0x4e8798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8798) {
            ctx->pc = 0x4E8858u;
            goto label_4e8858;
        }
    }
    ctx->pc = 0x4E87A0u;
label_4e87a0:
    // 0x4e87a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4e87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e87a4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x4e87a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4e87ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e87acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e87b0: 0x24638540  addiu       $v1, $v1, -0x7AC0
    ctx->pc = 0x4e87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935872));
    // 0x4e87b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4e87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4e87b8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x4e87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x4e87bc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x4e87bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e87c0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4e87c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4e87c4: 0x3c044194  lui         $a0, 0x4194
    ctx->pc = 0x4e87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16788 << 16));
    // 0x4e87c8: 0x8603015e  lh          $v1, 0x15E($s0)
    ctx->pc = 0x4e87c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e87cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e87ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e87d0: 0x0  nop
    ctx->pc = 0x4e87d0u;
    // NOP
    // 0x4e87d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4e87d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4e87d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e87d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4e87dc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4e87dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4e87e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4e87e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4e87e4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x4e87e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x4e87e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4e87e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4e87ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4e87ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4e87f0: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4E87F0u;
    {
        const bool branch_taken_0x4e87f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E87F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E87F0u;
            // 0x4e87f4: 0xa603015e  sh          $v1, 0x15E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e87f0) {
            ctx->pc = 0x4E8838u;
            goto label_4e8838;
        }
    }
    ctx->pc = 0x4E87F8u;
    // 0x4e87f8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4e87fc: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e87fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x4e8800: 0x8c42cb28  lw          $v0, -0x34D8($v0)
    ctx->pc = 0x4e8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953768)));
    // 0x4e8804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e8804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8808: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4E8808u;
    {
        const bool branch_taken_0x4e8808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8808) {
            ctx->pc = 0x4E8838u;
            goto label_4e8838;
        }
    }
    ctx->pc = 0x4E8810u;
    // 0x4e8810: 0xa1e3c  dsll32      $v1, $t2, 24
    ctx->pc = 0x4e8810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 24));
    // 0x4e8814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e8818: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4e8818u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4e881c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E881Cu;
    {
        const bool branch_taken_0x4e881c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e881c) {
            ctx->pc = 0x4E8830u;
            goto label_4e8830;
        }
    }
    ctx->pc = 0x4E8824u;
    // 0x4e8824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E8824u;
    {
        const bool branch_taken_0x4e8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8824u;
            // 0x4e8828: 0xa200019f  sb          $zero, 0x19F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8824) {
            ctx->pc = 0x4E8840u;
            goto label_4e8840;
        }
    }
    ctx->pc = 0x4E882Cu;
    // 0x4e882c: 0x0  nop
    ctx->pc = 0x4e882cu;
    // NOP
label_4e8830:
    // 0x4e8830: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E8830u;
    {
        const bool branch_taken_0x4e8830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8830u;
            // 0x4e8834: 0xa202019f  sb          $v0, 0x19F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8830) {
            ctx->pc = 0x4E8840u;
            goto label_4e8840;
        }
    }
    ctx->pc = 0x4E8838u;
label_4e8838:
    // 0x4e8838: 0xa200019f  sb          $zero, 0x19F($s0)
    ctx->pc = 0x4e8838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 0));
    // 0x4e883c: 0x0  nop
    ctx->pc = 0x4e883cu;
    // NOP
label_4e8840:
    // 0x4e8840: 0x8605015e  lh          $a1, 0x15E($s0)
    ctx->pc = 0x4e8840u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e8844: 0x86060160  lh          $a2, 0x160($s0)
    ctx->pc = 0x4e8844u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8848: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x4e8848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8850: 0xc13a060  jal         func_4E8180
    ctx->pc = 0x4E8850u;
    SET_GPR_U32(ctx, 31, 0x4E8858u);
    ctx->pc = 0x4E8854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8850u;
            // 0x4e8854: 0x24080025  addiu       $t0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E8180u;
    if (runtime->hasFunction(0x4E8180u)) {
        auto targetFn = runtime->lookupFunction(0x4E8180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8858u; }
        if (ctx->pc != 0x4E8858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E8180_0x4e8180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8858u; }
        if (ctx->pc != 0x4E8858u) { return; }
    }
    ctx->pc = 0x4E8858u;
label_4e8858:
    // 0x4e8858: 0x8602015e  lh          $v0, 0x15E($s0)
    ctx->pc = 0x4e8858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e885c: 0xa622005e  sh          $v0, 0x5E($s1)
    ctx->pc = 0x4e885cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8860: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4e8860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8864: 0xa6220060  sh          $v0, 0x60($s1)
    ctx->pc = 0x4e8864u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8868: 0x8602015e  lh          $v0, 0x15E($s0)
    ctx->pc = 0x4e8868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e886c: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x4e886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
    // 0x4e8870: 0x16530011  bne         $s2, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x4E8870u;
    {
        const bool branch_taken_0x4e8870 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x4E8874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8870u;
            // 0x4e8874: 0xa602015e  sh          $v0, 0x15E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8870) {
            ctx->pc = 0x4E88B8u;
            goto label_4e88b8;
        }
    }
    ctx->pc = 0x4E8878u;
    // 0x4e8878: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x4e8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4e887c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e8880: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x4e8880u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4e8884: 0x24428560  addiu       $v0, $v0, -0x7AA0
    ctx->pc = 0x4e8884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935904));
    // 0x4e8888: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x4e8888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x4e888c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4e888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e8890: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x4e8890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4e8894: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4e8894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e8898: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e8898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e889c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4e889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4e88a0: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4e88a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e88a4: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4e88a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4e88a8: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4e88a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e88ac: 0x2442002f  addiu       $v0, $v0, 0x2F
    ctx->pc = 0x4e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
    // 0x4e88b0: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4e88b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e88b4: 0x0  nop
    ctx->pc = 0x4e88b4u;
    // NOP
label_4e88b8:
    // 0x4e88b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e88b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4e88bc: 0x2e420027  sltiu       $v0, $s2, 0x27
    ctx->pc = 0x4e88bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x4e88c0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x4E88C0u;
    {
        const bool branch_taken_0x4e88c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E88C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E88C0u;
            // 0x4e88c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88c0) {
            ctx->pc = 0x4E8738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e8738;
        }
    }
    ctx->pc = 0x4E88C8u;
    // 0x4e88c8: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x4e88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4e88cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e88d0: 0xa603015e  sh          $v1, 0x15E($s0)
    ctx->pc = 0x4e88d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e88d4: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x4e88d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4e88d8:
    // 0x4e88d8: 0x82020197  lb          $v0, 0x197($s0)
    ctx->pc = 0x4e88d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
    // 0x4e88dc: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E88DCu;
    {
        const bool branch_taken_0x4e88dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E88E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E88DCu;
            // 0x4e88e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88dc) {
            ctx->pc = 0x4E88F0u;
            goto label_4e88f0;
        }
    }
    ctx->pc = 0x4E88E4u;
    // 0x4e88e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E88E4u;
    {
        const bool branch_taken_0x4e88e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E88E4u;
            // 0x4e88e8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e88e4) {
            ctx->pc = 0x4E8900u;
            goto label_4e8900;
        }
    }
    ctx->pc = 0x4E88ECu;
    // 0x4e88ec: 0x0  nop
    ctx->pc = 0x4e88ecu;
    // NOP
label_4e88f0:
    // 0x4e88f0: 0x82020198  lb          $v0, 0x198($s0)
    ctx->pc = 0x4e88f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x4e88f4: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E88F4u;
    {
        const bool branch_taken_0x4e88f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e88f4) {
            ctx->pc = 0x4E8900u;
            goto label_4e8900;
        }
    }
    ctx->pc = 0x4E88FCu;
    // 0x4e88fc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4e88fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e8900:
    // 0x4e8900: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x4e8900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x4e8904: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E8904u;
    {
        const bool branch_taken_0x4e8904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8904) {
            ctx->pc = 0x4E8928u;
            goto label_4e8928;
        }
    }
    ctx->pc = 0x4E890Cu;
    // 0x4e890c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4e8910: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e8910u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x4e8914: 0x8c42cb30  lw          $v0, -0x34D0($v0)
    ctx->pc = 0x4e8914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953776)));
    // 0x4e8918: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e8918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e891c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E891Cu;
    {
        const bool branch_taken_0x4e891c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e891c) {
            ctx->pc = 0x4E8950u;
            goto label_4e8950;
        }
    }
    ctx->pc = 0x4E8924u;
    // 0x4e8924: 0x0  nop
    ctx->pc = 0x4e8924u;
    // NOP
label_4e8928:
    // 0x4e8928: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x4e8928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x4e892c: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4E892Cu;
    {
        const bool branch_taken_0x4e892c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e892c) {
            ctx->pc = 0x4E8978u;
            goto label_4e8978;
        }
    }
    ctx->pc = 0x4E8934u;
    // 0x4e8934: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4e8938: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e8938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x4e893c: 0x8c42cb38  lw          $v0, -0x34C8($v0)
    ctx->pc = 0x4e893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953784)));
    // 0x4e8940: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e8940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8944: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E8944u;
    {
        const bool branch_taken_0x4e8944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8944) {
            ctx->pc = 0x4E8978u;
            goto label_4e8978;
        }
    }
    ctx->pc = 0x4E894Cu;
    // 0x4e894c: 0x0  nop
    ctx->pc = 0x4e894cu;
    // NOP
label_4e8950:
    // 0x4e8950: 0x91e3c  dsll32      $v1, $t1, 24
    ctx->pc = 0x4e8950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 24));
    // 0x4e8954: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4e8954u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4e8958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e8958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e895c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4E895Cu;
    {
        const bool branch_taken_0x4e895c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e895c) {
            ctx->pc = 0x4E8970u;
            goto label_4e8970;
        }
    }
    ctx->pc = 0x4E8964u;
    // 0x4e8964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4E8964u;
    {
        const bool branch_taken_0x4e8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8964u;
            // 0x4e8968: 0xa200019f  sb          $zero, 0x19F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8964) {
            ctx->pc = 0x4E8980u;
            goto label_4e8980;
        }
    }
    ctx->pc = 0x4E896Cu;
    // 0x4e896c: 0x0  nop
    ctx->pc = 0x4e896cu;
    // NOP
label_4e8970:
    // 0x4e8970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E8970u;
    {
        const bool branch_taken_0x4e8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8970u;
            // 0x4e8974: 0xa202019f  sb          $v0, 0x19F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8970) {
            ctx->pc = 0x4E8980u;
            goto label_4e8980;
        }
    }
    ctx->pc = 0x4E8978u;
label_4e8978:
    // 0x4e8978: 0xa200019f  sb          $zero, 0x19F($s0)
    ctx->pc = 0x4e8978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 0));
    // 0x4e897c: 0x0  nop
    ctx->pc = 0x4e897cu;
    // NOP
label_4e8980:
    // 0x4e8980: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x4e8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x4e8984: 0x80430168  lb          $v1, 0x168($v0)
    ctx->pc = 0x4e8984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x4e8988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e898c: 0x8605015e  lh          $a1, 0x15E($s0)
    ctx->pc = 0x4e898cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e8990: 0x86060160  lh          $a2, 0x160($s0)
    ctx->pc = 0x4e8990u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8994: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4e8998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e8998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4e899c: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x4e899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x4e89a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e89a4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4e89a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e89a8: 0xc13a060  jal         func_4E8180
    ctx->pc = 0x4E89A8u;
    SET_GPR_U32(ctx, 31, 0x4E89B0u);
    ctx->pc = 0x4E89ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E89A8u;
            // 0x4e89ac: 0x24080025  addiu       $t0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E8180u;
    if (runtime->hasFunction(0x4E8180u)) {
        auto targetFn = runtime->lookupFunction(0x4E8180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E89B0u; }
        if (ctx->pc != 0x4E89B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E8180_0x4e8180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E89B0u; }
        if (ctx->pc != 0x4E89B0u) { return; }
    }
    ctx->pc = 0x4E89B0u;
label_4e89b0:
    // 0x4e89b0: 0x8603015e  lh          $v1, 0x15E($s0)
    ctx->pc = 0x4e89b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e89b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e89b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4e89b8: 0x2e42002a  sltiu       $v0, $s2, 0x2A
    ctx->pc = 0x4e89b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x4e89bc: 0xa623005e  sh          $v1, 0x5E($s1)
    ctx->pc = 0x4e89bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e89c0: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x4e89c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e89c4: 0xa6230060  sh          $v1, 0x60($s1)
    ctx->pc = 0x4e89c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e89c8: 0x8603015e  lh          $v1, 0x15E($s0)
    ctx->pc = 0x4e89c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e89cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4e89ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4e89d0: 0x246300bc  addiu       $v1, $v1, 0xBC
    ctx->pc = 0x4e89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
    // 0x4e89d4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x4E89D4u;
    {
        const bool branch_taken_0x4e89d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E89D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E89D4u;
            // 0x4e89d8: 0xa603015e  sh          $v1, 0x15E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e89d4) {
            ctx->pc = 0x4E88D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e88d8;
        }
    }
    ctx->pc = 0x4E89DCu;
    // 0x4e89dc: 0x240200a5  addiu       $v0, $zero, 0xA5
    ctx->pc = 0x4e89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x4e89e0: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4e89e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e89e4: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x4e89e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e89e8: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x4e89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x4e89ec: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x4e89ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e89f0: 0xa200019f  sb          $zero, 0x19F($s0)
    ctx->pc = 0x4e89f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 415), (uint8_t)GPR_U32(ctx, 0));
    // 0x4e89f4: 0x82020197  lb          $v0, 0x197($s0)
    ctx->pc = 0x4e89f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
    // 0x4e89f8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E89F8u;
    {
        const bool branch_taken_0x4e89f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E89FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E89F8u;
            // 0x4e89fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e89f8) {
            ctx->pc = 0x4E8A08u;
            goto label_4e8a08;
        }
    }
    ctx->pc = 0x4E8A00u;
    // 0x4e8a00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8A00u;
    {
        const bool branch_taken_0x4e8a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A00u;
            // 0x4e8a04: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a00) {
            ctx->pc = 0x4E8A18u;
            goto label_4e8a18;
        }
    }
    ctx->pc = 0x4E8A08u;
label_4e8a08:
    // 0x4e8a08: 0x82020198  lb          $v0, 0x198($s0)
    ctx->pc = 0x4e8a08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x4e8a0c: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E8A0Cu;
    {
        const bool branch_taken_0x4e8a0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8a0c) {
            ctx->pc = 0x4E8A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A0Cu;
            // 0x4e8a10: 0x8605015e  lh          $a1, 0x15E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A1Cu;
            goto label_4e8a1c;
        }
    }
    ctx->pc = 0x4E8A14u;
    // 0x4e8a14: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4e8a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e8a18:
    // 0x4e8a18: 0x8605015e  lh          $a1, 0x15E($s0)
    ctx->pc = 0x4e8a18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
label_4e8a1c:
    // 0x4e8a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8a20: 0x86060160  lh          $a2, 0x160($s0)
    ctx->pc = 0x4e8a20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8a24: 0x240700cf  addiu       $a3, $zero, 0xCF
    ctx->pc = 0x4e8a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x4e8a28: 0xc13a060  jal         func_4E8180
    ctx->pc = 0x4E8A28u;
    SET_GPR_U32(ctx, 31, 0x4E8A30u);
    ctx->pc = 0x4E8A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A28u;
            // 0x4e8a2c: 0x24080025  addiu       $t0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E8180u;
    if (runtime->hasFunction(0x4E8180u)) {
        auto targetFn = runtime->lookupFunction(0x4E8180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8A30u; }
        if (ctx->pc != 0x4E8A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E8180_0x4e8180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8A30u; }
        if (ctx->pc != 0x4E8A30u) { return; }
    }
    ctx->pc = 0x4E8A30u;
label_4e8a30:
    // 0x4e8a30: 0x8604015e  lh          $a0, 0x15E($s0)
    ctx->pc = 0x4e8a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e8a34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e8a38: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x4e8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4e8a3c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x4e8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4e8a40: 0x240201db  addiu       $v0, $zero, 0x1DB
    ctx->pc = 0x4e8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 475));
    // 0x4e8a44: 0xa4a4005e  sh          $a0, 0x5E($a1)
    ctx->pc = 0x4e8a44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e8a48: 0x86040160  lh          $a0, 0x160($s0)
    ctx->pc = 0x4e8a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8a4c: 0xa4a40060  sh          $a0, 0x60($a1)
    ctx->pc = 0x4e8a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e8a50: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4e8a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e8a54: 0x82020197  lb          $v0, 0x197($s0)
    ctx->pc = 0x4e8a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
    // 0x4e8a58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E8A58u;
    {
        const bool branch_taken_0x4e8a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E8A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A58u;
            // 0x4e8a5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a58) {
            ctx->pc = 0x4E8A68u;
            goto label_4e8a68;
        }
    }
    ctx->pc = 0x4E8A60u;
    // 0x4e8a60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E8A60u;
    {
        const bool branch_taken_0x4e8a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A60u;
            // 0x4e8a64: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a60) {
            ctx->pc = 0x4E8A78u;
            goto label_4e8a78;
        }
    }
    ctx->pc = 0x4E8A68u;
label_4e8a68:
    // 0x4e8a68: 0x82020198  lb          $v0, 0x198($s0)
    ctx->pc = 0x4e8a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x4e8a6c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E8A6Cu;
    {
        const bool branch_taken_0x4e8a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e8a6c) {
            ctx->pc = 0x4E8A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A6Cu;
            // 0x4e8a70: 0x92020196  lbu         $v0, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A7Cu;
            goto label_4e8a7c;
        }
    }
    ctx->pc = 0x4E8A74u;
    // 0x4e8a74: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4e8a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e8a78:
    // 0x4e8a78: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x4e8a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4e8a7c:
    // 0x4e8a7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E8A7Cu;
    {
        const bool branch_taken_0x4e8a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e8a7c) {
            ctx->pc = 0x4E8A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A7Cu;
            // 0x4e8a80: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E8A98u;
            goto label_4e8a98;
        }
    }
    ctx->pc = 0x4E8A84u;
    // 0x4e8a84: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4e8a88: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4e8a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e8a8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4e8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4e8a90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E8A90u;
    {
        const bool branch_taken_0x4e8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8A90u;
            // 0x4e8a94: 0xa0400168  sb          $zero, 0x168($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 360), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8a90) {
            ctx->pc = 0x4E8AA4u;
            goto label_4e8aa4;
        }
    }
    ctx->pc = 0x4E8A98u;
label_4e8a98:
    // 0x4e8a98: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4e8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4e8a9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4e8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4e8aa0: 0xa0430168  sb          $v1, 0x168($v0)
    ctx->pc = 0x4e8aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 360), (uint8_t)GPR_U32(ctx, 3));
label_4e8aa4:
    // 0x4e8aa4: 0x8605015e  lh          $a1, 0x15E($s0)
    ctx->pc = 0x4e8aa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e8aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8aac: 0x86060160  lh          $a2, 0x160($s0)
    ctx->pc = 0x4e8aacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8ab0: 0x240700cf  addiu       $a3, $zero, 0xCF
    ctx->pc = 0x4e8ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x4e8ab4: 0xc13a060  jal         func_4E8180
    ctx->pc = 0x4E8AB4u;
    SET_GPR_U32(ctx, 31, 0x4E8ABCu);
    ctx->pc = 0x4E8AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8AB4u;
            // 0x4e8ab8: 0x24080025  addiu       $t0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E8180u;
    if (runtime->hasFunction(0x4E8180u)) {
        auto targetFn = runtime->lookupFunction(0x4E8180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8ABCu; }
        if (ctx->pc != 0x4E8ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E8180_0x4e8180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E8ABCu; }
        if (ctx->pc != 0x4E8ABCu) { return; }
    }
    ctx->pc = 0x4E8ABCu;
label_4e8abc:
    // 0x4e8abc: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x4e8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4e8ac0: 0x8603015e  lh          $v1, 0x15E($s0)
    ctx->pc = 0x4e8ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4e8ac4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e8ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4e8ac8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4e8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4e8acc: 0xa483005e  sh          $v1, 0x5E($a0)
    ctx->pc = 0x4e8accu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8ad0: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x4e8ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4e8ad4: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x4e8ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8ad8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4e8ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e8adc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4e8adcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e8ae0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e8ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e8ae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e8ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e8ae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e8ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e8aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e8aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e8af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e8af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8af4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E8AF4u;
            // 0x4e8af8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E8AFCu;
    // 0x4e8afc: 0x0  nop
    ctx->pc = 0x4e8afcu;
    // NOP
}
