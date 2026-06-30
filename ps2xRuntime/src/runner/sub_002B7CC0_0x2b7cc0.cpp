#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7CC0
// Address: 0x2b7cc0 - 0x2b7e10
void sub_002B7CC0_0x2b7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7CC0_0x2b7cc0");
#endif

    switch (ctx->pc) {
        case 0x2b7d40u: goto label_2b7d40;
        case 0x2b7d54u: goto label_2b7d54;
        case 0x2b7d68u: goto label_2b7d68;
        case 0x2b7d7cu: goto label_2b7d7c;
        case 0x2b7de0u: goto label_2b7de0;
        case 0x2b7df0u: goto label_2b7df0;
        default: break;
    }

    ctx->pc = 0x2b7cc0u;

    // 0x2b7cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7cc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b7cc8: 0xc4418318  lwc1        $f1, -0x7CE8($v0)
    ctx->pc = 0x2b7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7ccc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7cd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7cd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7cdc: 0x2463cfc0  addiu       $v1, $v1, -0x3040
    ctx->pc = 0x2b7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
    // 0x2b7ce0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b7ce4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2b7ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2b7ce8: 0xc4408320  lwc1        $f0, -0x7CE0($v0)
    ctx->pc = 0x2b7ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7cec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b7cf0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b7cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b7cf4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7cf8: 0x246329f0  addiu       $v1, $v1, 0x29F0
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10736));
    // 0x2b7cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d00: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b7d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b7d04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7d08: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2b7d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b7d0c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2b7d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b7d10: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2b7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2b7d14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7d14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7d18: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x2b7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x2b7d1c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b7d1cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7d20: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x2b7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x2b7d24: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x2b7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x2b7d28: 0xa48000c0  sh          $zero, 0xC0($a0)
    ctx->pc = 0x2b7d28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b7d2c: 0xa48000c2  sh          $zero, 0xC2($a0)
    ctx->pc = 0x2b7d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b7d30: 0xa48200c4  sh          $v0, 0xC4($a0)
    ctx->pc = 0x2b7d30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7d34: 0xa48000c6  sh          $zero, 0xC6($a0)
    ctx->pc = 0x2b7d34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b7d38: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7D38u;
    SET_GPR_U32(ctx, 31, 0x2B7D40u);
    ctx->pc = 0x2B7D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D38u;
            // 0x2b7d3c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D40u; }
        if (ctx->pc != 0x2B7D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D40u; }
        if (ctx->pc != 0x2B7D40u) { return; }
    }
    ctx->pc = 0x2B7D40u;
label_2b7d40:
    // 0x2b7d40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7d44: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2b7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2b7d48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7d48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7d4c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7D54u);
    ctx->pc = 0x2B7D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D4Cu;
            // 0x2b7d50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D54u; }
        if (ctx->pc != 0x2B7D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D54u; }
        if (ctx->pc != 0x2B7D54u) { return; }
    }
    ctx->pc = 0x2B7D54u;
label_2b7d54:
    // 0x2b7d54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7d58: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2b7d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b7d5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7d5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7d60: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7D60u;
    SET_GPR_U32(ctx, 31, 0x2B7D68u);
    ctx->pc = 0x2B7D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D60u;
            // 0x2b7d64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D68u; }
        if (ctx->pc != 0x2B7D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D68u; }
        if (ctx->pc != 0x2B7D68u) { return; }
    }
    ctx->pc = 0x2B7D68u;
label_2b7d68:
    // 0x2b7d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7d6c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2b7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2b7d70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7d70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7d74: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7D74u;
    SET_GPR_U32(ctx, 31, 0x2B7D7Cu);
    ctx->pc = 0x2B7D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7D74u;
            // 0x2b7d78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D7Cu; }
        if (ctx->pc != 0x2B7D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7D7Cu; }
        if (ctx->pc != 0x2B7D7Cu) { return; }
    }
    ctx->pc = 0x2B7D7Cu;
label_2b7d7c:
    // 0x2b7d7c: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x2b7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x2b7d80: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x2b7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
    // 0x2b7d84: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x2b7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x2b7d88: 0x344625ed  ori         $a2, $v0, 0x25ED
    ctx->pc = 0x2b7d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
    // 0x2b7d8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7d90: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x2b7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x2b7d94: 0xae03019c  sw          $v1, 0x19C($s0)
    ctx->pc = 0x2b7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 3));
    // 0x2b7d98: 0x3c023e88  lui         $v0, 0x3E88
    ctx->pc = 0x2b7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16008 << 16));
    // 0x2b7d9c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x2b7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x2b7da0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b7da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b7da4: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x2b7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x2b7da8: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x2b7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x2b7dac: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x2b7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2b7db0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2b7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2b7db4: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x2b7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x2b7db8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b7dbc: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x2b7dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x2b7dc0: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x2b7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x2b7dc4: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x2b7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x2b7dc8: 0xa20001bc  sb          $zero, 0x1BC($s0)
    ctx->pc = 0x2b7dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7dcc: 0xae0601c0  sw          $a2, 0x1C0($s0)
    ctx->pc = 0x2b7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 6));
    // 0x2b7dd0: 0xae0501c4  sw          $a1, 0x1C4($s0)
    ctx->pc = 0x2b7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 5));
    // 0x2b7dd4: 0xae0301c8  sw          $v1, 0x1C8($s0)
    ctx->pc = 0x2b7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 3));
    // 0x2b7dd8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B7DD8u;
    SET_GPR_U32(ctx, 31, 0x2B7DE0u);
    ctx->pc = 0x2B7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DD8u;
            // 0x2b7ddc: 0xae0201cc  sw          $v0, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DE0u; }
        if (ctx->pc != 0x2B7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DE0u; }
        if (ctx->pc != 0x2B7DE0u) { return; }
    }
    ctx->pc = 0x2B7DE0u;
label_2b7de0:
    // 0x2b7de0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7de4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2b7de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2b7de8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7DE8u;
    SET_GPR_U32(ctx, 31, 0x2B7DF0u);
    ctx->pc = 0x2B7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DE8u;
            // 0x2b7dec: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DF0u; }
        if (ctx->pc != 0x2B7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DF0u; }
        if (ctx->pc != 0x2B7DF0u) { return; }
    }
    ctx->pc = 0x2B7DF0u;
label_2b7df0:
    // 0x2b7df0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b7df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7DFCu;
            // 0x2b7e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7E04u;
    // 0x2b7e04: 0x0  nop
    ctx->pc = 0x2b7e04u;
    // NOP
    // 0x2b7e08: 0x0  nop
    ctx->pc = 0x2b7e08u;
    // NOP
    // 0x2b7e0c: 0x0  nop
    ctx->pc = 0x2b7e0cu;
    // NOP
}
