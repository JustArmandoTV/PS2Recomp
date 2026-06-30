#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F2080
// Address: 0x3f2080 - 0x3f20e0
void sub_003F2080_0x3f2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2080_0x3f2080");
#endif

    switch (ctx->pc) {
        case 0x3f20c0u: goto label_3f20c0;
        default: break;
    }

    ctx->pc = 0x3f2080u;

    // 0x3f2080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f2084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f2088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f2088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f208c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f208cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2090: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3F2090u;
    {
        const bool branch_taken_0x3f2090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2090) {
            ctx->pc = 0x3F2094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2090u;
            // 0x3f2094: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F20C4u;
            goto label_3f20c4;
        }
    }
    ctx->pc = 0x3F2098u;
    // 0x3f2098: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f2098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f209c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3f209cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3f20a0: 0x2442a0e8  addiu       $v0, $v0, -0x5F18
    ctx->pc = 0x3f20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942952));
    // 0x3f20a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3f20a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3f20a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3f20ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3f20b0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F20B0u;
    {
        const bool branch_taken_0x3f20b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3F20B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F20B0u;
            // 0x3f20b4: 0xac406f10  sw          $zero, 0x6F10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20b0) {
            ctx->pc = 0x3F20C0u;
            goto label_3f20c0;
        }
    }
    ctx->pc = 0x3F20B8u;
    // 0x3f20b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3F20B8u;
    SET_GPR_U32(ctx, 31, 0x3F20C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F20C0u; }
        if (ctx->pc != 0x3F20C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F20C0u; }
        if (ctx->pc != 0x3F20C0u) { return; }
    }
    ctx->pc = 0x3F20C0u;
label_3f20c0:
    // 0x3f20c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f20c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f20c4:
    // 0x3f20c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f20c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f20c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f20c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F20CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F20D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F20CCu;
            // 0x3f20d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F20D4u;
    // 0x3f20d4: 0x0  nop
    ctx->pc = 0x3f20d4u;
    // NOP
    // 0x3f20d8: 0x0  nop
    ctx->pc = 0x3f20d8u;
    // NOP
    // 0x3f20dc: 0x0  nop
    ctx->pc = 0x3f20dcu;
    // NOP
}
