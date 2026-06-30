#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160560
// Address: 0x160560 - 0x160620
void sub_00160560_0x160560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160560_0x160560");
#endif

    switch (ctx->pc) {
        case 0x160598u: goto label_160598;
        case 0x1605f0u: goto label_1605f0;
        default: break;
    }

    ctx->pc = 0x160560u;

    // 0x160560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160564: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x160564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16056c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x16056cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x160570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160574: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x160574u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160578: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x16057c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16057cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160580: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x160580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x160584: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x160584u;
    {
        const bool branch_taken_0x160584 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x160588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160584u;
            // 0x160588: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160584) {
            ctx->pc = 0x1605C8u;
            goto label_1605c8;
        }
    }
    ctx->pc = 0x16058Cu;
    // 0x16058c: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160590: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x160590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160594: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_160598:
    // 0x160598: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x160598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16059c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16059Cu;
    {
        const bool branch_taken_0x16059c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16059Cu;
            // 0x1605a0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16059c) {
            ctx->pc = 0x1605B0u;
            goto label_1605b0;
        }
    }
    ctx->pc = 0x1605A4u;
    // 0x1605a4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1605a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1605a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1605A8u;
    {
        const bool branch_taken_0x1605a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1605ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1605A8u;
            // 0x1605ac: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605a8) {
            ctx->pc = 0x1605C0u;
            goto label_1605c0;
        }
    }
    ctx->pc = 0x1605B0u;
label_1605b0:
    // 0x1605b0: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x1605b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605b4: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x1605b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1605b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1605b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1605bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1605c0:
    // 0x1605c0: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1605C0u;
    {
        const bool branch_taken_0x1605c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1605c0) {
            ctx->pc = 0x1605C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1605C0u;
            // 0x1605c4: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_160598;
        }
    }
    ctx->pc = 0x1605C8u;
label_1605c8:
    // 0x1605c8: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1605C8u;
    {
        const bool branch_taken_0x1605c8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605c8) {
            ctx->pc = 0x1605CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1605C8u;
            // 0x1605cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1605E8u;
            goto label_1605e8;
        }
    }
    ctx->pc = 0x1605D0u;
    // 0x1605d0: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x1605d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1605d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1605d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1605d8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1605d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1605dc: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1605DCu;
    {
        const bool branch_taken_0x1605dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1605dc) {
            ctx->pc = 0x1605E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1605DCu;
            // 0x1605e0: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160604u;
            goto label_160604;
        }
    }
    ctx->pc = 0x1605E4u;
    // 0x1605e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1605e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1605e8:
    // 0x1605e8: 0xc058350  jal         func_160D40
    ctx->pc = 0x1605E8u;
    SET_GPR_U32(ctx, 31, 0x1605F0u);
    ctx->pc = 0x1605ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1605E8u;
            // 0x1605ec: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D40u;
    if (runtime->hasFunction(0x160D40u)) {
        auto targetFn = runtime->lookupFunction(0x160D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605F0u; }
        if (ctx->pc != 0x1605F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160D40_0x160d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1605F0u; }
        if (ctx->pc != 0x1605F0u) { return; }
    }
    ctx->pc = 0x1605F0u;
label_1605f0:
    // 0x1605f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1605f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1605f4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1605f8: 0x90635978  lbu         $v1, 0x5978($v1)
    ctx->pc = 0x1605f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22904)));
    // 0x1605fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1605FCu;
    {
        const bool branch_taken_0x1605fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1605FCu;
            // 0x160600: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605fc) {
            ctx->pc = 0x160610u;
            goto label_160610;
        }
    }
    ctx->pc = 0x160604u;
label_160604:
    // 0x160604: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x160604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x160608: 0x90635980  lbu         $v1, 0x5980($v1)
    ctx->pc = 0x160608u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22912)));
    // 0x16060c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x16060cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_160610:
    // 0x160610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160618: 0x3e00008  jr          $ra
    ctx->pc = 0x160618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160618u;
            // 0x16061c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160620u;
}
