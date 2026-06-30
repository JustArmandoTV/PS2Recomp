#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043A150
// Address: 0x43a150 - 0x43a310
void sub_0043A150_0x43a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A150_0x43a150");
#endif

    switch (ctx->pc) {
        case 0x43a16cu: goto label_43a16c;
        case 0x43a18cu: goto label_43a18c;
        case 0x43a204u: goto label_43a204;
        case 0x43a220u: goto label_43a220;
        case 0x43a240u: goto label_43a240;
        case 0x43a2a0u: goto label_43a2a0;
        case 0x43a2acu: goto label_43a2ac;
        case 0x43a2b8u: goto label_43a2b8;
        case 0x43a2c4u: goto label_43a2c4;
        case 0x43a2d0u: goto label_43a2d0;
        case 0x43a2dcu: goto label_43a2dc;
        case 0x43a2f4u: goto label_43a2f4;
        default: break;
    }

    ctx->pc = 0x43a150u;

    // 0x43a150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43a154: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43a154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43a158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43a15c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x43a15cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x43a160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43a164: 0xc10e8fc  jal         func_43A3F0
    ctx->pc = 0x43A164u;
    SET_GPR_U32(ctx, 31, 0x43A16Cu);
    ctx->pc = 0x43A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A164u;
            // 0x43a168: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43A3F0u;
    if (runtime->hasFunction(0x43A3F0u)) {
        auto targetFn = runtime->lookupFunction(0x43A3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A16Cu; }
        if (ctx->pc != 0x43A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043A3F0_0x43a3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A16Cu; }
        if (ctx->pc != 0x43A16Cu) { return; }
    }
    ctx->pc = 0x43A16Cu;
label_43a16c:
    // 0x43a16c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43a170: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43a174: 0x2463cf60  addiu       $v1, $v1, -0x30A0
    ctx->pc = 0x43a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954848));
    // 0x43a178: 0x2442cf98  addiu       $v0, $v0, -0x3068
    ctx->pc = 0x43a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954904));
    // 0x43a17c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43a180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a184: 0xc10e8f8  jal         func_43A3E0
    ctx->pc = 0x43A184u;
    SET_GPR_U32(ctx, 31, 0x43A18Cu);
    ctx->pc = 0x43A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A184u;
            // 0x43a188: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43A3E0u;
    if (runtime->hasFunction(0x43A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x43A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A18Cu; }
        if (ctx->pc != 0x43A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043A3E0_0x43a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A18Cu; }
        if (ctx->pc != 0x43A18Cu) { return; }
    }
    ctx->pc = 0x43A18Cu;
label_43a18c:
    // 0x43a18c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x43a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x43a190: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x43a190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x43a194: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43a198: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43a198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x43a19c: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x43a19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x43a1a0: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x43a1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x43a1a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x43a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x43a1a8: 0x24a5c4f0  addiu       $a1, $a1, -0x3B10
    ctx->pc = 0x43a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952176));
    // 0x43a1ac: 0xc462cf78  lwc1        $f2, -0x3088($v1)
    ctx->pc = 0x43a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x43a1b0: 0x24e7cdd0  addiu       $a3, $a3, -0x3230
    ctx->pc = 0x43a1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954448));
    // 0x43a1b4: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x43a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x43a1b8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x43a1bc: 0xc441cf7c  lwc1        $f1, -0x3084($v0)
    ctx->pc = 0x43a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x43a1c0: 0x2484ce08  addiu       $a0, $a0, -0x31F8
    ctx->pc = 0x43a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954504));
    // 0x43a1c4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x43a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x43a1c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x43a1c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43a1cc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x43a1d0: 0xc440cf80  lwc1        $f0, -0x3080($v0)
    ctx->pc = 0x43a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x43a1d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x43a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x43a1d8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x43a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x43a1dc: 0xa2030090  sb          $v1, 0x90($s0)
    ctx->pc = 0x43a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x43a1e0: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x43a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x43a1e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43a1e8: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x43a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x43a1ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x43a1f0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x43a1f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x43a1f4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x43a1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x43a1f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x43a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x43a1fc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x43A1FCu;
    SET_GPR_U32(ctx, 31, 0x43A204u);
    ctx->pc = 0x43A200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A1FCu;
            // 0x43a200: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A204u; }
        if (ctx->pc != 0x43A204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A204u; }
        if (ctx->pc != 0x43A204u) { return; }
    }
    ctx->pc = 0x43A204u;
label_43a204:
    // 0x43a204: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x43a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x43a208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a20c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43A20Cu;
    {
        const bool branch_taken_0x43a20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A20Cu;
            // 0x43a210: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a20c) {
            ctx->pc = 0x43A224u;
            goto label_43a224;
        }
    }
    ctx->pc = 0x43A214u;
    // 0x43a214: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x43a214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43a218: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x43A218u;
    SET_GPR_U32(ctx, 31, 0x43A220u);
    ctx->pc = 0x43A21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A218u;
            // 0x43a21c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A220u; }
        if (ctx->pc != 0x43A220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A220u; }
        if (ctx->pc != 0x43A220u) { return; }
    }
    ctx->pc = 0x43A220u;
label_43a220:
    // 0x43a220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43a224:
    // 0x43a224: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x43a224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x43a228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43a228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a22c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43a22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a234: 0x3e00008  jr          $ra
    ctx->pc = 0x43A234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A234u;
            // 0x43a238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A23Cu;
    // 0x43a23c: 0x0  nop
    ctx->pc = 0x43a23cu;
    // NOP
label_43a240:
    // 0x43a240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43a244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43a248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43a24c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43a250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43a250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a254: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x43A254u;
    {
        const bool branch_taken_0x43a254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A254u;
            // 0x43a258: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a254) {
            ctx->pc = 0x43A2F4u;
            goto label_43a2f4;
        }
    }
    ctx->pc = 0x43A25Cu;
    // 0x43a25c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43a260: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43a264: 0x2463cf60  addiu       $v1, $v1, -0x30A0
    ctx->pc = 0x43a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954848));
    // 0x43a268: 0x2442cf98  addiu       $v0, $v0, -0x3068
    ctx->pc = 0x43a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954904));
    // 0x43a26c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43a270: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43A270u;
    {
        const bool branch_taken_0x43a270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A270u;
            // 0x43a274: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a270) {
            ctx->pc = 0x43A2DCu;
            goto label_43a2dc;
        }
    }
    ctx->pc = 0x43A278u;
    // 0x43a278: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43a278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43a27c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43a280: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x43a280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
    // 0x43a284: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43a284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43a288: 0x2442cf48  addiu       $v0, $v0, -0x30B8
    ctx->pc = 0x43a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954824));
    // 0x43a28c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43a290: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x43a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x43a294: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x43a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x43a298: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x43A298u;
    SET_GPR_U32(ctx, 31, 0x43A2A0u);
    ctx->pc = 0x43A29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A298u;
            // 0x43a29c: 0x24a59a10  addiu       $a1, $a1, -0x65F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2A0u; }
        if (ctx->pc != 0x43A2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2A0u; }
        if (ctx->pc != 0x43A2A0u) { return; }
    }
    ctx->pc = 0x43A2A0u;
label_43a2a0:
    // 0x43a2a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x43a2a4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x43A2A4u;
    SET_GPR_U32(ctx, 31, 0x43A2ACu);
    ctx->pc = 0x43A2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2A4u;
            // 0x43a2a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2ACu; }
        if (ctx->pc != 0x43A2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2ACu; }
        if (ctx->pc != 0x43A2ACu) { return; }
    }
    ctx->pc = 0x43A2ACu;
label_43a2ac:
    // 0x43a2ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x43a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x43a2b0: 0xc10e8dc  jal         func_43A370
    ctx->pc = 0x43A2B0u;
    SET_GPR_U32(ctx, 31, 0x43A2B8u);
    ctx->pc = 0x43A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2B0u;
            // 0x43a2b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43A370u;
    if (runtime->hasFunction(0x43A370u)) {
        auto targetFn = runtime->lookupFunction(0x43A370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2B8u; }
        if (ctx->pc != 0x43A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043A370_0x43a370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2B8u; }
        if (ctx->pc != 0x43A2B8u) { return; }
    }
    ctx->pc = 0x43A2B8u;
label_43a2b8:
    // 0x43a2b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x43a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x43a2bc: 0xc10e8dc  jal         func_43A370
    ctx->pc = 0x43A2BCu;
    SET_GPR_U32(ctx, 31, 0x43A2C4u);
    ctx->pc = 0x43A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2BCu;
            // 0x43a2c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43A370u;
    if (runtime->hasFunction(0x43A370u)) {
        auto targetFn = runtime->lookupFunction(0x43A370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2C4u; }
        if (ctx->pc != 0x43A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043A370_0x43a370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2C4u; }
        if (ctx->pc != 0x43A2C4u) { return; }
    }
    ctx->pc = 0x43A2C4u;
label_43a2c4:
    // 0x43a2c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x43a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x43a2c8: 0xc10e8c4  jal         func_43A310
    ctx->pc = 0x43A2C8u;
    SET_GPR_U32(ctx, 31, 0x43A2D0u);
    ctx->pc = 0x43A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2C8u;
            // 0x43a2cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43A310u;
    if (runtime->hasFunction(0x43A310u)) {
        auto targetFn = runtime->lookupFunction(0x43A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2D0u; }
        if (ctx->pc != 0x43A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043A310_0x43a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2D0u; }
        if (ctx->pc != 0x43A2D0u) { return; }
    }
    ctx->pc = 0x43A2D0u;
label_43a2d0:
    // 0x43a2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a2d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x43A2D4u;
    SET_GPR_U32(ctx, 31, 0x43A2DCu);
    ctx->pc = 0x43A2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2D4u;
            // 0x43a2d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2DCu; }
        if (ctx->pc != 0x43A2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2DCu; }
        if (ctx->pc != 0x43A2DCu) { return; }
    }
    ctx->pc = 0x43A2DCu;
label_43a2dc:
    // 0x43a2dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43a2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x43a2e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43a2e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43a2e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43A2E4u;
    {
        const bool branch_taken_0x43a2e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43a2e4) {
            ctx->pc = 0x43A2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2E4u;
            // 0x43a2e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A2F8u;
            goto label_43a2f8;
        }
    }
    ctx->pc = 0x43A2ECu;
    // 0x43a2ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43A2ECu;
    SET_GPR_U32(ctx, 31, 0x43A2F4u);
    ctx->pc = 0x43A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A2ECu;
            // 0x43a2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2F4u; }
        if (ctx->pc != 0x43A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A2F4u; }
        if (ctx->pc != 0x43A2F4u) { return; }
    }
    ctx->pc = 0x43A2F4u;
label_43a2f4:
    // 0x43a2f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43a2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43a2f8:
    // 0x43a2f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43a2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43a2fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a304: 0x3e00008  jr          $ra
    ctx->pc = 0x43A304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A304u;
            // 0x43a308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A30Cu;
    // 0x43a30c: 0x0  nop
    ctx->pc = 0x43a30cu;
    // NOP
}
