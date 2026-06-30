#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BE6A0
// Address: 0x4be6a0 - 0x4be7d0
void sub_004BE6A0_0x4be6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE6A0_0x4be6a0");
#endif

    switch (ctx->pc) {
        case 0x4be6a0u: goto label_4be6a0;
        case 0x4be6a4u: goto label_4be6a4;
        case 0x4be6a8u: goto label_4be6a8;
        case 0x4be6acu: goto label_4be6ac;
        case 0x4be6b0u: goto label_4be6b0;
        case 0x4be6b4u: goto label_4be6b4;
        case 0x4be6b8u: goto label_4be6b8;
        case 0x4be6bcu: goto label_4be6bc;
        case 0x4be6c0u: goto label_4be6c0;
        case 0x4be6c4u: goto label_4be6c4;
        case 0x4be6c8u: goto label_4be6c8;
        case 0x4be6ccu: goto label_4be6cc;
        case 0x4be6d0u: goto label_4be6d0;
        case 0x4be6d4u: goto label_4be6d4;
        case 0x4be6d8u: goto label_4be6d8;
        case 0x4be6dcu: goto label_4be6dc;
        case 0x4be6e0u: goto label_4be6e0;
        case 0x4be6e4u: goto label_4be6e4;
        case 0x4be6e8u: goto label_4be6e8;
        case 0x4be6ecu: goto label_4be6ec;
        case 0x4be6f0u: goto label_4be6f0;
        case 0x4be6f4u: goto label_4be6f4;
        case 0x4be6f8u: goto label_4be6f8;
        case 0x4be6fcu: goto label_4be6fc;
        case 0x4be700u: goto label_4be700;
        case 0x4be704u: goto label_4be704;
        case 0x4be708u: goto label_4be708;
        case 0x4be70cu: goto label_4be70c;
        case 0x4be710u: goto label_4be710;
        case 0x4be714u: goto label_4be714;
        case 0x4be718u: goto label_4be718;
        case 0x4be71cu: goto label_4be71c;
        case 0x4be720u: goto label_4be720;
        case 0x4be724u: goto label_4be724;
        case 0x4be728u: goto label_4be728;
        case 0x4be72cu: goto label_4be72c;
        case 0x4be730u: goto label_4be730;
        case 0x4be734u: goto label_4be734;
        case 0x4be738u: goto label_4be738;
        case 0x4be73cu: goto label_4be73c;
        case 0x4be740u: goto label_4be740;
        case 0x4be744u: goto label_4be744;
        case 0x4be748u: goto label_4be748;
        case 0x4be74cu: goto label_4be74c;
        case 0x4be750u: goto label_4be750;
        case 0x4be754u: goto label_4be754;
        case 0x4be758u: goto label_4be758;
        case 0x4be75cu: goto label_4be75c;
        case 0x4be760u: goto label_4be760;
        case 0x4be764u: goto label_4be764;
        case 0x4be768u: goto label_4be768;
        case 0x4be76cu: goto label_4be76c;
        case 0x4be770u: goto label_4be770;
        case 0x4be774u: goto label_4be774;
        case 0x4be778u: goto label_4be778;
        case 0x4be77cu: goto label_4be77c;
        case 0x4be780u: goto label_4be780;
        case 0x4be784u: goto label_4be784;
        case 0x4be788u: goto label_4be788;
        case 0x4be78cu: goto label_4be78c;
        case 0x4be790u: goto label_4be790;
        case 0x4be794u: goto label_4be794;
        case 0x4be798u: goto label_4be798;
        case 0x4be79cu: goto label_4be79c;
        case 0x4be7a0u: goto label_4be7a0;
        case 0x4be7a4u: goto label_4be7a4;
        case 0x4be7a8u: goto label_4be7a8;
        case 0x4be7acu: goto label_4be7ac;
        case 0x4be7b0u: goto label_4be7b0;
        case 0x4be7b4u: goto label_4be7b4;
        case 0x4be7b8u: goto label_4be7b8;
        case 0x4be7bcu: goto label_4be7bc;
        case 0x4be7c0u: goto label_4be7c0;
        case 0x4be7c4u: goto label_4be7c4;
        case 0x4be7c8u: goto label_4be7c8;
        case 0x4be7ccu: goto label_4be7cc;
        default: break;
    }

    ctx->pc = 0x4be6a0u;

label_4be6a0:
    // 0x4be6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4be6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4be6a4:
    // 0x4be6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4be6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be6a8:
    // 0x4be6a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4be6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4be6ac:
    // 0x4be6ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4be6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4be6b0:
    // 0x4be6b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4be6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4be6b4:
    // 0x4be6b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4be6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4be6b8:
    // 0x4be6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be6bc:
    // 0x4be6bc: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x4be6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_4be6c0:
    // 0x4be6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4be6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4be6c4:
    // 0x4be6c4: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x4be6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_4be6c8:
    // 0x4be6c8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x4be6c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4be6cc:
    // 0x4be6cc: 0x240b0013  addiu       $t3, $zero, 0x13
    ctx->pc = 0x4be6ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4be6d0:
    // 0x4be6d0: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x4be6d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4be6d4:
    // 0x4be6d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4be6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4be6d8:
    // 0x4be6d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x4be6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4be6dc:
    // 0x4be6dc: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4be6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_4be6e0:
    // 0x4be6e0: 0x8cc70e80  lw          $a3, 0xE80($a2)
    ctx->pc = 0x4be6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3712)));
label_4be6e4:
    // 0x4be6e4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x4be6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be6e8:
    // 0x4be6e8: 0x8ce70968  lw          $a3, 0x968($a3)
    ctx->pc = 0x4be6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
label_4be6ec:
    // 0x4be6ec: 0x10ec0004  beq         $a3, $t4, . + 4 + (0x4 << 2)
label_4be6f0:
    if (ctx->pc == 0x4BE6F0u) {
        ctx->pc = 0x4BE6F0u;
            // 0x4be6f0: 0x8dcd0030  lw          $t5, 0x30($t6) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
        ctx->pc = 0x4BE6F4u;
        goto label_4be6f4;
    }
    ctx->pc = 0x4BE6ECu;
    {
        const bool branch_taken_0x4be6ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        ctx->pc = 0x4BE6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE6ECu;
            // 0x4be6f0: 0x8dcd0030  lw          $t5, 0x30($t6) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be6ec) {
            ctx->pc = 0x4BE700u;
            goto label_4be700;
        }
    }
    ctx->pc = 0x4BE6F4u;
label_4be6f4:
    // 0x4be6f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4be6f8:
    if (ctx->pc == 0x4BE6F8u) {
        ctx->pc = 0x4BE6FCu;
        goto label_4be6fc;
    }
    ctx->pc = 0x4BE6F4u;
    {
        const bool branch_taken_0x4be6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be6f4) {
            ctx->pc = 0x4BE708u;
            goto label_4be708;
        }
    }
    ctx->pc = 0x4BE6FCu;
label_4be6fc:
    // 0x4be6fc: 0x0  nop
    ctx->pc = 0x4be6fcu;
    // NOP
label_4be700:
    // 0x4be700: 0x10000003  b           . + 4 + (0x3 << 2)
label_4be704:
    if (ctx->pc == 0x4BE704u) {
        ctx->pc = 0x4BE704u;
            // 0x4be704: 0x160782d  daddu       $t7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE708u;
        goto label_4be708;
    }
    ctx->pc = 0x4BE700u;
    {
        const bool branch_taken_0x4be700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE700u;
            // 0x4be704: 0x160782d  daddu       $t7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be700) {
            ctx->pc = 0x4BE710u;
            goto label_4be710;
        }
    }
    ctx->pc = 0x4BE708u;
label_4be708:
    // 0x4be708: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x4be708u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4be70c:
    // 0x4be70c: 0x0  nop
    ctx->pc = 0x4be70cu;
    // NOP
label_4be710:
    // 0x4be710: 0x10ec0003  beq         $a3, $t4, . + 4 + (0x3 << 2)
label_4be714:
    if (ctx->pc == 0x4BE714u) {
        ctx->pc = 0x4BE718u;
        goto label_4be718;
    }
    ctx->pc = 0x4BE710u;
    {
        const bool branch_taken_0x4be710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        if (branch_taken_0x4be710) {
            ctx->pc = 0x4BE720u;
            goto label_4be720;
        }
    }
    ctx->pc = 0x4BE718u;
label_4be718:
    // 0x4be718: 0x10000003  b           . + 4 + (0x3 << 2)
label_4be71c:
    if (ctx->pc == 0x4BE71Cu) {
        ctx->pc = 0x4BE720u;
        goto label_4be720;
    }
    ctx->pc = 0x4BE718u;
    {
        const bool branch_taken_0x4be718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be718) {
            ctx->pc = 0x4BE728u;
            goto label_4be728;
        }
    }
    ctx->pc = 0x4BE720u;
label_4be720:
    // 0x4be720: 0x10000003  b           . + 4 + (0x3 << 2)
label_4be724:
    if (ctx->pc == 0x4BE724u) {
        ctx->pc = 0x4BE724u;
            // 0x4be724: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE728u;
        goto label_4be728;
    }
    ctx->pc = 0x4BE720u;
    {
        const bool branch_taken_0x4be720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE720u;
            // 0x4be724: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be720) {
            ctx->pc = 0x4BE730u;
            goto label_4be730;
        }
    }
    ctx->pc = 0x4BE728u;
label_4be728:
    // 0x4be728: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4be728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4be72c:
    // 0x4be72c: 0x0  nop
    ctx->pc = 0x4be72cu;
    // NOP
label_4be730:
    // 0x4be730: 0x1138c0  sll         $a3, $s1, 3
    ctx->pc = 0x4be730u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_4be734:
    // 0x4be734: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x4be734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_4be738:
    // 0x4be738: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4be738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_4be73c:
    // 0x4be73c: 0x1a76821  addu        $t5, $t5, $a3
    ctx->pc = 0x4be73cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_4be740:
    // 0x4be740: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4be740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4be744:
    // 0x4be744: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4be744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4be748:
    // 0x4be748: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x4be748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
label_4be74c:
    // 0x4be74c: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4be74cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
label_4be750:
    // 0x4be750: 0x8dc70028  lw          $a3, 0x28($t6)
    ctx->pc = 0x4be750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 40)));
label_4be754:
    // 0x4be754: 0x227382b  sltu        $a3, $s1, $a3
    ctx->pc = 0x4be754u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4be758:
    // 0x4be758: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
label_4be75c:
    if (ctx->pc == 0x4BE75Cu) {
        ctx->pc = 0x4BE75Cu;
            // 0x4be75c: 0x25ad0090  addiu       $t5, $t5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
        ctx->pc = 0x4BE760u;
        goto label_4be760;
    }
    ctx->pc = 0x4BE758u;
    {
        const bool branch_taken_0x4be758 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE758u;
            // 0x4be75c: 0x25ad0090  addiu       $t5, $t5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be758) {
            ctx->pc = 0x4BE740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be740;
        }
    }
    ctx->pc = 0x4BE760u;
label_4be760:
    // 0x4be760: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4be760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4be764:
    // 0x4be764: 0xa3382a  slt         $a3, $a1, $v1
    ctx->pc = 0x4be764u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4be768:
    // 0x4be768: 0x14e0ffdd  bnez        $a3, . + 4 + (-0x23 << 2)
label_4be76c:
    if (ctx->pc == 0x4BE76Cu) {
        ctx->pc = 0x4BE76Cu;
            // 0x4be76c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x4BE770u;
        goto label_4be770;
    }
    ctx->pc = 0x4BE768u;
    {
        const bool branch_taken_0x4be768 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE768u;
            // 0x4be76c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be768) {
            ctx->pc = 0x4BE6E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be6e0;
        }
    }
    ctx->pc = 0x4BE770u;
label_4be770:
    // 0x4be770: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x4be770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_4be774:
    // 0x4be774: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4be778:
    if (ctx->pc == 0x4BE778u) {
        ctx->pc = 0x4BE77Cu;
        goto label_4be77c;
    }
    ctx->pc = 0x4BE774u;
    {
        const bool branch_taken_0x4be774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be774) {
            ctx->pc = 0x4BE7B0u;
            goto label_4be7b0;
        }
    }
    ctx->pc = 0x4BE77Cu;
label_4be77c:
    // 0x4be77c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4be77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be780:
    // 0x4be780: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4be780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be784:
    // 0x4be784: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x4be784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_4be788:
    // 0x4be788: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4be788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4be78c:
    // 0x4be78c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4be78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4be790:
    // 0x4be790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4be790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be794:
    // 0x4be794: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4be794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4be798:
    // 0x4be798: 0x320f809  jalr        $t9
label_4be79c:
    if (ctx->pc == 0x4BE79Cu) {
        ctx->pc = 0x4BE7A0u;
        goto label_4be7a0;
    }
    ctx->pc = 0x4BE798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BE7A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BE7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BE7A0u; }
            if (ctx->pc != 0x4BE7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4BE7A0u;
label_4be7a0:
    // 0x4be7a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4be7a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4be7a4:
    // 0x4be7a4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4be7a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4be7a8:
    // 0x4be7a8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4be7ac:
    if (ctx->pc == 0x4BE7ACu) {
        ctx->pc = 0x4BE7ACu;
            // 0x4be7ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BE7B0u;
        goto label_4be7b0;
    }
    ctx->pc = 0x4BE7A8u;
    {
        const bool branch_taken_0x4be7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE7A8u;
            // 0x4be7ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be7a8) {
            ctx->pc = 0x4BE784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be784;
        }
    }
    ctx->pc = 0x4BE7B0u;
label_4be7b0:
    // 0x4be7b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4be7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4be7b4:
    // 0x4be7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4be7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4be7b8:
    // 0x4be7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4be7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4be7bc:
    // 0x4be7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4be7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4be7c0:
    // 0x4be7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be7c4:
    // 0x4be7c4: 0x3e00008  jr          $ra
label_4be7c8:
    if (ctx->pc == 0x4BE7C8u) {
        ctx->pc = 0x4BE7C8u;
            // 0x4be7c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BE7CCu;
        goto label_4be7cc;
    }
    ctx->pc = 0x4BE7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE7C4u;
            // 0x4be7c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE7CCu;
label_4be7cc:
    // 0x4be7cc: 0x0  nop
    ctx->pc = 0x4be7ccu;
    // NOP
}
