#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042F0E0
// Address: 0x42f0e0 - 0x42f140
void sub_0042F0E0_0x42f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F0E0_0x42f0e0");
#endif

    switch (ctx->pc) {
        case 0x42f120u: goto label_42f120;
        default: break;
    }

    ctx->pc = 0x42f0e0u;

    // 0x42f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42f0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42f0ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42f0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f0f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42F0F0u;
    {
        const bool branch_taken_0x42f0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f0f0) {
            ctx->pc = 0x42F0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F0F0u;
            // 0x42f0f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F124u;
            goto label_42f124;
        }
    }
    ctx->pc = 0x42F0F8u;
    // 0x42f0f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42f0fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x42f0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x42f100: 0x2442c6e0  addiu       $v0, $v0, -0x3920
    ctx->pc = 0x42f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952672));
    // 0x42f104: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x42f104u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x42f108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42f108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x42f10c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42f110: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42F110u;
    {
        const bool branch_taken_0x42f110 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x42F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F110u;
            // 0x42f114: 0xac406ed8  sw          $zero, 0x6ED8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f110) {
            ctx->pc = 0x42F120u;
            goto label_42f120;
        }
    }
    ctx->pc = 0x42F118u;
    // 0x42f118: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42F118u;
    SET_GPR_U32(ctx, 31, 0x42F120u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F120u; }
        if (ctx->pc != 0x42F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F120u; }
        if (ctx->pc != 0x42F120u) { return; }
    }
    ctx->pc = 0x42F120u;
label_42f120:
    // 0x42f120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f124:
    // 0x42f124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x42F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F12Cu;
            // 0x42f130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F134u;
    // 0x42f134: 0x0  nop
    ctx->pc = 0x42f134u;
    // NOP
    // 0x42f138: 0x0  nop
    ctx->pc = 0x42f138u;
    // NOP
    // 0x42f13c: 0x0  nop
    ctx->pc = 0x42f13cu;
    // NOP
}
