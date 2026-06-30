#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2000
// Address: 0x2c2000 - 0x2c2060
void sub_002C2000_0x2c2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2000_0x2c2000");
#endif

    switch (ctx->pc) {
        case 0x2c2040u: goto label_2c2040;
        default: break;
    }

    ctx->pc = 0x2c2000u;

    // 0x2c2000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c200c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c200cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2010: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2010u;
    {
        const bool branch_taken_0x2c2010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2010) {
            ctx->pc = 0x2C2014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2010u;
            // 0x2c2014: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2044u;
            goto label_2c2044;
        }
    }
    ctx->pc = 0x2C2018u;
    // 0x2c2018: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c201c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c201cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c2020: 0x244215b0  addiu       $v0, $v0, 0x15B0
    ctx->pc = 0x2c2020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5552));
    // 0x2c2024: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2024u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2028: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c2028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c202c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c2030: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2030u;
    {
        const bool branch_taken_0x2c2030 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C2034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2030u;
            // 0x2c2034: 0xac400e20  sw          $zero, 0xE20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2030) {
            ctx->pc = 0x2C2040u;
            goto label_2c2040;
        }
    }
    ctx->pc = 0x2C2038u;
    // 0x2c2038: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C2038u;
    SET_GPR_U32(ctx, 31, 0x2C2040u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2040u; }
        if (ctx->pc != 0x2C2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2040u; }
        if (ctx->pc != 0x2C2040u) { return; }
    }
    ctx->pc = 0x2C2040u;
label_2c2040:
    // 0x2c2040: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2044:
    // 0x2c2044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c204c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C204Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C204Cu;
            // 0x2c2050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2054u;
    // 0x2c2054: 0x0  nop
    ctx->pc = 0x2c2054u;
    // NOP
    // 0x2c2058: 0x0  nop
    ctx->pc = 0x2c2058u;
    // NOP
    // 0x2c205c: 0x0  nop
    ctx->pc = 0x2c205cu;
    // NOP
}
