#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001303E8
// Address: 0x1303e8 - 0x1304d8
void sub_001303E8_0x1303e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001303E8_0x1303e8");
#endif

    switch (ctx->pc) {
        case 0x130404u: goto label_130404;
        case 0x13040cu: goto label_13040c;
        case 0x130444u: goto label_130444;
        case 0x130450u: goto label_130450;
        case 0x130474u: goto label_130474;
        case 0x1304a8u: goto label_1304a8;
        default: break;
    }

    ctx->pc = 0x1303e8u;

    // 0x1303e8: 0x80ad0000  lb          $t5, 0x0($a1)
    ctx->pc = 0x1303e8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1303ec: 0x240f005e  addiu       $t7, $zero, 0x5E
    ctx->pc = 0x1303ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1303f0: 0x15af0036  bne         $t5, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1303F0u;
    {
        const bool branch_taken_0x1303f0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1303F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303F0u;
            // 0x1303f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303f0) {
            ctx->pc = 0x1304CCu;
            goto label_1304cc;
        }
    }
    ctx->pc = 0x1303F8u;
    // 0x1303f8: 0x80ad0000  lb          $t5, 0x0($a1)
    ctx->pc = 0x1303f8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1303fc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130400: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_130404:
    // 0x130404: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x130404u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130408: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x130408u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_13040c:
    // 0x13040c: 0xa1eb0000  sb          $t3, 0x0($t7)
    ctx->pc = 0x13040cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x130410: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x130410u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x130414: 0x29cf0100  slti        $t7, $t6, 0x100
    ctx->pc = 0x130414u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x130418: 0x0  nop
    ctx->pc = 0x130418u;
    // NOP
    // 0x13041c: 0x0  nop
    ctx->pc = 0x13041cu;
    // NOP
    // 0x130420: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130420u;
    {
        const bool branch_taken_0x130420 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x130424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130420u;
            // 0x130424: 0x8e7821  addu        $t7, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130420) {
            ctx->pc = 0x13040Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13040c;
        }
    }
    ctx->pc = 0x130428u;
    // 0x130428: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x130428u;
    {
        const bool branch_taken_0x130428 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x13042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130428u;
            // 0x13042c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130428) {
            ctx->pc = 0x130474u;
            goto label_130474;
        }
    }
    ctx->pc = 0x130430u;
    // 0x130430: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x130430u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130434: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x130434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x130438: 0x1eb5823  subu        $t3, $t7, $t3
    ctx->pc = 0x130438u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x13043c: 0x2408005d  addiu       $t0, $zero, 0x5D
    ctx->pc = 0x13043cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x130440: 0x240a005d  addiu       $t2, $zero, 0x5D
    ctx->pc = 0x130440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_130444:
    // 0x130444: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x130448: 0xa1eb0000  sb          $t3, 0x0($t7)
    ctx->pc = 0x130448u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x13044c: 0x80ac0000  lb          $t4, 0x0($a1)
    ctx->pc = 0x13044cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_130450:
    // 0x130450: 0x1189000e  beq         $t4, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x130450u;
    {
        const bool branch_taken_0x130450 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 9));
        ctx->pc = 0x130454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130450u;
            // 0x130454: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130450) {
            ctx->pc = 0x13048Cu;
            goto label_13048c;
        }
    }
    ctx->pc = 0x130458u;
    // 0x130458: 0x298f002e  slti        $t7, $t4, 0x2E
    ctx->pc = 0x130458u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x13045c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x13045Cu;
    {
        const bool branch_taken_0x13045c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x13045c) {
            ctx->pc = 0x13047Cu;
            goto label_13047c;
        }
    }
    ctx->pc = 0x130464u;
    // 0x130464: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x130464u;
    {
        const bool branch_taken_0x130464 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x130468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130464u;
            // 0x130468: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130464) {
            ctx->pc = 0x130474u;
            goto label_130474;
        }
    }
    ctx->pc = 0x13046Cu;
    // 0x13046c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x13046Cu;
    {
        const bool branch_taken_0x13046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13046Cu;
            // 0x130470: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13046c) {
            ctx->pc = 0x130444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130444;
        }
    }
    ctx->pc = 0x130474u;
label_130474:
    // 0x130474: 0x3e00008  jr          $ra
    ctx->pc = 0x130474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13047Cu;
label_13047c:
    // 0x13047c: 0x1188fffd  beq         $t4, $t0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x13047Cu;
    {
        const bool branch_taken_0x13047c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 8));
        ctx->pc = 0x130480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13047Cu;
            // 0x130480: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13047c) {
            ctx->pc = 0x130474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130474;
        }
    }
    ctx->pc = 0x130484u;
    // 0x130484: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x130484u;
    {
        const bool branch_taken_0x130484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130484u;
            // 0x130488: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130484) {
            ctx->pc = 0x130444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130444;
        }
    }
    ctx->pc = 0x13048Cu;
label_13048c:
    // 0x13048c: 0x80ac0000  lb          $t4, 0x0($a1)
    ctx->pc = 0x13048cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130490: 0x118a0003  beq         $t4, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x130490u;
    {
        const bool branch_taken_0x130490 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        ctx->pc = 0x130494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130490u;
            // 0x130494: 0x18d782a  slt         $t7, $t4, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130490) {
            ctx->pc = 0x1304A0u;
            goto label_1304a0;
        }
    }
    ctx->pc = 0x130498u;
    // 0x130498: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x130498u;
    {
        const bool branch_taken_0x130498 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x130498) {
            ctx->pc = 0x13049Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130498u;
            // 0x13049c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1304A8u;
            goto label_1304a8;
        }
    }
    ctx->pc = 0x1304A0u;
label_1304a0:
    // 0x1304a0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1304A0u;
    {
        const bool branch_taken_0x1304a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304A0u;
            // 0x1304a4: 0x240d002d  addiu       $t5, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304a0) {
            ctx->pc = 0x130444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130444;
        }
    }
    ctx->pc = 0x1304A8u;
label_1304a8:
    // 0x1304a8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1304a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1304ac: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x1304acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1304b0: 0x1ac702a  slt         $t6, $t5, $t4
    ctx->pc = 0x1304b0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1304b4: 0x0  nop
    ctx->pc = 0x1304b4u;
    // NOP
    // 0x1304b8: 0x0  nop
    ctx->pc = 0x1304b8u;
    // NOP
    // 0x1304bc: 0x15c0fffa  bnez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1304BCu;
    {
        const bool branch_taken_0x1304bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1304C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304BCu;
            // 0x1304c0: 0xa1eb0000  sb          $t3, 0x0($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304bc) {
            ctx->pc = 0x1304A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1304a8;
        }
    }
    ctx->pc = 0x1304C4u;
    // 0x1304c4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1304C4u;
    {
        const bool branch_taken_0x1304c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304C4u;
            // 0x1304c8: 0x80ac0000  lb          $t4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304c4) {
            ctx->pc = 0x130450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130450;
        }
    }
    ctx->pc = 0x1304CCu;
label_1304cc:
    // 0x1304cc: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x1304CCu;
    {
        const bool branch_taken_0x1304cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304CCu;
            // 0x1304d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304cc) {
            ctx->pc = 0x130404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130404;
        }
    }
    ctx->pc = 0x1304D4u;
    // 0x1304d4: 0x0  nop
    ctx->pc = 0x1304d4u;
    // NOP
}
