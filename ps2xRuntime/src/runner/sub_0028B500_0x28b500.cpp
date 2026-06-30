#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B500
// Address: 0x28b500 - 0x28b620
void sub_0028B500_0x28b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B500_0x28b500");
#endif

    ctx->pc = 0x28b500u;

    // 0x28b500: 0x8cad0010  lw          $t5, 0x10($a1)
    ctx->pc = 0x28b500u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x28b504: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x28b504u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28b508: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x28b508u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x28b50c: 0x8cca0010  lw          $t2, 0x10($a2)
    ctx->pc = 0x28b50cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x28b510: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x28b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x28b514: 0x95ad0000  lhu         $t5, 0x0($t5)
    ctx->pc = 0x28b514u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x28b518: 0x958c0000  lhu         $t4, 0x0($t4)
    ctx->pc = 0x28b518u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x28b51c: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x28b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x28b520: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x28b520u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x28b524: 0x956b0000  lhu         $t3, 0x0($t3)
    ctx->pc = 0x28b524u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x28b528: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x28b528u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b52c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x28b52cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b530: 0x15aa0015  bne         $t5, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B530u;
    {
        const bool branch_taken_0x28b530 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 10));
        ctx->pc = 0x28B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B530u;
            // 0x28b534: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b530) {
            ctx->pc = 0x28B588u;
            goto label_28b588;
        }
    }
    ctx->pc = 0x28B538u;
    // 0x28b538: 0x11860003  beq         $t4, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B538u;
    {
        const bool branch_taken_0x28b538 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b538) {
            ctx->pc = 0x28B548u;
            goto label_28b548;
        }
    }
    ctx->pc = 0x28B540u;
    // 0x28b540: 0x15850007  bne         $t4, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B540u;
    {
        const bool branch_taken_0x28b540 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 5));
        if (branch_taken_0x28b540) {
            ctx->pc = 0x28B560u;
            goto label_28b560;
        }
    }
    ctx->pc = 0x28B548u;
label_28b548:
    // 0x28b548: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x28b548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b54c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B54Cu;
    {
        const bool branch_taken_0x28b54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b54c) {
            ctx->pc = 0x28B558u;
            goto label_28b558;
        }
    }
    ctx->pc = 0x28B554u;
    // 0x28b554: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b554u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b558:
    // 0x28b558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b55c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x28b55cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_28b560:
    // 0x28b560: 0x11660003  beq         $t3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B560u;
    {
        const bool branch_taken_0x28b560 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b560) {
            ctx->pc = 0x28B570u;
            goto label_28b570;
        }
    }
    ctx->pc = 0x28B568u;
    // 0x28b568: 0x15650007  bne         $t3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B568u;
    {
        const bool branch_taken_0x28b568 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        if (branch_taken_0x28b568) {
            ctx->pc = 0x28B588u;
            goto label_28b588;
        }
    }
    ctx->pc = 0x28B570u;
label_28b570:
    // 0x28b570: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x28b570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28b574: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B574u;
    {
        const bool branch_taken_0x28b574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b574) {
            ctx->pc = 0x28B580u;
            goto label_28b580;
        }
    }
    ctx->pc = 0x28B57Cu;
    // 0x28b57c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b57cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b580:
    // 0x28b580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b584: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x28b584u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_28b588:
    // 0x28b588: 0x15a60011  bne         $t5, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28B588u;
    {
        const bool branch_taken_0x28b588 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        if (branch_taken_0x28b588) {
            ctx->pc = 0x28B5D0u;
            goto label_28b5d0;
        }
    }
    ctx->pc = 0x28B590u;
    // 0x28b590: 0x15850007  bne         $t4, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B590u;
    {
        const bool branch_taken_0x28b590 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 5));
        if (branch_taken_0x28b590) {
            ctx->pc = 0x28B5B0u;
            goto label_28b5b0;
        }
    }
    ctx->pc = 0x28B598u;
    // 0x28b598: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x28b598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b59c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B59Cu;
    {
        const bool branch_taken_0x28b59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b59c) {
            ctx->pc = 0x28B5A8u;
            goto label_28b5a8;
        }
    }
    ctx->pc = 0x28B5A4u;
    // 0x28b5a4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b5a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b5a8:
    // 0x28b5a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5ac: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x28b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_28b5b0:
    // 0x28b5b0: 0x15650007  bne         $t3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B5B0u;
    {
        const bool branch_taken_0x28b5b0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        if (branch_taken_0x28b5b0) {
            ctx->pc = 0x28B5D0u;
            goto label_28b5d0;
        }
    }
    ctx->pc = 0x28B5B8u;
    // 0x28b5b8: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x28b5b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28b5bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B5BCu;
    {
        const bool branch_taken_0x28b5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b5bc) {
            ctx->pc = 0x28B5C8u;
            goto label_28b5c8;
        }
    }
    ctx->pc = 0x28B5C4u;
    // 0x28b5c4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b5c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b5c8:
    // 0x28b5c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b5cc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x28b5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_28b5d0:
    // 0x28b5d0: 0x158a0003  bne         $t4, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B5D0u;
    {
        const bool branch_taken_0x28b5d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x28b5d0) {
            ctx->pc = 0x28B5E0u;
            goto label_28b5e0;
        }
    }
    ctx->pc = 0x28B5D8u;
    // 0x28b5d8: 0x11660009  beq         $t3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B5D8u;
    {
        const bool branch_taken_0x28b5d8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 6));
        if (branch_taken_0x28b5d8) {
            ctx->pc = 0x28B600u;
            goto label_28b600;
        }
    }
    ctx->pc = 0x28B5E0u;
label_28b5e0:
    // 0x28b5e0: 0x158a0003  bne         $t4, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B5E0u;
    {
        const bool branch_taken_0x28b5e0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x28b5e0) {
            ctx->pc = 0x28B5F0u;
            goto label_28b5f0;
        }
    }
    ctx->pc = 0x28B5E8u;
    // 0x28b5e8: 0x11650005  beq         $t3, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B5E8u;
    {
        const bool branch_taken_0x28b5e8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 5));
        if (branch_taken_0x28b5e8) {
            ctx->pc = 0x28B600u;
            goto label_28b600;
        }
    }
    ctx->pc = 0x28B5F0u;
label_28b5f0:
    // 0x28b5f0: 0x15860009  bne         $t4, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B5F0u;
    {
        const bool branch_taken_0x28b5f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 6));
        if (branch_taken_0x28b5f0) {
            ctx->pc = 0x28B618u;
            goto label_28b618;
        }
    }
    ctx->pc = 0x28B5F8u;
    // 0x28b5f8: 0x15650007  bne         $t3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B5F8u;
    {
        const bool branch_taken_0x28b5f8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        if (branch_taken_0x28b5f8) {
            ctx->pc = 0x28B618u;
            goto label_28b618;
        }
    }
    ctx->pc = 0x28B600u;
label_28b600:
    // 0x28b600: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x28b600u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28b604: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B604u;
    {
        const bool branch_taken_0x28b604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b604) {
            ctx->pc = 0x28B610u;
            goto label_28b610;
        }
    }
    ctx->pc = 0x28B60Cu;
    // 0x28b60c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x28b60cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b610:
    // 0x28b610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b614: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x28b614u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_28b618:
    // 0x28b618: 0x3e00008  jr          $ra
    ctx->pc = 0x28B618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B618u;
            // 0x28b61c: 0xa08e0000  sb          $t6, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B620u;
}
