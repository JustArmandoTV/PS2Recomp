#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1B18
// Address: 0x1a1b18 - 0x1a1bb0
void sub_001A1B18_0x1a1b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1B18_0x1a1b18");
#endif

    switch (ctx->pc) {
        case 0x1a1b80u: goto label_1a1b80;
        case 0x1a1b90u: goto label_1a1b90;
        case 0x1a1b98u: goto label_1a1b98;
        default: break;
    }

    ctx->pc = 0x1a1b18u;

    // 0x1a1b18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a1b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1b20: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1a1b20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1a1b24: 0x2610bd80  addiu       $s0, $s0, -0x4280
    ctx->pc = 0x1a1b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950272));
    // 0x1a1b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a1b2c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1a1b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1a1b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b34: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x1a1b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x1a1b38: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a1b3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1b48: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x1a1b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x1a1b4c: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x1a1b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x1a1b50: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x1a1b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x1a1b54: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x1a1b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x1a1b58: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x1a1b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x1a1b5c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x1a1b5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a1b60: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x1a1b60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1a1b64: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x1a1b64u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a1b68: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x1a1b68u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a1b6c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x1a1b6cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a1b70: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x1a1b70u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a1b74: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x1a1b74u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a1b78: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1A1B78u;
    SET_GPR_U32(ctx, 31, 0x1A1B80u);
    ctx->pc = 0x1A1B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B78u;
            // 0x1a1b7c: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B80u; }
        if (ctx->pc != 0x1A1B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B80u; }
        if (ctx->pc != 0x1A1B80u) { return; }
    }
    ctx->pc = 0x1A1B80u;
label_1a1b80:
    // 0x1a1b80: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1a1b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1a1b84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b88: 0xc04c136  jal         func_1304D8
    ctx->pc = 0x1A1B88u;
    SET_GPR_U32(ctx, 31, 0x1A1B90u);
    ctx->pc = 0x1A1B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B88u;
            // 0x1a1b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B90u; }
        if (ctx->pc != 0x1A1B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B90u; }
        if (ctx->pc != 0x1A1B90u) { return; }
    }
    ctx->pc = 0x1A1B90u;
label_1a1b90:
    // 0x1a1b90: 0xc0686f8  jal         func_1A1BE0
    ctx->pc = 0x1A1B90u;
    SET_GPR_U32(ctx, 31, 0x1A1B98u);
    ctx->pc = 0x1A1B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B90u;
            // 0x1a1b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE0u;
    if (runtime->hasFunction(0x1A1BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A1BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B98u; }
        if (ctx->pc != 0x1A1B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1BE0_0x1a1be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B98u; }
        if (ctx->pc != 0x1A1B98u) { return; }
    }
    ctx->pc = 0x1A1B98u;
label_1a1b98:
    // 0x1a1b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BA4u;
            // 0x1a1ba8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1BACu;
    // 0x1a1bac: 0x0  nop
    ctx->pc = 0x1a1bacu;
    // NOP
}
