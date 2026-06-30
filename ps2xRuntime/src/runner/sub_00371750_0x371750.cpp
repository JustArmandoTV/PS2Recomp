#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371750
// Address: 0x371750 - 0x371830
void sub_00371750_0x371750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371750_0x371750");
#endif

    switch (ctx->pc) {
        case 0x371750u: goto label_371750;
        case 0x371754u: goto label_371754;
        case 0x371758u: goto label_371758;
        case 0x37175cu: goto label_37175c;
        case 0x371760u: goto label_371760;
        case 0x371764u: goto label_371764;
        case 0x371768u: goto label_371768;
        case 0x37176cu: goto label_37176c;
        case 0x371770u: goto label_371770;
        case 0x371774u: goto label_371774;
        case 0x371778u: goto label_371778;
        case 0x37177cu: goto label_37177c;
        case 0x371780u: goto label_371780;
        case 0x371784u: goto label_371784;
        case 0x371788u: goto label_371788;
        case 0x37178cu: goto label_37178c;
        case 0x371790u: goto label_371790;
        case 0x371794u: goto label_371794;
        case 0x371798u: goto label_371798;
        case 0x37179cu: goto label_37179c;
        case 0x3717a0u: goto label_3717a0;
        case 0x3717a4u: goto label_3717a4;
        case 0x3717a8u: goto label_3717a8;
        case 0x3717acu: goto label_3717ac;
        case 0x3717b0u: goto label_3717b0;
        case 0x3717b4u: goto label_3717b4;
        case 0x3717b8u: goto label_3717b8;
        case 0x3717bcu: goto label_3717bc;
        case 0x3717c0u: goto label_3717c0;
        case 0x3717c4u: goto label_3717c4;
        case 0x3717c8u: goto label_3717c8;
        case 0x3717ccu: goto label_3717cc;
        case 0x3717d0u: goto label_3717d0;
        case 0x3717d4u: goto label_3717d4;
        case 0x3717d8u: goto label_3717d8;
        case 0x3717dcu: goto label_3717dc;
        case 0x3717e0u: goto label_3717e0;
        case 0x3717e4u: goto label_3717e4;
        case 0x3717e8u: goto label_3717e8;
        case 0x3717ecu: goto label_3717ec;
        case 0x3717f0u: goto label_3717f0;
        case 0x3717f4u: goto label_3717f4;
        case 0x3717f8u: goto label_3717f8;
        case 0x3717fcu: goto label_3717fc;
        case 0x371800u: goto label_371800;
        case 0x371804u: goto label_371804;
        case 0x371808u: goto label_371808;
        case 0x37180cu: goto label_37180c;
        case 0x371810u: goto label_371810;
        case 0x371814u: goto label_371814;
        case 0x371818u: goto label_371818;
        case 0x37181cu: goto label_37181c;
        case 0x371820u: goto label_371820;
        case 0x371824u: goto label_371824;
        case 0x371828u: goto label_371828;
        case 0x37182cu: goto label_37182c;
        default: break;
    }

    ctx->pc = 0x371750u;

label_371750:
    // 0x371750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_371754:
    // 0x371754: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x371754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_371758:
    // 0x371758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37175c:
    // 0x37175c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37175cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_371760:
    // 0x371760: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x371760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_371764:
    // 0x371764: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x371764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_371768:
    // 0x371768: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_37176c:
    if (ctx->pc == 0x37176Cu) {
        ctx->pc = 0x37176Cu;
            // 0x37176c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x371770u;
        goto label_371770;
    }
    ctx->pc = 0x371768u;
    {
        const bool branch_taken_0x371768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371768) {
            ctx->pc = 0x37176Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371768u;
            // 0x37176c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371798u;
            goto label_371798;
        }
    }
    ctx->pc = 0x371770u;
label_371770:
    // 0x371770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371774:
    // 0x371774: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x371774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_371778:
    // 0x371778: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x371778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_37177c:
    // 0x37177c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x37177cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_371780:
    // 0x371780: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x371780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_371784:
    // 0x371784: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x371784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_371788:
    // 0x371788: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x371788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_37178c:
    // 0x37178c: 0xc0a7ab4  jal         func_29EAD0
label_371790:
    if (ctx->pc == 0x371790u) {
        ctx->pc = 0x371790u;
            // 0x371790: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x371794u;
        goto label_371794;
    }
    ctx->pc = 0x37178Cu;
    SET_GPR_U32(ctx, 31, 0x371794u);
    ctx->pc = 0x371790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37178Cu;
            // 0x371790: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371794u; }
        if (ctx->pc != 0x371794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371794u; }
        if (ctx->pc != 0x371794u) { return; }
    }
    ctx->pc = 0x371794u;
label_371794:
    // 0x371794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_371798:
    // 0x371798: 0x3e00008  jr          $ra
label_37179c:
    if (ctx->pc == 0x37179Cu) {
        ctx->pc = 0x37179Cu;
            // 0x37179c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3717A0u;
        goto label_3717a0;
    }
    ctx->pc = 0x371798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371798u;
            // 0x37179c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3717A0u;
label_3717a0:
    // 0x3717a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3717a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3717a4:
    // 0x3717a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3717a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3717a8:
    // 0x3717a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3717a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3717ac:
    // 0x3717ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3717acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3717b0:
    // 0x3717b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3717b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3717b4:
    // 0x3717b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3717b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3717b8:
    // 0x3717b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3717b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3717bc:
    // 0x3717bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3717bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3717c0:
    // 0x3717c0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3717c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3717c4:
    // 0x3717c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3717c8:
    if (ctx->pc == 0x3717C8u) {
        ctx->pc = 0x3717C8u;
            // 0x3717c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3717CCu;
        goto label_3717cc;
    }
    ctx->pc = 0x3717C4u;
    {
        const bool branch_taken_0x3717c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3717C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3717C4u;
            // 0x3717c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3717c4) {
            ctx->pc = 0x371808u;
            goto label_371808;
        }
    }
    ctx->pc = 0x3717CCu;
label_3717cc:
    // 0x3717cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3717ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3717d0:
    // 0x3717d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3717d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3717d4:
    // 0x3717d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3717d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3717d8:
    // 0x3717d8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3717d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3717dc:
    // 0x3717dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3717dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3717e0:
    // 0x3717e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3717e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3717e4:
    // 0x3717e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3717e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3717e8:
    // 0x3717e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3717e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3717ec:
    // 0x3717ec: 0x320f809  jalr        $t9
label_3717f0:
    if (ctx->pc == 0x3717F0u) {
        ctx->pc = 0x3717F4u;
        goto label_3717f4;
    }
    ctx->pc = 0x3717ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3717F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3717F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3717F4u; }
            if (ctx->pc != 0x3717F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3717F4u;
label_3717f4:
    // 0x3717f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3717f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3717f8:
    // 0x3717f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3717f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3717fc:
    // 0x3717fc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3717fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_371800:
    // 0x371800: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_371804:
    if (ctx->pc == 0x371804u) {
        ctx->pc = 0x371804u;
            // 0x371804: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x371808u;
        goto label_371808;
    }
    ctx->pc = 0x371800u;
    {
        const bool branch_taken_0x371800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371800u;
            // 0x371804: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371800) {
            ctx->pc = 0x3717D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3717d8;
        }
    }
    ctx->pc = 0x371808u;
label_371808:
    // 0x371808: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x371808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37180c:
    // 0x37180c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_371810:
    // 0x371810: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_371814:
    // 0x371814: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_371818:
    // 0x371818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37181c:
    // 0x37181c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37181cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_371820:
    // 0x371820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371824:
    // 0x371824: 0x3e00008  jr          $ra
label_371828:
    if (ctx->pc == 0x371828u) {
        ctx->pc = 0x371828u;
            // 0x371828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37182Cu;
        goto label_37182c;
    }
    ctx->pc = 0x371824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371824u;
            // 0x371828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37182Cu;
label_37182c:
    // 0x37182c: 0x0  nop
    ctx->pc = 0x37182cu;
    // NOP
}
