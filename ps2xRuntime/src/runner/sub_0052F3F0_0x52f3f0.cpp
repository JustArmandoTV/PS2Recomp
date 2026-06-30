#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052F3F0
// Address: 0x52f3f0 - 0x52f450
void sub_0052F3F0_0x52f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052F3F0_0x52f3f0");
#endif

    switch (ctx->pc) {
        case 0x52f430u: goto label_52f430;
        default: break;
    }

    ctx->pc = 0x52f3f0u;

    // 0x52f3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x52f3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52f3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52f3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52f3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52f3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f400: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x52F400u;
    {
        const bool branch_taken_0x52f400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52f400) {
            ctx->pc = 0x52F404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F400u;
            // 0x52f404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52F434u;
            goto label_52f434;
        }
    }
    ctx->pc = 0x52F408u;
    // 0x52f408: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f40c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x52f40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x52f410: 0x24426c70  addiu       $v0, $v0, 0x6C70
    ctx->pc = 0x52f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27760));
    // 0x52f414: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x52f414u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x52f418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52f418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x52f41c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x52f420: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x52F420u;
    {
        const bool branch_taken_0x52f420 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x52F424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F420u;
            // 0x52f424: 0xac40ab08  sw          $zero, -0x54F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f420) {
            ctx->pc = 0x52F430u;
            goto label_52f430;
        }
    }
    ctx->pc = 0x52F428u;
    // 0x52f428: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52F428u;
    SET_GPR_U32(ctx, 31, 0x52F430u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F430u; }
        if (ctx->pc != 0x52F430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F430u; }
        if (ctx->pc != 0x52F430u) { return; }
    }
    ctx->pc = 0x52F430u;
label_52f430:
    // 0x52f430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52f430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52f434:
    // 0x52f434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52f434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52f438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52f43c: 0x3e00008  jr          $ra
    ctx->pc = 0x52F43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F43Cu;
            // 0x52f440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F444u;
    // 0x52f444: 0x0  nop
    ctx->pc = 0x52f444u;
    // NOP
    // 0x52f448: 0x0  nop
    ctx->pc = 0x52f448u;
    // NOP
    // 0x52f44c: 0x0  nop
    ctx->pc = 0x52f44cu;
    // NOP
}
