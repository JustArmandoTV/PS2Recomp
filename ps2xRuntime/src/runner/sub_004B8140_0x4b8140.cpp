#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8140
// Address: 0x4b8140 - 0x4b8290
void sub_004B8140_0x4b8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8140_0x4b8140");
#endif

    switch (ctx->pc) {
        case 0x4b81a4u: goto label_4b81a4;
        case 0x4b81b4u: goto label_4b81b4;
        case 0x4b81c8u: goto label_4b81c8;
        case 0x4b81d4u: goto label_4b81d4;
        case 0x4b8270u: goto label_4b8270;
        case 0x4b827cu: goto label_4b827c;
        default: break;
    }

    ctx->pc = 0x4b8140u;

    // 0x4b8140: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b8140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4b8144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b8148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b814c: 0x9083017d  lbu         $v1, 0x17D($a0)
    ctx->pc = 0x4b814cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 381)));
    // 0x4b8150: 0x9082017c  lbu         $v0, 0x17C($a0)
    ctx->pc = 0x4b8150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x4b8154: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4b8154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4b8158: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4b8158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x4b815c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4b815cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4b8160: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4b8160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4b8164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B8164u;
    {
        const bool branch_taken_0x4b8164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8164u;
            // 0x4b8168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8164) {
            ctx->pc = 0x4B8178u;
            goto label_4b8178;
        }
    }
    ctx->pc = 0x4B816Cu;
    // 0x4b816c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4b816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b8170: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x4b8170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x4b8174: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4b8174u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4b8178:
    // 0x4b8178: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x4b8178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x4b817c: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x4b817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x4b8180: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4b8180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x4b8184: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x4b8184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4b8188: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b818c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x4b818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b8190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4b8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4b8194: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4b8194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4b8198: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x4b8198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b819c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x4B819Cu;
    SET_GPR_U32(ctx, 31, 0x4B81A4u);
    ctx->pc = 0x4B81A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B819Cu;
            // 0x4b81a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81A4u; }
        if (ctx->pc != 0x4B81A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81A4u; }
        if (ctx->pc != 0x4B81A4u) { return; }
    }
    ctx->pc = 0x4B81A4u;
label_4b81a4:
    // 0x4b81a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4b81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4b81a8: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4b81a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x4b81ac: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4B81ACu;
    SET_GPR_U32(ctx, 31, 0x4B81B4u);
    ctx->pc = 0x4B81B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B81ACu;
            // 0x4b81b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81B4u; }
        if (ctx->pc != 0x4B81B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81B4u; }
        if (ctx->pc != 0x4B81B4u) { return; }
    }
    ctx->pc = 0x4B81B4u;
label_4b81b4:
    // 0x4b81b4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b81b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4b81b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4b81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4b81bc: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x4b81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x4b81c0: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x4B81C0u;
    SET_GPR_U32(ctx, 31, 0x4B81C8u);
    ctx->pc = 0x4B81C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B81C0u;
            // 0x4b81c4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81C8u; }
        if (ctx->pc != 0x4B81C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81C8u; }
        if (ctx->pc != 0x4B81C8u) { return; }
    }
    ctx->pc = 0x4B81C8u;
label_4b81c8:
    // 0x4b81c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4b81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4b81cc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4B81CCu;
    SET_GPR_U32(ctx, 31, 0x4B81D4u);
    ctx->pc = 0x4B81D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B81CCu;
            // 0x4b81d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81D4u; }
        if (ctx->pc != 0x4B81D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B81D4u; }
        if (ctx->pc != 0x4B81D4u) { return; }
    }
    ctx->pc = 0x4B81D4u;
label_4b81d4:
    // 0x4b81d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b81d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b81dc: 0xc4406540  lwc1        $f0, 0x6540($v0)
    ctx->pc = 0x4b81dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b81e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4b81e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4b81e4: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x4b81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b81e8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4b81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x4b81ec: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x4b81ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b81f0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4b81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x4b81f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b81f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4b81f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4b81fc: 0xc4416544  lwc1        $f1, 0x6544($v0)
    ctx->pc = 0x4b81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b8200: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x4b8200u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4b8204: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x4b8204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4b8208: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4b8208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4b820c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b8210: 0xc4406548  lwc1        $f0, 0x6548($v0)
    ctx->pc = 0x4b8210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b8214: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x4b8214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b8218: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x4b8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b821c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b8220: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4b8220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4b8224: 0xc4416550  lwc1        $f1, 0x6550($v0)
    ctx->pc = 0x4b8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b8228: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x4b8228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4b822c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x4b822cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4b8230: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b8230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b8234: 0xc4406554  lwc1        $f0, 0x6554($v0)
    ctx->pc = 0x4b8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b8238: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x4b8238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4b823c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4b823cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x4b8240: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b8240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b8244: 0xc4416558  lwc1        $f1, 0x6558($v0)
    ctx->pc = 0x4b8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b8248: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4b8248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x4b824c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b8250: 0xc440655c  lwc1        $f0, 0x655C($v0)
    ctx->pc = 0x4b8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b8254: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4b8254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4b8258: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x4b8258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b825c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4b825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x4b8260: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x4b8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b8264: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4b8264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x4b8268: 0xc04c994  jal         func_132650
    ctx->pc = 0x4B8268u;
    SET_GPR_U32(ctx, 31, 0x4B8270u);
    ctx->pc = 0x4B826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8268u;
            // 0x4b826c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8270u; }
        if (ctx->pc != 0x4B8270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8270u; }
        if (ctx->pc != 0x4B8270u) { return; }
    }
    ctx->pc = 0x4B8270u;
label_4b8270:
    // 0x4b8270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8274: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x4B8274u;
    SET_GPR_U32(ctx, 31, 0x4B827Cu);
    ctx->pc = 0x4B8278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8274u;
            // 0x4b8278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B827Cu; }
        if (ctx->pc != 0x4B827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B827Cu; }
        if (ctx->pc != 0x4B827Cu) { return; }
    }
    ctx->pc = 0x4B827Cu;
label_4b827c:
    // 0x4b827c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8284: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8284u;
            // 0x4b8288: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B828Cu;
    // 0x4b828c: 0x0  nop
    ctx->pc = 0x4b828cu;
    // NOP
}
