#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6640
// Address: 0x3e6640 - 0x3e6780
void sub_003E6640_0x3e6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6640_0x3e6640");
#endif

    ctx->pc = 0x3e6640u;

    // 0x3e6640: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e6640u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6644: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3e6644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3e6648: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6648u;
    {
        const bool branch_taken_0x3e6648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6648) {
            ctx->pc = 0x3E664Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6648u;
            // 0x3e664c: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6660u;
            goto label_3e6660;
        }
    }
    ctx->pc = 0x3E6650u;
    // 0x3e6650: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6650u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6654: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3e6654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3e6658: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6658u;
    {
        const bool branch_taken_0x3e6658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6658u;
            // 0x3e665c: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6658) {
            ctx->pc = 0x3E6674u;
            goto label_3e6674;
        }
    }
    ctx->pc = 0x3E6660u;
label_3e6660:
    // 0x3e6660: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6660u;
    {
        const bool branch_taken_0x3e6660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6660) {
            ctx->pc = 0x3E6664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6660u;
            // 0x3e6664: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6678u;
            goto label_3e6678;
        }
    }
    ctx->pc = 0x3E6668u;
    // 0x3e6668: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6668u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e666c: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x3e666cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x3e6670: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e6670u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_3e6674:
    // 0x3e6674: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6674u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3e6678:
    // 0x3e6678: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x3e6678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x3e667c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e667cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6680: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6680u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6684: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x3e6684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x3e6688: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e6688u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e668c: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e668cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6690: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x3e6690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x3e6694: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6694u;
    {
        const bool branch_taken_0x3e6694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6694) {
            ctx->pc = 0x3E6698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6694u;
            // 0x3e6698: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E66ACu;
            goto label_3e66ac;
        }
    }
    ctx->pc = 0x3E669Cu;
    // 0x3e669c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e669cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e66a0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3e66a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3e66a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E66A4u;
    {
        const bool branch_taken_0x3e66a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E66A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E66A4u;
            // 0x3e66a8: 0xa4830004  sh          $v1, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e66a4) {
            ctx->pc = 0x3E66C0u;
            goto label_3e66c0;
        }
    }
    ctx->pc = 0x3E66ACu;
label_3e66ac:
    // 0x3e66ac: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E66ACu;
    {
        const bool branch_taken_0x3e66ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e66ac) {
            ctx->pc = 0x3E66B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E66ACu;
            // 0x3e66b0: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E66C4u;
            goto label_3e66c4;
        }
    }
    ctx->pc = 0x3E66B4u;
    // 0x3e66b4: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e66b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e66b8: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x3e66b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x3e66bc: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e66bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_3e66c0:
    // 0x3e66c0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e66c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3e66c4:
    // 0x3e66c4: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x3e66c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x3e66c8: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e66c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e66cc: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e66ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e66d0: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x3e66d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x3e66d4: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e66d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e66d8: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e66d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e66dc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3e66dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3e66e0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E66E0u;
    {
        const bool branch_taken_0x3e66e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e66e0) {
            ctx->pc = 0x3E66E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E66E0u;
            // 0x3e66e4: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6738u;
            goto label_3e6738;
        }
    }
    ctx->pc = 0x3E66E8u;
    // 0x3e66e8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3e66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3e66ec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3e66ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3e66f0: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x3e66f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3e66f4: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x3e66f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e66f8: 0x9483002a  lhu         $v1, 0x2A($a0)
    ctx->pc = 0x3e66f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x3e66fc: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x3e66fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6700: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x3e6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6704: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3e6704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e6708: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3e6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e670c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3e670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3e6710: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x3e6710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e6714: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x3e6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e6718: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x3e6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e671c: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x3e671cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3e6720: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x3e6720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3e6724: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3e6724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3e6728: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6728u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e672c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3e672cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3e6730: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e6730u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6734: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3e6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3e6738:
    // 0x3e6738: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3e6738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3e673c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x3e673cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e6740: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x3e6740u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6744: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x3e6744u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3e6748: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x3e6748u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e674c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3e674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6750: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x3e6750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x3e6754: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3e6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6758: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x3e6758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x3e675c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x3e675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e6760: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x3e6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e6764: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3e6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6768: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x3e6768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3e676c: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x3e676cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3e6770: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6770u;
            // 0x3e6774: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6778u;
    // 0x3e6778: 0x0  nop
    ctx->pc = 0x3e6778u;
    // NOP
    // 0x3e677c: 0x0  nop
    ctx->pc = 0x3e677cu;
    // NOP
}
