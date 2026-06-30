#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00372680
// Address: 0x372680 - 0x3726f0
void sub_00372680_0x372680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372680_0x372680");
#endif

    switch (ctx->pc) {
        case 0x3726a8u: goto label_3726a8;
        case 0x3726b4u: goto label_3726b4;
        default: break;
    }

    ctx->pc = 0x372680u;

    // 0x372680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x372680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x372684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37268c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x372690: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x372690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372694: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x372694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x372698: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x372698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37269c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x37269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3726a0: 0xc089688  jal         func_225A20
    ctx->pc = 0x3726A0u;
    SET_GPR_U32(ctx, 31, 0x3726A8u);
    ctx->pc = 0x3726A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3726A0u;
            // 0x3726a4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3726A8u; }
        if (ctx->pc != 0x3726A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3726A8u; }
        if (ctx->pc != 0x3726A8u) { return; }
    }
    ctx->pc = 0x3726A8u;
label_3726a8:
    // 0x3726a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3726a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3726ac: 0xc0a3828  jal         func_28E0A0
    ctx->pc = 0x3726ACu;
    SET_GPR_U32(ctx, 31, 0x3726B4u);
    ctx->pc = 0x3726B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3726ACu;
            // 0x3726b0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3726B4u; }
        if (ctx->pc != 0x3726B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3726B4u; }
        if (ctx->pc != 0x3726B4u) { return; }
    }
    ctx->pc = 0x3726B4u;
label_3726b4:
    // 0x3726b4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3726b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726b8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3726b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3726bc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3726bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726c0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3726c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3726c4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3726c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3726c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3726cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3726ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3726d0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3726d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3726d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3726d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3726d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3726d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3726dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3726DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3726E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3726DCu;
            // 0x3726e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3726E4u;
    // 0x3726e4: 0x0  nop
    ctx->pc = 0x3726e4u;
    // NOP
    // 0x3726e8: 0x0  nop
    ctx->pc = 0x3726e8u;
    // NOP
    // 0x3726ec: 0x0  nop
    ctx->pc = 0x3726ecu;
    // NOP
}
