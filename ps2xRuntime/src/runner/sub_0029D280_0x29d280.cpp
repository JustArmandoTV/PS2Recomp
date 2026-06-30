#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D280
// Address: 0x29d280 - 0x29d2d0
void sub_0029D280_0x29d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D280_0x29d280");
#endif

    switch (ctx->pc) {
        case 0x29d2b8u: goto label_29d2b8;
        default: break;
    }

    ctx->pc = 0x29d280u;

    // 0x29d280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d284: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29d284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29d288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d290: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29d290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29d294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d298: 0x62902  srl         $a1, $a2, 4
    ctx->pc = 0x29d298u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x29d29c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29d2a0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x29d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x29d2a4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x29d2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29d2a8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x29d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29d2ac: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d2b0: 0xc0a8458  jal         func_2A1160
    ctx->pc = 0x29D2B0u;
    SET_GPR_U32(ctx, 31, 0x29D2B8u);
    ctx->pc = 0x29D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2B0u;
            // 0x29d2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D2B8u; }
        if (ctx->pc != 0x29D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D2B8u; }
        if (ctx->pc != 0x29D2B8u) { return; }
    }
    ctx->pc = 0x29D2B8u;
label_29d2b8:
    // 0x29d2b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29d2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29D2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2C4u;
            // 0x29d2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D2CCu;
    // 0x29d2cc: 0x0  nop
    ctx->pc = 0x29d2ccu;
    // NOP
}
