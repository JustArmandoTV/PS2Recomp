#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2690
// Address: 0x3b2690 - 0x3b2ac0
void sub_003B2690_0x3b2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2690_0x3b2690");
#endif

    switch (ctx->pc) {
        case 0x3b2834u: goto label_3b2834;
        case 0x3b29b8u: goto label_3b29b8;
        case 0x3b29e4u: goto label_3b29e4;
        case 0x3b29f4u: goto label_3b29f4;
        case 0x3b2a20u: goto label_3b2a20;
        case 0x3b2a68u: goto label_3b2a68;
        case 0x3b2a70u: goto label_3b2a70;
        default: break;
    }

    ctx->pc = 0x3b2690u;

    // 0x3b2690: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3b2694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b2694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2698: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3b269c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b26a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3b26a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3b26a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b26a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3b26a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3b26ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b26acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b26b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b26b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b26b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b26b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b26bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b26bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b26c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b26c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b26c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b26c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b26c8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3b26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x3b26cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b26d0: 0x8c640110  lw          $a0, 0x110($v1)
    ctx->pc = 0x3b26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3b26d4: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3B26D4u;
    {
        const bool branch_taken_0x3b26d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B26D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B26D4u;
            // 0x3b26d8: 0x26b2000c  addiu       $s2, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26d4) {
            ctx->pc = 0x3B2798u;
            goto label_3b2798;
        }
    }
    ctx->pc = 0x3B26DCu;
    // 0x3b26dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b26e0: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3B26E0u;
    {
        const bool branch_taken_0x3b26e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b26e0) {
            ctx->pc = 0x3B2798u;
            goto label_3b2798;
        }
    }
    ctx->pc = 0x3B26E8u;
    // 0x3b26e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b26ec: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B26ECu;
    {
        const bool branch_taken_0x3b26ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b26ec) {
            ctx->pc = 0x3B2744u;
            goto label_3b2744;
        }
    }
    ctx->pc = 0x3B26F4u;
    // 0x3b26f4: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B26F4u;
    {
        const bool branch_taken_0x3b26f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3b26f4) {
            ctx->pc = 0x3B2704u;
            goto label_3b2704;
        }
    }
    ctx->pc = 0x3B26FCu;
    // 0x3b26fc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3B26FCu;
    {
        const bool branch_taken_0x3b26fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B26FCu;
            // 0x3b2700: 0xa2a00008  sb          $zero, 0x8($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26fc) {
            ctx->pc = 0x3B27FCu;
            goto label_3b27fc;
        }
    }
    ctx->pc = 0x3B2704u;
label_3b2704:
    // 0x3b2704: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3b2704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3b2708: 0x24427f80  addiu       $v0, $v0, 0x7F80
    ctx->pc = 0x3b2708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32640));
    // 0x3b270c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3b270cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x3b2710: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2714: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x3b2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x3b2718: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b2718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b271c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2720: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x3b2720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x3b2724: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x3b2724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x3b2728: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b2728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b272c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b272cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b2730: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2734: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3b2734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x3b2738: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3b2738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x3b273c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3B273Cu;
    {
        const bool branch_taken_0x3b273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B273Cu;
            // 0x3b2740: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b273c) {
            ctx->pc = 0x3B27FCu;
            goto label_3b27fc;
        }
    }
    ctx->pc = 0x3B2744u;
label_3b2744:
    // 0x3b2744: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3b2744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3b2748: 0x24427fb0  addiu       $v0, $v0, 0x7FB0
    ctx->pc = 0x3b2748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32688));
    // 0x3b274c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3b274cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x3b2750: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3b2750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3b2754: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b2754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2758: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x3b2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x3b275c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b275cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b2760: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2764: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x3b2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x3b2768: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x3b2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x3b276c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b276cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b2770: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b2770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b2774: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2778: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3b2778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x3b277c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3b277cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x3b2780: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2784: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3b2784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x3b2788: 0x90420090  lbu         $v0, 0x90($v0)
    ctx->pc = 0x3b2788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x3b278c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b278cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b2790: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3B2790u;
    {
        const bool branch_taken_0x3b2790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2790u;
            // 0x3b2794: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2790) {
            ctx->pc = 0x3B27FCu;
            goto label_3b27fc;
        }
    }
    ctx->pc = 0x3B2798u;
label_3b2798:
    // 0x3b2798: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3b2798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3b279c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b27a0: 0x24637fe0  addiu       $v1, $v1, 0x7FE0
    ctx->pc = 0x3b27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32736));
    // 0x3b27a4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3b27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3b27a8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3b27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3b27ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b27acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b27b0: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x3b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x3b27b4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3b27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3b27b8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b27bc: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x3b27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x3b27c0: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x3b27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x3b27c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b27c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b27c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b27cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b27d0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3b27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x3b27d4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3b27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b27d8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3b27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b27dc: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x3b27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3b27e0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b27e4: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3b27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x3b27e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3b27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b27ec: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3b27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x3b27f0: 0x90420090  lbu         $v0, 0x90($v0)
    ctx->pc = 0x3b27f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x3b27f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b27f8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3b27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3b27fc:
    // 0x3b27fc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2800: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3b2800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3b2804: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x3b2804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3b2808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b280c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b2810: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b2810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2814: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x3b2814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x3b2818: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x3b2818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b281c: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x3b281cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b2820: 0x83f023  subu        $fp, $a0, $v1
    ctx->pc = 0x3b2820u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b2824: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3b2824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x3b2828: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3b2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b282c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b282cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b2830: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x3b2830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3b2834:
    // 0x3b2834: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x3b2834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
    // 0x3b2838: 0xa2600038  sb          $zero, 0x38($s3)
    ctx->pc = 0x3b2838u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b283c: 0xa660003a  sh          $zero, 0x3A($s3)
    ctx->pc = 0x3b283cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b2840: 0xa260003c  sb          $zero, 0x3C($s3)
    ctx->pc = 0x3b2840u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b2844: 0xa660003e  sh          $zero, 0x3E($s3)
    ctx->pc = 0x3b2844u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b2848: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x3b2848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x3b284c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x3b284cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x3b2850: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x3b2850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x3b2854: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x3b2854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x3b2858: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x3b2858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3b285c: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x3B285Cu;
    {
        const bool branch_taken_0x3b285c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B285Cu;
            // 0x3b2860: 0x2670002c  addiu       $s0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b285c) {
            ctx->pc = 0x3B2A40u;
            goto label_3b2a40;
        }
    }
    ctx->pc = 0x3B2864u;
    // 0x3b2864: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b2864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b2868: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3B2868u;
    {
        const bool branch_taken_0x3b2868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2868) {
            ctx->pc = 0x3B2A40u;
            goto label_3b2a40;
        }
    }
    ctx->pc = 0x3B2870u;
    // 0x3b2870: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b2870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2874: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b2874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b2878: 0x8e570008  lw          $s7, 0x8($s2)
    ctx->pc = 0x3b2878u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b287c: 0x8e56000c  lw          $s6, 0xC($s2)
    ctx->pc = 0x3b287cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3b2880: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x3b2880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x3b2884: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B2884u;
    {
        const bool branch_taken_0x3b2884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B2888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2884u;
            // 0x3b2888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2884) {
            ctx->pc = 0x3B28C8u;
            goto label_3b28c8;
        }
    }
    ctx->pc = 0x3B288Cu;
    // 0x3b288c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b2890: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B2890u;
    {
        const bool branch_taken_0x3b2890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b2890) {
            ctx->pc = 0x3B28C8u;
            goto label_3b28c8;
        }
    }
    ctx->pc = 0x3B2898u;
    // 0x3b2898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b2898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b289c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B289Cu;
    {
        const bool branch_taken_0x3b289c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b289c) {
            ctx->pc = 0x3B28B0u;
            goto label_3b28b0;
        }
    }
    ctx->pc = 0x3B28A4u;
    // 0x3b28a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B28A4u;
    {
        const bool branch_taken_0x3b28a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b28a4) {
            ctx->pc = 0x3B28F8u;
            goto label_3b28f8;
        }
    }
    ctx->pc = 0x3B28ACu;
    // 0x3b28ac: 0x0  nop
    ctx->pc = 0x3b28acu;
    // NOP
label_3b28b0:
    // 0x3b28b0: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x3b28b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3b28b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B28B4u;
    {
        const bool branch_taken_0x3b28b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b28b4) {
            ctx->pc = 0x3B28F8u;
            goto label_3b28f8;
        }
    }
    ctx->pc = 0x3B28BCu;
    // 0x3b28bc: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3b28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3b28c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B28C0u;
    {
        const bool branch_taken_0x3b28c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B28C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B28C0u;
            // 0x3b28c4: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b28c0) {
            ctx->pc = 0x3B28F8u;
            goto label_3b28f8;
        }
    }
    ctx->pc = 0x3B28C8u;
label_3b28c8:
    // 0x3b28c8: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x3b28c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3b28cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B28CCu;
    {
        const bool branch_taken_0x3b28cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b28cc) {
            ctx->pc = 0x3B28E0u;
            goto label_3b28e0;
        }
    }
    ctx->pc = 0x3B28D4u;
    // 0x3b28d4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x3b28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3b28d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b28dc: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x3b28dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_3b28e0:
    // 0x3b28e0: 0x32830002  andi        $v1, $s4, 0x2
    ctx->pc = 0x3b28e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x3b28e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B28E4u;
    {
        const bool branch_taken_0x3b28e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b28e4) {
            ctx->pc = 0x3B28F8u;
            goto label_3b28f8;
        }
    }
    ctx->pc = 0x3B28ECu;
    // 0x3b28ec: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3b28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3b28f0: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x3b28f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3b28f4: 0x0  nop
    ctx->pc = 0x3b28f4u;
    // NOP
label_3b28f8:
    // 0x3b28f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3b28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x3b28fc: 0x3c21818  mult        $v1, $fp, $v0
    ctx->pc = 0x3b28fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2900: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3b2900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b2904: 0xa603002c  sh          $v1, 0x2C($s0)
    ctx->pc = 0x3b2904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b2908: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x3b2908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b290c: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x3b290cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b2910: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x3b2910u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b2914: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b2914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b2918: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x3b2918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b291c: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x3b291cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b2920: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x3b2920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b2924: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3b2924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2928: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x3b2928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x3b292c: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x3b292cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3b2930: 0x70431818  mult1       $v1, $v0, $v1
    ctx->pc = 0x3b2930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2934: 0xa6030038  sh          $v1, 0x38($s0)
    ctx->pc = 0x3b2934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b2938: 0xa6030034  sh          $v1, 0x34($s0)
    ctx->pc = 0x3b2938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b293c: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x3b293cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b2940: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x3b2940u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b2944: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b2944u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b2948: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x3b2948u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b294c: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x3b294cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b2950: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x3b2950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b2954: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3b2954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2958: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3b2958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x3b295c: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x3b295cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x3b2960: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x3b2960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2964: 0xa6030044  sh          $v1, 0x44($s0)
    ctx->pc = 0x3b2964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b2968: 0xa6030040  sh          $v1, 0x40($s0)
    ctx->pc = 0x3b2968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b296c: 0x86250012  lh          $a1, 0x12($s1)
    ctx->pc = 0x3b296cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3b2970: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x3b2970u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b2974: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3b2974u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3b2978: 0xa6030042  sh          $v1, 0x42($s0)
    ctx->pc = 0x3b2978u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b297c: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x3b297cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3b2980: 0xa6030046  sh          $v1, 0x46($s0)
    ctx->pc = 0x3b2980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b2984: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3b2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2988: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x3b2988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x3b298c: 0x9223000e  lbu         $v1, 0xE($s1)
    ctx->pc = 0x3b298cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3b2990: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x3b2990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b2994: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x3b2994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b2998: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x3b2998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b299c: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x3b299cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3b29a0: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x3b29a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b29a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b29a8: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x3b29a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b29ac: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x3b29acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3b29b0: 0xc040180  jal         func_100600
    ctx->pc = 0x3B29B0u;
    SET_GPR_U32(ctx, 31, 0x3B29B8u);
    ctx->pc = 0x3B29B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B29B0u;
            // 0x3b29b4: 0xa6020052  sh          $v0, 0x52($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B29B8u; }
        if (ctx->pc != 0x3B29B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B29B8u; }
        if (ctx->pc != 0x3B29B8u) { return; }
    }
    ctx->pc = 0x3B29B8u;
label_3b29b8:
    // 0x3b29b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B29B8u;
    {
        const bool branch_taken_0x3b29b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b29b8) {
            ctx->pc = 0x3B29E8u;
            goto label_3b29e8;
        }
    }
    ctx->pc = 0x3B29C0u;
    // 0x3b29c0: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x3b29c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b29c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3b29c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b29c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b29c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b29cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b29ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b29d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b29d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b29d4: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x3b29d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3b29d8: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x3b29d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3b29dc: 0xc1109e0  jal         func_442780
    ctx->pc = 0x3B29DCu;
    SET_GPR_U32(ctx, 31, 0x3B29E4u);
    ctx->pc = 0x3B29E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B29DCu;
            // 0x3b29e0: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B29E4u; }
        if (ctx->pc != 0x3B29E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B29E4u; }
        if (ctx->pc != 0x3B29E4u) { return; }
    }
    ctx->pc = 0x3B29E4u;
label_3b29e4:
    // 0x3b29e4: 0x0  nop
    ctx->pc = 0x3b29e4u;
    // NOP
label_3b29e8:
    // 0x3b29e8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3b29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3b29ec: 0xc040180  jal         func_100600
    ctx->pc = 0x3B29ECu;
    SET_GPR_U32(ctx, 31, 0x3B29F4u);
    ctx->pc = 0x3B29F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B29ECu;
            // 0x3b29f0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B29F4u; }
        if (ctx->pc != 0x3B29F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B29F4u; }
        if (ctx->pc != 0x3B29F4u) { return; }
    }
    ctx->pc = 0x3B29F4u;
label_3b29f4:
    // 0x3b29f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b29f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b29f8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B29F8u;
    {
        const bool branch_taken_0x3b29f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b29f8) {
            ctx->pc = 0x3B2A28u;
            goto label_3b2a28;
        }
    }
    ctx->pc = 0x3B2A00u;
    // 0x3b2a00: 0x8eaa0000  lw          $t2, 0x0($s5)
    ctx->pc = 0x3b2a00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2a04: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x3b2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b2a08: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3b2a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a0c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3b2a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a10: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x3b2a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3b2a14: 0x26080024  addiu       $t0, $s0, 0x24
    ctx->pc = 0x3b2a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3b2a18: 0xc1109e0  jal         func_442780
    ctx->pc = 0x3B2A18u;
    SET_GPR_U32(ctx, 31, 0x3B2A20u);
    ctx->pc = 0x3B2A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2A18u;
            // 0x3b2a1c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2A20u; }
        if (ctx->pc != 0x3B2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2A20u; }
        if (ctx->pc != 0x3B2A20u) { return; }
    }
    ctx->pc = 0x3B2A20u;
label_3b2a20:
    // 0x3b2a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b2a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2a24: 0x0  nop
    ctx->pc = 0x3b2a24u;
    // NOP
label_3b2a28:
    // 0x3b2a28: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x3b2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x3b2a2c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3b2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b2a30: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b2a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3b2a34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B2A34u;
    {
        const bool branch_taken_0x3b2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2A34u;
            // 0x3b2a38: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a34) {
            ctx->pc = 0x3B2A70u;
            goto label_3b2a70;
        }
    }
    ctx->pc = 0x3B2A3Cu;
    // 0x3b2a3c: 0x0  nop
    ctx->pc = 0x3b2a3cu;
    // NOP
label_3b2a40:
    // 0x3b2a40: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b2a44: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x3b2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b2a48: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b2a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3b2a4c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3b2a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3b2a50: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3b2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b2a54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3b2a58: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3b2a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3b2a5c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3b2a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3b2a60: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B2A60u;
    SET_GPR_U32(ctx, 31, 0x3B2A68u);
    ctx->pc = 0x3B2A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2A60u;
            // 0x3b2a64: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2A68u; }
        if (ctx->pc != 0x3B2A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2A68u; }
        if (ctx->pc != 0x3B2A68u) { return; }
    }
    ctx->pc = 0x3B2A68u;
label_3b2a68:
    // 0x3b2a68: 0xc11088c  jal         func_442230
    ctx->pc = 0x3B2A68u;
    SET_GPR_U32(ctx, 31, 0x3B2A70u);
    ctx->pc = 0x3B2A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2A68u;
            // 0x3b2a6c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2A70u; }
        if (ctx->pc != 0x3B2A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2A70u; }
        if (ctx->pc != 0x3B2A70u) { return; }
    }
    ctx->pc = 0x3B2A70u;
label_3b2a70:
    // 0x3b2a70: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3b2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3b2a74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3b2a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3b2a78: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3b2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x3b2a7c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3b2a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b2a80: 0x1460ff6c  bnez        $v1, . + 4 + (-0x94 << 2)
    ctx->pc = 0x3B2A80u;
    {
        const bool branch_taken_0x3b2a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2A80u;
            // 0x3b2a84: 0x26730054  addiu       $s3, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2a80) {
            ctx->pc = 0x3B2834u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b2834;
        }
    }
    ctx->pc = 0x3B2A88u;
    // 0x3b2a88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b2a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b2a8c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3b2a8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b2a90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b2a90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b2a94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b2a94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b2a98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b2a98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2a9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b2a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2aa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b2aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2aa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b2aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b2aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2AB0u;
            // 0x3b2ab4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B2AB8u;
    // 0x3b2ab8: 0x0  nop
    ctx->pc = 0x3b2ab8u;
    // NOP
    // 0x3b2abc: 0x0  nop
    ctx->pc = 0x3b2abcu;
    // NOP
}
