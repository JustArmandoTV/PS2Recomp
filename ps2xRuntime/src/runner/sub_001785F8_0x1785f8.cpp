#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001785F8
// Address: 0x1785f8 - 0x178658
void sub_001785F8_0x1785f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001785F8_0x1785f8");
#endif

    switch (ctx->pc) {
        case 0x17860cu: goto label_17860c;
        case 0x178620u: goto label_178620;
        default: break;
    }

    ctx->pc = 0x1785f8u;

    // 0x1785f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1785f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1785fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1785fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x178604: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x178604u;
    SET_GPR_U32(ctx, 31, 0x17860Cu);
    ctx->pc = 0x178608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178604u;
            // 0x178608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17860Cu; }
        if (ctx->pc != 0x17860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17860Cu; }
        if (ctx->pc != 0x17860Cu) { return; }
    }
    ctx->pc = 0x17860Cu;
label_17860c:
    // 0x17860c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178610: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x178610u;
    {
        const bool branch_taken_0x178610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178610u;
            // 0x178614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178610) {
            ctx->pc = 0x178648u;
            goto label_178648;
        }
    }
    ctx->pc = 0x178618u;
    // 0x178618: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x178618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17861c: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x17861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_178620:
    // 0x178620: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x178620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x178624: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x178624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178628: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x178628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x17862c: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x17862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x178630: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x178630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x178634: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178634u;
    {
        const bool branch_taken_0x178634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178634u;
            // 0x178638: 0xc7282b  sltu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178634) {
            ctx->pc = 0x178640u;
            goto label_178640;
        }
    }
    ctx->pc = 0x17863Cu;
    // 0x17863c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17863cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_178640:
    // 0x178640: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x178640u;
    {
        const bool branch_taken_0x178640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x178644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178640u;
            // 0x178644: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178640) {
            ctx->pc = 0x178620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178620;
        }
    }
    ctx->pc = 0x178648u;
label_178648:
    // 0x178648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17864c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178650: 0x3e00008  jr          $ra
    ctx->pc = 0x178650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178650u;
            // 0x178654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178658u;
}
