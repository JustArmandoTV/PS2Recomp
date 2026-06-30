#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E150
// Address: 0x13e150 - 0x13e730
void sub_0013E150_0x13e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E150_0x13e150");
#endif

    switch (ctx->pc) {
        case 0x13e208u: goto label_13e208;
        case 0x13e220u: goto label_13e220;
        case 0x13e230u: goto label_13e230;
        case 0x13e244u: goto label_13e244;
        case 0x13e254u: goto label_13e254;
        case 0x13e288u: goto label_13e288;
        case 0x13e2c8u: goto label_13e2c8;
        case 0x13e2f0u: goto label_13e2f0;
        case 0x13e31cu: goto label_13e31c;
        case 0x13e348u: goto label_13e348;
        case 0x13e370u: goto label_13e370;
        case 0x13e398u: goto label_13e398;
        case 0x13e3c0u: goto label_13e3c0;
        case 0x13e3e8u: goto label_13e3e8;
        case 0x13e460u: goto label_13e460;
        case 0x13e470u: goto label_13e470;
        case 0x13e480u: goto label_13e480;
        case 0x13e490u: goto label_13e490;
        case 0x13e508u: goto label_13e508;
        case 0x13e518u: goto label_13e518;
        case 0x13e528u: goto label_13e528;
        case 0x13e538u: goto label_13e538;
        case 0x13e5b0u: goto label_13e5b0;
        case 0x13e5c0u: goto label_13e5c0;
        case 0x13e5d0u: goto label_13e5d0;
        case 0x13e5e0u: goto label_13e5e0;
        default: break;
    }

    ctx->pc = 0x13e150u;

    // 0x13e150: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x13e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x13e154: 0x24030c3f  addiu       $v1, $zero, 0xC3F
    ctx->pc = 0x13e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3135));
    // 0x13e158: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x13e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13e15c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13e160: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x13e164: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13e164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13e168: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13e168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e16c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x13e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x13e170: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13e170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e174: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13e178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13e178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13e17c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e180: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13e180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13e184: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x13e184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e188: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x13e188u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13e18c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x13e18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e190: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x13e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x13e194: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x13e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e198: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x13e198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x13e19c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x13e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e1a0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x13e1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x13e1a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13e1a8: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x13e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x13e1ac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x13e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e1b0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x13e1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x13e1b4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x13e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e1b8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x13e1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x13e1bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x13e1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e1c0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x13e1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x13e1c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x13e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e1c8: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x13E1C8u;
    {
        const bool branch_taken_0x13e1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1C8u;
            // 0x13e1cc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1c8) {
            ctx->pc = 0x13E25Cu;
            goto label_13e25c;
        }
    }
    ctx->pc = 0x13E1D0u;
    // 0x13e1d0: 0x2403027f  addiu       $v1, $zero, 0x27F
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x13e1d4: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x13E1D4u;
    {
        const bool branch_taken_0x13e1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e1d4) {
            ctx->pc = 0x13E1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1D4u;
            // 0x13e1d8: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E238u;
            goto label_13e238;
        }
    }
    ctx->pc = 0x13E1DCu;
    // 0x13e1dc: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x13e1e0: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13E1E0u;
    {
        const bool branch_taken_0x13e1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e1e0) {
            ctx->pc = 0x13E1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1E0u;
            // 0x13e1e4: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E214u;
            goto label_13e214;
        }
    }
    ctx->pc = 0x13E1E8u;
    // 0x13e1e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13e1ec: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E1ECu;
    {
        const bool branch_taken_0x13e1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e1ec) {
            ctx->pc = 0x13E1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1ECu;
            // 0x13e1f0: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E1FCu;
            goto label_13e1fc;
        }
    }
    ctx->pc = 0x13E1F4u;
    // 0x13e1f4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13E1F4u;
    {
        const bool branch_taken_0x13e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1F4u;
            // 0x13e1f8: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1f4) {
            ctx->pc = 0x13E27Cu;
            goto label_13e27c;
        }
    }
    ctx->pc = 0x13E1FCu;
label_13e1fc:
    // 0x13e1fc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e200: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13E200u;
    SET_GPR_U32(ctx, 31, 0x13E208u);
    ctx->pc = 0x13E204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E200u;
            // 0x13e204: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E208u; }
        if (ctx->pc != 0x13E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E208u; }
        if (ctx->pc != 0x13E208u) { return; }
    }
    ctx->pc = 0x13E208u;
label_13e208:
    // 0x13e208: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x13e208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13e20c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13E20Cu;
    {
        const bool branch_taken_0x13e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E20Cu;
            // 0x13e210: 0xafa300fc  sw          $v1, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e20c) {
            ctx->pc = 0x13E278u;
            goto label_13e278;
        }
    }
    ctx->pc = 0x13E214u;
label_13e214:
    // 0x13e214: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e218: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13E218u;
    SET_GPR_U32(ctx, 31, 0x13E220u);
    ctx->pc = 0x13E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E218u;
            // 0x13e21c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E220u; }
        if (ctx->pc != 0x13E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E220u; }
        if (ctx->pc != 0x13E220u) { return; }
    }
    ctx->pc = 0x13E220u;
label_13e220:
    // 0x13e220: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x13e220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x13e224: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13e228: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13E228u;
    SET_GPR_U32(ctx, 31, 0x13E230u);
    ctx->pc = 0x13E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E228u;
            // 0x13e22c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E230u; }
        if (ctx->pc != 0x13E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E230u; }
        if (ctx->pc != 0x13E230u) { return; }
    }
    ctx->pc = 0x13E230u;
label_13e230:
    // 0x13e230: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13E230u;
    {
        const bool branch_taken_0x13e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e230) {
            ctx->pc = 0x13E278u;
            goto label_13e278;
        }
    }
    ctx->pc = 0x13E238u;
label_13e238:
    // 0x13e238: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x13e238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e23c: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13E23Cu;
    SET_GPR_U32(ctx, 31, 0x13E244u);
    ctx->pc = 0x13E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E23Cu;
            // 0x13e240: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E244u; }
        if (ctx->pc != 0x13E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E244u; }
        if (ctx->pc != 0x13E244u) { return; }
    }
    ctx->pc = 0x13E244u;
label_13e244:
    // 0x13e244: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x13e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x13e248: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13e24c: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13E24Cu;
    SET_GPR_U32(ctx, 31, 0x13E254u);
    ctx->pc = 0x13E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E24Cu;
            // 0x13e250: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E254u; }
        if (ctx->pc != 0x13E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E254u; }
        if (ctx->pc != 0x13E254u) { return; }
    }
    ctx->pc = 0x13E254u;
label_13e254:
    // 0x13e254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E254u;
    {
        const bool branch_taken_0x13e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e254) {
            ctx->pc = 0x13E278u;
            goto label_13e278;
        }
    }
    ctx->pc = 0x13E25Cu;
label_13e25c:
    // 0x13e25c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x13e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13e260: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x13e260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x13e264: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x13e264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13e268: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x13e268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x13e26c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x13e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13e270: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x13e270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x13e274: 0x8e160020  lw          $s6, 0x20($s0)
    ctx->pc = 0x13e274u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13e278:
    // 0x13e278: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_13e27c:
    // 0x13e27c: 0x186000de  blez        $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x13E27Cu;
    {
        const bool branch_taken_0x13e27c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E27Cu;
            // 0x13e280: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e27c) {
            ctx->pc = 0x13E5F8u;
            goto label_13e5f8;
        }
    }
    ctx->pc = 0x13E284u;
    // 0x13e284: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13e284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e288:
    // 0x13e288: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x13e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x13e28c: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x13e28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13e290: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x13e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e294: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13e294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e298: 0x450100d1  bc1t        . + 4 + (0xD1 << 2)
    ctx->pc = 0x13E298u;
    {
        const bool branch_taken_0x13e298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e298) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E2A0u;
    // 0x13e2a0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x13e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e2a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13e2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e2a8: 0x450100cd  bc1t        . + 4 + (0xCD << 2)
    ctx->pc = 0x13E2A8u;
    {
        const bool branch_taken_0x13e2a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e2a8) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E2B0u;
    // 0x13e2b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x13e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13e2b4: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x13e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e2b8: 0xc64d0018  lwc1        $f13, 0x18($s2)
    ctx->pc = 0x13e2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13e2bc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13e2c0: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x13E2C0u;
    SET_GPR_U32(ctx, 31, 0x13E2C8u);
    ctx->pc = 0x13E2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2C0u;
            // 0x13e2c4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2C8u; }
        if (ctx->pc != 0x13E2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2C8u; }
        if (ctx->pc != 0x13E2C8u) { return; }
    }
    ctx->pc = 0x13E2C8u;
label_13e2c8:
    // 0x13e2c8: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x13E2C8u;
    {
        const bool branch_taken_0x13e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2c8) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E2D0u;
    // 0x13e2d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13e2d4: 0x30640700  andi        $a0, $v1, 0x700
    ctx->pc = 0x13e2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1792);
    // 0x13e2d8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E2D8u;
    {
        const bool branch_taken_0x13e2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2d8) {
            ctx->pc = 0x13E2F8u;
            goto label_13e2f8;
        }
    }
    ctx->pc = 0x13E2E0u;
    // 0x13e2e0: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e2e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e2e8: 0xc04d4d4  jal         func_135350
    ctx->pc = 0x13E2E8u;
    SET_GPR_U32(ctx, 31, 0x13E2F0u);
    ctx->pc = 0x13E2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2E8u;
            // 0x13e2ec: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135350u;
    if (runtime->hasFunction(0x135350u)) {
        auto targetFn = runtime->lookupFunction(0x135350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2F0u; }
        if (ctx->pc != 0x13E2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135350_0x135350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2F0u; }
        if (ctx->pc != 0x13E2F0u) { return; }
    }
    ctx->pc = 0x13E2F0u;
label_13e2f0:
    // 0x13e2f0: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x13E2F0u;
    {
        const bool branch_taken_0x13e2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2f0) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E2F8u;
label_13e2f8:
    // 0x13e2f8: 0x30647800  andi        $a0, $v1, 0x7800
    ctx->pc = 0x13e2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
    // 0x13e2fc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13E2FCu;
    {
        const bool branch_taken_0x13e2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2fc) {
            ctx->pc = 0x13E328u;
            goto label_13e328;
        }
    }
    ctx->pc = 0x13E304u;
    // 0x13e304: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e30c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x13e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13e310: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13e310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13e314: 0xc04d280  jal         func_134A00
    ctx->pc = 0x13E314u;
    SET_GPR_U32(ctx, 31, 0x13E31Cu);
    ctx->pc = 0x13E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E314u;
            // 0x13e318: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A00u;
    if (runtime->hasFunction(0x134A00u)) {
        auto targetFn = runtime->lookupFunction(0x134A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E31Cu; }
        if (ctx->pc != 0x13E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A00_0x134a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E31Cu; }
        if (ctx->pc != 0x13E31Cu) { return; }
    }
    ctx->pc = 0x13E31Cu;
label_13e31c:
    // 0x13e31c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x13E31Cu;
    {
        const bool branch_taken_0x13e31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e31c) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E324u;
    // 0x13e324: 0x0  nop
    ctx->pc = 0x13e324u;
    // NOP
label_13e328:
    // 0x13e328: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x13e32c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e330: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E330u;
    {
        const bool branch_taken_0x13e330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e330) {
            ctx->pc = 0x13E350u;
            goto label_13e350;
        }
    }
    ctx->pc = 0x13E338u;
    // 0x13e338: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e340: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x13E340u;
    SET_GPR_U32(ctx, 31, 0x13E348u);
    ctx->pc = 0x13E344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E340u;
            // 0x13e344: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (runtime->hasFunction(0x13DF70u)) {
        auto targetFn = runtime->lookupFunction(0x13DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E348u; }
        if (ctx->pc != 0x13E348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF70_0x13df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E348u; }
        if (ctx->pc != 0x13E348u) { return; }
    }
    ctx->pc = 0x13E348u;
label_13e348:
    // 0x13e348: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x13E348u;
    {
        const bool branch_taken_0x13e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e348) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E350u;
label_13e350:
    // 0x13e350: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x13e354: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e358: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E358u;
    {
        const bool branch_taken_0x13e358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e358) {
            ctx->pc = 0x13E378u;
            goto label_13e378;
        }
    }
    ctx->pc = 0x13E360u;
    // 0x13e360: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e368: 0xc04f778  jal         func_13DDE0
    ctx->pc = 0x13E368u;
    SET_GPR_U32(ctx, 31, 0x13E370u);
    ctx->pc = 0x13E36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E368u;
            // 0x13e36c: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DDE0u;
    if (runtime->hasFunction(0x13DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x13DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E370u; }
        if (ctx->pc != 0x13E370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DDE0_0x13dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E370u; }
        if (ctx->pc != 0x13E370u) { return; }
    }
    ctx->pc = 0x13E370u;
label_13e370:
    // 0x13e370: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x13E370u;
    {
        const bool branch_taken_0x13e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e370) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E378u;
label_13e378:
    // 0x13e378: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x13e37c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e380: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E380u;
    {
        const bool branch_taken_0x13e380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e380) {
            ctx->pc = 0x13E3A0u;
            goto label_13e3a0;
        }
    }
    ctx->pc = 0x13E388u;
    // 0x13e388: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e390: 0xc04f778  jal         func_13DDE0
    ctx->pc = 0x13E390u;
    SET_GPR_U32(ctx, 31, 0x13E398u);
    ctx->pc = 0x13E394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E390u;
            // 0x13e394: 0x27a500fc  addiu       $a1, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DDE0u;
    if (runtime->hasFunction(0x13DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x13DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E398u; }
        if (ctx->pc != 0x13E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DDE0_0x13dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E398u; }
        if (ctx->pc != 0x13E398u) { return; }
    }
    ctx->pc = 0x13E398u;
label_13e398:
    // 0x13e398: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x13E398u;
    {
        const bool branch_taken_0x13e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e398) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E3A0u;
label_13e3a0:
    // 0x13e3a0: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x13e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x13e3a4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e3a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E3A8u;
    {
        const bool branch_taken_0x13e3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3a8) {
            ctx->pc = 0x13E3C8u;
            goto label_13e3c8;
        }
    }
    ctx->pc = 0x13E3B0u;
    // 0x13e3b0: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e3b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3b8: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x13E3B8u;
    SET_GPR_U32(ctx, 31, 0x13E3C0u);
    ctx->pc = 0x13E3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3B8u;
            // 0x13e3bc: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (runtime->hasFunction(0x13DF70u)) {
        auto targetFn = runtime->lookupFunction(0x13DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3C0u; }
        if (ctx->pc != 0x13E3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF70_0x13df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3C0u; }
        if (ctx->pc != 0x13E3C0u) { return; }
    }
    ctx->pc = 0x13E3C0u;
label_13e3c0:
    // 0x13e3c0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x13E3C0u;
    {
        const bool branch_taken_0x13e3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3c0) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E3C8u;
label_13e3c8:
    // 0x13e3c8: 0x3c040e00  lui         $a0, 0xE00
    ctx->pc = 0x13e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3584 << 16));
    // 0x13e3cc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e3d0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E3D0u;
    {
        const bool branch_taken_0x13e3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3d0) {
            ctx->pc = 0x13E3F0u;
            goto label_13e3f0;
        }
    }
    ctx->pc = 0x13E3D8u;
    // 0x13e3d8: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x13e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13e3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3e0: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x13E3E0u;
    SET_GPR_U32(ctx, 31, 0x13E3E8u);
    ctx->pc = 0x13E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3E0u;
            // 0x13e3e4: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (runtime->hasFunction(0x13DF70u)) {
        auto targetFn = runtime->lookupFunction(0x13DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3E8u; }
        if (ctx->pc != 0x13E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF70_0x13df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E3E8u; }
        if (ctx->pc != 0x13E3E8u) { return; }
    }
    ctx->pc = 0x13E3E8u;
label_13e3e8:
    // 0x13e3e8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x13E3E8u;
    {
        const bool branch_taken_0x13e3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3e8) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E3F0u;
label_13e3f0:
    // 0x13e3f0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x13e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x13e3f4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e3f8: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13E3F8u;
    {
        const bool branch_taken_0x13e3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3f8) {
            ctx->pc = 0x13E498u;
            goto label_13e498;
        }
    }
    ctx->pc = 0x13E400u;
    // 0x13e400: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13e400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13e404: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x13e404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13e408: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13e408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13e40c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x13e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13e410: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x13e410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x13e414: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13E414u;
    {
        const bool branch_taken_0x13e414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E414u;
            // 0x13e418: 0xc7ac00f8  lwc1        $f12, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e414) {
            ctx->pc = 0x13E488u;
            goto label_13e488;
        }
    }
    ctx->pc = 0x13E41Cu;
    // 0x13e41c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e420: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13E420u;
    {
        const bool branch_taken_0x13e420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e420) {
            ctx->pc = 0x13E478u;
            goto label_13e478;
        }
    }
    ctx->pc = 0x13E428u;
    // 0x13e428: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e42c: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13E42Cu;
    {
        const bool branch_taken_0x13e42c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e42c) {
            ctx->pc = 0x13E468u;
            goto label_13e468;
        }
    }
    ctx->pc = 0x13E434u;
    // 0x13e434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e438: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E438u;
    {
        const bool branch_taken_0x13e438 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e438) {
            ctx->pc = 0x13E458u;
            goto label_13e458;
        }
    }
    ctx->pc = 0x13E440u;
    // 0x13e440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e444: 0x10c30066  beq         $a2, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x13E444u;
    {
        const bool branch_taken_0x13e444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e444) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E44Cu;
    // 0x13e44c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x13E44Cu;
    {
        const bool branch_taken_0x13e44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e44c) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E454u;
    // 0x13e454: 0x0  nop
    ctx->pc = 0x13e454u;
    // NOP
label_13e458:
    // 0x13e458: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x13E458u;
    SET_GPR_U32(ctx, 31, 0x13E460u);
    ctx->pc = 0x13E45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E458u;
            // 0x13e45c: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E460u; }
        if (ctx->pc != 0x13E460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E460u; }
        if (ctx->pc != 0x13E460u) { return; }
    }
    ctx->pc = 0x13E460u;
label_13e460:
    // 0x13e460: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x13E460u;
    {
        const bool branch_taken_0x13e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e460) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E468u;
label_13e468:
    // 0x13e468: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x13E468u;
    SET_GPR_U32(ctx, 31, 0x13E470u);
    ctx->pc = 0x13E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E468u;
            // 0x13e46c: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E470u; }
        if (ctx->pc != 0x13E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E470u; }
        if (ctx->pc != 0x13E470u) { return; }
    }
    ctx->pc = 0x13E470u;
label_13e470:
    // 0x13e470: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x13E470u;
    {
        const bool branch_taken_0x13e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e470) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E478u;
label_13e478:
    // 0x13e478: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13E478u;
    SET_GPR_U32(ctx, 31, 0x13E480u);
    ctx->pc = 0x13E47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E478u;
            // 0x13e47c: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E480u; }
        if (ctx->pc != 0x13E480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E480u; }
        if (ctx->pc != 0x13E480u) { return; }
    }
    ctx->pc = 0x13E480u;
label_13e480:
    // 0x13e480: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x13E480u;
    {
        const bool branch_taken_0x13e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e480) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E488u;
label_13e488:
    // 0x13e488: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x13E488u;
    SET_GPR_U32(ctx, 31, 0x13E490u);
    ctx->pc = 0x13E48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E488u;
            // 0x13e48c: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E490u; }
        if (ctx->pc != 0x13E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E490u; }
        if (ctx->pc != 0x13E490u) { return; }
    }
    ctx->pc = 0x13E490u;
label_13e490:
    // 0x13e490: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x13E490u;
    {
        const bool branch_taken_0x13e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e490) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E498u;
label_13e498:
    // 0x13e498: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x13e498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x13e49c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e4a0: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13E4A0u;
    {
        const bool branch_taken_0x13e4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4a0) {
            ctx->pc = 0x13E540u;
            goto label_13e540;
        }
    }
    ctx->pc = 0x13E4A8u;
    // 0x13e4a8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13e4ac: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x13e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13e4b0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13e4b4: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13e4b8: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x13e4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x13e4bc: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13E4BCu;
    {
        const bool branch_taken_0x13e4bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4BCu;
            // 0x13e4c0: 0xc7ac00f8  lwc1        $f12, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4bc) {
            ctx->pc = 0x13E530u;
            goto label_13e530;
        }
    }
    ctx->pc = 0x13E4C4u;
    // 0x13e4c4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e4c8: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13E4C8u;
    {
        const bool branch_taken_0x13e4c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e4c8) {
            ctx->pc = 0x13E520u;
            goto label_13e520;
        }
    }
    ctx->pc = 0x13E4D0u;
    // 0x13e4d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e4d4: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13E4D4u;
    {
        const bool branch_taken_0x13e4d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e4d4) {
            ctx->pc = 0x13E510u;
            goto label_13e510;
        }
    }
    ctx->pc = 0x13E4DCu;
    // 0x13e4dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e4e0: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E4E0u;
    {
        const bool branch_taken_0x13e4e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e4e0) {
            ctx->pc = 0x13E500u;
            goto label_13e500;
        }
    }
    ctx->pc = 0x13E4E8u;
    // 0x13e4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e4ec: 0x10c3003c  beq         $a2, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x13E4ECu;
    {
        const bool branch_taken_0x13e4ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e4ec) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E4F4u;
    // 0x13e4f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x13E4F4u;
    {
        const bool branch_taken_0x13e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4f4) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E4FCu;
    // 0x13e4fc: 0x0  nop
    ctx->pc = 0x13e4fcu;
    // NOP
label_13e500:
    // 0x13e500: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x13E500u;
    SET_GPR_U32(ctx, 31, 0x13E508u);
    ctx->pc = 0x13E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E500u;
            // 0x13e504: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E508u; }
        if (ctx->pc != 0x13E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E508u; }
        if (ctx->pc != 0x13E508u) { return; }
    }
    ctx->pc = 0x13E508u;
label_13e508:
    // 0x13e508: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x13E508u;
    {
        const bool branch_taken_0x13e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e508) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E510u;
label_13e510:
    // 0x13e510: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x13E510u;
    SET_GPR_U32(ctx, 31, 0x13E518u);
    ctx->pc = 0x13E514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E510u;
            // 0x13e514: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E518u; }
        if (ctx->pc != 0x13E518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E518u; }
        if (ctx->pc != 0x13E518u) { return; }
    }
    ctx->pc = 0x13E518u;
label_13e518:
    // 0x13e518: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13E518u;
    {
        const bool branch_taken_0x13e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e518) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E520u;
label_13e520:
    // 0x13e520: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13E520u;
    SET_GPR_U32(ctx, 31, 0x13E528u);
    ctx->pc = 0x13E524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E520u;
            // 0x13e524: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E528u; }
        if (ctx->pc != 0x13E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E528u; }
        if (ctx->pc != 0x13E528u) { return; }
    }
    ctx->pc = 0x13E528u;
label_13e528:
    // 0x13e528: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x13E528u;
    {
        const bool branch_taken_0x13e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e528) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E530u;
label_13e530:
    // 0x13e530: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x13E530u;
    SET_GPR_U32(ctx, 31, 0x13E538u);
    ctx->pc = 0x13E534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E530u;
            // 0x13e534: 0x27a60104  addiu       $a2, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E538u; }
        if (ctx->pc != 0x13E538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E538u; }
        if (ctx->pc != 0x13E538u) { return; }
    }
    ctx->pc = 0x13E538u;
label_13e538:
    // 0x13e538: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13E538u;
    {
        const bool branch_taken_0x13e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e538) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E540u;
label_13e540:
    // 0x13e540: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13e544: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13e548: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13E548u;
    {
        const bool branch_taken_0x13e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e548) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E550u;
    // 0x13e550: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13e554: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x13e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13e558: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13e55c: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x13e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13e560: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x13e560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x13e564: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13E564u;
    {
        const bool branch_taken_0x13e564 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E564u;
            // 0x13e568: 0xc7ac00f8  lwc1        $f12, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e564) {
            ctx->pc = 0x13E5D8u;
            goto label_13e5d8;
        }
    }
    ctx->pc = 0x13E56Cu;
    // 0x13e56c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e570: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13E570u;
    {
        const bool branch_taken_0x13e570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e570) {
            ctx->pc = 0x13E5C8u;
            goto label_13e5c8;
        }
    }
    ctx->pc = 0x13E578u;
    // 0x13e578: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13e578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e57c: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13E57Cu;
    {
        const bool branch_taken_0x13e57c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e57c) {
            ctx->pc = 0x13E5B8u;
            goto label_13e5b8;
        }
    }
    ctx->pc = 0x13E584u;
    // 0x13e584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e588: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E588u;
    {
        const bool branch_taken_0x13e588 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e588) {
            ctx->pc = 0x13E5A8u;
            goto label_13e5a8;
        }
    }
    ctx->pc = 0x13E590u;
    // 0x13e590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e594: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13E594u;
    {
        const bool branch_taken_0x13e594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e594) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E59Cu;
    // 0x13e59c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13E59Cu;
    {
        const bool branch_taken_0x13e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e59c) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E5A4u;
    // 0x13e5a4: 0x0  nop
    ctx->pc = 0x13e5a4u;
    // NOP
label_13e5a8:
    // 0x13e5a8: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x13E5A8u;
    SET_GPR_U32(ctx, 31, 0x13E5B0u);
    ctx->pc = 0x13E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5A8u;
            // 0x13e5ac: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5B0u; }
        if (ctx->pc != 0x13E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5B0u; }
        if (ctx->pc != 0x13E5B0u) { return; }
    }
    ctx->pc = 0x13E5B0u;
label_13e5b0:
    // 0x13e5b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13E5B0u;
    {
        const bool branch_taken_0x13e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e5b0) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E5B8u;
label_13e5b8:
    // 0x13e5b8: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x13E5B8u;
    SET_GPR_U32(ctx, 31, 0x13E5C0u);
    ctx->pc = 0x13E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5B8u;
            // 0x13e5bc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5C0u; }
        if (ctx->pc != 0x13E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5C0u; }
        if (ctx->pc != 0x13E5C0u) { return; }
    }
    ctx->pc = 0x13E5C0u;
label_13e5c0:
    // 0x13e5c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13E5C0u;
    {
        const bool branch_taken_0x13e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e5c0) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E5C8u;
label_13e5c8:
    // 0x13e5c8: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13E5C8u;
    SET_GPR_U32(ctx, 31, 0x13E5D0u);
    ctx->pc = 0x13E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5C8u;
            // 0x13e5cc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5D0u; }
        if (ctx->pc != 0x13E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5D0u; }
        if (ctx->pc != 0x13E5D0u) { return; }
    }
    ctx->pc = 0x13E5D0u;
label_13e5d0:
    // 0x13e5d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E5D0u;
    {
        const bool branch_taken_0x13e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e5d0) {
            ctx->pc = 0x13E5E0u;
            goto label_13e5e0;
        }
    }
    ctx->pc = 0x13E5D8u;
label_13e5d8:
    // 0x13e5d8: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x13E5D8u;
    SET_GPR_U32(ctx, 31, 0x13E5E0u);
    ctx->pc = 0x13E5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5D8u;
            // 0x13e5dc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5E0u; }
        if (ctx->pc != 0x13E5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E5E0u; }
        if (ctx->pc != 0x13E5E0u) { return; }
    }
    ctx->pc = 0x13E5E0u;
label_13e5e0:
    // 0x13e5e0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13e5e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13e5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13e5e8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x13e5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e5ec: 0x1460ff26  bnez        $v1, . + 4 + (-0xDA << 2)
    ctx->pc = 0x13E5ECu;
    {
        const bool branch_taken_0x13e5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5ECu;
            // 0x13e5f0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5ec) {
            ctx->pc = 0x13E288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13e288;
        }
    }
    ctx->pc = 0x13E5F4u;
    // 0x13e5f4: 0x0  nop
    ctx->pc = 0x13e5f4u;
    // NOP
label_13e5f8:
    // 0x13e5f8: 0x24030c3f  addiu       $v1, $zero, 0xC3F
    ctx->pc = 0x13e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3135));
    // 0x13e5fc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x13e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e600: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x13e600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x13e604: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x13e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e608: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x13e608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x13e60c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x13e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e610: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x13e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x13e614: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x13e618: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x13e618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x13e61c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x13e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e620: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x13e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x13e624: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x13e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e628: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x13e628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x13e62c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x13e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e630: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x13e630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x13e634: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x13e634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13e638: 0x5083002c  beql        $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x13E638u;
    {
        const bool branch_taken_0x13e638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e638) {
            ctx->pc = 0x13E63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E638u;
            // 0x13e63c: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E6ECu;
            goto label_13e6ec;
        }
    }
    ctx->pc = 0x13E640u;
    // 0x13e640: 0x2403027f  addiu       $v1, $zero, 0x27F
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x13e644: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13E644u;
    {
        const bool branch_taken_0x13e644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e644) {
            ctx->pc = 0x13E648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E644u;
            // 0x13e648: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E6BCu;
            goto label_13e6bc;
        }
    }
    ctx->pc = 0x13E64Cu;
    // 0x13e64c: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x13e650: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13E650u;
    {
        const bool branch_taken_0x13e650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e650) {
            ctx->pc = 0x13E654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E650u;
            // 0x13e654: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E68Cu;
            goto label_13e68c;
        }
    }
    ctx->pc = 0x13E658u;
    // 0x13e658: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x13e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13e65c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E65Cu;
    {
        const bool branch_taken_0x13e65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e65c) {
            ctx->pc = 0x13E660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E65Cu;
            // 0x13e660: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E66Cu;
            goto label_13e66c;
        }
    }
    ctx->pc = 0x13E664u;
    // 0x13e664: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13E664u;
    {
        const bool branch_taken_0x13e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E664u;
            // 0x13e668: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e664) {
            ctx->pc = 0x13E704u;
            goto label_13e704;
        }
    }
    ctx->pc = 0x13E66Cu;
label_13e66c:
    // 0x13e66c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x13e66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x13e670: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x13e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e674: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x13e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x13e678: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x13e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e67c: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x13e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x13e680: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x13e680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13e684: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13E684u;
    {
        const bool branch_taken_0x13e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E684u;
            // 0x13e688: 0xae63002c  sw          $v1, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e684) {
            ctx->pc = 0x13E700u;
            goto label_13e700;
        }
    }
    ctx->pc = 0x13E68Cu;
label_13e68c:
    // 0x13e68c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x13e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x13e690: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x13e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e694: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x13e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x13e698: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x13e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e69c: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x13e69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x13e6a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x13e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6a4: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x13e6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x13e6a8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x13e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6ac: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x13e6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x13e6b0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x13e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13E6B4u;
    {
        const bool branch_taken_0x13e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6B4u;
            // 0x13e6b8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6b4) {
            ctx->pc = 0x13E700u;
            goto label_13e700;
        }
    }
    ctx->pc = 0x13E6BCu;
label_13e6bc:
    // 0x13e6bc: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x13e6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x13e6c0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x13e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6c4: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x13e6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x13e6c8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x13e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6cc: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x13e6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x13e6d0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x13e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6d4: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x13e6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x13e6d8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x13e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6dc: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x13e6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x13e6e0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x13e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e6e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E6E4u;
    {
        const bool branch_taken_0x13e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6E4u;
            // 0x13e6e8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6e4) {
            ctx->pc = 0x13E700u;
            goto label_13e700;
        }
    }
    ctx->pc = 0x13E6ECu;
label_13e6ec:
    // 0x13e6ec: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x13e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x13e6f0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x13e6f4: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x13e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x13e6f8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x13e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13e6fc: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x13e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_13e700:
    // 0x13e700: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13e700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_13e704:
    // 0x13e704: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13e708: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13e708u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13e70c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13e70cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13e710: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13e710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13e714: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x13e714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e718: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13e718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e71c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e724: 0x3e00008  jr          $ra
    ctx->pc = 0x13E724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E724u;
            // 0x13e728: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E72Cu;
    // 0x13e72c: 0x0  nop
    ctx->pc = 0x13e72cu;
    // NOP
}
