#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D0A0
// Address: 0x15d0a0 - 0x15d110
void sub_0015D0A0_0x15d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D0A0_0x15d0a0");
#endif

    switch (ctx->pc) {
        case 0x15d0c0u: goto label_15d0c0;
        case 0x15d0e8u: goto label_15d0e8;
        case 0x15d0f0u: goto label_15d0f0;
        default: break;
    }

    ctx->pc = 0x15d0a0u;

    // 0x15d0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d0a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15d0a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15d0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d0b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15d0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d0b4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x15d0b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x15d0b8: 0xc057470  jal         func_15D1C0
    ctx->pc = 0x15D0B8u;
    SET_GPR_U32(ctx, 31, 0x15D0C0u);
    ctx->pc = 0x15D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0B8u;
            // 0x15d0bc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0C0u; }
        if (ctx->pc != 0x15D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0C0u; }
        if (ctx->pc != 0x15D0C0u) { return; }
    }
    ctx->pc = 0x15D0C0u;
label_15d0c0:
    // 0x15d0c0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x15d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x15d0c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15d0c8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d0cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d0d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x15d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x15d0d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15d0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d0d8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15d0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15d0dc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x15d0dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15d0e0: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D0E0u;
    SET_GPR_U32(ctx, 31, 0x15D0E8u);
    ctx->pc = 0x15D110u;
    if (runtime->hasFunction(0x15D110u)) {
        auto targetFn = runtime->lookupFunction(0x15D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0E8u; }
        if (ctx->pc != 0x15D0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D110_0x15d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0E8u; }
        if (ctx->pc != 0x15D0E8u) { return; }
    }
    ctx->pc = 0x15D0E8u;
label_15d0e8:
    // 0x15d0e8: 0xc05747c  jal         func_15D1F0
    ctx->pc = 0x15D0E8u;
    SET_GPR_U32(ctx, 31, 0x15D0F0u);
    ctx->pc = 0x15D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0E8u;
            // 0x15d0ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1F0u;
    if (runtime->hasFunction(0x15D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0F0u; }
        if (ctx->pc != 0x15D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1F0_0x15d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0F0u; }
        if (ctx->pc != 0x15D0F0u) { return; }
    }
    ctx->pc = 0x15D0F0u;
label_15d0f0:
    // 0x15d0f0: 0x3c04300e  lui         $a0, 0x300E
    ctx->pc = 0x15d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12302 << 16));
    // 0x15d0f4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d0f8: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x15d0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x15d0fc: 0xac64ce34  sw          $a0, -0x31CC($v1)
    ctx->pc = 0x15d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954548), GPR_U32(ctx, 4));
    // 0x15d100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d104: 0x3e00008  jr          $ra
    ctx->pc = 0x15D104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D104u;
            // 0x15d108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D10Cu;
    // 0x15d10c: 0x0  nop
    ctx->pc = 0x15d10cu;
    // NOP
}
