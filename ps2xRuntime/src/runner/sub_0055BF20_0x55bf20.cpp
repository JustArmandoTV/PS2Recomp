#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055BF20
// Address: 0x55bf20 - 0x55bf70
void sub_0055BF20_0x55bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055BF20_0x55bf20");
#endif

    switch (ctx->pc) {
        case 0x55bf40u: goto label_55bf40;
        case 0x55bf48u: goto label_55bf48;
        default: break;
    }

    ctx->pc = 0x55bf20u;

    // 0x55bf20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x55bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x55bf24: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x55bf24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55bf28: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55bf28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x55bf2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x55bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x55bf30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x55bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x55bf34: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x55bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x55bf38: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x55BF38u;
    SET_GPR_U32(ctx, 31, 0x55BF40u);
    ctx->pc = 0x55BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BF38u;
            // 0x55bf3c: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BF40u; }
        if (ctx->pc != 0x55BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BF40u; }
        if (ctx->pc != 0x55BF40u) { return; }
    }
    ctx->pc = 0x55BF40u;
label_55bf40:
    // 0x55bf40: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x55BF40u;
    SET_GPR_U32(ctx, 31, 0x55BF48u);
    ctx->pc = 0x55BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BF40u;
            // 0x55bf44: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BF48u; }
        if (ctx->pc != 0x55BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BF48u; }
        if (ctx->pc != 0x55BF48u) { return; }
    }
    ctx->pc = 0x55BF48u;
label_55bf48:
    // 0x55bf48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55bf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55bf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x55bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55bf50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55bf50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x55bf54: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x55bf58: 0xc4409c98  lwc1        $f0, -0x6368($v0)
    ctx->pc = 0x55bf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x55bf5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x55bf5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x55bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x55BF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BF60u;
            // 0x55bf64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55BF68u;
    // 0x55bf68: 0x0  nop
    ctx->pc = 0x55bf68u;
    // NOP
    // 0x55bf6c: 0x0  nop
    ctx->pc = 0x55bf6cu;
    // NOP
}
