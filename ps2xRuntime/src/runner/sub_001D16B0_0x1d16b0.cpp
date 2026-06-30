#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D16B0
// Address: 0x1d16b0 - 0x1d17f0
void sub_001D16B0_0x1d16b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D16B0_0x1d16b0");
#endif

    switch (ctx->pc) {
        case 0x1d16b0u: goto label_1d16b0;
        case 0x1d16b4u: goto label_1d16b4;
        case 0x1d16b8u: goto label_1d16b8;
        case 0x1d16bcu: goto label_1d16bc;
        case 0x1d16c0u: goto label_1d16c0;
        case 0x1d16c4u: goto label_1d16c4;
        case 0x1d16c8u: goto label_1d16c8;
        case 0x1d16ccu: goto label_1d16cc;
        case 0x1d16d0u: goto label_1d16d0;
        case 0x1d16d4u: goto label_1d16d4;
        case 0x1d16d8u: goto label_1d16d8;
        case 0x1d16dcu: goto label_1d16dc;
        case 0x1d16e0u: goto label_1d16e0;
        case 0x1d16e4u: goto label_1d16e4;
        case 0x1d16e8u: goto label_1d16e8;
        case 0x1d16ecu: goto label_1d16ec;
        case 0x1d16f0u: goto label_1d16f0;
        case 0x1d16f4u: goto label_1d16f4;
        case 0x1d16f8u: goto label_1d16f8;
        case 0x1d16fcu: goto label_1d16fc;
        case 0x1d1700u: goto label_1d1700;
        case 0x1d1704u: goto label_1d1704;
        case 0x1d1708u: goto label_1d1708;
        case 0x1d170cu: goto label_1d170c;
        case 0x1d1710u: goto label_1d1710;
        case 0x1d1714u: goto label_1d1714;
        case 0x1d1718u: goto label_1d1718;
        case 0x1d171cu: goto label_1d171c;
        case 0x1d1720u: goto label_1d1720;
        case 0x1d1724u: goto label_1d1724;
        case 0x1d1728u: goto label_1d1728;
        case 0x1d172cu: goto label_1d172c;
        case 0x1d1730u: goto label_1d1730;
        case 0x1d1734u: goto label_1d1734;
        case 0x1d1738u: goto label_1d1738;
        case 0x1d173cu: goto label_1d173c;
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1744u: goto label_1d1744;
        case 0x1d1748u: goto label_1d1748;
        case 0x1d174cu: goto label_1d174c;
        case 0x1d1750u: goto label_1d1750;
        case 0x1d1754u: goto label_1d1754;
        case 0x1d1758u: goto label_1d1758;
        case 0x1d175cu: goto label_1d175c;
        case 0x1d1760u: goto label_1d1760;
        case 0x1d1764u: goto label_1d1764;
        case 0x1d1768u: goto label_1d1768;
        case 0x1d176cu: goto label_1d176c;
        case 0x1d1770u: goto label_1d1770;
        case 0x1d1774u: goto label_1d1774;
        case 0x1d1778u: goto label_1d1778;
        case 0x1d177cu: goto label_1d177c;
        case 0x1d1780u: goto label_1d1780;
        case 0x1d1784u: goto label_1d1784;
        case 0x1d1788u: goto label_1d1788;
        case 0x1d178cu: goto label_1d178c;
        case 0x1d1790u: goto label_1d1790;
        case 0x1d1794u: goto label_1d1794;
        case 0x1d1798u: goto label_1d1798;
        case 0x1d179cu: goto label_1d179c;
        case 0x1d17a0u: goto label_1d17a0;
        case 0x1d17a4u: goto label_1d17a4;
        case 0x1d17a8u: goto label_1d17a8;
        case 0x1d17acu: goto label_1d17ac;
        case 0x1d17b0u: goto label_1d17b0;
        case 0x1d17b4u: goto label_1d17b4;
        case 0x1d17b8u: goto label_1d17b8;
        case 0x1d17bcu: goto label_1d17bc;
        case 0x1d17c0u: goto label_1d17c0;
        case 0x1d17c4u: goto label_1d17c4;
        case 0x1d17c8u: goto label_1d17c8;
        case 0x1d17ccu: goto label_1d17cc;
        case 0x1d17d0u: goto label_1d17d0;
        case 0x1d17d4u: goto label_1d17d4;
        case 0x1d17d8u: goto label_1d17d8;
        case 0x1d17dcu: goto label_1d17dc;
        case 0x1d17e0u: goto label_1d17e0;
        case 0x1d17e4u: goto label_1d17e4;
        case 0x1d17e8u: goto label_1d17e8;
        case 0x1d17ecu: goto label_1d17ec;
        default: break;
    }

    ctx->pc = 0x1d16b0u;

label_1d16b0:
    // 0x1d16b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d16b4:
    // 0x1d16b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d16b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d16b8:
    // 0x1d16b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d16bc:
    // 0x1d16bc: 0xa08501b4  sb          $a1, 0x1B4($a0)
    ctx->pc = 0x1d16bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 436), (uint8_t)GPR_U32(ctx, 5));
label_1d16c0:
    // 0x1d16c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d16c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d16c4:
    // 0x1d16c4: 0xac8701a4  sw          $a3, 0x1A4($a0)
    ctx->pc = 0x1d16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 7));
label_1d16c8:
    // 0x1d16c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d16c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d16cc:
    // 0x1d16cc: 0xac8a01a8  sw          $t2, 0x1A8($a0)
    ctx->pc = 0x1d16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 10));
label_1d16d0:
    // 0x1d16d0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1d16d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1d16d4:
    // 0x1d16d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1d16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d16d8:
    // 0x1d16d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1d16d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d16dc:
    // 0x1d16dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d16e0:
    // 0x1d16e0: 0x8faa0038  lw          $t2, 0x38($sp)
    ctx->pc = 0x1d16e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d16e4:
    // 0x1d16e4: 0xac8301b0  sw          $v1, 0x1B0($a0)
    ctx->pc = 0x1d16e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 3));
label_1d16e8:
    // 0x1d16e8: 0xac8201ac  sw          $v0, 0x1AC($a0)
    ctx->pc = 0x1d16e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 2));
label_1d16ec:
    // 0x1d16ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d16ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d16f0:
    // 0x1d16f0: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x1d16f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1d16f4:
    // 0x1d16f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d16f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d16f8:
    // 0x1d16f8: 0x320f809  jalr        $t9
label_1d16fc:
    if (ctx->pc == 0x1D16FCu) {
        ctx->pc = 0x1D16FCu;
            // 0x1d16fc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1700u;
        goto label_1d1700;
    }
    ctx->pc = 0x1D16F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1700u);
        ctx->pc = 0x1D16FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D16F8u;
            // 0x1d16fc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1700u; }
            if (ctx->pc != 0x1D1700u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1700u;
label_1d1700:
    // 0x1d1700: 0x860502f8  lh          $a1, 0x2F8($s0)
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
label_1d1704:
    // 0x1d1704: 0xa6050304  sh          $a1, 0x304($s0)
    ctx->pc = 0x1d1704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 5));
label_1d1708:
    // 0x1d1708: 0xc05d006  jal         func_174018
label_1d170c:
    if (ctx->pc == 0x1D170Cu) {
        ctx->pc = 0x1D170Cu;
            // 0x1d170c: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->pc = 0x1D1710u;
        goto label_1d1710;
    }
    ctx->pc = 0x1D1708u;
    SET_GPR_U32(ctx, 31, 0x1D1710u);
    ctx->pc = 0x1D170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1708u;
            // 0x1d170c: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1710u; }
        if (ctx->pc != 0x1D1710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1710u; }
        if (ctx->pc != 0x1D1710u) { return; }
    }
    ctx->pc = 0x1D1710u;
label_1d1710:
    // 0x1d1710: 0x920201b4  lbu         $v0, 0x1B4($s0)
    ctx->pc = 0x1d1710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
label_1d1714:
    // 0x1d1714: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d1714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1718:
    // 0x1d1718: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
label_1d171c:
    if (ctx->pc == 0x1D171Cu) {
        ctx->pc = 0x1D171Cu;
            // 0x1d171c: 0x86050300  lh          $a1, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->pc = 0x1D1720u;
        goto label_1d1720;
    }
    ctx->pc = 0x1D1718u;
    {
        const bool branch_taken_0x1d1718 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1718) {
            ctx->pc = 0x1D171Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1718u;
            // 0x1d171c: 0x86050300  lh          $a1, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1734u;
            goto label_1d1734;
        }
    }
    ctx->pc = 0x1D1720u;
label_1d1720:
    // 0x1d1720: 0x860502fa  lh          $a1, 0x2FA($s0)
    ctx->pc = 0x1d1720u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
label_1d1724:
    // 0x1d1724: 0xa6050306  sh          $a1, 0x306($s0)
    ctx->pc = 0x1d1724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 5));
label_1d1728:
    // 0x1d1728: 0xc05d006  jal         func_174018
label_1d172c:
    if (ctx->pc == 0x1D172Cu) {
        ctx->pc = 0x1D172Cu;
            // 0x1d172c: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->pc = 0x1D1730u;
        goto label_1d1730;
    }
    ctx->pc = 0x1D1728u;
    SET_GPR_U32(ctx, 31, 0x1D1730u);
    ctx->pc = 0x1D172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1728u;
            // 0x1d172c: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1730u; }
        if (ctx->pc != 0x1D1730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1730u; }
        if (ctx->pc != 0x1D1730u) { return; }
    }
    ctx->pc = 0x1D1730u;
label_1d1730:
    // 0x1d1730: 0x86050300  lh          $a1, 0x300($s0)
    ctx->pc = 0x1d1730u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
label_1d1734:
    // 0x1d1734: 0xa605030c  sh          $a1, 0x30C($s0)
    ctx->pc = 0x1d1734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 780), (uint16_t)GPR_U32(ctx, 5));
label_1d1738:
    // 0x1d1738: 0xc05d006  jal         func_174018
label_1d173c:
    if (ctx->pc == 0x1D173Cu) {
        ctx->pc = 0x1D173Cu;
            // 0x1d173c: 0x8e040194  lw          $a0, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->pc = 0x1D1740u;
        goto label_1d1740;
    }
    ctx->pc = 0x1D1738u;
    SET_GPR_U32(ctx, 31, 0x1D1740u);
    ctx->pc = 0x1D173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1738u;
            // 0x1d173c: 0x8e040194  lw          $a0, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1740u; }
        if (ctx->pc != 0x1D1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1740u; }
        if (ctx->pc != 0x1D1740u) { return; }
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x86050302  lh          $a1, 0x302($s0)
    ctx->pc = 0x1d1740u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 770)));
label_1d1744:
    // 0x1d1744: 0xa605030e  sh          $a1, 0x30E($s0)
    ctx->pc = 0x1d1744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 782), (uint16_t)GPR_U32(ctx, 5));
label_1d1748:
    // 0x1d1748: 0xc05d006  jal         func_174018
label_1d174c:
    if (ctx->pc == 0x1D174Cu) {
        ctx->pc = 0x1D174Cu;
            // 0x1d174c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->pc = 0x1D1750u;
        goto label_1d1750;
    }
    ctx->pc = 0x1D1748u;
    SET_GPR_U32(ctx, 31, 0x1D1750u);
    ctx->pc = 0x1D174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1748u;
            // 0x1d174c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1750u; }
        if (ctx->pc != 0x1D1750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1750u; }
        if (ctx->pc != 0x1D1750u) { return; }
    }
    ctx->pc = 0x1D1750u;
label_1d1750:
    // 0x1d1750: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1754:
    // 0x1d1754: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1758:
    // 0x1d1758: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1d175c:
    // 0x1d175c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1d175cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1d1760:
    // 0x1d1760: 0x320f809  jalr        $t9
label_1d1764:
    if (ctx->pc == 0x1D1764u) {
        ctx->pc = 0x1D1764u;
            // 0x1d1764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D1768u;
        goto label_1d1768;
    }
    ctx->pc = 0x1D1760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D1768u);
        ctx->pc = 0x1D1764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1760u;
            // 0x1d1764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D1768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D1768u; }
            if (ctx->pc != 0x1D1768u) { return; }
        }
        }
    }
    ctx->pc = 0x1D1768u;
label_1d1768:
    // 0x1d1768: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1d176c:
    // 0x1d176c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d176cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1770:
    // 0x1d1770: 0x2484a2c0  addiu       $a0, $a0, -0x5D40
    ctx->pc = 0x1d1770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943424));
label_1d1774:
    // 0x1d1774: 0xc04a576  jal         func_1295D8
label_1d1778:
    if (ctx->pc == 0x1D1778u) {
        ctx->pc = 0x1D1778u;
            // 0x1d1778: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1D177Cu;
        goto label_1d177c;
    }
    ctx->pc = 0x1D1774u;
    SET_GPR_U32(ctx, 31, 0x1D177Cu);
    ctx->pc = 0x1D1778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1774u;
            // 0x1d1778: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D177Cu; }
        if (ctx->pc != 0x1D177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D177Cu; }
        if (ctx->pc != 0x1D177Cu) { return; }
    }
    ctx->pc = 0x1D177Cu;
label_1d177c:
    // 0x1d177c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d1780:
    // 0x1d1780: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x1d1780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_1d1784:
    // 0x1d1784: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x1d1784u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_1d1788:
    // 0x1d1788: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1d178c:
    if (ctx->pc == 0x1D178Cu) {
        ctx->pc = 0x1D178Cu;
            // 0x1d178c: 0x3c034248  lui         $v1, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
        ctx->pc = 0x1D1790u;
        goto label_1d1790;
    }
    ctx->pc = 0x1D1788u;
    {
        const bool branch_taken_0x1d1788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1788) {
            ctx->pc = 0x1D178Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1788u;
            // 0x1d178c: 0x3c034248  lui         $v1, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D17A4u;
            goto label_1d17a4;
        }
    }
    ctx->pc = 0x1D1790u;
label_1d1790:
    // 0x1d1790: 0x3c03426f  lui         $v1, 0x426F
    ctx->pc = 0x1d1790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17007 << 16));
label_1d1794:
    // 0x1d1794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d1798:
    // 0x1d1798: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x1d1798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_1d179c:
    // 0x1d179c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d17a0:
    if (ctx->pc == 0x1D17A0u) {
        ctx->pc = 0x1D17A0u;
            // 0x1d17a0: 0xac43a2c0  sw          $v1, -0x5D40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943424), GPR_U32(ctx, 3));
        ctx->pc = 0x1D17A4u;
        goto label_1d17a4;
    }
    ctx->pc = 0x1D179Cu;
    {
        const bool branch_taken_0x1d179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D179Cu;
            // 0x1d17a0: 0xac43a2c0  sw          $v1, -0x5D40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d179c) {
            ctx->pc = 0x1D17ACu;
            goto label_1d17ac;
        }
    }
    ctx->pc = 0x1D17A4u;
label_1d17a4:
    // 0x1d17a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d17a8:
    // 0x1d17a8: 0xac43a2c0  sw          $v1, -0x5D40($v0)
    ctx->pc = 0x1d17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943424), GPR_U32(ctx, 3));
label_1d17ac:
    // 0x1d17ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d17acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d17b0:
    // 0x1d17b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d17b4:
    // 0x1d17b4: 0xac43a2c4  sw          $v1, -0x5D3C($v0)
    ctx->pc = 0x1d17b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943428), GPR_U32(ctx, 3));
label_1d17b8:
    // 0x1d17b8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1d17bc:
    // 0x1d17bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d17c0:
    // 0x1d17c0: 0x2484a2c0  addiu       $a0, $a0, -0x5D40
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943424));
label_1d17c4:
    // 0x1d17c4: 0xac43a2c8  sw          $v1, -0x5D38($v0)
    ctx->pc = 0x1d17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943432), GPR_U32(ctx, 3));
label_1d17c8:
    // 0x1d17c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d17cc:
    // 0x1d17cc: 0xc066c72  jal         func_19B1C8
label_1d17d0:
    if (ctx->pc == 0x1D17D0u) {
        ctx->pc = 0x1D17D0u;
            // 0x1d17d0: 0xac40a2cc  sw          $zero, -0x5D34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943436), GPR_U32(ctx, 0));
        ctx->pc = 0x1D17D4u;
        goto label_1d17d4;
    }
    ctx->pc = 0x1D17CCu;
    SET_GPR_U32(ctx, 31, 0x1D17D4u);
    ctx->pc = 0x1D17D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17CCu;
            // 0x1d17d0: 0xac40a2cc  sw          $zero, -0x5D34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (runtime->hasFunction(0x19B1C8u)) {
        auto targetFn = runtime->lookupFunction(0x19B1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17D4u; }
        if (ctx->pc != 0x1D17D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1C8_0x19b1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D17D4u; }
        if (ctx->pc != 0x1D17D4u) { return; }
    }
    ctx->pc = 0x1D17D4u;
label_1d17d4:
    // 0x1d17d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d17d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d17d8:
    // 0x1d17d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d17d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d17dc:
    // 0x1d17dc: 0x3e00008  jr          $ra
label_1d17e0:
    if (ctx->pc == 0x1D17E0u) {
        ctx->pc = 0x1D17E0u;
            // 0x1d17e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D17E4u;
        goto label_1d17e4;
    }
    ctx->pc = 0x1D17DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D17E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D17DCu;
            // 0x1d17e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D17E4u;
label_1d17e4:
    // 0x1d17e4: 0x0  nop
    ctx->pc = 0x1d17e4u;
    // NOP
label_1d17e8:
    // 0x1d17e8: 0x0  nop
    ctx->pc = 0x1d17e8u;
    // NOP
label_1d17ec:
    // 0x1d17ec: 0x0  nop
    ctx->pc = 0x1d17ecu;
    // NOP
}
