#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7950
// Address: 0x2c7950 - 0x2c79b0
void sub_002C7950_0x2c7950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7950_0x2c7950");
#endif

    switch (ctx->pc) {
        case 0x2c7990u: goto label_2c7990;
        default: break;
    }

    ctx->pc = 0x2c7950u;

    // 0x2c7950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c795c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c795cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7960: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C7960u;
    {
        const bool branch_taken_0x2c7960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7960) {
            ctx->pc = 0x2C7964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7960u;
            // 0x2c7964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7994u;
            goto label_2c7994;
        }
    }
    ctx->pc = 0x2C7968u;
    // 0x2c7968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c796c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c796cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c7970: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x2c7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2c7974: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7978: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c7978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c797c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c797cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c7980: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7980u;
    {
        const bool branch_taken_0x2c7980 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C7984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7980u;
            // 0x2c7984: 0xac400e00  sw          $zero, 0xE00($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7980) {
            ctx->pc = 0x2C7990u;
            goto label_2c7990;
        }
    }
    ctx->pc = 0x2C7988u;
    // 0x2c7988: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C7988u;
    SET_GPR_U32(ctx, 31, 0x2C7990u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7990u; }
        if (ctx->pc != 0x2C7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7990u; }
        if (ctx->pc != 0x2C7990u) { return; }
    }
    ctx->pc = 0x2C7990u;
label_2c7990:
    // 0x2c7990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7994:
    // 0x2c7994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c799c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C799Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C79A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C799Cu;
            // 0x2c79a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C79A4u;
    // 0x2c79a4: 0x0  nop
    ctx->pc = 0x2c79a4u;
    // NOP
    // 0x2c79a8: 0x0  nop
    ctx->pc = 0x2c79a8u;
    // NOP
    // 0x2c79ac: 0x0  nop
    ctx->pc = 0x2c79acu;
    // NOP
}
