#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C86F0
// Address: 0x2c86f0 - 0x2c8750
void sub_002C86F0_0x2c86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C86F0_0x2c86f0");
#endif

    switch (ctx->pc) {
        case 0x2c8730u: goto label_2c8730;
        default: break;
    }

    ctx->pc = 0x2c86f0u;

    // 0x2c86f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c86f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c86f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c86f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c86fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c86fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8700: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8700u;
    {
        const bool branch_taken_0x2c8700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8700) {
            ctx->pc = 0x2C8704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8700u;
            // 0x2c8704: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8734u;
            goto label_2c8734;
        }
    }
    ctx->pc = 0x2C8708u;
    // 0x2c8708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c870c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c8710: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x2c8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
    // 0x2c8714: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8714u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c8718: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c8718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c871c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c871cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c8720: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8720u;
    {
        const bool branch_taken_0x2c8720 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C8724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8720u;
            // 0x2c8724: 0xac400e10  sw          $zero, 0xE10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8720) {
            ctx->pc = 0x2C8730u;
            goto label_2c8730;
        }
    }
    ctx->pc = 0x2C8728u;
    // 0x2c8728: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C8728u;
    SET_GPR_U32(ctx, 31, 0x2C8730u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8730u; }
        if (ctx->pc != 0x2C8730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8730u; }
        if (ctx->pc != 0x2C8730u) { return; }
    }
    ctx->pc = 0x2C8730u;
label_2c8730:
    // 0x2c8730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8734:
    // 0x2c8734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c873c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C873Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C873Cu;
            // 0x2c8740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8744u;
    // 0x2c8744: 0x0  nop
    ctx->pc = 0x2c8744u;
    // NOP
    // 0x2c8748: 0x0  nop
    ctx->pc = 0x2c8748u;
    // NOP
    // 0x2c874c: 0x0  nop
    ctx->pc = 0x2c874cu;
    // NOP
}
