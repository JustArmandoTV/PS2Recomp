#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BBE0
// Address: 0x51bbe0 - 0x51bc30
void sub_0051BBE0_0x51bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BBE0_0x51bbe0");
#endif

    switch (ctx->pc) {
        case 0x51bc18u: goto label_51bc18;
        default: break;
    }

    ctx->pc = 0x51bbe0u;

    // 0x51bbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51bbe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51bbe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51bbec: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x51bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x51bbf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bbf4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x51bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x51bbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51bbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bbfc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x51bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x51bc00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x51bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x51bc04: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x51bc08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x51bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x51bc0c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x51bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x51bc10: 0xc0fcbcc  jal         func_3F2F30
    ctx->pc = 0x51BC10u;
    SET_GPR_U32(ctx, 31, 0x51BC18u);
    ctx->pc = 0x51BC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BC10u;
            // 0x51bc14: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2F30u;
    if (runtime->hasFunction(0x3F2F30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BC18u; }
        if (ctx->pc != 0x51BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2F30_0x3f2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BC18u; }
        if (ctx->pc != 0x51BC18u) { return; }
    }
    ctx->pc = 0x51BC18u;
label_51bc18:
    // 0x51bc18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bc1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bc24: 0x3e00008  jr          $ra
    ctx->pc = 0x51BC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BC24u;
            // 0x51bc28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BC2Cu;
    // 0x51bc2c: 0x0  nop
    ctx->pc = 0x51bc2cu;
    // NOP
}
