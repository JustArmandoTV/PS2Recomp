#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B6170
// Address: 0x4b6170 - 0x4b6360
void sub_004B6170_0x4b6170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6170_0x4b6170");
#endif

    switch (ctx->pc) {
        case 0x4b618cu: goto label_4b618c;
        case 0x4b61acu: goto label_4b61ac;
        case 0x4b61f8u: goto label_4b61f8;
        case 0x4b6218u: goto label_4b6218;
        case 0x4b6250u: goto label_4b6250;
        case 0x4b6270u: goto label_4b6270;
        case 0x4b6290u: goto label_4b6290;
        case 0x4b62f0u: goto label_4b62f0;
        case 0x4b62fcu: goto label_4b62fc;
        case 0x4b6308u: goto label_4b6308;
        case 0x4b6314u: goto label_4b6314;
        case 0x4b6320u: goto label_4b6320;
        case 0x4b632cu: goto label_4b632c;
        case 0x4b6344u: goto label_4b6344;
        default: break;
    }

    ctx->pc = 0x4b6170u;

    // 0x4b6170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b6170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b6174: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4b6178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b6178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b617c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4b617cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4b6180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b6180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b6184: 0xc12d9a8  jal         func_4B66A0
    ctx->pc = 0x4B6184u;
    SET_GPR_U32(ctx, 31, 0x4B618Cu);
    ctx->pc = 0x4B6188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6184u;
            // 0x4b6188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B66A0u;
    if (runtime->hasFunction(0x4B66A0u)) {
        auto targetFn = runtime->lookupFunction(0x4B66A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B618Cu; }
        if (ctx->pc != 0x4B618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B66A0_0x4b66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B618Cu; }
        if (ctx->pc != 0x4B618Cu) { return; }
    }
    ctx->pc = 0x4B618Cu;
label_4b618c:
    // 0x4b618c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b618cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b6190: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b6190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b6194: 0x24630c20  addiu       $v1, $v1, 0xC20
    ctx->pc = 0x4b6194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3104));
    // 0x4b6198: 0x24420c58  addiu       $v0, $v0, 0xC58
    ctx->pc = 0x4b6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3160));
    // 0x4b619c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b619cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b61a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b61a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b61a4: 0xc12d9a4  jal         func_4B6690
    ctx->pc = 0x4B61A4u;
    SET_GPR_U32(ctx, 31, 0x4B61ACu);
    ctx->pc = 0x4B61A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B61A4u;
            // 0x4b61a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6690u;
    if (runtime->hasFunction(0x4B6690u)) {
        auto targetFn = runtime->lookupFunction(0x4B6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B61ACu; }
        if (ctx->pc != 0x4B61ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B6690_0x4b6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B61ACu; }
        if (ctx->pc != 0x4B61ACu) { return; }
    }
    ctx->pc = 0x4B61ACu;
label_4b61ac:
    // 0x4b61ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4b61acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4b61b0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4b61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x4b61b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b61b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4b61b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b61bc: 0x24420bd0  addiu       $v0, $v0, 0xBD0
    ctx->pc = 0x4b61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x4b61c0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4b61c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4b61c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b61c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b61cc: 0x24420c08  addiu       $v0, $v0, 0xC08
    ctx->pc = 0x4b61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
    // 0x4b61d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4b61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4b61d4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4b61d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4b61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4b61dc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4b61e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b61e4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4b61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4b61e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b61e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4b61ec: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4b61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4b61f0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4B61F0u;
    SET_GPR_U32(ctx, 31, 0x4B61F8u);
    ctx->pc = 0x4B61F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B61F0u;
            // 0x4b61f4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B61F8u; }
        if (ctx->pc != 0x4B61F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B61F8u; }
        if (ctx->pc != 0x4B61F8u) { return; }
    }
    ctx->pc = 0x4B61F8u;
label_4b61f8:
    // 0x4b61f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4b61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b61fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b61fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6200: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6200u;
    {
        const bool branch_taken_0x4b6200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6200u;
            // 0x4b6204: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6200) {
            ctx->pc = 0x4B621Cu;
            goto label_4b621c;
        }
    }
    ctx->pc = 0x4B6208u;
    // 0x4b6208: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4b6208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4b620c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4b620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b6210: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4B6210u;
    SET_GPR_U32(ctx, 31, 0x4B6218u);
    ctx->pc = 0x4B6214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6210u;
            // 0x4b6214: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6218u; }
        if (ctx->pc != 0x4B6218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6218u; }
        if (ctx->pc != 0x4B6218u) { return; }
    }
    ctx->pc = 0x4B6218u;
label_4b6218:
    // 0x4b6218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b621c:
    // 0x4b621c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4b621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x4b6220: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x4b6220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x4b6224: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x4b6224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x4b6228: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4b6228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b622c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x4b622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x4b6230: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4b6230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4b6234: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4b6234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4b6238: 0x3c024148  lui         $v0, 0x4148
    ctx->pc = 0x4b6238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16712 << 16));
    // 0x4b623c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4b6240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b6240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4b6244: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b6244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4b6248: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4B6248u;
    SET_GPR_U32(ctx, 31, 0x4B6250u);
    ctx->pc = 0x4B624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6248u;
            // 0x4b624c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6250u; }
        if (ctx->pc != 0x4B6250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6250u; }
        if (ctx->pc != 0x4B6250u) { return; }
    }
    ctx->pc = 0x4B6250u;
label_4b6250:
    // 0x4b6250: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4b6250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b6254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6258: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6258u;
    {
        const bool branch_taken_0x4b6258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6258u;
            // 0x4b625c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6258) {
            ctx->pc = 0x4B6274u;
            goto label_4b6274;
        }
    }
    ctx->pc = 0x4B6260u;
    // 0x4b6260: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4b6260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4b6264: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4b6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b6268: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4B6268u;
    SET_GPR_U32(ctx, 31, 0x4B6270u);
    ctx->pc = 0x4B626Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6268u;
            // 0x4b626c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6270u; }
        if (ctx->pc != 0x4B6270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6270u; }
        if (ctx->pc != 0x4B6270u) { return; }
    }
    ctx->pc = 0x4B6270u;
label_4b6270:
    // 0x4b6270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6274:
    // 0x4b6274: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4b6274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4b6278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b6278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b627c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6284: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6284u;
            // 0x4b6288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B628Cu;
    // 0x4b628c: 0x0  nop
    ctx->pc = 0x4b628cu;
    // NOP
label_4b6290:
    // 0x4b6290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b6290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b6294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b6294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b6298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b6298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b629c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b62a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b62a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b62a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4B62A4u;
    {
        const bool branch_taken_0x4b62a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B62A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B62A4u;
            // 0x4b62a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b62a4) {
            ctx->pc = 0x4B6344u;
            goto label_4b6344;
        }
    }
    ctx->pc = 0x4B62ACu;
    // 0x4b62ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b62acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b62b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b62b4: 0x24630c20  addiu       $v1, $v1, 0xC20
    ctx->pc = 0x4b62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3104));
    // 0x4b62b8: 0x24420c58  addiu       $v0, $v0, 0xC58
    ctx->pc = 0x4b62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3160));
    // 0x4b62bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b62c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B62C0u;
    {
        const bool branch_taken_0x4b62c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B62C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B62C0u;
            // 0x4b62c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b62c0) {
            ctx->pc = 0x4B632Cu;
            goto label_4b632c;
        }
    }
    ctx->pc = 0x4B62C8u;
    // 0x4b62c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b62cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b62d0: 0x24630b80  addiu       $v1, $v1, 0xB80
    ctx->pc = 0x4b62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2944));
    // 0x4b62d4: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b62d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x4b62d8: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x4b62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
    // 0x4b62dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b62e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4b62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4b62e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4b62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4b62e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4B62E8u;
    SET_GPR_U32(ctx, 31, 0x4B62F0u);
    ctx->pc = 0x4B62ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B62E8u;
            // 0x4b62ec: 0x24a56430  addiu       $a1, $a1, 0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B62F0u; }
        if (ctx->pc != 0x4B62F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B62F0u; }
        if (ctx->pc != 0x4B62F0u) { return; }
    }
    ctx->pc = 0x4B62F0u;
label_4b62f0:
    // 0x4b62f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4b62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4b62f4: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x4B62F4u;
    SET_GPR_U32(ctx, 31, 0x4B62FCu);
    ctx->pc = 0x4B62F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B62F4u;
            // 0x4b62f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B62FCu; }
        if (ctx->pc != 0x4B62FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B62FCu; }
        if (ctx->pc != 0x4B62FCu) { return; }
    }
    ctx->pc = 0x4B62FCu;
label_4b62fc:
    // 0x4b62fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4b62fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4b6300: 0xc12d8f0  jal         func_4B63C0
    ctx->pc = 0x4B6300u;
    SET_GPR_U32(ctx, 31, 0x4B6308u);
    ctx->pc = 0x4B6304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6300u;
            // 0x4b6304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B63C0u;
    if (runtime->hasFunction(0x4B63C0u)) {
        auto targetFn = runtime->lookupFunction(0x4B63C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6308u; }
        if (ctx->pc != 0x4B6308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B63C0_0x4b63c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6308u; }
        if (ctx->pc != 0x4B6308u) { return; }
    }
    ctx->pc = 0x4B6308u;
label_4b6308:
    // 0x4b6308: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4b630c: 0xc12d8f0  jal         func_4B63C0
    ctx->pc = 0x4B630Cu;
    SET_GPR_U32(ctx, 31, 0x4B6314u);
    ctx->pc = 0x4B6310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B630Cu;
            // 0x4b6310: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B63C0u;
    if (runtime->hasFunction(0x4B63C0u)) {
        auto targetFn = runtime->lookupFunction(0x4B63C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6314u; }
        if (ctx->pc != 0x4B6314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B63C0_0x4b63c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6314u; }
        if (ctx->pc != 0x4B6314u) { return; }
    }
    ctx->pc = 0x4B6314u;
label_4b6314:
    // 0x4b6314: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4b6314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4b6318: 0xc12d8d8  jal         func_4B6360
    ctx->pc = 0x4B6318u;
    SET_GPR_U32(ctx, 31, 0x4B6320u);
    ctx->pc = 0x4B631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6318u;
            // 0x4b631c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6360u;
    if (runtime->hasFunction(0x4B6360u)) {
        auto targetFn = runtime->lookupFunction(0x4B6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6320u; }
        if (ctx->pc != 0x4B6320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B6360_0x4b6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6320u; }
        if (ctx->pc != 0x4B6320u) { return; }
    }
    ctx->pc = 0x4B6320u;
label_4b6320:
    // 0x4b6320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b6320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6324: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4B6324u;
    SET_GPR_U32(ctx, 31, 0x4B632Cu);
    ctx->pc = 0x4B6328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6324u;
            // 0x4b6328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B632Cu; }
        if (ctx->pc != 0x4B632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B632Cu; }
        if (ctx->pc != 0x4B632Cu) { return; }
    }
    ctx->pc = 0x4B632Cu;
label_4b632c:
    // 0x4b632c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4b6330: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b6330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4b6334: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6334u;
    {
        const bool branch_taken_0x4b6334 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b6334) {
            ctx->pc = 0x4B6338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6334u;
            // 0x4b6338: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6348u;
            goto label_4b6348;
        }
    }
    ctx->pc = 0x4B633Cu;
    // 0x4b633c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B633Cu;
    SET_GPR_U32(ctx, 31, 0x4B6344u);
    ctx->pc = 0x4B6340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B633Cu;
            // 0x4b6340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6344u; }
        if (ctx->pc != 0x4B6344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6344u; }
        if (ctx->pc != 0x4B6344u) { return; }
    }
    ctx->pc = 0x4B6344u;
label_4b6344:
    // 0x4b6344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b6344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b6348:
    // 0x4b6348: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b6348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b634c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b634cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b6350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b6354: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6354u;
            // 0x4b6358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B635Cu;
    // 0x4b635c: 0x0  nop
    ctx->pc = 0x4b635cu;
    // NOP
}
