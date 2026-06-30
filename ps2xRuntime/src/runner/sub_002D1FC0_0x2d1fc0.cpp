#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1FC0
// Address: 0x2d1fc0 - 0x2d2090
void sub_002D1FC0_0x2d1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1FC0_0x2d1fc0");
#endif

    switch (ctx->pc) {
        case 0x2d1fd0u: goto label_2d1fd0;
        case 0x2d2008u: goto label_2d2008;
        case 0x2d2060u: goto label_2d2060;
        default: break;
    }

    ctx->pc = 0x2d1fc0u;

    // 0x2d1fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FC0u;
            // 0x2d1fc4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1FC8u;
    // 0x2d1fc8: 0x0  nop
    ctx->pc = 0x2d1fc8u;
    // NOP
    // 0x2d1fcc: 0x0  nop
    ctx->pc = 0x2d1fccu;
    // NOP
label_2d1fd0:
    // 0x2d1fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1fd4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2d1fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1fdc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x2d1fdcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d1fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1fe4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2d1fe4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1fe8: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x2d1fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d1fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ff0: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x2d1ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2d1ff4: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D1FF4u;
    {
        const bool branch_taken_0x2d1ff4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1FF4u;
            // 0x2d1ff8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ff4) {
            ctx->pc = 0x2D2038u;
            goto label_2d2038;
        }
    }
    ctx->pc = 0x2D1FFCu;
    // 0x2d1ffc: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2d1ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d2000: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d2000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2004: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x2d2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_2d2008:
    // 0x2d2008: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x2d2008u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d200c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D200Cu;
    {
        const bool branch_taken_0x2d200c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D200Cu;
            // 0x2d2010: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d200c) {
            ctx->pc = 0x2D2020u;
            goto label_2d2020;
        }
    }
    ctx->pc = 0x2D2014u;
    // 0x2d2014: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x2d2014u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d2018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2018u;
    {
        const bool branch_taken_0x2d2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2018u;
            // 0x2d201c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2018) {
            ctx->pc = 0x2D2030u;
            goto label_2d2030;
        }
    }
    ctx->pc = 0x2D2020u;
label_2d2020:
    // 0x2d2020: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x2d2020u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2024: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x2d2024u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2d2028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d202c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d202cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2030:
    // 0x2d2030: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D2030u;
    {
        const bool branch_taken_0x2d2030 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2030) {
            ctx->pc = 0x2D2034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2030u;
            // 0x2d2034: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2008;
        }
    }
    ctx->pc = 0x2D2038u;
label_2d2038:
    // 0x2d2038: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2038u;
    {
        const bool branch_taken_0x2d2038 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2038) {
            ctx->pc = 0x2D203Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2038u;
            // 0x2d203c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2058u;
            goto label_2d2058;
        }
    }
    ctx->pc = 0x2D2040u;
    // 0x2d2040: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x2d2040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2d2044: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d2044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d2048: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d2048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d204c: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D204Cu;
    {
        const bool branch_taken_0x2d204c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d204c) {
            ctx->pc = 0x2D2050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D204Cu;
            // 0x2d2050: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2074u;
            goto label_2d2074;
        }
    }
    ctx->pc = 0x2D2054u;
    // 0x2d2054: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d2054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d2058:
    // 0x2d2058: 0xc0b63b8  jal         func_2D8EE0
    ctx->pc = 0x2D2058u;
    SET_GPR_U32(ctx, 31, 0x2D2060u);
    ctx->pc = 0x2D205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2058u;
            // 0x2d205c: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8EE0u;
    if (runtime->hasFunction(0x2D8EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2060u; }
        if (ctx->pc != 0x2D2060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8EE0_0x2d8ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2060u; }
        if (ctx->pc != 0x2D2060u) { return; }
    }
    ctx->pc = 0x2D2060u;
label_2d2060:
    // 0x2d2060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d2060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d2064: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d2064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d2068: 0x9063e370  lbu         $v1, -0x1C90($v1)
    ctx->pc = 0x2d2068u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959984)));
    // 0x2d206c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D206Cu;
    {
        const bool branch_taken_0x2d206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D206Cu;
            // 0x2d2070: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d206c) {
            ctx->pc = 0x2D2080u;
            goto label_2d2080;
        }
    }
    ctx->pc = 0x2D2074u;
label_2d2074:
    // 0x2d2074: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d2074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d2078: 0x9063e378  lbu         $v1, -0x1C88($v1)
    ctx->pc = 0x2d2078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x2d207c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2d207cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_2d2080:
    // 0x2d2080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d2080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2088: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2088u;
            // 0x2d208c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2090u;
}
