#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003355C0
// Address: 0x3355c0 - 0x335680
void sub_003355C0_0x3355c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003355C0_0x3355c0");
#endif

    switch (ctx->pc) {
        case 0x3355f8u: goto label_3355f8;
        case 0x335650u: goto label_335650;
        default: break;
    }

    ctx->pc = 0x3355c0u;

    // 0x3355c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3355c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3355c4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3355c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3355c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3355cc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x3355ccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3355d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3355d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3355d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3355d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355d8: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x3355d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3355dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3355dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355e0: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x3355e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3355e4: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3355E4u;
    {
        const bool branch_taken_0x3355e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3355E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3355E4u;
            // 0x3355e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3355e4) {
            ctx->pc = 0x335628u;
            goto label_335628;
        }
    }
    ctx->pc = 0x3355ECu;
    // 0x3355ec: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x3355ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3355f0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3355f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355f4: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x3355f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_3355f8:
    // 0x3355f8: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x3355f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3355fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3355FCu;
    {
        const bool branch_taken_0x3355fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3355FCu;
            // 0x335600: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3355fc) {
            ctx->pc = 0x335610u;
            goto label_335610;
        }
    }
    ctx->pc = 0x335604u;
    // 0x335604: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x335604u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x335608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335608u;
    {
        const bool branch_taken_0x335608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335608u;
            // 0x33560c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335608) {
            ctx->pc = 0x335620u;
            goto label_335620;
        }
    }
    ctx->pc = 0x335610u;
label_335610:
    // 0x335610: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x335610u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335614: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x335614u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x335618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33561c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33561cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335620:
    // 0x335620: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x335620u;
    {
        const bool branch_taken_0x335620 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x335620) {
            ctx->pc = 0x335624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335620u;
            // 0x335624: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3355F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3355f8;
        }
    }
    ctx->pc = 0x335628u;
label_335628:
    // 0x335628: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x335628u;
    {
        const bool branch_taken_0x335628 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x335628) {
            ctx->pc = 0x33562Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335628u;
            // 0x33562c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335648u;
            goto label_335648;
        }
    }
    ctx->pc = 0x335630u;
    // 0x335630: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x335630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x335634: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x335634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x335638: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x335638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33563c: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33563Cu;
    {
        const bool branch_taken_0x33563c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33563c) {
            ctx->pc = 0x335640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33563Cu;
            // 0x335640: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335664u;
            goto label_335664;
        }
    }
    ctx->pc = 0x335644u;
    // 0x335644: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x335644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_335648:
    // 0x335648: 0xc0cd5ec  jal         func_3357B0
    ctx->pc = 0x335648u;
    SET_GPR_U32(ctx, 31, 0x335650u);
    ctx->pc = 0x33564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x335648u;
            // 0x33564c: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3357B0u;
    if (runtime->hasFunction(0x3357B0u)) {
        auto targetFn = runtime->lookupFunction(0x3357B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335650u; }
        if (ctx->pc != 0x335650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003357B0_0x3357b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x335650u; }
        if (ctx->pc != 0x335650u) { return; }
    }
    ctx->pc = 0x335650u;
label_335650:
    // 0x335650: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x335650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x335654: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x335658: 0x90630740  lbu         $v1, 0x740($v1)
    ctx->pc = 0x335658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1856)));
    // 0x33565c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33565Cu;
    {
        const bool branch_taken_0x33565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33565Cu;
            // 0x335660: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33565c) {
            ctx->pc = 0x335670u;
            goto label_335670;
        }
    }
    ctx->pc = 0x335664u;
label_335664:
    // 0x335664: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x335664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x335668: 0x90630748  lbu         $v1, 0x748($v1)
    ctx->pc = 0x335668u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1864)));
    // 0x33566c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x33566cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_335670:
    // 0x335670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335678: 0x3e00008  jr          $ra
    ctx->pc = 0x335678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33567Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335678u;
            // 0x33567c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335680u;
}
