#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1390
// Address: 0x2c1390 - 0x2c13f0
void sub_002C1390_0x2c1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1390_0x2c1390");
#endif

    switch (ctx->pc) {
        case 0x2c13d0u: goto label_2c13d0;
        default: break;
    }

    ctx->pc = 0x2c1390u;

    // 0x2c1390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c1398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c139c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c139cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13a0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C13A0u;
    {
        const bool branch_taken_0x2c13a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c13a0) {
            ctx->pc = 0x2C13A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13A0u;
            // 0x2c13a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C13D4u;
            goto label_2c13d4;
        }
    }
    ctx->pc = 0x2C13A8u;
    // 0x2c13a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c13ac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c13acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c13b0: 0x24421748  addiu       $v0, $v0, 0x1748
    ctx->pc = 0x2c13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5960));
    // 0x2c13b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c13b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c13b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c13bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c13c0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C13C0u;
    {
        const bool branch_taken_0x2c13c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C13C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13C0u;
            // 0x2c13c4: 0xac400dc0  sw          $zero, 0xDC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13c0) {
            ctx->pc = 0x2C13D0u;
            goto label_2c13d0;
        }
    }
    ctx->pc = 0x2C13C8u;
    // 0x2c13c8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C13C8u;
    SET_GPR_U32(ctx, 31, 0x2C13D0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13D0u; }
        if (ctx->pc != 0x2C13D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13D0u; }
        if (ctx->pc != 0x2C13D0u) { return; }
    }
    ctx->pc = 0x2C13D0u;
label_2c13d0:
    // 0x2c13d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c13d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c13d4:
    // 0x2c13d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c13d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c13d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c13d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c13dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C13DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C13E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13DCu;
            // 0x2c13e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C13E4u;
    // 0x2c13e4: 0x0  nop
    ctx->pc = 0x2c13e4u;
    // NOP
    // 0x2c13e8: 0x0  nop
    ctx->pc = 0x2c13e8u;
    // NOP
    // 0x2c13ec: 0x0  nop
    ctx->pc = 0x2c13ecu;
    // NOP
}
