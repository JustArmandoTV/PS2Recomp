#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF5F0
// Address: 0x1af5f0 - 0x1af6b8
void sub_001AF5F0_0x1af5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF5F0_0x1af5f0");
#endif

    switch (ctx->pc) {
        case 0x1af60cu: goto label_1af60c;
        case 0x1af640u: goto label_1af640;
        case 0x1af688u: goto label_1af688;
        default: break;
    }

    ctx->pc = 0x1af5f0u;

    // 0x1af5f0: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1af5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1af5f4: 0x24a31db0  addiu       $v1, $a1, 0x1DB0
    ctx->pc = 0x1af5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
    // 0x1af5f8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1af5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1af5fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af600: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1af600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1af604: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF604u;
    {
        const bool branch_taken_0x1af604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af604) {
            ctx->pc = 0x1AF608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF604u;
            // 0x1af608: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF60Cu;
label_1af60c:
    // 0x1af60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF60Cu;
            // 0x1af610: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF614u;
    // 0x1af614: 0x0  nop
    ctx->pc = 0x1af614u;
    // NOP
label_1af618:
    // 0x1af618: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF618u;
    {
        const bool branch_taken_0x1af618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF618u;
            // 0x1af61c: 0x3c02006e  lui         $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af618) {
            ctx->pc = 0x1AF630u;
            goto label_1af630;
        }
    }
    ctx->pc = 0x1AF620u;
    // 0x1af620: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1af624: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AF624u;
    {
        const bool branch_taken_0x1af624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af624) {
            ctx->pc = 0x1AF6ACu;
            goto label_1af6ac;
        }
    }
    ctx->pc = 0x1AF62Cu;
    // 0x1af62c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
label_1af630:
    // 0x1af630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1af630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af634: 0x24441dd8  addiu       $a0, $v0, 0x1DD8
    ctx->pc = 0x1af634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7640));
    // 0x1af638: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af63c: 0x0  nop
    ctx->pc = 0x1af63cu;
    // NOP
label_1af640:
    // 0x1af640: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1AF640u;
    {
        const bool branch_taken_0x1af640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF640u;
            // 0x1af644: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af640) {
            ctx->pc = 0x1AF60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af60c;
        }
    }
    ctx->pc = 0x1AF648u;
    // 0x1af648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1af64c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1af64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1af650: 0x0  nop
    ctx->pc = 0x1af650u;
    // NOP
    // 0x1af654: 0x0  nop
    ctx->pc = 0x1af654u;
    // NOP
    // 0x1af658: 0x0  nop
    ctx->pc = 0x1af658u;
    // NOP
    // 0x1af65c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AF65Cu;
    {
        const bool branch_taken_0x1af65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af65c) {
            ctx->pc = 0x1AF660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF65Cu;
            // 0x1af660: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af640;
        }
    }
    ctx->pc = 0x1AF664u;
    // 0x1af664: 0x24a21db0  addiu       $v0, $a1, 0x1DB0
    ctx->pc = 0x1af664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
    // 0x1af668: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1af668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1af66c: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AF66Cu;
    {
        const bool branch_taken_0x1af66c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AF670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF66Cu;
            // 0x1af670: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af66c) {
            ctx->pc = 0x1AF6ACu;
            goto label_1af6ac;
        }
    }
    ctx->pc = 0x1AF674u;
    // 0x1af674: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1af678: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1af678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af67c: 0x24441de0  addiu       $a0, $v0, 0x1DE0
    ctx->pc = 0x1af67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
    // 0x1af680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af684: 0x0  nop
    ctx->pc = 0x1af684u;
    // NOP
label_1af688:
    // 0x1af688: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AF688u;
    {
        const bool branch_taken_0x1af688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF688u;
            // 0x1af68c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af688) {
            ctx->pc = 0x1AF60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af60c;
        }
    }
    ctx->pc = 0x1AF690u;
    // 0x1af690: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1af690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1af694: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1af694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1af698: 0x0  nop
    ctx->pc = 0x1af698u;
    // NOP
    // 0x1af69c: 0x0  nop
    ctx->pc = 0x1af69cu;
    // NOP
    // 0x1af6a0: 0x0  nop
    ctx->pc = 0x1af6a0u;
    // NOP
    // 0x1af6a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AF6A4u;
    {
        const bool branch_taken_0x1af6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af6a4) {
            ctx->pc = 0x1AF6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6A4u;
            // 0x1af6a8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF6ACu;
label_1af6ac:
    // 0x1af6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6ACu;
            // 0x1af6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF6B4u;
    // 0x1af6b4: 0x0  nop
    ctx->pc = 0x1af6b4u;
    // NOP
}
