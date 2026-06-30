#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361F80
// Address: 0x361f80 - 0x3620d0
void sub_00361F80_0x361f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361F80_0x361f80");
#endif

    switch (ctx->pc) {
        case 0x361fb4u: goto label_361fb4;
        case 0x361fc0u: goto label_361fc0;
        case 0x361fd0u: goto label_361fd0;
        case 0x361fdcu: goto label_361fdc;
        case 0x362074u: goto label_362074;
        case 0x362080u: goto label_362080;
        default: break;
    }

    ctx->pc = 0x361f80u;

    // 0x361f80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x361f84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x361f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x361f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x361f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x361f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x361f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361f94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x361f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f98: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x361f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x361f9c: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x361f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361fa0: 0x263000c0  addiu       $s0, $s1, 0xC0
    ctx->pc = 0x361fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x361fa4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x361fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fac: 0xc0b8024  jal         func_2E0090
    ctx->pc = 0x361FACu;
    SET_GPR_U32(ctx, 31, 0x361FB4u);
    ctx->pc = 0x361FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361FACu;
            // 0x361fb0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    if (runtime->hasFunction(0x2E0090u)) {
        auto targetFn = runtime->lookupFunction(0x2E0090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FB4u; }
        if (ctx->pc != 0x361FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0090_0x2e0090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FB4u; }
        if (ctx->pc != 0x361FB4u) { return; }
    }
    ctx->pc = 0x361FB4u;
label_361fb4:
    // 0x361fb4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x361fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361fb8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x361FB8u;
    SET_GPR_U32(ctx, 31, 0x361FC0u);
    ctx->pc = 0x361FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361FB8u;
            // 0x361fbc: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FC0u; }
        if (ctx->pc != 0x361FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FC0u; }
        if (ctx->pc != 0x361FC0u) { return; }
    }
    ctx->pc = 0x361FC0u;
label_361fc0:
    // 0x361fc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x361fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fc8: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x361FC8u;
    SET_GPR_U32(ctx, 31, 0x361FD0u);
    ctx->pc = 0x361FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361FC8u;
            // 0x361fcc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FD0u; }
        if (ctx->pc != 0x361FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FD0u; }
        if (ctx->pc != 0x361FD0u) { return; }
    }
    ctx->pc = 0x361FD0u;
label_361fd0:
    // 0x361fd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361fd4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x361FD4u;
    SET_GPR_U32(ctx, 31, 0x361FDCu);
    ctx->pc = 0x361FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x361FD4u;
            // 0x361fd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FDCu; }
        if (ctx->pc != 0x361FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361FDCu; }
        if (ctx->pc != 0x361FDCu) { return; }
    }
    ctx->pc = 0x361FDCu;
label_361fdc:
    // 0x361fdc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x361fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x361fe0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x361fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x361fe4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x361fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361fe8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x361fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x361fec: 0xc4434ae0  lwc1        $f3, 0x4AE0($v0)
    ctx->pc = 0x361fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361ff0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x361ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361ff4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x361ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361ff8: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x361ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x361ffc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x361ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x362000: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x362000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x362004: 0xc4424ae4  lwc1        $f2, 0x4AE4($v0)
    ctx->pc = 0x362004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x362008: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x362008u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36200c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x36200cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x362010: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x362010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x362014: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x362014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x362018: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x362018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36201c: 0xc4414ae8  lwc1        $f1, 0x4AE8($v0)
    ctx->pc = 0x36201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362020: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x362020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x362024: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x362024u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x362028: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x362028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36202c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x36202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x362030: 0xc4404aec  lwc1        $f0, 0x4AEC($v0)
    ctx->pc = 0x362030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362034: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x362034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x362038: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x362038u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36203c: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x36203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x362040: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x362040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x362044: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x362044u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x362048: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x362048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x36204c: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x36204cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x362050: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x362050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x362054: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x362054u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x362058: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x362058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x36205c: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x36205cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x362060: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x362060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x362064: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x362064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x362068: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x362068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x36206c: 0xc04c994  jal         func_132650
    ctx->pc = 0x36206Cu;
    SET_GPR_U32(ctx, 31, 0x362074u);
    ctx->pc = 0x362070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36206Cu;
            // 0x362070: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362074u; }
        if (ctx->pc != 0x362074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362074u; }
        if (ctx->pc != 0x362074u) { return; }
    }
    ctx->pc = 0x362074u;
label_362074:
    // 0x362074: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x362074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x362078: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362078u;
    SET_GPR_U32(ctx, 31, 0x362080u);
    ctx->pc = 0x36207Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362078u;
            // 0x36207c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362080u; }
        if (ctx->pc != 0x362080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362080u; }
        if (ctx->pc != 0x362080u) { return; }
    }
    ctx->pc = 0x362080u;
label_362080:
    // 0x362080: 0x96240110  lhu         $a0, 0x110($s1)
    ctx->pc = 0x362080u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x362084: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x362084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362088: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x362088u;
    {
        const bool branch_taken_0x362088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362088) {
            ctx->pc = 0x36208Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362088u;
            // 0x36208c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3620B8u;
            goto label_3620b8;
        }
    }
    ctx->pc = 0x362090u;
    // 0x362090: 0xc621012c  lwc1        $f1, 0x12C($s1)
    ctx->pc = 0x362090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362094: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x362094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x362098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36209c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x36209Cu;
    {
        const bool branch_taken_0x36209c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36209c) {
            ctx->pc = 0x3620A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36209Cu;
            // 0x3620a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3620C0u;
            goto label_3620c0;
        }
    }
    ctx->pc = 0x3620A4u;
    // 0x3620a4: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x3620a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x3620a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3620a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3620ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3620ACu;
    {
        const bool branch_taken_0x3620ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3620ac) {
            ctx->pc = 0x3620BCu;
            goto label_3620bc;
        }
    }
    ctx->pc = 0x3620B4u;
    // 0x3620b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3620b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3620b8:
    // 0x3620b8: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x3620b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
label_3620bc:
    // 0x3620bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3620bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3620c0:
    // 0x3620c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3620c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3620c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3620c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3620c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3620C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3620CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3620C8u;
            // 0x3620cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3620D0u;
}
