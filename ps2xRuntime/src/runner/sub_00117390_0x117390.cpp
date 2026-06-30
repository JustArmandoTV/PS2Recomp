#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117390
// Address: 0x117390 - 0x117418
void sub_00117390_0x117390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117390_0x117390");
#endif

    switch (ctx->pc) {
        case 0x1173c0u: goto label_1173c0;
        default: break;
    }

    ctx->pc = 0x117390u;

    // 0x117390: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x117390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117394: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x117398: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x117398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x11739c: 0x2525fa48  addiu       $a1, $t1, -0x5B8
    ctx->pc = 0x11739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965832));
    // 0x1173a0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1173a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1173a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1173a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173a8: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1173a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1173ac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1173acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1173b0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x1173b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1173b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1173B4u;
    {
        const bool branch_taken_0x1173b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173B4u;
            // 0x1173b8: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173b4) {
            ctx->pc = 0x1173C4u;
            goto label_1173c4;
        }
    }
    ctx->pc = 0x1173BCu;
    // 0x1173bc: 0x0  nop
    ctx->pc = 0x1173bcu;
    // NOP
label_1173c0:
    // 0x1173c0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1173c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1173c4:
    // 0x1173c4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1173C4u;
    {
        const bool branch_taken_0x1173c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1173c4) {
            ctx->pc = 0x1173C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1173C4u;
            // 0x1173c8: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1173F0u;
            goto label_1173f0;
        }
    }
    ctx->pc = 0x1173CCu;
    // 0x1173cc: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1173ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1173d0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1173d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1173d4: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x1173d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1173d8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1173d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1173dc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1173dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x1173e0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1173e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1173e4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1173E4u;
    {
        const bool branch_taken_0x1173e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1173e4) {
            ctx->pc = 0x1173E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1173E4u;
            // 0x1173e8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1173C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1173c0;
        }
    }
    ctx->pc = 0x1173ECu;
    // 0x1173ec: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1173ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_1173f0:
    // 0x1173f0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1173F0u;
    {
        const bool branch_taken_0x1173f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173F0u;
            // 0x1173f4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173f0) {
            ctx->pc = 0x1173FCu;
            goto label_1173fc;
        }
    }
    ctx->pc = 0x1173F8u;
    // 0x1173f8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1173f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_1173fc:
    // 0x1173fc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173FCu;
            // 0x117400: 0x2522fa48  addiu       $v0, $t1, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x11740Cu;
            goto label_11740c;
        }
    }
    ctx->pc = 0x117404u;
    // 0x117404: 0x3e00008  jr          $ra
    ctx->pc = 0x117404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117404u;
            // 0x117408: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11740Cu;
label_11740c:
    // 0x11740c: 0x3e00008  jr          $ra
    ctx->pc = 0x11740Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11740Cu;
            // 0x117410: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117414u;
    // 0x117414: 0x0  nop
    ctx->pc = 0x117414u;
    // NOP
}
