#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D22A0
// Address: 0x3d22a0 - 0x3d2300
void sub_003D22A0_0x3d22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D22A0_0x3d22a0");
#endif

    switch (ctx->pc) {
        case 0x3d22e0u: goto label_3d22e0;
        default: break;
    }

    ctx->pc = 0x3d22a0u;

    // 0x3d22a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d22a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d22a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d22a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d22a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d22ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d22acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d22b0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D22B0u;
    {
        const bool branch_taken_0x3d22b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d22b0) {
            ctx->pc = 0x3D22B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D22B0u;
            // 0x3d22b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D22E4u;
            goto label_3d22e4;
        }
    }
    ctx->pc = 0x3D22B8u;
    // 0x3d22b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d22bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3d22bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3d22c0: 0x24429268  addiu       $v0, $v0, -0x6D98
    ctx->pc = 0x3d22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939240));
    // 0x3d22c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3d22c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3d22c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d22cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d22d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D22D0u;
    {
        const bool branch_taken_0x3d22d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D22D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D22D0u;
            // 0x3d22d4: 0xac406ea0  sw          $zero, 0x6EA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d22d0) {
            ctx->pc = 0x3D22E0u;
            goto label_3d22e0;
        }
    }
    ctx->pc = 0x3D22D8u;
    // 0x3d22d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D22D8u;
    SET_GPR_U32(ctx, 31, 0x3D22E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D22E0u; }
        if (ctx->pc != 0x3D22E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D22E0u; }
        if (ctx->pc != 0x3D22E0u) { return; }
    }
    ctx->pc = 0x3D22E0u;
label_3d22e0:
    // 0x3d22e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d22e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d22e4:
    // 0x3d22e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d22e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d22e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d22e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d22ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D22ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D22F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D22ECu;
            // 0x3d22f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D22F4u;
    // 0x3d22f4: 0x0  nop
    ctx->pc = 0x3d22f4u;
    // NOP
    // 0x3d22f8: 0x0  nop
    ctx->pc = 0x3d22f8u;
    // NOP
    // 0x3d22fc: 0x0  nop
    ctx->pc = 0x3d22fcu;
    // NOP
}
