#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335230
// Address: 0x335230 - 0x3352f0
void sub_00335230_0x335230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335230_0x335230");
#endif

    switch (ctx->pc) {
        case 0x335268u: goto label_335268;
        case 0x3352c0u: goto label_3352c0;
        default: break;
    }

    ctx->pc = 0x335230u;

    // 0x335230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335234: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x335234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33523c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x33523cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x335240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335244: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x335244u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335248: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x335248u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33524c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33524cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335250: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x335250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x335254: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x335254u;
    {
        const bool branch_taken_0x335254 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x335258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335254u;
            // 0x335258: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335254) {
            ctx->pc = 0x335298u;
            goto label_335298;
        }
    }
    ctx->pc = 0x33525Cu;
    // 0x33525c: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x33525cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x335260: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x335260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335264: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x335264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_335268:
    // 0x335268: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x335268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x33526c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33526Cu;
    {
        const bool branch_taken_0x33526c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x335270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33526Cu;
            // 0x335270: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33526c) {
            ctx->pc = 0x335280u;
            goto label_335280;
        }
    }
    ctx->pc = 0x335274u;
    // 0x335274: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x335274u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x335278: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335278u;
    {
        const bool branch_taken_0x335278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335278u;
            // 0x33527c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335278) {
            ctx->pc = 0x335290u;
            goto label_335290;
        }
    }
    ctx->pc = 0x335280u;
label_335280:
    // 0x335280: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x335280u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335284: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x335284u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x335288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33528c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33528cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335290:
    // 0x335290: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x335290u;
    {
        const bool branch_taken_0x335290 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x335290) {
            ctx->pc = 0x335294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335290u;
            // 0x335294: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x335268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_335268;
        }
    }
    ctx->pc = 0x335298u;
label_335298:
    // 0x335298: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x335298u;
    {
        const bool branch_taken_0x335298 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x335298) {
            ctx->pc = 0x33529Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x335298u;
            // 0x33529c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3352B8u;
            goto label_3352b8;
        }
    }
    ctx->pc = 0x3352A0u;
    // 0x3352a0: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x3352a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x3352a4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3352a8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x3352a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3352ac: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3352ACu;
    {
        const bool branch_taken_0x3352ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3352ac) {
            ctx->pc = 0x3352B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3352ACu;
            // 0x3352b0: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3352D4u;
            goto label_3352d4;
        }
    }
    ctx->pc = 0x3352B4u;
    // 0x3352b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3352b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3352b8:
    // 0x3352b8: 0xc0cd5ac  jal         func_3356B0
    ctx->pc = 0x3352B8u;
    SET_GPR_U32(ctx, 31, 0x3352C0u);
    ctx->pc = 0x3352BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3352B8u;
            // 0x3352bc: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3356B0u;
    if (runtime->hasFunction(0x3356B0u)) {
        auto targetFn = runtime->lookupFunction(0x3356B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3352C0u; }
        if (ctx->pc != 0x3352C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003356B0_0x3356b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3352C0u; }
        if (ctx->pc != 0x3352C0u) { return; }
    }
    ctx->pc = 0x3352C0u;
label_3352c0:
    // 0x3352c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3352c4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3352c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3352c8: 0x90630750  lbu         $v1, 0x750($v1)
    ctx->pc = 0x3352c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1872)));
    // 0x3352cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3352CCu;
    {
        const bool branch_taken_0x3352cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3352D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3352CCu;
            // 0x3352d0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352cc) {
            ctx->pc = 0x3352E0u;
            goto label_3352e0;
        }
    }
    ctx->pc = 0x3352D4u;
label_3352d4:
    // 0x3352d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3352d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3352d8: 0x90630758  lbu         $v1, 0x758($v1)
    ctx->pc = 0x3352d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1880)));
    // 0x3352dc: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x3352dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_3352e0:
    // 0x3352e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3352e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3352e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3352e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3352e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3352E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3352ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3352E8u;
            // 0x3352ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3352F0u;
}
