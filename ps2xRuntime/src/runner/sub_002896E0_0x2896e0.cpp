#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002896E0
// Address: 0x2896e0 - 0x289c60
void sub_002896E0_0x2896e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002896E0_0x2896e0");
#endif

    switch (ctx->pc) {
        case 0x289738u: goto label_289738;
        case 0x289798u: goto label_289798;
        case 0x289860u: goto label_289860;
        case 0x289930u: goto label_289930;
        case 0x2899a8u: goto label_2899a8;
        case 0x2899fcu: goto label_2899fc;
        case 0x289a58u: goto label_289a58;
        case 0x289ae0u: goto label_289ae0;
        case 0x289b40u: goto label_289b40;
        case 0x289ba4u: goto label_289ba4;
        case 0x289be8u: goto label_289be8;
        default: break;
    }

    ctx->pc = 0x2896e0u;

    // 0x2896e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2896e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2896e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2896e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2896e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2896e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2896ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2896ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2896f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2896f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2896f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2896f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2896f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2896f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2896fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2896fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x289700: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x289700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289704: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x289704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x289708: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x289708u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28970c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x289710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x289718: 0xa3a700b0  sb          $a3, 0xB0($sp)
    ctx->pc = 0x289718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 7));
    // 0x28971c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x28971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x289720: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x289720u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x289724: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x289724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289728: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x289728u;
    {
        const bool branch_taken_0x289728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289728u;
            // 0x28972c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289728) {
            ctx->pc = 0x289758u;
            goto label_289758;
        }
    }
    ctx->pc = 0x289730u;
    // 0x289730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289734: 0x0  nop
    ctx->pc = 0x289734u;
    // NOP
label_289738:
    // 0x289738: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x289738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28973c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289744: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x289744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x289748: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x289748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x28974c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x28974cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289750: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x289750u;
    {
        const bool branch_taken_0x289750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289750u;
            // 0x289754: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289750) {
            ctx->pc = 0x289738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289738;
        }
    }
    ctx->pc = 0x289758u;
label_289758:
    // 0x289758: 0x83b100b0  lb          $s1, 0xB0($sp)
    ctx->pc = 0x289758u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28975c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28975Cu;
    {
        const bool branch_taken_0x28975c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x289760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28975Cu;
            // 0x289760: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28975c) {
            ctx->pc = 0x289770u;
            goto label_289770;
        }
    }
    ctx->pc = 0x289764u;
    // 0x289764: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x289764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289768u;
    {
        const bool branch_taken_0x289768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289768u;
            // 0x28976c: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289768) {
            ctx->pc = 0x289778u;
            goto label_289778;
        }
    }
    ctx->pc = 0x289770u;
label_289770:
    // 0x289770: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x289770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289774: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x289774u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_289778:
    // 0x289778: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x289778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x28977c: 0x2489ffff  addiu       $t1, $a0, -0x1
    ctx->pc = 0x28977cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x289780: 0x5200023  bltz        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x289780u;
    {
        const bool branch_taken_0x289780 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x289784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289780u;
            // 0x289784: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289780) {
            ctx->pc = 0x289810u;
            goto label_289810;
        }
    }
    ctx->pc = 0x289788u;
    // 0x289788: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x289788u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x28978c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x28978cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x289790: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x289790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x289794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x289794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_289798:
    // 0x289798: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289798u;
    {
        const bool branch_taken_0x289798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289798) {
            ctx->pc = 0x2897B0u;
            goto label_2897b0;
        }
    }
    ctx->pc = 0x2897A0u;
    // 0x2897a0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2897a4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2897a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2897a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2897A8u;
    {
        const bool branch_taken_0x2897a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897A8u;
            // 0x2897ac: 0x8ca80000  lw          $t0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897a8) {
            ctx->pc = 0x2897BCu;
            goto label_2897bc;
        }
    }
    ctx->pc = 0x2897B0u;
label_2897b0:
    // 0x2897b0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2897b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2897b4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2897b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2897b8: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x2897b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2897bc:
    // 0x2897bc: 0x110a0010  beq         $t0, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2897BCu;
    {
        const bool branch_taken_0x2897bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x2897bc) {
            ctx->pc = 0x289800u;
            goto label_289800;
        }
    }
    ctx->pc = 0x2897C4u;
    // 0x2897c4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2897c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2897C8u;
    {
        const bool branch_taken_0x2897c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897C8u;
            // 0x2897cc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897c8) {
            ctx->pc = 0x2897D8u;
            goto label_2897d8;
        }
    }
    ctx->pc = 0x2897D0u;
    // 0x2897d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2897D0u;
    {
        const bool branch_taken_0x2897d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897D0u;
            // 0x2897d4: 0x95050006  lhu         $a1, 0x6($t0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897d0) {
            ctx->pc = 0x2897E8u;
            goto label_2897e8;
        }
    }
    ctx->pc = 0x2897D8u;
label_2897d8:
    // 0x2897d8: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x2897d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2897dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2897dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2897e0: 0x2654021  addu        $t0, $s3, $a1
    ctx->pc = 0x2897e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2897e4: 0x95050006  lhu         $a1, 0x6($t0)
    ctx->pc = 0x2897e4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_2897e8:
    // 0x2897e8: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2897E8u;
    {
        const bool branch_taken_0x2897e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2897e8) {
            ctx->pc = 0x2897F8u;
            goto label_2897f8;
        }
    }
    ctx->pc = 0x2897F0u;
    // 0x2897f0: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x2897F0u;
    {
        const bool branch_taken_0x2897f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897F0u;
            // 0x2897f4: 0xa2e00000  sb          $zero, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897f0) {
            ctx->pc = 0x289C30u;
            goto label_289c30;
        }
    }
    ctx->pc = 0x2897F8u;
label_2897f8:
    // 0x2897f8: 0xa5040006  sh          $a0, 0x6($t0)
    ctx->pc = 0x2897f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2897fc: 0x0  nop
    ctx->pc = 0x2897fcu;
    // NOP
label_289800:
    // 0x289800: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x289800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x289804: 0x521ffe4  bgez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x289804u;
    {
        const bool branch_taken_0x289804 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x289808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289804u;
            // 0x289808: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289804) {
            ctx->pc = 0x289798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289798;
        }
    }
    ctx->pc = 0x28980Cu;
    // 0x28980c: 0x0  nop
    ctx->pc = 0x28980cu;
    // NOP
label_289810:
    // 0x289810: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289810u;
    {
        const bool branch_taken_0x289810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289810) {
            ctx->pc = 0x289828u;
            goto label_289828;
        }
    }
    ctx->pc = 0x289818u;
    // 0x289818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28981c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x28981Cu;
    {
        const bool branch_taken_0x28981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28981Cu;
            // 0x289820: 0xa2e30000  sb          $v1, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28981c) {
            ctx->pc = 0x289C30u;
            goto label_289c30;
        }
    }
    ctx->pc = 0x289824u;
    // 0x289824: 0x0  nop
    ctx->pc = 0x289824u;
    // NOP
label_289828:
    // 0x289828: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289828u;
    {
        const bool branch_taken_0x289828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289828) {
            ctx->pc = 0x28983Cu;
            goto label_28983c;
        }
    }
    ctx->pc = 0x289830u;
    // 0x289830: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289834: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289834u;
    {
        const bool branch_taken_0x289834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289834u;
            // 0x289838: 0x8c6a0000  lw          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289834) {
            ctx->pc = 0x289844u;
            goto label_289844;
        }
    }
    ctx->pc = 0x28983Cu;
label_28983c:
    // 0x28983c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289840: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x289840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_289844:
    // 0x289844: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x289844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x289848: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x289848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28984c: 0x520002a  bltz        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x28984Cu;
    {
        const bool branch_taken_0x28984c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x289850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28984Cu;
            // 0x289850: 0x93900  sll         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28984c) {
            ctx->pc = 0x2898F8u;
            goto label_2898f8;
        }
    }
    ctx->pc = 0x289854u;
    // 0x289854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x289854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289858: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x289858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28985c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_289860:
    // 0x289860: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289860u;
    {
        const bool branch_taken_0x289860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289860) {
            ctx->pc = 0x289878u;
            goto label_289878;
        }
    }
    ctx->pc = 0x289868u;
    // 0x289868: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28986c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28986cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x289870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289870u;
    {
        const bool branch_taken_0x289870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289870u;
            // 0x289874: 0x8cc80000  lw          $t0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289870) {
            ctx->pc = 0x289884u;
            goto label_289884;
        }
    }
    ctx->pc = 0x289878u;
label_289878:
    // 0x289878: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x289878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28987c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x289880: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x289880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_289884:
    // 0x289884: 0x110a0018  beq         $t0, $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x289884u;
    {
        const bool branch_taken_0x289884 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        if (branch_taken_0x289884) {
            ctx->pc = 0x2898E8u;
            goto label_2898e8;
        }
    }
    ctx->pc = 0x28988Cu;
    // 0x28988c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28988Cu;
    {
        const bool branch_taken_0x28988c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x289890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28988Cu;
            // 0x289890: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28988c) {
            ctx->pc = 0x28989Cu;
            goto label_28989c;
        }
    }
    ctx->pc = 0x289894u;
    // 0x289894: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289894u;
    {
        const bool branch_taken_0x289894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289894u;
            // 0x289898: 0x95060006  lhu         $a2, 0x6($t0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289894) {
            ctx->pc = 0x2898ACu;
            goto label_2898ac;
        }
    }
    ctx->pc = 0x28989Cu;
label_28989c:
    // 0x28989c: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x28989cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2898a0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2898a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2898a4: 0x2664021  addu        $t0, $s3, $a2
    ctx->pc = 0x2898a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2898a8: 0x95060006  lhu         $a2, 0x6($t0)
    ctx->pc = 0x2898a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_2898ac:
    // 0x2898ac: 0x10c5000c  beq         $a2, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2898ACu;
    {
        const bool branch_taken_0x2898ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2898ac) {
            ctx->pc = 0x2898E0u;
            goto label_2898e0;
        }
    }
    ctx->pc = 0x2898B4u;
    // 0x2898b4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2898B4u;
    {
        const bool branch_taken_0x2898b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2898b4) {
            ctx->pc = 0x2898D8u;
            goto label_2898d8;
        }
    }
    ctx->pc = 0x2898BCu;
    // 0x2898bc: 0x10c40004  beq         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2898BCu;
    {
        const bool branch_taken_0x2898bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2898bc) {
            ctx->pc = 0x2898D0u;
            goto label_2898d0;
        }
    }
    ctx->pc = 0x2898C4u;
    // 0x2898c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2898C4u;
    {
        const bool branch_taken_0x2898c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2898c4) {
            ctx->pc = 0x2898E8u;
            goto label_2898e8;
        }
    }
    ctx->pc = 0x2898CCu;
    // 0x2898cc: 0x0  nop
    ctx->pc = 0x2898ccu;
    // NOP
label_2898d0:
    // 0x2898d0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2898D0u;
    {
        const bool branch_taken_0x2898d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898D0u;
            // 0x2898d4: 0xa2e00000  sb          $zero, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898d0) {
            ctx->pc = 0x289C30u;
            goto label_289c30;
        }
    }
    ctx->pc = 0x2898D8u;
label_2898d8:
    // 0x2898d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2898D8u;
    {
        const bool branch_taken_0x2898d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898D8u;
            // 0x2898dc: 0xa5040006  sh          $a0, 0x6($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898d8) {
            ctx->pc = 0x2898E8u;
            goto label_2898e8;
        }
    }
    ctx->pc = 0x2898E0u;
label_2898e0:
    // 0x2898e0: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x2898e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2898e4: 0x0  nop
    ctx->pc = 0x2898e4u;
    // NOP
label_2898e8:
    // 0x2898e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2898e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2898ec: 0x521ffdc  bgez        $t1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2898ECu;
    {
        const bool branch_taken_0x2898ec = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2898F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898ECu;
            // 0x2898f0: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898ec) {
            ctx->pc = 0x289860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289860;
        }
    }
    ctx->pc = 0x2898F4u;
    // 0x2898f4: 0x0  nop
    ctx->pc = 0x2898f4u;
    // NOP
label_2898f8:
    // 0x2898f8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2898F8u;
    {
        const bool branch_taken_0x2898f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2898FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2898F8u;
            // 0x2898fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898f8) {
            ctx->pc = 0x289910u;
            goto label_289910;
        }
    }
    ctx->pc = 0x289900u;
    // 0x289900: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289904: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x289904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289908u;
    {
        const bool branch_taken_0x289908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289908u;
            // 0x28990c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289908) {
            ctx->pc = 0x28991Cu;
            goto label_28991c;
        }
    }
    ctx->pc = 0x289910u;
label_289910:
    // 0x289910: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289914: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x289914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x289918: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x289918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_28991c:
    // 0x28991c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x28991cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x289920: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x289920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x289924: 0x6c00040  bltz        $s6, . + 4 + (0x40 << 2)
    ctx->pc = 0x289924u;
    {
        const bool branch_taken_0x289924 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x289928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289924u;
            // 0x289928: 0x168100  sll         $s0, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289924) {
            ctx->pc = 0x289A28u;
            goto label_289a28;
        }
    }
    ctx->pc = 0x28992Cu;
    // 0x28992c: 0x0  nop
    ctx->pc = 0x28992cu;
    // NOP
label_289930:
    // 0x289930: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289930u;
    {
        const bool branch_taken_0x289930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289930) {
            ctx->pc = 0x289948u;
            goto label_289948;
        }
    }
    ctx->pc = 0x289938u;
    // 0x289938: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28993c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x289940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289940u;
    {
        const bool branch_taken_0x289940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289940u;
            // 0x289944: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289940) {
            ctx->pc = 0x289954u;
            goto label_289954;
        }
    }
    ctx->pc = 0x289948u;
label_289948:
    // 0x289948: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28994c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x289950: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x289950u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_289954:
    // 0x289954: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x289954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289958: 0x1243002f  beq         $s2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x289958u;
    {
        const bool branch_taken_0x289958 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x289958) {
            ctx->pc = 0x289A18u;
            goto label_289a18;
        }
    }
    ctx->pc = 0x289960u;
    // 0x289960: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289960u;
    {
        const bool branch_taken_0x289960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x289964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289960u;
            // 0x289964: 0xafb200a0  sw          $s2, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289960) {
            ctx->pc = 0x289970u;
            goto label_289970;
        }
    }
    ctx->pc = 0x289968u;
    // 0x289968: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289968u;
    {
        const bool branch_taken_0x289968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289968u;
            // 0x28996c: 0x96430006  lhu         $v1, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289968) {
            ctx->pc = 0x289980u;
            goto label_289980;
        }
    }
    ctx->pc = 0x289970u;
label_289970:
    // 0x289970: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x289970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x289974: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x289974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x289978: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x289978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x28997c: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x28997cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_289980:
    // 0x289980: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x289980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289984: 0x14670010  bne         $v1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x289984u;
    {
        const bool branch_taken_0x289984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x289988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289984u;
            // 0x289988: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289984) {
            ctx->pc = 0x2899C8u;
            goto label_2899c8;
        }
    }
    ctx->pc = 0x28998Cu;
    // 0x28998c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28998cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289990: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x289990u;
    {
        const bool branch_taken_0x289990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289990u;
            // 0x289994: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289990) {
            ctx->pc = 0x2899C0u;
            goto label_2899c0;
        }
    }
    ctx->pc = 0x289998u;
    // 0x289998: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x28999c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28999cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2899a0: 0xc0a2524  jal         func_289490
    ctx->pc = 0x2899A0u;
    SET_GPR_U32(ctx, 31, 0x2899A8u);
    ctx->pc = 0x2899A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2899A0u;
            // 0x2899a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289490u;
    if (runtime->hasFunction(0x289490u)) {
        auto targetFn = runtime->lookupFunction(0x289490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899A8u; }
        if (ctx->pc != 0x2899A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289490_0x289490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899A8u; }
        if (ctx->pc != 0x2899A8u) { return; }
    }
    ctx->pc = 0x2899A8u;
label_2899a8:
    // 0x2899a8: 0x27a300bc  addiu       $v1, $sp, 0xBC
    ctx->pc = 0x2899a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2899ac: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2899acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2899b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2899B0u;
    {
        const bool branch_taken_0x2899b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2899b0) {
            ctx->pc = 0x2899C0u;
            goto label_2899c0;
        }
    }
    ctx->pc = 0x2899B8u;
    // 0x2899b8: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x2899b8u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2899bc: 0x0  nop
    ctx->pc = 0x2899bcu;
    // NOP
label_2899c0:
    // 0x2899c0: 0x1e2e3c  dsll32      $a1, $fp, 24
    ctx->pc = 0x2899c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << (32 + 24));
    // 0x2899c4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2899c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_2899c8:
    // 0x2899c8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x2899c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2899cc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2899ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2899d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2899d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2899d4: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x2899d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2899d8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2899d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2899dc: 0x1467000e  bne         $v1, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2899DCu;
    {
        const bool branch_taken_0x2899dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2899E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899DCu;
            // 0x2899e0: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899dc) {
            ctx->pc = 0x289A18u;
            goto label_289a18;
        }
    }
    ctx->pc = 0x2899E4u;
    // 0x2899e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2899e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2899e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2899E8u;
    {
        const bool branch_taken_0x2899e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899E8u;
            // 0x2899ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899e8) {
            ctx->pc = 0x289A10u;
            goto label_289a10;
        }
    }
    ctx->pc = 0x2899F0u;
    // 0x2899f0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2899f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2899f4: 0xc0a2524  jal         func_289490
    ctx->pc = 0x2899F4u;
    SET_GPR_U32(ctx, 31, 0x2899FCu);
    ctx->pc = 0x2899F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2899F4u;
            // 0x2899f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289490u;
    if (runtime->hasFunction(0x289490u)) {
        auto targetFn = runtime->lookupFunction(0x289490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899FCu; }
        if (ctx->pc != 0x2899FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289490_0x289490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2899FCu; }
        if (ctx->pc != 0x2899FCu) { return; }
    }
    ctx->pc = 0x2899FCu;
label_2899fc:
    // 0x2899fc: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x2899fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x289a00: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x289a00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289a04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x289A04u;
    {
        const bool branch_taken_0x289a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a04) {
            ctx->pc = 0x289A10u;
            goto label_289a10;
        }
    }
    ctx->pc = 0x289A0Cu;
    // 0x289a0c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x289a0cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_289a10:
    // 0x289a10: 0x122e3c  dsll32      $a1, $s2, 24
    ctx->pc = 0x289a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 24));
    // 0x289a14: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x289a14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_289a18:
    // 0x289a18: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x289a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x289a1c: 0x6c1ffc4  bgez        $s6, . + 4 + (-0x3C << 2)
    ctx->pc = 0x289A1Cu;
    {
        const bool branch_taken_0x289a1c = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x289A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A1Cu;
            // 0x289a20: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a1c) {
            ctx->pc = 0x289930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289930;
        }
    }
    ctx->pc = 0x289A24u;
    // 0x289a24: 0x0  nop
    ctx->pc = 0x289a24u;
    // NOP
label_289a28:
    // 0x289a28: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289A28u;
    {
        const bool branch_taken_0x289a28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a28) {
            ctx->pc = 0x289A3Cu;
            goto label_289a3c;
        }
    }
    ctx->pc = 0x289A30u;
    // 0x289a30: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289a34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289A34u;
    {
        const bool branch_taken_0x289a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A34u;
            // 0x289a38: 0x8c7e0000  lw          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a34) {
            ctx->pc = 0x289A44u;
            goto label_289a44;
        }
    }
    ctx->pc = 0x289A3Cu;
label_289a3c:
    // 0x289a3c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289a40: 0x8c7e0004  lw          $fp, 0x4($v1)
    ctx->pc = 0x289a40u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_289a44:
    // 0x289a44: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x289a48: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x289a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x289a4c: 0x6400060  bltz        $s2, . + 4 + (0x60 << 2)
    ctx->pc = 0x289A4Cu;
    {
        const bool branch_taken_0x289a4c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x289A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A4Cu;
            // 0x289a50: 0x128100  sll         $s0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a4c) {
            ctx->pc = 0x289BD0u;
            goto label_289bd0;
        }
    }
    ctx->pc = 0x289A54u;
    // 0x289a54: 0x0  nop
    ctx->pc = 0x289a54u;
    // NOP
label_289a58:
    // 0x289a58: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289A58u;
    {
        const bool branch_taken_0x289a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289a58) {
            ctx->pc = 0x289A70u;
            goto label_289a70;
        }
    }
    ctx->pc = 0x289A60u;
    // 0x289a60: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289a64: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x289a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x289a68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289A68u;
    {
        const bool branch_taken_0x289a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A68u;
            // 0x289a6c: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a68) {
            ctx->pc = 0x289A80u;
            goto label_289a80;
        }
    }
    ctx->pc = 0x289A70u;
label_289a70:
    // 0x289a70: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x289a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x289a74: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x289a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x289a78: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x289a7c: 0x0  nop
    ctx->pc = 0x289a7cu;
    // NOP
label_289a80:
    // 0x289a80: 0x10de004f  beq         $a2, $fp, . + 4 + (0x4F << 2)
    ctx->pc = 0x289A80u;
    {
        const bool branch_taken_0x289a80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 30));
        if (branch_taken_0x289a80) {
            ctx->pc = 0x289BC0u;
            goto label_289bc0;
        }
    }
    ctx->pc = 0x289A88u;
    // 0x289a88: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289A88u;
    {
        const bool branch_taken_0x289a88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A88u;
            // 0x289a8c: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a88) {
            ctx->pc = 0x289A98u;
            goto label_289a98;
        }
    }
    ctx->pc = 0x289A90u;
    // 0x289a90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289A90u;
    {
        const bool branch_taken_0x289a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A90u;
            // 0x289a94: 0x94c70006  lhu         $a3, 0x6($a2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a90) {
            ctx->pc = 0x289AA8u;
            goto label_289aa8;
        }
    }
    ctx->pc = 0x289A98u;
label_289a98:
    // 0x289a98: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x289a98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x289a9c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x289a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x289aa0: 0x2643021  addu        $a2, $s3, $a0
    ctx->pc = 0x289aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x289aa4: 0x94c70006  lhu         $a3, 0x6($a2)
    ctx->pc = 0x289aa4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_289aa8:
    // 0x289aa8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x289aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289aac: 0x14e40044  bne         $a3, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x289AACu;
    {
        const bool branch_taken_0x289aac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x289AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289AACu;
            // 0x289ab0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289aac) {
            ctx->pc = 0x289BC0u;
            goto label_289bc0;
        }
    }
    ctx->pc = 0x289AB4u;
    // 0x289ab4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289AB4u;
    {
        const bool branch_taken_0x289ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ab4) {
            ctx->pc = 0x289AC4u;
            goto label_289ac4;
        }
    }
    ctx->pc = 0x289ABCu;
    // 0x289abc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289ABCu;
    {
        const bool branch_taken_0x289abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ABCu;
            // 0x289ac0: 0x8c6b0000  lw          $t3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289abc) {
            ctx->pc = 0x289AC8u;
            goto label_289ac8;
        }
    }
    ctx->pc = 0x289AC4u;
label_289ac4:
    // 0x289ac4: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x289ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_289ac8:
    // 0x289ac8: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x289ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x289acc: 0x24eaffff  addiu       $t2, $a3, -0x1
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x289ad0: 0x5400015  bltz        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x289AD0u;
    {
        const bool branch_taken_0x289ad0 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x289AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289AD0u;
            // 0x289ad4: 0xa4900  sll         $t1, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ad0) {
            ctx->pc = 0x289B28u;
            goto label_289b28;
        }
    }
    ctx->pc = 0x289AD8u;
    // 0x289ad8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x289ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289adc: 0x0  nop
    ctx->pc = 0x289adcu;
    // NOP
label_289ae0:
    // 0x289ae0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289AE0u;
    {
        const bool branch_taken_0x289ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289AE0u;
            // 0x289ae4: 0x694021  addu        $t0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ae0) {
            ctx->pc = 0x289AF4u;
            goto label_289af4;
        }
    }
    ctx->pc = 0x289AE8u;
    // 0x289ae8: 0x694021  addu        $t0, $v1, $t1
    ctx->pc = 0x289ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x289aec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289AECu;
    {
        const bool branch_taken_0x289aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289AECu;
            // 0x289af0: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289aec) {
            ctx->pc = 0x289AF8u;
            goto label_289af8;
        }
    }
    ctx->pc = 0x289AF4u;
label_289af4:
    // 0x289af4: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x289af4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_289af8:
    // 0x289af8: 0x110b0007  beq         $t0, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x289AF8u;
    {
        const bool branch_taken_0x289af8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x289af8) {
            ctx->pc = 0x289B18u;
            goto label_289b18;
        }
    }
    ctx->pc = 0x289B00u;
    // 0x289b00: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x289b00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b04: 0x95080006  lhu         $t0, 0x6($t0)
    ctx->pc = 0x289b04u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x289b08: 0x11070003  beq         $t0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x289B08u;
    {
        const bool branch_taken_0x289b08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x289b08) {
            ctx->pc = 0x289B18u;
            goto label_289b18;
        }
    }
    ctx->pc = 0x289B10u;
    // 0x289b10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289B10u;
    {
        const bool branch_taken_0x289b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B10u;
            // 0x289b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b10) {
            ctx->pc = 0x289B28u;
            goto label_289b28;
        }
    }
    ctx->pc = 0x289B18u;
label_289b18:
    // 0x289b18: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x289b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x289b1c: 0x541fff0  bgez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x289B1Cu;
    {
        const bool branch_taken_0x289b1c = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x289B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B1Cu;
            // 0x289b20: 0x2529fff0  addiu       $t1, $t1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b1c) {
            ctx->pc = 0x289AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289ae0;
        }
    }
    ctx->pc = 0x289B24u;
    // 0x289b24: 0x0  nop
    ctx->pc = 0x289b24u;
    // NOP
label_289b28:
    // 0x289b28: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x289b2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x289b2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b30: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x289b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x289b34: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x289B34u;
    {
        const bool branch_taken_0x289b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B34u;
            // 0x289b38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b34) {
            ctx->pc = 0x289B68u;
            goto label_289b68;
        }
    }
    ctx->pc = 0x289B3Cu;
    // 0x289b3c: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x289b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_289b40:
    // 0x289b40: 0x95030006  lhu         $v1, 0x6($t0)
    ctx->pc = 0x289b40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x289b44: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289B44u;
    {
        const bool branch_taken_0x289b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289b44) {
            ctx->pc = 0x289B58u;
            goto label_289b58;
        }
    }
    ctx->pc = 0x289B4Cu;
    // 0x289b4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x289B4Cu;
    {
        const bool branch_taken_0x289b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B4Cu;
            // 0x289b50: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b4c) {
            ctx->pc = 0x289B68u;
            goto label_289b68;
        }
    }
    ctx->pc = 0x289B54u;
    // 0x289b54: 0x0  nop
    ctx->pc = 0x289b54u;
    // NOP
label_289b58:
    // 0x289b58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x289b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x289b5c: 0x147182a  slt         $v1, $t2, $a3
    ctx->pc = 0x289b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x289b60: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x289B60u;
    {
        const bool branch_taken_0x289b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B60u;
            // 0x289b64: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b60) {
            ctx->pc = 0x289B40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289b40;
        }
    }
    ctx->pc = 0x289B68u;
label_289b68:
    // 0x289b68: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x289b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x289b6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x289b6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289b70: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x289B70u;
    {
        const bool branch_taken_0x289b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B70u;
            // 0x289b74: 0x91e3c  dsll32      $v1, $t1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b70) {
            ctx->pc = 0x289BC0u;
            goto label_289bc0;
        }
    }
    ctx->pc = 0x289B78u;
    // 0x289b78: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x289b78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289b7c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x289B7Cu;
    {
        const bool branch_taken_0x289b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b7c) {
            ctx->pc = 0x289BC0u;
            goto label_289bc0;
        }
    }
    ctx->pc = 0x289B84u;
    // 0x289b84: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x289b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x289b88: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x289b88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289b8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x289B8Cu;
    {
        const bool branch_taken_0x289b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289B8Cu;
            // 0x289b90: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289b8c) {
            ctx->pc = 0x289BB8u;
            goto label_289bb8;
        }
    }
    ctx->pc = 0x289B94u;
    // 0x289b94: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x289b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x289b98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x289b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b9c: 0xc0a2524  jal         func_289490
    ctx->pc = 0x289B9Cu;
    SET_GPR_U32(ctx, 31, 0x289BA4u);
    ctx->pc = 0x289BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289B9Cu;
            // 0x289ba0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289490u;
    if (runtime->hasFunction(0x289490u)) {
        auto targetFn = runtime->lookupFunction(0x289490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289BA4u; }
        if (ctx->pc != 0x289BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289490_0x289490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289BA4u; }
        if (ctx->pc != 0x289BA4u) { return; }
    }
    ctx->pc = 0x289BA4u;
label_289ba4:
    // 0x289ba4: 0x27a300b4  addiu       $v1, $sp, 0xB4
    ctx->pc = 0x289ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x289ba8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x289ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289bac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x289BACu;
    {
        const bool branch_taken_0x289bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289bac) {
            ctx->pc = 0x289BB8u;
            goto label_289bb8;
        }
    }
    ctx->pc = 0x289BB4u;
    // 0x289bb4: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x289bb4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_289bb8:
    // 0x289bb8: 0x162e3c  dsll32      $a1, $s6, 24
    ctx->pc = 0x289bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 24));
    // 0x289bbc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x289bbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_289bc0:
    // 0x289bc0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x289bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x289bc4: 0x641ffa4  bgez        $s2, . + 4 + (-0x5C << 2)
    ctx->pc = 0x289BC4u;
    {
        const bool branch_taken_0x289bc4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x289BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289BC4u;
            // 0x289bc8: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289bc4) {
            ctx->pc = 0x289A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289a58;
        }
    }
    ctx->pc = 0x289BCCu;
    // 0x289bcc: 0x0  nop
    ctx->pc = 0x289bccu;
    // NOP
label_289bd0:
    // 0x289bd0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x289bd4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x289bd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289bd8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x289BD8u;
    {
        const bool branch_taken_0x289bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x289BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289BD8u;
            // 0x289bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289bd8) {
            ctx->pc = 0x289C28u;
            goto label_289c28;
        }
    }
    ctx->pc = 0x289BE0u;
    // 0x289be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289be4: 0x0  nop
    ctx->pc = 0x289be4u;
    // NOP
label_289be8:
    // 0x289be8: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x289be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x289bec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x289becu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289bf0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x289bf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289bf4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289BF4u;
    {
        const bool branch_taken_0x289bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x289bf4) {
            ctx->pc = 0x289C0Cu;
            goto label_289c0c;
        }
    }
    ctx->pc = 0x289BFCu;
    // 0x289bfc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x289bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x289c00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289c04: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x289c04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x289c08: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x289c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_289c0c:
    // 0x289c0c: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x289c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x289c10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x289c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x289c14: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x289c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x289c18: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x289c18u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x289c1c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x289c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289c20: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x289C20u;
    {
        const bool branch_taken_0x289c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C20u;
            // 0x289c24: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c20) {
            ctx->pc = 0x289BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289be8;
        }
    }
    ctx->pc = 0x289C28u;
label_289c28:
    // 0x289c28: 0xa2e50000  sb          $a1, 0x0($s7)
    ctx->pc = 0x289c28u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x289c2c: 0x0  nop
    ctx->pc = 0x289c2cu;
    // NOP
label_289c30:
    // 0x289c30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289c34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x289c34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289c38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x289c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289c3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x289c3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289c40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x289c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289c44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x289c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289c58: 0x3e00008  jr          $ra
    ctx->pc = 0x289C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289C58u;
            // 0x289c5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289C60u;
}
