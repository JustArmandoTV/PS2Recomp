#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CB90
// Address: 0x25cb90 - 0x25cc00
void sub_0025CB90_0x25cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB90_0x25cb90");
#endif

    switch (ctx->pc) {
        case 0x25cbe4u: goto label_25cbe4;
        default: break;
    }

    ctx->pc = 0x25cb90u;

    // 0x25cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cb94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x25cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x25cb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cb9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x25cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x25cba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25cba4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x25cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x25cba8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x25cbac: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x25cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
    // 0x25cbb0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x25cbb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25cbb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x25cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x25cbbc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x25cbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x25cbc0: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x25cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x25cbc4: 0x2402ffd1  addiu       $v0, $zero, -0x2F
    ctx->pc = 0x25cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x25cbc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x25cbcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x25cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x25cbd4: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x25cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x25cbd8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x25cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x25cbdc: 0xc0a84c4  jal         func_2A1310
    ctx->pc = 0x25CBDCu;
    SET_GPR_U32(ctx, 31, 0x25CBE4u);
    ctx->pc = 0x25CBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBDCu;
            // 0x25cbe0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1310u;
    if (runtime->hasFunction(0x2A1310u)) {
        auto targetFn = runtime->lookupFunction(0x2A1310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBE4u; }
        if (ctx->pc != 0x25CBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1310_0x2a1310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBE4u; }
        if (ctx->pc != 0x25CBE4u) { return; }
    }
    ctx->pc = 0x25CBE4u;
label_25cbe4:
    // 0x25cbe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25cbe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CBF0u;
            // 0x25cbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CBF8u;
    // 0x25cbf8: 0x0  nop
    ctx->pc = 0x25cbf8u;
    // NOP
    // 0x25cbfc: 0x0  nop
    ctx->pc = 0x25cbfcu;
    // NOP
}
