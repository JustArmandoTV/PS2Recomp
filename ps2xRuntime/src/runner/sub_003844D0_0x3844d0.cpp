#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003844D0
// Address: 0x3844d0 - 0x384550
void sub_003844D0_0x3844d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003844D0_0x3844d0");
#endif

    switch (ctx->pc) {
        case 0x38450cu: goto label_38450c;
        case 0x384518u: goto label_384518;
        default: break;
    }

    ctx->pc = 0x3844d0u;

    // 0x3844d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3844d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3844d4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3844d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3844d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3844d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3844dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3844dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3844e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3844e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3844e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3844e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3844e8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3844e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3844ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3844ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3844f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3844f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3844f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3844f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3844f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3844fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3844fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x384500: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x384500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x384504: 0xc089688  jal         func_225A20
    ctx->pc = 0x384504u;
    SET_GPR_U32(ctx, 31, 0x38450Cu);
    ctx->pc = 0x384508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384504u;
            // 0x384508: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38450Cu; }
        if (ctx->pc != 0x38450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38450Cu; }
        if (ctx->pc != 0x38450Cu) { return; }
    }
    ctx->pc = 0x38450Cu;
label_38450c:
    // 0x38450c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x384510: 0xc0a3828  jal         func_28E0A0
    ctx->pc = 0x384510u;
    SET_GPR_U32(ctx, 31, 0x384518u);
    ctx->pc = 0x384514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384510u;
            // 0x384514: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384518u; }
        if (ctx->pc != 0x384518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384518u; }
        if (ctx->pc != 0x384518u) { return; }
    }
    ctx->pc = 0x384518u;
label_384518:
    // 0x384518: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x384518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38451c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x38451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x384520: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x384520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384524: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x384524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x384528: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x384528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38452c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x38452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x384530: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x384530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384534: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x384534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x384538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38453c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38453cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384540: 0x3e00008  jr          $ra
    ctx->pc = 0x384540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384540u;
            // 0x384544: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384548u;
    // 0x384548: 0x0  nop
    ctx->pc = 0x384548u;
    // NOP
    // 0x38454c: 0x0  nop
    ctx->pc = 0x38454cu;
    // NOP
}
