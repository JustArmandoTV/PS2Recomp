#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0950
// Address: 0x2c0950 - 0x2c09b0
void sub_002C0950_0x2c0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0950_0x2c0950");
#endif

    switch (ctx->pc) {
        case 0x2c0990u: goto label_2c0990;
        default: break;
    }

    ctx->pc = 0x2c0950u;

    // 0x2c0950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c095c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c095cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0960: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C0960u;
    {
        const bool branch_taken_0x2c0960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0960) {
            ctx->pc = 0x2C0964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0960u;
            // 0x2c0964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0994u;
            goto label_2c0994;
        }
    }
    ctx->pc = 0x2C0968u;
    // 0x2c0968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c096c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c0970: 0x244217a8  addiu       $v0, $v0, 0x17A8
    ctx->pc = 0x2c0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6056));
    // 0x2c0974: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c0974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c0978: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c0978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c097c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c0980: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0980u;
    {
        const bool branch_taken_0x2c0980 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0980u;
            // 0x2c0984: 0xac400d70  sw          $zero, 0xD70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0980) {
            ctx->pc = 0x2C0990u;
            goto label_2c0990;
        }
    }
    ctx->pc = 0x2C0988u;
    // 0x2c0988: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C0988u;
    SET_GPR_U32(ctx, 31, 0x2C0990u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0990u; }
        if (ctx->pc != 0x2C0990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0990u; }
        if (ctx->pc != 0x2C0990u) { return; }
    }
    ctx->pc = 0x2C0990u;
label_2c0990:
    // 0x2c0990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0994:
    // 0x2c0994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c099c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C099Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C09A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C099Cu;
            // 0x2c09a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C09A4u;
    // 0x2c09a4: 0x0  nop
    ctx->pc = 0x2c09a4u;
    // NOP
    // 0x2c09a8: 0x0  nop
    ctx->pc = 0x2c09a8u;
    // NOP
    // 0x2c09ac: 0x0  nop
    ctx->pc = 0x2c09acu;
    // NOP
}
