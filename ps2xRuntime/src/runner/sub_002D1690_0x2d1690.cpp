#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1690
// Address: 0x2d1690 - 0x2d19a0
void sub_002D1690_0x2d1690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1690_0x2d1690");
#endif

    switch (ctx->pc) {
        case 0x2d1790u: goto label_2d1790;
        case 0x2d17b4u: goto label_2d17b4;
        case 0x2d17bcu: goto label_2d17bc;
        case 0x2d17dcu: goto label_2d17dc;
        case 0x2d180cu: goto label_2d180c;
        case 0x2d1850u: goto label_2d1850;
        case 0x2d1864u: goto label_2d1864;
        case 0x2d18c0u: goto label_2d18c0;
        case 0x2d18d4u: goto label_2d18d4;
        case 0x2d1930u: goto label_2d1930;
        case 0x2d1944u: goto label_2d1944;
        default: break;
    }

    ctx->pc = 0x2d1690u;

    // 0x2d1690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d1694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d1698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d169c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d16a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d16a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16a4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2d16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d16a8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d16ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d16b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d16b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d16b4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d16b8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2d16b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2d16bc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2d16bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d16c0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2d16c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d16c4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2d16c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2d16c8: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x2d16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d16cc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2d16ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d16d0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2d16d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d16d4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2d16d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2d16d8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2d16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d16dc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2d16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d16e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d16e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d16e4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2d16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d16e8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2d16e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d16ec: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2d16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d16f0: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2d16f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d16f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2d16f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d16f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d16fc: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x2d16fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d1700: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x2d1700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d1704: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2d1704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d1708: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2d1708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d170c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D170Cu;
    {
        const bool branch_taken_0x2d170c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D1710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D170Cu;
            // 0x2d1710: 0x38083  sra         $s0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d170c) {
            ctx->pc = 0x2D171Cu;
            goto label_2d171c;
        }
    }
    ctx->pc = 0x2D1714u;
    // 0x2d1714: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2d1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d1718: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x2d1718u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
label_2d171c:
    // 0x2d171c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1720: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2d1720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d1724: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1724u;
    {
        const bool branch_taken_0x2d1724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1724) {
            ctx->pc = 0x2D1728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1724u;
            // 0x2d1728: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1758u;
            goto label_2d1758;
        }
    }
    ctx->pc = 0x2D172Cu;
    // 0x2d172c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2d172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1730: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2d1730u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d1734: 0x50200012  beql        $at, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1734u;
    {
        const bool branch_taken_0x2d1734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1734) {
            ctx->pc = 0x2D1738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1734u;
            // 0x2d1738: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1780u;
            goto label_2d1780;
        }
    }
    ctx->pc = 0x2D173Cu;
    // 0x2d173c: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x2d173cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d1740: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1740u;
    {
        const bool branch_taken_0x2d1740 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D1744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1740u;
            // 0x2d1744: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1740) {
            ctx->pc = 0x2D1750u;
            goto label_2d1750;
        }
    }
    ctx->pc = 0x2D1748u;
    // 0x2d1748: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2d174c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2d1750:
    // 0x2d1750: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D1750u;
    {
        const bool branch_taken_0x2d1750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1750u;
            // 0x2d1754: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1750) {
            ctx->pc = 0x2D177Cu;
            goto label_2d177c;
        }
    }
    ctx->pc = 0x2D1758u;
label_2d1758:
    // 0x2d1758: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2d1758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d175c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D175Cu;
    {
        const bool branch_taken_0x2d175c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d175c) {
            ctx->pc = 0x2D177Cu;
            goto label_2d177c;
        }
    }
    ctx->pc = 0x2D1764u;
    // 0x2d1764: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x2d1764u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d1768: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1768u;
    {
        const bool branch_taken_0x2d1768 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1768u;
            // 0x2d176c: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1768) {
            ctx->pc = 0x2D1778u;
            goto label_2d1778;
        }
    }
    ctx->pc = 0x2D1770u;
    // 0x2d1770: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2d1770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2d1774: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d1774u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2d1778:
    // 0x2d1778: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2d1778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2d177c:
    // 0x2d177c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2d177cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_2d1780:
    // 0x2d1780: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D1780u;
    {
        const bool branch_taken_0x2d1780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1780) {
            ctx->pc = 0x2D1838u;
            goto label_2d1838;
        }
    }
    ctx->pc = 0x2D1788u;
    // 0x2d1788: 0xc0b64dc  jal         func_2D9370
    ctx->pc = 0x2D1788u;
    SET_GPR_U32(ctx, 31, 0x2D1790u);
    ctx->pc = 0x2D178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1788u;
            // 0x2d178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9370u;
    if (runtime->hasFunction(0x2D9370u)) {
        auto targetFn = runtime->lookupFunction(0x2D9370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1790u; }
        if (ctx->pc != 0x2D1790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9370_0x2d9370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1790u; }
        if (ctx->pc != 0x2D1790u) { return; }
    }
    ctx->pc = 0x2D1790u;
label_2d1790:
    // 0x2d1790: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2d1790u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d1794: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1794u;
    {
        const bool branch_taken_0x2d1794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1794) {
            ctx->pc = 0x2D17BCu;
            goto label_2d17bc;
        }
    }
    ctx->pc = 0x2D179Cu;
    // 0x2d179c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2d179cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2d17a0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2d17a4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2d17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2d17a8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d17ac: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2D17ACu;
    SET_GPR_U32(ctx, 31, 0x2D17B4u);
    ctx->pc = 0x2D17B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17ACu;
            // 0x2d17b0: 0x24a51760  addiu       $a1, $a1, 0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D17B4u; }
        if (ctx->pc != 0x2D17B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D17B4u; }
        if (ctx->pc != 0x2D17B4u) { return; }
    }
    ctx->pc = 0x2D17B4u;
label_2d17b4:
    // 0x2d17b4: 0xc04981a  jal         func_126068
    ctx->pc = 0x2D17B4u;
    SET_GPR_U32(ctx, 31, 0x2D17BCu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D17BCu; }
        if (ctx->pc != 0x2D17BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D17BCu; }
        if (ctx->pc != 0x2D17BCu) { return; }
    }
    ctx->pc = 0x2D17BCu;
label_2d17bc:
    // 0x2d17bc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2d17c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d17c4: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x2d17c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x2d17c8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2d17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d17cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d17d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d17d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d17d4: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x2D17D4u;
    SET_GPR_U32(ctx, 31, 0x2D17DCu);
    ctx->pc = 0x2D17D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17D4u;
            // 0x2d17d8: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D17DCu; }
        if (ctx->pc != 0x2D17DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D17DCu; }
        if (ctx->pc != 0x2D17DCu) { return; }
    }
    ctx->pc = 0x2D17DCu;
label_2d17dc:
    // 0x2d17dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d17e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2d17e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d17e8: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x2d17e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d17ec: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x2d17ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d17f0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x2d17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2d17f4: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2d17f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2d17f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2d17f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d17fc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1800: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d1800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d1804: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1804u;
    {
        const bool branch_taken_0x2d1804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1804u;
            // 0x2d1808: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1804) {
            ctx->pc = 0x2D1838u;
            goto label_2d1838;
        }
    }
    ctx->pc = 0x2D180Cu;
label_2d180c:
    // 0x2d180c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1810: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2d1810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2d1814: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1814u;
    {
        const bool branch_taken_0x2d1814 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D1818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1814u;
            // 0x2d1818: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1814) {
            ctx->pc = 0x2D1820u;
            goto label_2d1820;
        }
    }
    ctx->pc = 0x2D181Cu;
    // 0x2d181c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2d181cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d1820:
    // 0x2d1820: 0x1051826  xor         $v1, $t0, $a1
    ctx->pc = 0x2d1820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 5));
    // 0x2d1824: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2d1824u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d1828: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d182c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D182Cu;
    {
        const bool branch_taken_0x2d182c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D182Cu;
            // 0x2d1830: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d182c) {
            ctx->pc = 0x2D180Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d180c;
        }
    }
    ctx->pc = 0x2D1834u;
    // 0x2d1834: 0x0  nop
    ctx->pc = 0x2d1834u;
    // NOP
label_2d1838:
    // 0x2d1838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d183c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d183cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1844: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1844u;
            // 0x2d1848: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D184Cu;
    // 0x2d184c: 0x0  nop
    ctx->pc = 0x2d184cu;
    // NOP
label_2d1850:
    // 0x2d1850: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x2d1850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d1854: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1854u;
    {
        const bool branch_taken_0x2d1854 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1854u;
            // 0x2d1858: 0x24a8000c  addiu       $t0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1854) {
            ctx->pc = 0x2D1890u;
            goto label_2d1890;
        }
    }
    ctx->pc = 0x2D185Cu;
    // 0x2d185c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2d185cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1860: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2d1860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_2d1864:
    // 0x2d1864: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x2d1864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d1868: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1868u;
    {
        const bool branch_taken_0x2d1868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1868) {
            ctx->pc = 0x2D1880u;
            goto label_2d1880;
        }
    }
    ctx->pc = 0x2D1870u;
    // 0x2d1870: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2d1870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1874u;
    {
        const bool branch_taken_0x2d1874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1874u;
            // 0x2d1878: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1874) {
            ctx->pc = 0x2D1888u;
            goto label_2d1888;
        }
    }
    ctx->pc = 0x2D187Cu;
    // 0x2d187c: 0x0  nop
    ctx->pc = 0x2d187cu;
    // NOP
label_2d1880:
    // 0x2d1880: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x2d1880u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2d1884: 0x0  nop
    ctx->pc = 0x2d1884u;
    // NOP
label_2d1888:
    // 0x2d1888: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D1888u;
    {
        const bool branch_taken_0x2d1888 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1888) {
            ctx->pc = 0x2D188Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1888u;
            // 0x2d188c: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1864;
        }
    }
    ctx->pc = 0x2D1890u;
label_2d1890:
    // 0x2d1890: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2d1894: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1894u;
    {
        const bool branch_taken_0x2d1894 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d1894) {
            ctx->pc = 0x2D1898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1894u;
            // 0x2d1898: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D18B4u;
            goto label_2d18b4;
        }
    }
    ctx->pc = 0x2D189Cu;
    // 0x2d189c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2d189cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d18a0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x2d18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2d18a4: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2d18a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d18a8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D18A8u;
    {
        const bool branch_taken_0x2d18a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d18a8) {
            ctx->pc = 0x2D18ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18A8u;
            // 0x2d18ac: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D18B8u;
            goto label_2d18b8;
        }
    }
    ctx->pc = 0x2D18B0u;
    // 0x2d18b0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2d18b4:
    // 0x2d18b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d18b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d18b8:
    // 0x2d18b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D18C0u;
label_2d18c0:
    // 0x2d18c0: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x2d18c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d18c4: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D18C4u;
    {
        const bool branch_taken_0x2d18c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D18C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18C4u;
            // 0x2d18c8: 0x24a8000c  addiu       $t0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18c4) {
            ctx->pc = 0x2D1900u;
            goto label_2d1900;
        }
    }
    ctx->pc = 0x2D18CCu;
    // 0x2d18cc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x2d18ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d18d0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2d18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_2d18d4:
    // 0x2d18d4: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x2d18d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d18d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D18D8u;
    {
        const bool branch_taken_0x2d18d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d18d8) {
            ctx->pc = 0x2D18F0u;
            goto label_2d18f0;
        }
    }
    ctx->pc = 0x2D18E0u;
    // 0x2d18e0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2d18e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D18E4u;
    {
        const bool branch_taken_0x2d18e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D18E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18E4u;
            // 0x2d18e8: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18e4) {
            ctx->pc = 0x2D18F8u;
            goto label_2d18f8;
        }
    }
    ctx->pc = 0x2D18ECu;
    // 0x2d18ec: 0x0  nop
    ctx->pc = 0x2d18ecu;
    // NOP
label_2d18f0:
    // 0x2d18f0: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x2d18f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2d18f4: 0x0  nop
    ctx->pc = 0x2d18f4u;
    // NOP
label_2d18f8:
    // 0x2d18f8: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D18F8u;
    {
        const bool branch_taken_0x2d18f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d18f8) {
            ctx->pc = 0x2D18FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18F8u;
            // 0x2d18fc: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D18D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d18d4;
        }
    }
    ctx->pc = 0x2D1900u;
label_2d1900:
    // 0x2d1900: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2d1900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2d1904: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1904u;
    {
        const bool branch_taken_0x2d1904 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d1904) {
            ctx->pc = 0x2D1908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1904u;
            // 0x2d1908: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1924u;
            goto label_2d1924;
        }
    }
    ctx->pc = 0x2D190Cu;
    // 0x2d190c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2d190cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1910: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x2d1910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2d1914: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2d1914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d1918: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1918u;
    {
        const bool branch_taken_0x2d1918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1918) {
            ctx->pc = 0x2D191Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1918u;
            // 0x2d191c: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1928u;
            goto label_2d1928;
        }
    }
    ctx->pc = 0x2D1920u;
    // 0x2d1920: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2d1920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2d1924:
    // 0x2d1924: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d1924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d1928:
    // 0x2d1928: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1930u;
label_2d1930:
    // 0x2d1930: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x2d1930u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d1934: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1934u;
    {
        const bool branch_taken_0x2d1934 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1934u;
            // 0x2d1938: 0x24a80004  addiu       $t0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1934) {
            ctx->pc = 0x2D1970u;
            goto label_2d1970;
        }
    }
    ctx->pc = 0x2D193Cu;
    // 0x2d193c: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x2d193cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1940: 0x9523000c  lhu         $v1, 0xC($t1)
    ctx->pc = 0x2d1940u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
label_2d1944:
    // 0x2d1944: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x2d1944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d1948: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1948u;
    {
        const bool branch_taken_0x2d1948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1948) {
            ctx->pc = 0x2D1960u;
            goto label_2d1960;
        }
    }
    ctx->pc = 0x2D1950u;
    // 0x2d1950: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2d1950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1954u;
    {
        const bool branch_taken_0x2d1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1954u;
            // 0x2d1958: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1954) {
            ctx->pc = 0x2D1968u;
            goto label_2d1968;
        }
    }
    ctx->pc = 0x2D195Cu;
    // 0x2d195c: 0x0  nop
    ctx->pc = 0x2d195cu;
    // NOP
label_2d1960:
    // 0x2d1960: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x2d1960u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2d1964: 0x0  nop
    ctx->pc = 0x2d1964u;
    // NOP
label_2d1968:
    // 0x2d1968: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D1968u;
    {
        const bool branch_taken_0x2d1968 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1968) {
            ctx->pc = 0x2D196Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1968u;
            // 0x2d196c: 0x9523000c  lhu         $v1, 0xC($t1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1944;
        }
    }
    ctx->pc = 0x2D1970u;
label_2d1970:
    // 0x2d1970: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2d1970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d1974: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1974u;
    {
        const bool branch_taken_0x2d1974 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d1974) {
            ctx->pc = 0x2D1978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1974u;
            // 0x2d1978: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1994u;
            goto label_2d1994;
        }
    }
    ctx->pc = 0x2D197Cu;
    // 0x2d197c: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x2d197cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d1980: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x2d1980u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2d1984: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2d1984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d1988: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1988u;
    {
        const bool branch_taken_0x2d1988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1988) {
            ctx->pc = 0x2D198Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1988u;
            // 0x2d198c: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1998u;
            goto label_2d1998;
        }
    }
    ctx->pc = 0x2D1990u;
    // 0x2d1990: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2d1990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d1994:
    // 0x2d1994: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d1994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d1998:
    // 0x2d1998: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D19A0u;
}
