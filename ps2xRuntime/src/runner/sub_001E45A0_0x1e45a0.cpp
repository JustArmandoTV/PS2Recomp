#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E45A0
// Address: 0x1e45a0 - 0x1e4660
void sub_001E45A0_0x1e45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E45A0_0x1e45a0");
#endif

    switch (ctx->pc) {
        case 0x1e45ccu: goto label_1e45cc;
        default: break;
    }

    ctx->pc = 0x1e45a0u;

    // 0x1e45a0: 0x90820021  lbu         $v0, 0x21($a0)
    ctx->pc = 0x1e45a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x1e45a4: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1e45a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1e45a8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E45A8u;
    {
        const bool branch_taken_0x1e45a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45a8) {
            ctx->pc = 0x1E45ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45A8u;
            // 0x1e45ac: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E45B8u;
            goto label_1e45b8;
        }
    }
    ctx->pc = 0x1E45B0u;
    // 0x1e45b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E45B0u;
    {
        const bool branch_taken_0x1e45b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45B0u;
            // 0x1e45b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45b0) {
            ctx->pc = 0x1E4658u;
            goto label_1e4658;
        }
    }
    ctx->pc = 0x1E45B8u;
label_1e45b8:
    // 0x1e45b8: 0x5000011  bltz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E45B8u;
    {
        const bool branch_taken_0x1e45b8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x1e45b8) {
            ctx->pc = 0x1E4600u;
            goto label_1e4600;
        }
    }
    ctx->pc = 0x1E45C0u;
    // 0x1e45c0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x1e45c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e45c4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1e45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e45c8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e45cc:
    // 0x1e45cc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1e45ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e45d0: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E45D0u;
    {
        const bool branch_taken_0x1e45d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e45d0) {
            ctx->pc = 0x1E45D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45D0u;
            // 0x1e45d4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E45F4u;
            goto label_1e45f4;
        }
    }
    ctx->pc = 0x1E45D8u;
    // 0x1e45d8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1e45d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1e45dc: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1e45dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1e45e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E45E0u;
    {
        const bool branch_taken_0x1e45e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e45e0) {
            ctx->pc = 0x1E45F0u;
            goto label_1e45f0;
        }
    }
    ctx->pc = 0x1E45E8u;
    // 0x1e45e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E45E8u;
    {
        const bool branch_taken_0x1e45e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45E8u;
            // 0x1e45ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45e8) {
            ctx->pc = 0x1E4604u;
            goto label_1e4604;
        }
    }
    ctx->pc = 0x1E45F0u;
label_1e45f0:
    // 0x1e45f0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1e45f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1e45f4:
    // 0x1e45f4: 0x501fff5  bgez        $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E45F4u;
    {
        const bool branch_taken_0x1e45f4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E45F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45F4u;
            // 0x1e45f8: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45f4) {
            ctx->pc = 0x1E45CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e45cc;
        }
    }
    ctx->pc = 0x1E45FCu;
    // 0x1e45fc: 0x0  nop
    ctx->pc = 0x1e45fcu;
    // NOP
label_1e4600:
    // 0x1e4600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4604:
    // 0x1e4604: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1e4604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1e4608: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1e4608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1e460c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E460Cu;
    {
        const bool branch_taken_0x1e460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e460c) {
            ctx->pc = 0x1E4610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E460Cu;
            // 0x1e4610: 0x90820021  lbu         $v0, 0x21($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E461Cu;
            goto label_1e461c;
        }
    }
    ctx->pc = 0x1E4614u;
    // 0x1e4614: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E4614u;
    {
        const bool branch_taken_0x1e4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4614u;
            // 0x1e4618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4614) {
            ctx->pc = 0x1E4658u;
            goto label_1e4658;
        }
    }
    ctx->pc = 0x1E461Cu;
label_1e461c:
    // 0x1e461c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e4620: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1E4620u;
    {
        const bool branch_taken_0x1e4620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4620) {
            ctx->pc = 0x1E4624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4620u;
            // 0x1e4624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4658u;
            goto label_1e4658;
        }
    }
    ctx->pc = 0x1E4628u;
    // 0x1e4628: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1e4628u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e462c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4630: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1e4630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e4634: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1e4634u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4638: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1e4638u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1e463c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1e463cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4640: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1e4640u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e4644: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1e4644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e4648: 0x90830021  lbu         $v1, 0x21($a0)
    ctx->pc = 0x1e4648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x1e464c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4650: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E4650u;
    {
        const bool branch_taken_0x1e4650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4650u;
            // 0x1e4654: 0xa0830021  sb          $v1, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4650) {
            ctx->pc = 0x1E4658u;
            goto label_1e4658;
        }
    }
    ctx->pc = 0x1E4658u;
label_1e4658:
    // 0x1e4658: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4660u;
}
