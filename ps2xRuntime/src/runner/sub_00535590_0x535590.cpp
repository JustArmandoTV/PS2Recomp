#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535590
// Address: 0x535590 - 0x535620
void sub_00535590_0x535590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535590_0x535590");
#endif

    ctx->pc = 0x535590u;

    // 0x535590: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x535590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x535594: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x535594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x535598: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x535598u;
    {
        const bool branch_taken_0x535598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x53559Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535598u;
            // 0x53559c: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535598) {
            ctx->pc = 0x5355E0u;
            goto label_5355e0;
        }
    }
    ctx->pc = 0x5355A0u;
    // 0x5355a0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x5355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x5355a4: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x5355A4u;
    {
        const bool branch_taken_0x5355a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5355a4) {
            ctx->pc = 0x5355A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5355A4u;
            // 0x5355a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5355D8u;
            goto label_5355d8;
        }
    }
    ctx->pc = 0x5355ACu;
    // 0x5355ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5355acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5355b0: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x5355B0u;
    {
        const bool branch_taken_0x5355b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5355b0) {
            ctx->pc = 0x5355B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5355B0u;
            // 0x5355b4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5355D0u;
            goto label_5355d0;
        }
    }
    ctx->pc = 0x5355B8u;
    // 0x5355b8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x5355B8u;
    {
        const bool branch_taken_0x5355b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5355b8) {
            ctx->pc = 0x5355BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5355B8u;
            // 0x5355bc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5355C8u;
            goto label_5355c8;
        }
    }
    ctx->pc = 0x5355C0u;
    // 0x5355c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x5355C0u;
    {
        const bool branch_taken_0x5355c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5355C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5355C0u;
            // 0x5355c4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5355c0) {
            ctx->pc = 0x5355ECu;
            goto label_5355ec;
        }
    }
    ctx->pc = 0x5355C8u;
label_5355c8:
    // 0x5355c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x5355C8u;
    {
        const bool branch_taken_0x5355c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5355CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5355C8u;
            // 0x5355cc: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5355c8) {
            ctx->pc = 0x5355F0u;
            goto label_5355f0;
        }
    }
    ctx->pc = 0x5355D0u;
label_5355d0:
    // 0x5355d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5355D0u;
    {
        const bool branch_taken_0x5355d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5355D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5355D0u;
            // 0x5355d4: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5355d0) {
            ctx->pc = 0x5355F0u;
            goto label_5355f0;
        }
    }
    ctx->pc = 0x5355D8u;
label_5355d8:
    // 0x5355d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x5355D8u;
    {
        const bool branch_taken_0x5355d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5355DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5355D8u;
            // 0x5355dc: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5355d8) {
            ctx->pc = 0x5355F0u;
            goto label_5355f0;
        }
    }
    ctx->pc = 0x5355E0u;
label_5355e0:
    // 0x5355e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x5355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x5355e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5355E4u;
    {
        const bool branch_taken_0x5355e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5355E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5355E4u;
            // 0x5355e8: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5355e4) {
            ctx->pc = 0x5355F0u;
            goto label_5355f0;
        }
    }
    ctx->pc = 0x5355ECu;
label_5355ec:
    // 0x5355ec: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x5355ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
label_5355f0:
    // 0x5355f0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x5355f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x5355f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5355f8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5355F8u;
    {
        const bool branch_taken_0x5355f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5355f8) {
            ctx->pc = 0x5355FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5355F8u;
            // 0x5355fc: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53560Cu;
            goto label_53560c;
        }
    }
    ctx->pc = 0x535600u;
    // 0x535600: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x535600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x535604: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x535604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x535608: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x535608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_53560c:
    // 0x53560c: 0x3e00008  jr          $ra
    ctx->pc = 0x53560Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535614u;
    // 0x535614: 0x0  nop
    ctx->pc = 0x535614u;
    // NOP
    // 0x535618: 0x0  nop
    ctx->pc = 0x535618u;
    // NOP
    // 0x53561c: 0x0  nop
    ctx->pc = 0x53561cu;
    // NOP
}
