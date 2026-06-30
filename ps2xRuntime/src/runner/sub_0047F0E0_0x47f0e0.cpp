#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047F0E0
// Address: 0x47f0e0 - 0x47f140
void sub_0047F0E0_0x47f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F0E0_0x47f0e0");
#endif

    switch (ctx->pc) {
        case 0x47f120u: goto label_47f120;
        default: break;
    }

    ctx->pc = 0x47f0e0u;

    // 0x47f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47f0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47f0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47f0ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47f0f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x47F0F0u;
    {
        const bool branch_taken_0x47f0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f0f0) {
            ctx->pc = 0x47F0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F0F0u;
            // 0x47f0f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F124u;
            goto label_47f124;
        }
    }
    ctx->pc = 0x47F0F8u;
    // 0x47f0f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x47f0fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x47f0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x47f100: 0x2442eef8  addiu       $v0, $v0, -0x1108
    ctx->pc = 0x47f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962936));
    // 0x47f104: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x47f104u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x47f108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47f108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x47f10c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47f110: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47F110u;
    {
        const bool branch_taken_0x47f110 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x47F114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F110u;
            // 0x47f114: 0xac407780  sw          $zero, 0x7780($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f110) {
            ctx->pc = 0x47F120u;
            goto label_47f120;
        }
    }
    ctx->pc = 0x47F118u;
    // 0x47f118: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x47F118u;
    SET_GPR_U32(ctx, 31, 0x47F120u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F120u; }
        if (ctx->pc != 0x47F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F120u; }
        if (ctx->pc != 0x47F120u) { return; }
    }
    ctx->pc = 0x47F120u;
label_47f120:
    // 0x47f120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47f120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f124:
    // 0x47f124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47f124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47f128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x47F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F12Cu;
            // 0x47f130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F134u;
    // 0x47f134: 0x0  nop
    ctx->pc = 0x47f134u;
    // NOP
    // 0x47f138: 0x0  nop
    ctx->pc = 0x47f138u;
    // NOP
    // 0x47f13c: 0x0  nop
    ctx->pc = 0x47f13cu;
    // NOP
}
