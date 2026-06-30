#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005096A0
// Address: 0x5096a0 - 0x509780
void sub_005096A0_0x5096a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005096A0_0x5096a0");
#endif

    switch (ctx->pc) {
        case 0x5096a0u: goto label_5096a0;
        case 0x5096a4u: goto label_5096a4;
        case 0x5096a8u: goto label_5096a8;
        case 0x5096acu: goto label_5096ac;
        case 0x5096b0u: goto label_5096b0;
        case 0x5096b4u: goto label_5096b4;
        case 0x5096b8u: goto label_5096b8;
        case 0x5096bcu: goto label_5096bc;
        case 0x5096c0u: goto label_5096c0;
        case 0x5096c4u: goto label_5096c4;
        case 0x5096c8u: goto label_5096c8;
        case 0x5096ccu: goto label_5096cc;
        case 0x5096d0u: goto label_5096d0;
        case 0x5096d4u: goto label_5096d4;
        case 0x5096d8u: goto label_5096d8;
        case 0x5096dcu: goto label_5096dc;
        case 0x5096e0u: goto label_5096e0;
        case 0x5096e4u: goto label_5096e4;
        case 0x5096e8u: goto label_5096e8;
        case 0x5096ecu: goto label_5096ec;
        case 0x5096f0u: goto label_5096f0;
        case 0x5096f4u: goto label_5096f4;
        case 0x5096f8u: goto label_5096f8;
        case 0x5096fcu: goto label_5096fc;
        case 0x509700u: goto label_509700;
        case 0x509704u: goto label_509704;
        case 0x509708u: goto label_509708;
        case 0x50970cu: goto label_50970c;
        case 0x509710u: goto label_509710;
        case 0x509714u: goto label_509714;
        case 0x509718u: goto label_509718;
        case 0x50971cu: goto label_50971c;
        case 0x509720u: goto label_509720;
        case 0x509724u: goto label_509724;
        case 0x509728u: goto label_509728;
        case 0x50972cu: goto label_50972c;
        case 0x509730u: goto label_509730;
        case 0x509734u: goto label_509734;
        case 0x509738u: goto label_509738;
        case 0x50973cu: goto label_50973c;
        case 0x509740u: goto label_509740;
        case 0x509744u: goto label_509744;
        case 0x509748u: goto label_509748;
        case 0x50974cu: goto label_50974c;
        case 0x509750u: goto label_509750;
        case 0x509754u: goto label_509754;
        case 0x509758u: goto label_509758;
        case 0x50975cu: goto label_50975c;
        case 0x509760u: goto label_509760;
        case 0x509764u: goto label_509764;
        case 0x509768u: goto label_509768;
        case 0x50976cu: goto label_50976c;
        case 0x509770u: goto label_509770;
        case 0x509774u: goto label_509774;
        case 0x509778u: goto label_509778;
        case 0x50977cu: goto label_50977c;
        default: break;
    }

    ctx->pc = 0x5096a0u;

label_5096a0:
    // 0x5096a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5096a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5096a4:
    // 0x5096a4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5096a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5096a8:
    // 0x5096a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5096a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5096ac:
    // 0x5096ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5096acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5096b0:
    // 0x5096b0: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x5096b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5096b4:
    // 0x5096b4: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_5096b8:
    if (ctx->pc == 0x5096B8u) {
        ctx->pc = 0x5096B8u;
            // 0x5096b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x5096BCu;
        goto label_5096bc;
    }
    ctx->pc = 0x5096B4u;
    {
        const bool branch_taken_0x5096b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5096B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5096B4u;
            // 0x5096b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5096b4) {
            ctx->pc = 0x509764u;
            goto label_509764;
        }
    }
    ctx->pc = 0x5096BCu;
label_5096bc:
    // 0x5096bc: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x5096bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_5096c0:
    // 0x5096c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5096c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5096c4:
    // 0x5096c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5096c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5096c8:
    // 0x5096c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x5096c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5096cc:
    // 0x5096cc: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x5096ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5096d0:
    // 0x5096d0: 0x8c700550  lw          $s0, 0x550($v1)
    ctx->pc = 0x5096d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
label_5096d4:
    // 0x5096d4: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x5096d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_5096d8:
    // 0x5096d8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x5096d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5096dc:
    // 0x5096dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x5096dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_5096e0:
    // 0x5096e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5096e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5096e4:
    // 0x5096e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x5096e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_5096e8:
    // 0x5096e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x5096e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_5096ec:
    // 0x5096ec: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_5096f0:
    if (ctx->pc == 0x5096F0u) {
        ctx->pc = 0x5096F0u;
            // 0x5096f0: 0xac440080  sw          $a0, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
        ctx->pc = 0x5096F4u;
        goto label_5096f4;
    }
    ctx->pc = 0x5096ECu;
    {
        const bool branch_taken_0x5096ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5096F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5096ECu;
            // 0x5096f0: 0xac440080  sw          $a0, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5096ec) {
            ctx->pc = 0x509730u;
            goto label_509730;
        }
    }
    ctx->pc = 0x5096F4u;
label_5096f4:
    // 0x5096f4: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x5096f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
label_5096f8:
    // 0x5096f8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x5096f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_5096fc:
    // 0x5096fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5096fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_509700:
    // 0x509700: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x509700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_509704:
    // 0x509704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x509704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_509708:
    // 0x509708: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x509708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_50970c:
    // 0x50970c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x50970cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509710:
    // 0x509710: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x509710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_509714:
    // 0x509714: 0x0  nop
    ctx->pc = 0x509714u;
    // NOP
label_509718:
    // 0x509718: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x509718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_50971c:
    // 0x50971c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x50971cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_509720:
    // 0x509720: 0x320f809  jalr        $t9
label_509724:
    if (ctx->pc == 0x509724u) {
        ctx->pc = 0x509724u;
            // 0x509724: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x509728u;
        goto label_509728;
    }
    ctx->pc = 0x509720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509728u);
        ctx->pc = 0x509724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509720u;
            // 0x509724: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509728u; }
            if (ctx->pc != 0x509728u) { return; }
        }
        }
    }
    ctx->pc = 0x509728u;
label_509728:
    // 0x509728: 0x10000009  b           . + 4 + (0x9 << 2)
label_50972c:
    if (ctx->pc == 0x50972Cu) {
        ctx->pc = 0x50972Cu;
            // 0x50972c: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x509730u;
        goto label_509730;
    }
    ctx->pc = 0x509728u;
    {
        const bool branch_taken_0x509728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509728u;
            // 0x50972c: 0x8e190058  lw          $t9, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509728) {
            ctx->pc = 0x509750u;
            goto label_509750;
        }
    }
    ctx->pc = 0x509730u;
label_509730:
    // 0x509730: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x509730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_509734:
    // 0x509734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x509734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_509738:
    // 0x509738: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x509738u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_50973c:
    // 0x50973c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x50973cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_509740:
    // 0x509740: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x509740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_509744:
    // 0x509744: 0x320f809  jalr        $t9
label_509748:
    if (ctx->pc == 0x509748u) {
        ctx->pc = 0x509748u;
            // 0x509748: 0x24070052  addiu       $a3, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->pc = 0x50974Cu;
        goto label_50974c;
    }
    ctx->pc = 0x509744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50974Cu);
        ctx->pc = 0x509748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509744u;
            // 0x509748: 0x24070052  addiu       $a3, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50974Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50974Cu; }
            if (ctx->pc != 0x50974Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50974Cu;
label_50974c:
    // 0x50974c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x50974cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_509750:
    // 0x509750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x509750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_509754:
    // 0x509754: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x509754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_509758:
    // 0x509758: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x509758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50975c:
    // 0x50975c: 0x320f809  jalr        $t9
label_509760:
    if (ctx->pc == 0x509760u) {
        ctx->pc = 0x509760u;
            // 0x509760: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x509764u;
        goto label_509764;
    }
    ctx->pc = 0x50975Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x509764u);
        ctx->pc = 0x509760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50975Cu;
            // 0x509760: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x509764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x509764u; }
            if (ctx->pc != 0x509764u) { return; }
        }
        }
    }
    ctx->pc = 0x509764u;
label_509764:
    // 0x509764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x509764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_509768:
    // 0x509768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x509768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50976c:
    // 0x50976c: 0x3e00008  jr          $ra
label_509770:
    if (ctx->pc == 0x509770u) {
        ctx->pc = 0x509770u;
            // 0x509770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x509774u;
        goto label_509774;
    }
    ctx->pc = 0x50976Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50976Cu;
            // 0x509770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509774u;
label_509774:
    // 0x509774: 0x0  nop
    ctx->pc = 0x509774u;
    // NOP
label_509778:
    // 0x509778: 0x0  nop
    ctx->pc = 0x509778u;
    // NOP
label_50977c:
    // 0x50977c: 0x0  nop
    ctx->pc = 0x50977cu;
    // NOP
}
