#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9CA0
// Address: 0x1e9ca0 - 0x1e9d50
void sub_001E9CA0_0x1e9ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9CA0_0x1e9ca0");
#endif

    switch (ctx->pc) {
        case 0x1e9d30u: goto label_1e9d30;
        default: break;
    }

    ctx->pc = 0x1e9ca0u;

    // 0x1e9ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9ca4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e9ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9cac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9cb4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1e9cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x1e9cb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e9cbc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e9cc0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e9cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9cc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e9ccc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1e9cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1e9cd0: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1e9cd4: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x1e9cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e9cd8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e9cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ce0: 0x24a5d6c0  addiu       $a1, $a1, -0x2940
    ctx->pc = 0x1e9ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956736));
    // 0x1e9ce4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1e9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1e9ce8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e9cec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9cf0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1e9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1e9cf4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1e9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e9cf8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1e9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1e9cfc: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1e9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1e9d00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1e9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e9d04: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e9d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1e9d08: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1e9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1e9d0c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1e9d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1e9d10: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1e9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1e9d14: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1e9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1e9d18: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1e9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1e9d1c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1e9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1e9d20: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1e9d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1e9d24: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1e9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1e9d28: 0xc0917e8  jal         func_245FA0
    ctx->pc = 0x1E9D28u;
    SET_GPR_U32(ctx, 31, 0x1E9D30u);
    ctx->pc = 0x1E9D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D28u;
            // 0x1e9d2c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245FA0u;
    if (runtime->hasFunction(0x245FA0u)) {
        auto targetFn = runtime->lookupFunction(0x245FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D30u; }
        if (ctx->pc != 0x1E9D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245FA0_0x245fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D30u; }
        if (ctx->pc != 0x1E9D30u) { return; }
    }
    ctx->pc = 0x1E9D30u;
label_1e9d30:
    // 0x1e9d30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e9d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D3Cu;
            // 0x1e9d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9D44u;
    // 0x1e9d44: 0x0  nop
    ctx->pc = 0x1e9d44u;
    // NOP
    // 0x1e9d48: 0x0  nop
    ctx->pc = 0x1e9d48u;
    // NOP
    // 0x1e9d4c: 0x0  nop
    ctx->pc = 0x1e9d4cu;
    // NOP
}
