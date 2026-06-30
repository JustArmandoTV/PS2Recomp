#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00452400
// Address: 0x452400 - 0x452460
void sub_00452400_0x452400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452400_0x452400");
#endif

    switch (ctx->pc) {
        case 0x452440u: goto label_452440;
        default: break;
    }

    ctx->pc = 0x452400u;

    // 0x452400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x452400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x452404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x452404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x452408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x452408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45240c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45240cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452410: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x452410u;
    {
        const bool branch_taken_0x452410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x452410) {
            ctx->pc = 0x452414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x452410u;
            // 0x452414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x452444u;
            goto label_452444;
        }
    }
    ctx->pc = 0x452418u;
    // 0x452418: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x452418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x45241c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x45241cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x452420: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x452420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x452424: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x452424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x452428: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x452428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x45242c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45242cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x452430: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x452430u;
    {
        const bool branch_taken_0x452430 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x452434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452430u;
            // 0x452434: 0xac4075a8  sw          $zero, 0x75A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452430) {
            ctx->pc = 0x452440u;
            goto label_452440;
        }
    }
    ctx->pc = 0x452438u;
    // 0x452438: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x452438u;
    SET_GPR_U32(ctx, 31, 0x452440u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452440u; }
        if (ctx->pc != 0x452440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x452440u; }
        if (ctx->pc != 0x452440u) { return; }
    }
    ctx->pc = 0x452440u;
label_452440:
    // 0x452440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x452440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_452444:
    // 0x452444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x452444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45244c: 0x3e00008  jr          $ra
    ctx->pc = 0x45244Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45244Cu;
            // 0x452450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452454u;
    // 0x452454: 0x0  nop
    ctx->pc = 0x452454u;
    // NOP
    // 0x452458: 0x0  nop
    ctx->pc = 0x452458u;
    // NOP
    // 0x45245c: 0x0  nop
    ctx->pc = 0x45245cu;
    // NOP
}
