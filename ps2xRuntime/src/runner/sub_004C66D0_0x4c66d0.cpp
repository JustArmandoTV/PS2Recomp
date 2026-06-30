#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C66D0
// Address: 0x4c66d0 - 0x4c6840
void sub_004C66D0_0x4c66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C66D0_0x4c66d0");
#endif

    switch (ctx->pc) {
        case 0x4c6794u: goto label_4c6794;
        default: break;
    }

    ctx->pc = 0x4c66d0u;

    // 0x4c66d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c66d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4c66d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c66dc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4c66dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4c66e0: 0x8ca50110  lw          $a1, 0x110($a1)
    ctx->pc = 0x4c66e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x4c66e4: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4C66E4u;
    {
        const bool branch_taken_0x4c66e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C66E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C66E4u;
            // 0x4c66e8: 0xa480000a  sh          $zero, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c66e4) {
            ctx->pc = 0x4C6754u;
            goto label_4c6754;
        }
    }
    ctx->pc = 0x4C66ECu;
    // 0x4c66ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c66f0: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4C66F0u;
    {
        const bool branch_taken_0x4c66f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c66f0) {
            ctx->pc = 0x4C66F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C66F0u;
            // 0x4c66f4: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6758u;
            goto label_4c6758;
        }
    }
    ctx->pc = 0x4C66F8u;
    // 0x4c66f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c66fc: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4C66FCu;
    {
        const bool branch_taken_0x4c66fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c66fc) {
            ctx->pc = 0x4C6700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C66FCu;
            // 0x4c6700: 0x3c033f40  lui         $v1, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C6730u;
            goto label_4c6730;
        }
    }
    ctx->pc = 0x4C6704u;
    // 0x4c6704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c6704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c6708: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6708u;
    {
        const bool branch_taken_0x4c6708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c6708) {
            ctx->pc = 0x4C6718u;
            goto label_4c6718;
        }
    }
    ctx->pc = 0x4C6710u;
    // 0x4c6710: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4C6710u;
    {
        const bool branch_taken_0x4c6710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6710u;
            // 0x4c6714: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6710) {
            ctx->pc = 0x4C677Cu;
            goto label_4c677c;
        }
    }
    ctx->pc = 0x4C6718u;
label_4c6718:
    // 0x4c6718: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c6718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4c671c: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4c671cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x4c6720: 0x846372e4  lh          $v1, 0x72E4($v1)
    ctx->pc = 0x4c6720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 29412)));
    // 0x4c6724: 0x252972e0  addiu       $t1, $t1, 0x72E0
    ctx->pc = 0x4c6724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29408));
    // 0x4c6728: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4C6728u;
    {
        const bool branch_taken_0x4c6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6728u;
            // 0x4c672c: 0xa483000a  sh          $v1, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6728) {
            ctx->pc = 0x4C6778u;
            goto label_4c6778;
        }
    }
    ctx->pc = 0x4C6730u;
label_4c6730:
    // 0x4c6730: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4c6730u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x4c6734: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4c6734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4c6738: 0x252972e8  addiu       $t1, $t1, 0x72E8
    ctx->pc = 0x4c6738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29416));
    // 0x4c673c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4c673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x4c6740: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4c6740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4c6744: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c6744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4c6748: 0x846372ec  lh          $v1, 0x72EC($v1)
    ctx->pc = 0x4c6748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 29420)));
    // 0x4c674c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4C674Cu;
    {
        const bool branch_taken_0x4c674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C674Cu;
            // 0x4c6750: 0xa483000a  sh          $v1, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c674c) {
            ctx->pc = 0x4C6778u;
            goto label_4c6778;
        }
    }
    ctx->pc = 0x4C6754u;
label_4c6754:
    // 0x4c6754: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4c6754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4c6758:
    // 0x4c6758: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4c6758u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x4c675c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4c675cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x4c6760: 0x252972f0  addiu       $t1, $t1, 0x72F0
    ctx->pc = 0x4c6760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29424));
    // 0x4c6764: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4c6764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x4c6768: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4c6768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4c676c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c676cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4c6770: 0x846372f4  lh          $v1, 0x72F4($v1)
    ctx->pc = 0x4c6770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 29428)));
    // 0x4c6774: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x4c6774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
label_4c6778:
    // 0x4c6778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4c6778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c677c:
    // 0x4c677c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c677cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6780: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c6780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6784: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x4c6784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c6788: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x4c6788u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4c678c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x4c678cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c6790: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x4c6790u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c6794:
    // 0x4c6794: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x4c6794u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4c6798: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x4c6798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x4c679c: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x4c679cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c67a0: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x4c67a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4c67a4: 0x8d790094  lw          $t9, 0x94($t3)
    ctx->pc = 0x4c67a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
    // 0x4c67a8: 0x8d70009c  lw          $s0, 0x9C($t3)
    ctx->pc = 0x4c67a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 156)));
    // 0x4c67ac: 0x8d6c0098  lw          $t4, 0x98($t3)
    ctx->pc = 0x4c67acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 152)));
    // 0x4c67b0: 0x2198023  subu        $s0, $s0, $t9
    ctx->pc = 0x4c67b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x4c67b4: 0x8d6b00a0  lw          $t3, 0xA0($t3)
    ctx->pc = 0x4c67b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x4c67b8: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x4c67b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4c67bc: 0x3308021  addu        $s0, $t9, $s0
    ctx->pc = 0x4c67bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 16)));
    // 0x4c67c0: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x4c67c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x4c67c4: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x4c67c4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x4c67c8: 0x10af0005  beq         $a1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C67C8u;
    {
        const bool branch_taken_0x4c67c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        ctx->pc = 0x4C67CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C67C8u;
            // 0x4c67cc: 0x18bc821  addu        $t9, $t4, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c67c8) {
            ctx->pc = 0x4C67E0u;
            goto label_4c67e0;
        }
    }
    ctx->pc = 0x4C67D0u;
    // 0x4c67d0: 0x10ae0003  beq         $a1, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C67D0u;
    {
        const bool branch_taken_0x4c67d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 14));
        if (branch_taken_0x4c67d0) {
            ctx->pc = 0x4C67E0u;
            goto label_4c67e0;
        }
    }
    ctx->pc = 0x4C67D8u;
    // 0x4c67d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C67D8u;
    {
        const bool branch_taken_0x4c67d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c67d8) {
            ctx->pc = 0x4C67F0u;
            goto label_4c67f0;
        }
    }
    ctx->pc = 0x4C67E0u;
label_4c67e0:
    // 0x4c67e0: 0x314b0001  andi        $t3, $t2, 0x1
    ctx->pc = 0x4c67e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x4c67e4: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4C67E4u;
    {
        const bool branch_taken_0x4c67e4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c67e4) {
            ctx->pc = 0x4C67F0u;
            goto label_4c67f0;
        }
    }
    ctx->pc = 0x4C67ECu;
    // 0x4c67ec: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x4c67ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4c67f0:
    // 0x4c67f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4c67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4c67f4: 0x852c0000  lh          $t4, 0x0($t1)
    ctx->pc = 0x4c67f4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c67f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4c67f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4c67fc: 0x145582a  slt         $t3, $t2, $a1
    ctx->pc = 0x4c67fcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4c6800: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4c6800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4c6804: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4c6804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4c6808: 0x10c4018  mult        $t0, $t0, $t4
    ctx->pc = 0x4c6808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4c680c: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x4c680cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x4c6810: 0xa4680004  sh          $t0, 0x4($v1)
    ctx->pc = 0x4c6810u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x4c6814: 0x85280002  lh          $t0, 0x2($t1)
    ctx->pc = 0x4c6814u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x4c6818: 0x3284021  addu        $t0, $t9, $t0
    ctx->pc = 0x4c6818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4c681c: 0xa4680006  sh          $t0, 0x6($v1)
    ctx->pc = 0x4c681cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x4c6820: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4c6820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x4c6824: 0x1560ffdb  bnez        $t3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4C6824u;
    {
        const bool branch_taken_0x4c6824 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6824u;
            // 0x4c6828: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6824) {
            ctx->pc = 0x4C6794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c6794;
        }
    }
    ctx->pc = 0x4C682Cu;
    // 0x4c682c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c682cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6830: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6830u;
            // 0x4c6834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6838u;
    // 0x4c6838: 0x0  nop
    ctx->pc = 0x4c6838u;
    // NOP
    // 0x4c683c: 0x0  nop
    ctx->pc = 0x4c683cu;
    // NOP
}
