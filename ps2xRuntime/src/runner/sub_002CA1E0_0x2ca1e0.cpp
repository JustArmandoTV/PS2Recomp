#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA1E0
// Address: 0x2ca1e0 - 0x2ca240
void sub_002CA1E0_0x2ca1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA1E0_0x2ca1e0");
#endif

    switch (ctx->pc) {
        case 0x2ca220u: goto label_2ca220;
        default: break;
    }

    ctx->pc = 0x2ca1e0u;

    // 0x2ca1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca1ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA1F0u;
    {
        const bool branch_taken_0x2ca1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1f0) {
            ctx->pc = 0x2CA1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1F0u;
            // 0x2ca1f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA224u;
            goto label_2ca224;
        }
    }
    ctx->pc = 0x2CA1F8u;
    // 0x2ca1f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca1fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2ca1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ca200: 0x244203a0  addiu       $v0, $v0, 0x3A0
    ctx->pc = 0x2ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    // 0x2ca204: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca208: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ca208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ca20c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ca20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ca210: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA210u;
    {
        const bool branch_taken_0x2ca210 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CA214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA210u;
            // 0x2ca214: 0xac400d90  sw          $zero, 0xD90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca210) {
            ctx->pc = 0x2CA220u;
            goto label_2ca220;
        }
    }
    ctx->pc = 0x2CA218u;
    // 0x2ca218: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA218u;
    SET_GPR_U32(ctx, 31, 0x2CA220u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA220u; }
        if (ctx->pc != 0x2CA220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA220u; }
        if (ctx->pc != 0x2CA220u) { return; }
    }
    ctx->pc = 0x2CA220u;
label_2ca220:
    // 0x2ca220: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca224:
    // 0x2ca224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca22c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA22Cu;
            // 0x2ca230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA234u;
    // 0x2ca234: 0x0  nop
    ctx->pc = 0x2ca234u;
    // NOP
    // 0x2ca238: 0x0  nop
    ctx->pc = 0x2ca238u;
    // NOP
    // 0x2ca23c: 0x0  nop
    ctx->pc = 0x2ca23cu;
    // NOP
}
