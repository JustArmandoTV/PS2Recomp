#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001601C0
// Address: 0x1601c0 - 0x160280
void sub_001601C0_0x1601c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001601C0_0x1601c0");
#endif

    switch (ctx->pc) {
        case 0x1601f8u: goto label_1601f8;
        case 0x160250u: goto label_160250;
        default: break;
    }

    ctx->pc = 0x1601c0u;

    // 0x1601c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1601c4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1601c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1601c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1601cc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1601ccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1601d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1601d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1601d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1601d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601d8: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x1601d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1601dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1601dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601e0: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1601e4: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1601E4u;
    {
        const bool branch_taken_0x1601e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1601E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1601E4u;
            // 0x1601e8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601e4) {
            ctx->pc = 0x160228u;
            goto label_160228;
        }
    }
    ctx->pc = 0x1601ECu;
    // 0x1601ec: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1601f0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1601f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601f4: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_1601f8:
    // 0x1601f8: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x1601f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1601fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1601FCu;
    {
        const bool branch_taken_0x1601fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1601FCu;
            // 0x160200: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601fc) {
            ctx->pc = 0x160210u;
            goto label_160210;
        }
    }
    ctx->pc = 0x160204u;
    // 0x160204: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x160204u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x160208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160208u;
    {
        const bool branch_taken_0x160208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160208u;
            // 0x16020c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160208) {
            ctx->pc = 0x160220u;
            goto label_160220;
        }
    }
    ctx->pc = 0x160210u;
label_160210:
    // 0x160210: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x160210u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160214: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x160214u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x160218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16021c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16021cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160220:
    // 0x160220: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x160220u;
    {
        const bool branch_taken_0x160220 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x160220) {
            ctx->pc = 0x160224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160220u;
            // 0x160224: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1601F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1601f8;
        }
    }
    ctx->pc = 0x160228u;
label_160228:
    // 0x160228: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x160228u;
    {
        const bool branch_taken_0x160228 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x160228) {
            ctx->pc = 0x16022Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160228u;
            // 0x16022c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160248u;
            goto label_160248;
        }
    }
    ctx->pc = 0x160230u;
    // 0x160230: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x160234: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x160234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160238: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x160238u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16023c: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16023Cu;
    {
        const bool branch_taken_0x16023c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16023c) {
            ctx->pc = 0x160240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16023Cu;
            // 0x160240: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160264u;
            goto label_160264;
        }
    }
    ctx->pc = 0x160244u;
    // 0x160244: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x160244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160248:
    // 0x160248: 0xc05830c  jal         func_160C30
    ctx->pc = 0x160248u;
    SET_GPR_U32(ctx, 31, 0x160250u);
    ctx->pc = 0x16024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160248u;
            // 0x16024c: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C30u;
    if (runtime->hasFunction(0x160C30u)) {
        auto targetFn = runtime->lookupFunction(0x160C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160250u; }
        if (ctx->pc != 0x160250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C30_0x160c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160250u; }
        if (ctx->pc != 0x160250u) { return; }
    }
    ctx->pc = 0x160250u;
label_160250:
    // 0x160250: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x160250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x160254: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x160254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x160258: 0x90635988  lbu         $v1, 0x5988($v1)
    ctx->pc = 0x160258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22920)));
    // 0x16025c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16025Cu;
    {
        const bool branch_taken_0x16025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16025Cu;
            // 0x160260: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16025c) {
            ctx->pc = 0x160270u;
            goto label_160270;
        }
    }
    ctx->pc = 0x160264u;
label_160264:
    // 0x160264: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x160264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x160268: 0x90635990  lbu         $v1, 0x5990($v1)
    ctx->pc = 0x160268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22928)));
    // 0x16026c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x16026cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_160270:
    // 0x160270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160278: 0x3e00008  jr          $ra
    ctx->pc = 0x160278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160278u;
            // 0x16027c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160280u;
}
