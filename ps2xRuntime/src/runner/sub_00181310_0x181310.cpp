#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181310
// Address: 0x181310 - 0x181390
void sub_00181310_0x181310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181310_0x181310");
#endif

    switch (ctx->pc) {
        case 0x181320u: goto label_181320;
        default: break;
    }

    ctx->pc = 0x181310u;

    // 0x181310: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x181310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181314u;
    {
        const bool branch_taken_0x181314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181314u;
            // 0x181318: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181314) {
            ctx->pc = 0x18132Cu;
            goto label_18132c;
        }
    }
    ctx->pc = 0x18131Cu;
    // 0x18131c: 0x0  nop
    ctx->pc = 0x18131cu;
    // NOP
label_181320:
    // 0x181320: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x181320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x181324: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x181328: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x181328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18132c:
    // 0x18132c: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x18132cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x181330: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x181334: 0x24e3ffd0  addiu       $v1, $a3, -0x30
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x181338: 0x24e4ff9f  addiu       $a0, $a3, -0x61
    ctx->pc = 0x181338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x18133c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x181340: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x181340u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x181344: 0x2c840006  sltiu       $a0, $a0, 0x6
    ctx->pc = 0x181344u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x181348: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x181348u;
    {
        const bool branch_taken_0x181348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181348u;
            // 0x18134c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181348) {
            ctx->pc = 0x181320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181320;
        }
    }
    ctx->pc = 0x181350u;
    // 0x181350: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181350u;
    {
        const bool branch_taken_0x181350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181350) {
            ctx->pc = 0x181354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181350u;
            // 0x181354: 0x24e2ffbf  addiu       $v0, $a3, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967231));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181368u;
            goto label_181368;
        }
    }
    ctx->pc = 0x181358u;
    // 0x181358: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x181358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x18135c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x18135cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x181360: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x181360u;
    {
        const bool branch_taken_0x181360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181360u;
            // 0x181364: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181360) {
            ctx->pc = 0x181320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181320;
        }
    }
    ctx->pc = 0x181368u;
label_181368:
    // 0x181368: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x181368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18136c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18136Cu;
    {
        const bool branch_taken_0x18136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18136c) {
            ctx->pc = 0x181370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18136Cu;
            // 0x181370: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181388u;
            goto label_181388;
        }
    }
    ctx->pc = 0x181374u;
    // 0x181374: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x181374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x181378: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x18137c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x18137Cu;
    {
        const bool branch_taken_0x18137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18137Cu;
            // 0x181380: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18137c) {
            ctx->pc = 0x181320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181320;
        }
    }
    ctx->pc = 0x181384u;
    // 0x181384: 0x0  nop
    ctx->pc = 0x181384u;
    // NOP
label_181388:
    // 0x181388: 0x3e00008  jr          $ra
    ctx->pc = 0x181388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181388u;
            // 0x18138c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181390u;
}
