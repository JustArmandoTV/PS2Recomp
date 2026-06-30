#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED200
// Address: 0x1ed200 - 0x1ed260
void sub_001ED200_0x1ed200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED200_0x1ed200");
#endif

    switch (ctx->pc) {
        case 0x1ed220u: goto label_1ed220;
        case 0x1ed244u: goto label_1ed244;
        default: break;
    }

    ctx->pc = 0x1ed200u;

    // 0x1ed200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed204: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ed204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ed20c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed214: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ed214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed218: 0xc098768  jal         func_261DA0
    ctx->pc = 0x1ED218u;
    SET_GPR_U32(ctx, 31, 0x1ED220u);
    ctx->pc = 0x1ED21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED218u;
            // 0x1ed21c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED220u; }
        if (ctx->pc != 0x1ED220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED220u; }
        if (ctx->pc != 0x1ED220u) { return; }
    }
    ctx->pc = 0x1ED220u;
label_1ed220:
    // 0x1ed220: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ed224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED224u;
    {
        const bool branch_taken_0x1ed224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED224u;
            // 0x1ed228: 0xa2000084  sb          $zero, 0x84($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed224) {
            ctx->pc = 0x1ED23Cu;
            goto label_1ed23c;
        }
    }
    ctx->pc = 0x1ED22Cu;
    // 0x1ed22c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ed22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ed230: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed234: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed238: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ed238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1ed23c:
    // 0x1ed23c: 0xc0917e8  jal         func_245FA0
    ctx->pc = 0x1ED23Cu;
    SET_GPR_U32(ctx, 31, 0x1ED244u);
    ctx->pc = 0x1ED240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED23Cu;
            // 0x1ed240: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245FA0u;
    if (runtime->hasFunction(0x245FA0u)) {
        auto targetFn = runtime->lookupFunction(0x245FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED244u; }
        if (ctx->pc != 0x1ED244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245FA0_0x245fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED244u; }
        if (ctx->pc != 0x1ED244u) { return; }
    }
    ctx->pc = 0x1ED244u;
label_1ed244:
    // 0x1ed244: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1ed244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ed248: 0xa6030086  sh          $v1, 0x86($s0)
    ctx->pc = 0x1ed248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed24c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1ed24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1ed250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed258: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED258u;
            // 0x1ed25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED260u;
}
