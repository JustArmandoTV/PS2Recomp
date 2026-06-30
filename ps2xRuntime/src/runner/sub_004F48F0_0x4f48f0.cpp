#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F48F0
// Address: 0x4f48f0 - 0x4f4950
void sub_004F48F0_0x4f48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F48F0_0x4f48f0");
#endif

    switch (ctx->pc) {
        case 0x4f4930u: goto label_4f4930;
        default: break;
    }

    ctx->pc = 0x4f48f0u;

    // 0x4f48f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f48f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f48f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f48f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f48fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f48fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f4900: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4F4900u;
    {
        const bool branch_taken_0x4f4900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4900) {
            ctx->pc = 0x4F4904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4900u;
            // 0x4f4904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4934u;
            goto label_4f4934;
        }
    }
    ctx->pc = 0x4F4908u;
    // 0x4f4908: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4f4908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4f490c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4f490cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4f4910: 0x244244c0  addiu       $v0, $v0, 0x44C0
    ctx->pc = 0x4f4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17600));
    // 0x4f4914: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4f4914u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4f4918: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f4918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f491c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f4920: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F4920u;
    {
        const bool branch_taken_0x4f4920 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4F4924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4920u;
            // 0x4f4924: 0xac4064c0  sw          $zero, 0x64C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4920) {
            ctx->pc = 0x4F4930u;
            goto label_4f4930;
        }
    }
    ctx->pc = 0x4F4928u;
    // 0x4f4928: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F4928u;
    SET_GPR_U32(ctx, 31, 0x4F4930u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4930u; }
        if (ctx->pc != 0x4F4930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4930u; }
        if (ctx->pc != 0x4F4930u) { return; }
    }
    ctx->pc = 0x4F4930u;
label_4f4930:
    // 0x4f4930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f4930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4934:
    // 0x4f4934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f4938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f4938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f493c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F493Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F493Cu;
            // 0x4f4940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4944u;
    // 0x4f4944: 0x0  nop
    ctx->pc = 0x4f4944u;
    // NOP
    // 0x4f4948: 0x0  nop
    ctx->pc = 0x4f4948u;
    // NOP
    // 0x4f494c: 0x0  nop
    ctx->pc = 0x4f494cu;
    // NOP
}
