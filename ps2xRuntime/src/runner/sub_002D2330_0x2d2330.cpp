#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2330
// Address: 0x2d2330 - 0x2d23f0
void sub_002D2330_0x2d2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2330_0x2d2330");
#endif

    switch (ctx->pc) {
        case 0x2d2368u: goto label_2d2368;
        case 0x2d23c0u: goto label_2d23c0;
        default: break;
    }

    ctx->pc = 0x2d2330u;

    // 0x2d2330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2334: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2d2334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d233c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x2d233cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d2340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2344: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2d2344u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2348: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2d2348u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d234c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d234cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2350: 0x24ab0004  addiu       $t3, $a1, 0x4
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d2354: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D2354u;
    {
        const bool branch_taken_0x2d2354 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2354u;
            // 0x2d2358: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2354) {
            ctx->pc = 0x2D2398u;
            goto label_2d2398;
        }
    }
    ctx->pc = 0x2D235Cu;
    // 0x2d235c: 0x95090000  lhu         $t1, 0x0($t0)
    ctx->pc = 0x2d235cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d2360: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d2360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2364: 0x9544000c  lhu         $a0, 0xC($t2)
    ctx->pc = 0x2d2364u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
label_2d2368:
    // 0x2d2368: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x2d2368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d236c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D236Cu;
    {
        const bool branch_taken_0x2d236c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D236Cu;
            // 0x2d2370: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d236c) {
            ctx->pc = 0x2D2380u;
            goto label_2d2380;
        }
    }
    ctx->pc = 0x2D2374u;
    // 0x2d2374: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x2d2374u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d2378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2378u;
    {
        const bool branch_taken_0x2d2378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2378u;
            // 0x2d237c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2378) {
            ctx->pc = 0x2D2390u;
            goto label_2d2390;
        }
    }
    ctx->pc = 0x2D2380u;
label_2d2380:
    // 0x2d2380: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x2d2380u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2384: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x2d2384u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2d2388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d238c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d238cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2390:
    // 0x2d2390: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D2390u;
    {
        const bool branch_taken_0x2d2390 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2390) {
            ctx->pc = 0x2D2394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2390u;
            // 0x2d2394: 0x9544000c  lhu         $a0, 0xC($t2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2368;
        }
    }
    ctx->pc = 0x2D2398u;
label_2d2398:
    // 0x2d2398: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2398u;
    {
        const bool branch_taken_0x2d2398 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2398) {
            ctx->pc = 0x2D239Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2398u;
            // 0x2d239c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D23B8u;
            goto label_2d23b8;
        }
    }
    ctx->pc = 0x2D23A0u;
    // 0x2d23a0: 0x9584000c  lhu         $a0, 0xC($t4)
    ctx->pc = 0x2d23a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2d23a4: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x2d23a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d23a8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d23a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d23ac: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D23ACu;
    {
        const bool branch_taken_0x2d23ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23ac) {
            ctx->pc = 0x2D23B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23ACu;
            // 0x2d23b0: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D23D4u;
            goto label_2d23d4;
        }
    }
    ctx->pc = 0x2D23B4u;
    // 0x2d23b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d23b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d23b8:
    // 0x2d23b8: 0xc0b63fc  jal         func_2D8FF0
    ctx->pc = 0x2D23B8u;
    SET_GPR_U32(ctx, 31, 0x2D23C0u);
    ctx->pc = 0x2D23BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23B8u;
            // 0x2d23bc: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FF0u;
    if (runtime->hasFunction(0x2D8FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23C0u; }
        if (ctx->pc != 0x2D23C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FF0_0x2d8ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D23C0u; }
        if (ctx->pc != 0x2D23C0u) { return; }
    }
    ctx->pc = 0x2D23C0u;
label_2d23c0:
    // 0x2d23c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d23c4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d23c8: 0x9063e360  lbu         $v1, -0x1CA0($v1)
    ctx->pc = 0x2d23c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x2d23cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D23CCu;
    {
        const bool branch_taken_0x2d23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23CCu;
            // 0x2d23d0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23cc) {
            ctx->pc = 0x2D23E0u;
            goto label_2d23e0;
        }
    }
    ctx->pc = 0x2D23D4u;
label_2d23d4:
    // 0x2d23d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d23d8: 0x9063e368  lbu         $v1, -0x1C98($v1)
    ctx->pc = 0x2d23d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959976)));
    // 0x2d23dc: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2d23dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_2d23e0:
    // 0x2d23e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d23e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d23e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d23e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d23e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D23E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D23ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D23E8u;
            // 0x2d23ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D23F0u;
}
