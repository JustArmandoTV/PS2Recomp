#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00521600
// Address: 0x521600 - 0x521660
void sub_00521600_0x521600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00521600_0x521600");
#endif

    switch (ctx->pc) {
        case 0x521640u: goto label_521640;
        default: break;
    }

    ctx->pc = 0x521600u;

    // 0x521600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x521600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x521604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x521604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x521608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x521608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52160c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52160cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x521610: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x521610u;
    {
        const bool branch_taken_0x521610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x521610) {
            ctx->pc = 0x521614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x521610u;
            // 0x521614: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x521644u;
            goto label_521644;
        }
    }
    ctx->pc = 0x521618u;
    // 0x521618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x521618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52161c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x52161cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x521620: 0x24425eb0  addiu       $v0, $v0, 0x5EB0
    ctx->pc = 0x521620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24240));
    // 0x521624: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x521624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x521628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x521628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x52162c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x521630: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x521630u;
    {
        const bool branch_taken_0x521630 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x521634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x521630u;
            // 0x521634: 0xac40ab48  sw          $zero, -0x54B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x521630) {
            ctx->pc = 0x521640u;
            goto label_521640;
        }
    }
    ctx->pc = 0x521638u;
    // 0x521638: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x521638u;
    SET_GPR_U32(ctx, 31, 0x521640u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521640u; }
        if (ctx->pc != 0x521640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x521640u; }
        if (ctx->pc != 0x521640u) { return; }
    }
    ctx->pc = 0x521640u;
label_521640:
    // 0x521640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x521640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_521644:
    // 0x521644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x521644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x521648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x521648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52164c: 0x3e00008  jr          $ra
    ctx->pc = 0x52164Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x521650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52164Cu;
            // 0x521650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x521654u;
    // 0x521654: 0x0  nop
    ctx->pc = 0x521654u;
    // NOP
    // 0x521658: 0x0  nop
    ctx->pc = 0x521658u;
    // NOP
    // 0x52165c: 0x0  nop
    ctx->pc = 0x52165cu;
    // NOP
}
