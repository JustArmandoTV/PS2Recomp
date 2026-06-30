#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B4D00
// Address: 0x4b4d00 - 0x4b4d60
void sub_004B4D00_0x4b4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4D00_0x4b4d00");
#endif

    switch (ctx->pc) {
        case 0x4b4d40u: goto label_4b4d40;
        default: break;
    }

    ctx->pc = 0x4b4d00u;

    // 0x4b4d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b4d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b4d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b4d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b4d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d10: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B4D10u;
    {
        const bool branch_taken_0x4b4d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4d10) {
            ctx->pc = 0x4B4D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4D10u;
            // 0x4b4d14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4D44u;
            goto label_4b4d44;
        }
    }
    ctx->pc = 0x4B4D18u;
    // 0x4b4d18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b4d1c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4b4d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4b4d20: 0x24420980  addiu       $v0, $v0, 0x980
    ctx->pc = 0x4b4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x4b4d24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4b4d24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4b4d28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b4d2c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4b4d30: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4D30u;
    {
        const bool branch_taken_0x4b4d30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B4D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4D30u;
            // 0x4b4d34: 0xac40a9a0  sw          $zero, -0x5660($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d30) {
            ctx->pc = 0x4B4D40u;
            goto label_4b4d40;
        }
    }
    ctx->pc = 0x4B4D38u;
    // 0x4b4d38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B4D38u;
    SET_GPR_U32(ctx, 31, 0x4B4D40u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4D40u; }
        if (ctx->pc != 0x4B4D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4D40u; }
        if (ctx->pc != 0x4B4D40u) { return; }
    }
    ctx->pc = 0x4B4D40u;
label_4b4d40:
    // 0x4b4d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b4d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4d44:
    // 0x4b4d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b4d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4D4Cu;
            // 0x4b4d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4D54u;
    // 0x4b4d54: 0x0  nop
    ctx->pc = 0x4b4d54u;
    // NOP
    // 0x4b4d58: 0x0  nop
    ctx->pc = 0x4b4d58u;
    // NOP
    // 0x4b4d5c: 0x0  nop
    ctx->pc = 0x4b4d5cu;
    // NOP
}
