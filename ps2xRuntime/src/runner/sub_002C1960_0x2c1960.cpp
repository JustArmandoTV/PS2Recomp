#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1960
// Address: 0x2c1960 - 0x2c19c0
void sub_002C1960_0x2c1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1960_0x2c1960");
#endif

    switch (ctx->pc) {
        case 0x2c19a0u: goto label_2c19a0;
        default: break;
    }

    ctx->pc = 0x2c1960u;

    // 0x2c1960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c1968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c196c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c196cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1970: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C1970u;
    {
        const bool branch_taken_0x2c1970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1970) {
            ctx->pc = 0x2C1974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1970u;
            // 0x2c1974: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C19A4u;
            goto label_2c19a4;
        }
    }
    ctx->pc = 0x2C1978u;
    // 0x2c1978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c197c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c197cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c1980: 0x244216a0  addiu       $v0, $v0, 0x16A0
    ctx->pc = 0x2c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5792));
    // 0x2c1984: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c1984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c1988: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c1988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c198c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c1990: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1990u;
    {
        const bool branch_taken_0x2c1990 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C1994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1990u;
            // 0x2c1994: 0xac400ce8  sw          $zero, 0xCE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1990) {
            ctx->pc = 0x2C19A0u;
            goto label_2c19a0;
        }
    }
    ctx->pc = 0x2C1998u;
    // 0x2c1998: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C1998u;
    SET_GPR_U32(ctx, 31, 0x2C19A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19A0u; }
        if (ctx->pc != 0x2C19A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C19A0u; }
        if (ctx->pc != 0x2C19A0u) { return; }
    }
    ctx->pc = 0x2C19A0u;
label_2c19a0:
    // 0x2c19a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c19a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c19a4:
    // 0x2c19a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c19a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c19a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c19a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c19ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C19ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C19B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C19ACu;
            // 0x2c19b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C19B4u;
    // 0x2c19b4: 0x0  nop
    ctx->pc = 0x2c19b4u;
    // NOP
    // 0x2c19b8: 0x0  nop
    ctx->pc = 0x2c19b8u;
    // NOP
    // 0x2c19bc: 0x0  nop
    ctx->pc = 0x2c19bcu;
    // NOP
}
