#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ECBC0
// Address: 0x2ecbc0 - 0x2ed010
void sub_002ECBC0_0x2ecbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECBC0_0x2ecbc0");
#endif

    switch (ctx->pc) {
        case 0x2ecc50u: goto label_2ecc50;
        case 0x2eccb0u: goto label_2eccb0;
        case 0x2ecd10u: goto label_2ecd10;
        case 0x2ecd70u: goto label_2ecd70;
        case 0x2ecf1cu: goto label_2ecf1c;
        case 0x2ecf3cu: goto label_2ecf3c;
        case 0x2ecf88u: goto label_2ecf88;
        case 0x2ecf90u: goto label_2ecf90;
        case 0x2ecfd8u: goto label_2ecfd8;
        default: break;
    }

    ctx->pc = 0x2ecbc0u;

    // 0x2ecbc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ecbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ecbc4: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2ecbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2ecbc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ecbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ecbcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ecbd0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ecbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ecbd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ecbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ecbd8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2ecbd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ecbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ecbe0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ecbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ecbe8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ecbe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ecbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ecbf0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ecbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ecbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ecbf8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ecbf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ecbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ecc00: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ecc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ecc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ecc08: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2ECC08u;
    {
        const bool branch_taken_0x2ecc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ECC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC08u;
            // 0x2ecc0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc08) {
            ctx->pc = 0x2ECE90u;
            goto label_2ece90;
        }
    }
    ctx->pc = 0x2ECC10u;
    // 0x2ecc10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ecc14: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2ECC14u;
    {
        const bool branch_taken_0x2ecc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecc14) {
            ctx->pc = 0x2ECE40u;
            goto label_2ece40;
        }
    }
    ctx->pc = 0x2ECC1Cu;
    // 0x2ecc1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ecc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecc20: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2ECC20u;
    {
        const bool branch_taken_0x2ecc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecc20) {
            ctx->pc = 0x2ECDFCu;
            goto label_2ecdfc;
        }
    }
    ctx->pc = 0x2ECC28u;
    // 0x2ecc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ecc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecc2c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2ECC2Cu;
    {
        const bool branch_taken_0x2ecc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecc2c) {
            ctx->pc = 0x2ECDC4u;
            goto label_2ecdc4;
        }
    }
    ctx->pc = 0x2ECC34u;
    // 0x2ecc34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECC34u;
    {
        const bool branch_taken_0x2ecc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc34) {
            ctx->pc = 0x2ECC44u;
            goto label_2ecc44;
        }
    }
    ctx->pc = 0x2ECC3Cu;
    // 0x2ecc3c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2ECC3Cu;
    {
        const bool branch_taken_0x2ecc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc3c) {
            ctx->pc = 0x2ECEE8u;
            goto label_2ecee8;
        }
    }
    ctx->pc = 0x2ECC44u;
label_2ecc44:
    // 0x2ecc44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecc48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc4c: 0x94430ef8  lhu         $v1, 0xEF8($v0)
    ctx->pc = 0x2ecc4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
label_2ecc50:
    // 0x2ecc50: 0x5494000e  bnel        $a0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2ECC50u;
    {
        const bool branch_taken_0x2ecc50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x2ecc50) {
            ctx->pc = 0x2ECC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC50u;
            // 0x2ecc54: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ECC8Cu;
            goto label_2ecc8c;
        }
    }
    ctx->pc = 0x2ECC58u;
    // 0x2ecc58: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ecc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ecc5c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ecc5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ecc60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECC60u;
    {
        const bool branch_taken_0x2ecc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc60) {
            ctx->pc = 0x2ECC70u;
            goto label_2ecc70;
        }
    }
    ctx->pc = 0x2ECC68u;
    // 0x2ecc68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECC68u;
    {
        const bool branch_taken_0x2ecc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC68u;
            // 0x2ecc6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc68) {
            ctx->pc = 0x2ECC84u;
            goto label_2ecc84;
        }
    }
    ctx->pc = 0x2ECC70u;
label_2ecc70:
    // 0x2ecc70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecc74: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ecc78: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ecc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecc80: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ecc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecc84:
    // 0x2ecc84: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2ECC84u;
    {
        const bool branch_taken_0x2ecc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc84) {
            ctx->pc = 0x2ECDBCu;
            goto label_2ecdbc;
        }
    }
    ctx->pc = 0x2ECC8Cu;
label_2ecc8c:
    // 0x2ecc8c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ecc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ecc90: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2ECC90u;
    {
        const bool branch_taken_0x2ecc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc90) {
            ctx->pc = 0x2ECC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecc50;
        }
    }
    ctx->pc = 0x2ECC98u;
    // 0x2ecc98: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ecc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ecc9c: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x2ecc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ecca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecca4: 0x94430f00  lhu         $v1, 0xF00($v0)
    ctx->pc = 0x2ecca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ecca8: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECCA8u;
    {
        const bool branch_taken_0x2ecca8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ECCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCA8u;
            // 0x2eccac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecca8) {
            ctx->pc = 0x2ECCF8u;
            goto label_2eccf8;
        }
    }
    ctx->pc = 0x2ECCB0u;
label_2eccb0:
    // 0x2eccb0: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ECCB0u;
    {
        const bool branch_taken_0x2eccb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2eccb0) {
            ctx->pc = 0x2ECCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCB0u;
            // 0x2eccb4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCE8u;
            goto label_2ecce8;
        }
    }
    ctx->pc = 0x2ECCB8u;
    // 0x2eccb8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2eccb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2eccbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECCBCu;
    {
        const bool branch_taken_0x2eccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eccbc) {
            ctx->pc = 0x2ECCCCu;
            goto label_2ecccc;
        }
    }
    ctx->pc = 0x2ECCC4u;
    // 0x2eccc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECCC4u;
    {
        const bool branch_taken_0x2eccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCC4u;
            // 0x2eccc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccc4) {
            ctx->pc = 0x2ECCE0u;
            goto label_2ecce0;
        }
    }
    ctx->pc = 0x2ECCCCu;
label_2ecccc:
    // 0x2ecccc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eccd0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eccd4: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2eccd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eccdc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2eccdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecce0:
    // 0x2ecce0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2ECCE0u;
    {
        const bool branch_taken_0x2ecce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecce0) {
            ctx->pc = 0x2ECDBCu;
            goto label_2ecdbc;
        }
    }
    ctx->pc = 0x2ECCE8u;
label_2ecce8:
    // 0x2ecce8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ecce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eccec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ECCECu;
    {
        const bool branch_taken_0x2eccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eccec) {
            ctx->pc = 0x2ECCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eccb0;
        }
    }
    ctx->pc = 0x2ECCF4u;
    // 0x2eccf4: 0x0  nop
    ctx->pc = 0x2eccf4u;
    // NOP
label_2eccf8:
    // 0x2eccf8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2eccf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eccfc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2eccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecd00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecd04: 0x94430f08  lhu         $v1, 0xF08($v0)
    ctx->pc = 0x2ecd04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ecd08: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECD08u;
    {
        const bool branch_taken_0x2ecd08 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ECD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD08u;
            // 0x2ecd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd08) {
            ctx->pc = 0x2ECD58u;
            goto label_2ecd58;
        }
    }
    ctx->pc = 0x2ECD10u;
label_2ecd10:
    // 0x2ecd10: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ECD10u;
    {
        const bool branch_taken_0x2ecd10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ecd10) {
            ctx->pc = 0x2ECD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD10u;
            // 0x2ecd14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD48u;
            goto label_2ecd48;
        }
    }
    ctx->pc = 0x2ECD18u;
    // 0x2ecd18: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ecd18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ecd1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECD1Cu;
    {
        const bool branch_taken_0x2ecd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd1c) {
            ctx->pc = 0x2ECD2Cu;
            goto label_2ecd2c;
        }
    }
    ctx->pc = 0x2ECD24u;
    // 0x2ecd24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD24u;
    {
        const bool branch_taken_0x2ecd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD24u;
            // 0x2ecd28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd24) {
            ctx->pc = 0x2ECD40u;
            goto label_2ecd40;
        }
    }
    ctx->pc = 0x2ECD2Cu;
label_2ecd2c:
    // 0x2ecd2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecd30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ecd34: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ecd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ecd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecd3c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ecd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecd40:
    // 0x2ecd40: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2ECD40u;
    {
        const bool branch_taken_0x2ecd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd40) {
            ctx->pc = 0x2ECDBCu;
            goto label_2ecdbc;
        }
    }
    ctx->pc = 0x2ECD48u;
label_2ecd48:
    // 0x2ecd48: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ecd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ecd4c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ECD4Cu;
    {
        const bool branch_taken_0x2ecd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd4c) {
            ctx->pc = 0x2ECD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecd10;
        }
    }
    ctx->pc = 0x2ECD54u;
    // 0x2ecd54: 0x0  nop
    ctx->pc = 0x2ecd54u;
    // NOP
label_2ecd58:
    // 0x2ecd58: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2ecd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ecd5c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2ecd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecd60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecd64: 0x94430f10  lhu         $v1, 0xF10($v0)
    ctx->pc = 0x2ecd64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2ecd68: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECD68u;
    {
        const bool branch_taken_0x2ecd68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ECD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD68u;
            // 0x2ecd6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd68) {
            ctx->pc = 0x2ECDB8u;
            goto label_2ecdb8;
        }
    }
    ctx->pc = 0x2ECD70u;
label_2ecd70:
    // 0x2ecd70: 0x54a4000d  bnel        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ECD70u;
    {
        const bool branch_taken_0x2ecd70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ecd70) {
            ctx->pc = 0x2ECD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD70u;
            // 0x2ecd74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ECDA8u;
            goto label_2ecda8;
        }
    }
    ctx->pc = 0x2ECD78u;
    // 0x2ecd78: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2ecd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ecd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECD7Cu;
    {
        const bool branch_taken_0x2ecd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd7c) {
            ctx->pc = 0x2ECD8Cu;
            goto label_2ecd8c;
        }
    }
    ctx->pc = 0x2ECD84u;
    // 0x2ecd84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD84u;
    {
        const bool branch_taken_0x2ecd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD84u;
            // 0x2ecd88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd84) {
            ctx->pc = 0x2ECDA0u;
            goto label_2ecda0;
        }
    }
    ctx->pc = 0x2ECD8Cu;
label_2ecd8c:
    // 0x2ecd8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecd90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ecd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ecd94: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ecd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ecd98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecd9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ecd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecda0:
    // 0x2ecda0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECDA0u;
    {
        const bool branch_taken_0x2ecda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecda0) {
            ctx->pc = 0x2ECDBCu;
            goto label_2ecdbc;
        }
    }
    ctx->pc = 0x2ECDA8u;
label_2ecda8:
    // 0x2ecda8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2ecda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ecdac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2ECDACu;
    {
        const bool branch_taken_0x2ecdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdac) {
            ctx->pc = 0x2ECD70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecd70;
        }
    }
    ctx->pc = 0x2ECDB4u;
    // 0x2ecdb4: 0x0  nop
    ctx->pc = 0x2ecdb4u;
    // NOP
label_2ecdb8:
    // 0x2ecdb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ecdb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecdbc:
    // 0x2ecdbc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2ECDBCu;
    {
        const bool branch_taken_0x2ecdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdbc) {
            ctx->pc = 0x2ECEE8u;
            goto label_2ecee8;
        }
    }
    ctx->pc = 0x2ECDC4u;
label_2ecdc4:
    // 0x2ecdc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecdc8: 0x94420ef8  lhu         $v0, 0xEF8($v0)
    ctx->pc = 0x2ecdc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ecdcc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2ecdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ecdd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECDD0u;
    {
        const bool branch_taken_0x2ecdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdd0) {
            ctx->pc = 0x2ECDE0u;
            goto label_2ecde0;
        }
    }
    ctx->pc = 0x2ECDD8u;
    // 0x2ecdd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECDD8u;
    {
        const bool branch_taken_0x2ecdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdd8) {
            ctx->pc = 0x2ECDF4u;
            goto label_2ecdf4;
        }
    }
    ctx->pc = 0x2ECDE0u;
label_2ecde0:
    // 0x2ecde0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecde4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ecde8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2ecde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2ecdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecdf0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ecdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecdf4:
    // 0x2ecdf4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2ECDF4u;
    {
        const bool branch_taken_0x2ecdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdf4) {
            ctx->pc = 0x2ECEE8u;
            goto label_2ecee8;
        }
    }
    ctx->pc = 0x2ECDFCu;
label_2ecdfc:
    // 0x2ecdfc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ecdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ece00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ece00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ece04: 0x94630ef8  lhu         $v1, 0xEF8($v1)
    ctx->pc = 0x2ece04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ece08: 0x94420f00  lhu         $v0, 0xF00($v0)
    ctx->pc = 0x2ece08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ece0c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ece0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ece10: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ece10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ece14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECE14u;
    {
        const bool branch_taken_0x2ece14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ece14) {
            ctx->pc = 0x2ECE24u;
            goto label_2ece24;
        }
    }
    ctx->pc = 0x2ECE1Cu;
    // 0x2ece1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECE1Cu;
    {
        const bool branch_taken_0x2ece1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece1c) {
            ctx->pc = 0x2ECE38u;
            goto label_2ece38;
        }
    }
    ctx->pc = 0x2ECE24u;
label_2ece24:
    // 0x2ece24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ece24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ece28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ece28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ece2c: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x2ece2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2ece30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ece30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ece34: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ece34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ece38:
    // 0x2ece38: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2ECE38u;
    {
        const bool branch_taken_0x2ece38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece38) {
            ctx->pc = 0x2ECEE8u;
            goto label_2ecee8;
        }
    }
    ctx->pc = 0x2ECE40u;
label_2ece40:
    // 0x2ece40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ece40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ece44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ece44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ece48: 0x94440ef8  lhu         $a0, 0xEF8($v0)
    ctx->pc = 0x2ece48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3832)));
    // 0x2ece4c: 0x94630f00  lhu         $v1, 0xF00($v1)
    ctx->pc = 0x2ece4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3840)));
    // 0x2ece50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ece50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ece54: 0x94420f08  lhu         $v0, 0xF08($v0)
    ctx->pc = 0x2ece54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x2ece58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ece58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ece5c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ece5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ece60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ece60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ece64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECE64u;
    {
        const bool branch_taken_0x2ece64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ece64) {
            ctx->pc = 0x2ECE74u;
            goto label_2ece74;
        }
    }
    ctx->pc = 0x2ECE6Cu;
    // 0x2ece6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECE6Cu;
    {
        const bool branch_taken_0x2ece6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece6c) {
            ctx->pc = 0x2ECE88u;
            goto label_2ece88;
        }
    }
    ctx->pc = 0x2ECE74u;
label_2ece74:
    // 0x2ece74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ece74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ece78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ece78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ece7c: 0x24421240  addiu       $v0, $v0, 0x1240
    ctx->pc = 0x2ece7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2ece80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ece84: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ece84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ece88:
    // 0x2ece88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2ECE88u;
    {
        const bool branch_taken_0x2ece88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece88) {
            ctx->pc = 0x2ECEE8u;
            goto label_2ecee8;
        }
    }
    ctx->pc = 0x2ECE90u;
label_2ece90:
    // 0x2ece90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ece90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ece94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ece94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ece98: 0x94650ef8  lhu         $a1, 0xEF8($v1)
    ctx->pc = 0x2ece98u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3832)));
    // 0x2ece9c: 0x94440f00  lhu         $a0, 0xF00($v0)
    ctx->pc = 0x2ece9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3840)));
    // 0x2ecea0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ecea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ecea4: 0x94630f08  lhu         $v1, 0xF08($v1)
    ctx->pc = 0x2ecea4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3848)));
    // 0x2ecea8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eceac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2eceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2eceb0: 0x94420f10  lhu         $v0, 0xF10($v0)
    ctx->pc = 0x2eceb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3856)));
    // 0x2eceb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eceb8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2eceb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ecebc: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x2ecebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ecec0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2ecec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ecec4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECEC4u;
    {
        const bool branch_taken_0x2ecec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecec4) {
            ctx->pc = 0x2ECED4u;
            goto label_2eced4;
        }
    }
    ctx->pc = 0x2ECECCu;
    // 0x2ececc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECECCu;
    {
        const bool branch_taken_0x2ececc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ececc) {
            ctx->pc = 0x2ECEE8u;
            goto label_2ecee8;
        }
    }
    ctx->pc = 0x2ECED4u;
label_2eced4:
    // 0x2eced4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eced8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eced8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ecedc: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2ecedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2ecee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecee4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ecee4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ecee8:
    // 0x2ecee8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECEE8u;
    {
        const bool branch_taken_0x2ecee8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecee8) {
            ctx->pc = 0x2ECEF8u;
            goto label_2ecef8;
        }
    }
    ctx->pc = 0x2ECEF0u;
    // 0x2ecef0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2ECEF0u;
    {
        const bool branch_taken_0x2ecef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECEF0u;
            // 0x2ecef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecef0) {
            ctx->pc = 0x2ECFE4u;
            goto label_2ecfe4;
        }
    }
    ctx->pc = 0x2ECEF8u;
label_2ecef8:
    // 0x2ecef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecefc: 0x944314a0  lhu         $v1, 0x14A0($v0)
    ctx->pc = 0x2ecefcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x2ecf00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ecf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ecf04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF04u;
    {
        const bool branch_taken_0x2ecf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ECF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF04u;
            // 0x2ecf08: 0xa7a0009e  sh          $zero, 0x9E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 158), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf04) {
            ctx->pc = 0x2ECF14u;
            goto label_2ecf14;
        }
    }
    ctx->pc = 0x2ECF0Cu;
    // 0x2ecf0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ecf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ecf10: 0xa44014a0  sh          $zero, 0x14A0($v0)
    ctx->pc = 0x2ecf10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5280), (uint16_t)GPR_U32(ctx, 0));
label_2ecf14:
    // 0x2ecf14: 0xc040180  jal         func_100600
    ctx->pc = 0x2ECF14u;
    SET_GPR_U32(ctx, 31, 0x2ECF1Cu);
    ctx->pc = 0x2ECF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF14u;
            // 0x2ecf18: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF1Cu; }
        if (ctx->pc != 0x2ECF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF1Cu; }
        if (ctx->pc != 0x2ECF1Cu) { return; }
    }
    ctx->pc = 0x2ECF1Cu;
label_2ecf1c:
    // 0x2ecf1c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2ECF1Cu;
    {
        const bool branch_taken_0x2ecf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF1Cu;
            // 0x2ecf20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf1c) {
            ctx->pc = 0x2ECFE0u;
            goto label_2ecfe0;
        }
    }
    ctx->pc = 0x2ECF24u;
    // 0x2ecf24: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ecf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ecf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf2c: 0x3445f76e  ori         $a1, $v0, 0xF76E
    ctx->pc = 0x2ecf2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63342);
    // 0x2ecf30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ecf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ecf34: 0xc0ba470  jal         func_2E91C0
    ctx->pc = 0x2ECF34u;
    SET_GPR_U32(ctx, 31, 0x2ECF3Cu);
    ctx->pc = 0x2ECF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF34u;
            // 0x2ecf38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C0u;
    if (runtime->hasFunction(0x2E91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF3Cu; }
        if (ctx->pc != 0x2ECF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E91C0_0x2e91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF3Cu; }
        if (ctx->pc != 0x2ECF3Cu) { return; }
    }
    ctx->pc = 0x2ECF3Cu;
label_2ecf3c:
    // 0x2ecf3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ecf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ecf40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ecf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf44: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2ecf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x2ecf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ecf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ecf50: 0x27a6009e  addiu       $a2, $sp, 0x9E
    ctx->pc = 0x2ecf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
    // 0x2ecf54: 0xa2150078  sb          $s5, 0x78($s0)
    ctx->pc = 0x2ecf54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 21));
    // 0x2ecf58: 0xa2000079  sb          $zero, 0x79($s0)
    ctx->pc = 0x2ecf58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecf5c: 0xa614007a  sh          $s4, 0x7A($s0)
    ctx->pc = 0x2ecf5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 20));
    // 0x2ecf60: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2ecf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2ecf64: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x2ecf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecf68: 0xae170088  sw          $s7, 0x88($s0)
    ctx->pc = 0x2ecf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 23));
    // 0x2ecf6c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2ecf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2ecf70: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2ecf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2ecf74: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x2ecf74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x2ecf78: 0xae1300f0  sw          $s3, 0xF0($s0)
    ctx->pc = 0x2ecf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 19));
    // 0x2ecf7c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x2ecf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x2ecf80: 0xc0ba43c  jal         func_2E90F0
    ctx->pc = 0x2ECF80u;
    SET_GPR_U32(ctx, 31, 0x2ECF88u);
    ctx->pc = 0x2ECF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF80u;
            // 0x2ecf84: 0xae1600f8  sw          $s6, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E90F0u;
    if (runtime->hasFunction(0x2E90F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF88u; }
        if (ctx->pc != 0x2ECF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E90F0_0x2e90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF88u; }
        if (ctx->pc != 0x2ECF88u) { return; }
    }
    ctx->pc = 0x2ECF88u;
label_2ecf88:
    // 0x2ecf88: 0xc0ba1e8  jal         func_2E87A0
    ctx->pc = 0x2ECF88u;
    SET_GPR_U32(ctx, 31, 0x2ECF90u);
    ctx->pc = 0x2ECF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECF88u;
            // 0x2ecf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E87A0u;
    if (runtime->hasFunction(0x2E87A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E87A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF90u; }
        if (ctx->pc != 0x2ECF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E87A0_0x2e87a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECF90u; }
        if (ctx->pc != 0x2ECF90u) { return; }
    }
    ctx->pc = 0x2ECF90u;
label_2ecf90:
    // 0x2ecf90: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2ecf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2ecf94: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2ecf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x2ecf98: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2ecf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x2ecf9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ecf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ecfa0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ecfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecfa4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ecfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecfa8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ecfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecfac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2ecfacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ecfb0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2ecfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ecfb4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ecfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ecfb8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ecfb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ecfbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ecfbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ecfc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ecfc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ecfc4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2ecfc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ecfc8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2ecfc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ecfcc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2ecfccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ecfd0: 0xc04f380  jal         func_13CE00
    ctx->pc = 0x2ECFD0u;
    SET_GPR_U32(ctx, 31, 0x2ECFD8u);
    ctx->pc = 0x2ECFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECFD0u;
            // 0x2ecfd4: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECFD8u; }
        if (ctx->pc != 0x2ECFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECFD8u; }
        if (ctx->pc != 0x2ECFD8u) { return; }
    }
    ctx->pc = 0x2ECFD8u;
label_2ecfd8:
    // 0x2ecfd8: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x2ecfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ecfdc: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x2ecfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_2ecfe0:
    // 0x2ecfe0: 0x97a2009e  lhu         $v0, 0x9E($sp)
    ctx->pc = 0x2ecfe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 158)));
label_2ecfe4:
    // 0x2ecfe4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ecfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ecfe8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ecfe8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ecfec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ecfecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ecff0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ecff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ecff4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ecff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecff8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ecff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ecffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed008: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED008u;
            // 0x2ed00c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED010u;
}
