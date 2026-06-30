#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AC3C0
// Address: 0x3ac3c0 - 0x3ac410
void sub_003AC3C0_0x3ac3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC3C0_0x3ac3c0");
#endif

    switch (ctx->pc) {
        case 0x3ac3f8u: goto label_3ac3f8;
        default: break;
    }

    ctx->pc = 0x3ac3c0u;

    // 0x3ac3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ac3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ac3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ac3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ac3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ac3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac3d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3AC3D0u;
    {
        const bool branch_taken_0x3ac3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac3d0) {
            ctx->pc = 0x3AC3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC3D0u;
            // 0x3ac3d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC3FCu;
            goto label_3ac3fc;
        }
    }
    ctx->pc = 0x3AC3D8u;
    // 0x3ac3d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3ac3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3ac3dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ac3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3ac3e0: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x3ac3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
    // 0x3ac3e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ac3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3ac3e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC3E8u;
    {
        const bool branch_taken_0x3ac3e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC3E8u;
            // 0x3ac3ec: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3e8) {
            ctx->pc = 0x3AC3F8u;
            goto label_3ac3f8;
        }
    }
    ctx->pc = 0x3AC3F0u;
    // 0x3ac3f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3AC3F0u;
    SET_GPR_U32(ctx, 31, 0x3AC3F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC3F8u; }
        if (ctx->pc != 0x3AC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC3F8u; }
        if (ctx->pc != 0x3AC3F8u) { return; }
    }
    ctx->pc = 0x3AC3F8u;
label_3ac3f8:
    // 0x3ac3f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ac3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac3fc:
    // 0x3ac3fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ac3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ac400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ac400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac404: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC404u;
            // 0x3ac408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC40Cu;
    // 0x3ac40c: 0x0  nop
    ctx->pc = 0x3ac40cu;
    // NOP
}
