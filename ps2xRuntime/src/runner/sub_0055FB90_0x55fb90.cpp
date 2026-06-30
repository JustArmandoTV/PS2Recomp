#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055FB90
// Address: 0x55fb90 - 0x55fd20
void sub_0055FB90_0x55fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055FB90_0x55fb90");
#endif

    switch (ctx->pc) {
        case 0x55fb90u: goto label_55fb90;
        case 0x55fb94u: goto label_55fb94;
        case 0x55fb98u: goto label_55fb98;
        case 0x55fb9cu: goto label_55fb9c;
        case 0x55fba0u: goto label_55fba0;
        case 0x55fba4u: goto label_55fba4;
        case 0x55fba8u: goto label_55fba8;
        case 0x55fbacu: goto label_55fbac;
        case 0x55fbb0u: goto label_55fbb0;
        case 0x55fbb4u: goto label_55fbb4;
        case 0x55fbb8u: goto label_55fbb8;
        case 0x55fbbcu: goto label_55fbbc;
        case 0x55fbc0u: goto label_55fbc0;
        case 0x55fbc4u: goto label_55fbc4;
        case 0x55fbc8u: goto label_55fbc8;
        case 0x55fbccu: goto label_55fbcc;
        case 0x55fbd0u: goto label_55fbd0;
        case 0x55fbd4u: goto label_55fbd4;
        case 0x55fbd8u: goto label_55fbd8;
        case 0x55fbdcu: goto label_55fbdc;
        case 0x55fbe0u: goto label_55fbe0;
        case 0x55fbe4u: goto label_55fbe4;
        case 0x55fbe8u: goto label_55fbe8;
        case 0x55fbecu: goto label_55fbec;
        case 0x55fbf0u: goto label_55fbf0;
        case 0x55fbf4u: goto label_55fbf4;
        case 0x55fbf8u: goto label_55fbf8;
        case 0x55fbfcu: goto label_55fbfc;
        case 0x55fc00u: goto label_55fc00;
        case 0x55fc04u: goto label_55fc04;
        case 0x55fc08u: goto label_55fc08;
        case 0x55fc0cu: goto label_55fc0c;
        case 0x55fc10u: goto label_55fc10;
        case 0x55fc14u: goto label_55fc14;
        case 0x55fc18u: goto label_55fc18;
        case 0x55fc1cu: goto label_55fc1c;
        case 0x55fc20u: goto label_55fc20;
        case 0x55fc24u: goto label_55fc24;
        case 0x55fc28u: goto label_55fc28;
        case 0x55fc2cu: goto label_55fc2c;
        case 0x55fc30u: goto label_55fc30;
        case 0x55fc34u: goto label_55fc34;
        case 0x55fc38u: goto label_55fc38;
        case 0x55fc3cu: goto label_55fc3c;
        case 0x55fc40u: goto label_55fc40;
        case 0x55fc44u: goto label_55fc44;
        case 0x55fc48u: goto label_55fc48;
        case 0x55fc4cu: goto label_55fc4c;
        case 0x55fc50u: goto label_55fc50;
        case 0x55fc54u: goto label_55fc54;
        case 0x55fc58u: goto label_55fc58;
        case 0x55fc5cu: goto label_55fc5c;
        case 0x55fc60u: goto label_55fc60;
        case 0x55fc64u: goto label_55fc64;
        case 0x55fc68u: goto label_55fc68;
        case 0x55fc6cu: goto label_55fc6c;
        case 0x55fc70u: goto label_55fc70;
        case 0x55fc74u: goto label_55fc74;
        case 0x55fc78u: goto label_55fc78;
        case 0x55fc7cu: goto label_55fc7c;
        case 0x55fc80u: goto label_55fc80;
        case 0x55fc84u: goto label_55fc84;
        case 0x55fc88u: goto label_55fc88;
        case 0x55fc8cu: goto label_55fc8c;
        case 0x55fc90u: goto label_55fc90;
        case 0x55fc94u: goto label_55fc94;
        case 0x55fc98u: goto label_55fc98;
        case 0x55fc9cu: goto label_55fc9c;
        case 0x55fca0u: goto label_55fca0;
        case 0x55fca4u: goto label_55fca4;
        case 0x55fca8u: goto label_55fca8;
        case 0x55fcacu: goto label_55fcac;
        case 0x55fcb0u: goto label_55fcb0;
        case 0x55fcb4u: goto label_55fcb4;
        case 0x55fcb8u: goto label_55fcb8;
        case 0x55fcbcu: goto label_55fcbc;
        case 0x55fcc0u: goto label_55fcc0;
        case 0x55fcc4u: goto label_55fcc4;
        case 0x55fcc8u: goto label_55fcc8;
        case 0x55fcccu: goto label_55fccc;
        case 0x55fcd0u: goto label_55fcd0;
        case 0x55fcd4u: goto label_55fcd4;
        case 0x55fcd8u: goto label_55fcd8;
        case 0x55fcdcu: goto label_55fcdc;
        case 0x55fce0u: goto label_55fce0;
        case 0x55fce4u: goto label_55fce4;
        case 0x55fce8u: goto label_55fce8;
        case 0x55fcecu: goto label_55fcec;
        case 0x55fcf0u: goto label_55fcf0;
        case 0x55fcf4u: goto label_55fcf4;
        case 0x55fcf8u: goto label_55fcf8;
        case 0x55fcfcu: goto label_55fcfc;
        case 0x55fd00u: goto label_55fd00;
        case 0x55fd04u: goto label_55fd04;
        case 0x55fd08u: goto label_55fd08;
        case 0x55fd0cu: goto label_55fd0c;
        case 0x55fd10u: goto label_55fd10;
        case 0x55fd14u: goto label_55fd14;
        case 0x55fd18u: goto label_55fd18;
        case 0x55fd1cu: goto label_55fd1c;
        default: break;
    }

    ctx->pc = 0x55fb90u;

label_55fb90:
    // 0x55fb90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x55fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_55fb94:
    // 0x55fb94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55fb98:
    // 0x55fb98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x55fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_55fb9c:
    // 0x55fb9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55fb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55fba0:
    // 0x55fba0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55fba4:
    // 0x55fba4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x55fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_55fba8:
    // 0x55fba8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55fbac:
    // 0x55fbac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55fbb0:
    // 0x55fbb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x55fbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55fbb4:
    // 0x55fbb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55fbb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55fbb8:
    // 0x55fbb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x55fbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55fbbc:
    // 0x55fbbc: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x55fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_55fbc0:
    // 0x55fbc0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x55fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_55fbc4:
    // 0x55fbc4: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x55fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_55fbc8:
    // 0x55fbc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x55fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_55fbcc:
    // 0x55fbcc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x55fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_55fbd0:
    // 0x55fbd0: 0xacc20214  sw          $v0, 0x214($a2)
    ctx->pc = 0x55fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 532), GPR_U32(ctx, 2));
label_55fbd4:
    // 0x55fbd4: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x55fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fbd8:
    // 0x55fbd8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x55fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_55fbdc:
    // 0x55fbdc: 0xc4800104  lwc1        $f0, 0x104($a0)
    ctx->pc = 0x55fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fbe0:
    // 0x55fbe0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x55fbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_55fbe4:
    // 0x55fbe4: 0xc4800108  lwc1        $f0, 0x108($a0)
    ctx->pc = 0x55fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fbe8:
    // 0x55fbe8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x55fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_55fbec:
    // 0x55fbec: 0xc480010c  lwc1        $f0, 0x10C($a0)
    ctx->pc = 0x55fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fbf0:
    // 0x55fbf0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x55fbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_55fbf4:
    // 0x55fbf4: 0xc04cc70  jal         func_1331C0
label_55fbf8:
    if (ctx->pc == 0x55FBF8u) {
        ctx->pc = 0x55FBF8u;
            // 0x55fbf8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x55FBFCu;
        goto label_55fbfc;
    }
    ctx->pc = 0x55FBF4u;
    SET_GPR_U32(ctx, 31, 0x55FBFCu);
    ctx->pc = 0x55FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FBF4u;
            // 0x55fbf8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FBFCu; }
        if (ctx->pc != 0x55FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FBFCu; }
        if (ctx->pc != 0x55FBFCu) { return; }
    }
    ctx->pc = 0x55FBFCu;
label_55fbfc:
    // 0x55fbfc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x55fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_55fc00:
    // 0x55fc00: 0xc04cc44  jal         func_133110
label_55fc04:
    if (ctx->pc == 0x55FC04u) {
        ctx->pc = 0x55FC04u;
            // 0x55fc04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FC08u;
        goto label_55fc08;
    }
    ctx->pc = 0x55FC00u;
    SET_GPR_U32(ctx, 31, 0x55FC08u);
    ctx->pc = 0x55FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FC00u;
            // 0x55fc04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC08u; }
        if (ctx->pc != 0x55FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC08u; }
        if (ctx->pc != 0x55FC08u) { return; }
    }
    ctx->pc = 0x55FC08u;
label_55fc08:
    // 0x55fc08: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x55fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_55fc0c:
    // 0x55fc0c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x55fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_55fc10:
    // 0x55fc10: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x55fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fc14:
    // 0x55fc14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x55fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_55fc18:
    // 0x55fc18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x55fc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55fc1c:
    // 0x55fc1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x55fc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55fc20:
    // 0x55fc20: 0xc04cc70  jal         func_1331C0
label_55fc24:
    if (ctx->pc == 0x55FC24u) {
        ctx->pc = 0x55FC24u;
            // 0x55fc24: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x55FC28u;
        goto label_55fc28;
    }
    ctx->pc = 0x55FC20u;
    SET_GPR_U32(ctx, 31, 0x55FC28u);
    ctx->pc = 0x55FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FC20u;
            // 0x55fc24: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC28u; }
        if (ctx->pc != 0x55FC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC28u; }
        if (ctx->pc != 0x55FC28u) { return; }
    }
    ctx->pc = 0x55FC28u;
label_55fc28:
    // 0x55fc28: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x55fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_55fc2c:
    // 0x55fc2c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x55fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_55fc30:
    // 0x55fc30: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x55fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_55fc34:
    // 0x55fc34: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x55fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_55fc38:
    // 0x55fc38: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x55fc38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_55fc3c:
    // 0x55fc3c: 0xc088b74  jal         func_222DD0
label_55fc40:
    if (ctx->pc == 0x55FC40u) {
        ctx->pc = 0x55FC40u;
            // 0x55fc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FC44u;
        goto label_55fc44;
    }
    ctx->pc = 0x55FC3Cu;
    SET_GPR_U32(ctx, 31, 0x55FC44u);
    ctx->pc = 0x55FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FC3Cu;
            // 0x55fc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC44u; }
        if (ctx->pc != 0x55FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC44u; }
        if (ctx->pc != 0x55FC44u) { return; }
    }
    ctx->pc = 0x55FC44u;
label_55fc44:
    // 0x55fc44: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x55fc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_55fc48:
    // 0x55fc48: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x55fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_55fc4c:
    // 0x55fc4c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x55fc4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_55fc50:
    // 0x55fc50: 0x320f809  jalr        $t9
label_55fc54:
    if (ctx->pc == 0x55FC54u) {
        ctx->pc = 0x55FC54u;
            // 0x55fc54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x55FC58u;
        goto label_55fc58;
    }
    ctx->pc = 0x55FC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55FC58u);
        ctx->pc = 0x55FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FC50u;
            // 0x55fc54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55FC58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55FC58u; }
            if (ctx->pc != 0x55FC58u) { return; }
        }
        }
    }
    ctx->pc = 0x55FC58u;
label_55fc58:
    // 0x55fc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55fc5c:
    // 0x55fc5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55fc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55fc60:
    // 0x55fc60: 0xc04cbe0  jal         func_132F80
label_55fc64:
    if (ctx->pc == 0x55FC64u) {
        ctx->pc = 0x55FC64u;
            // 0x55fc64: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x55FC68u;
        goto label_55fc68;
    }
    ctx->pc = 0x55FC60u;
    SET_GPR_U32(ctx, 31, 0x55FC68u);
    ctx->pc = 0x55FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FC60u;
            // 0x55fc64: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC68u; }
        if (ctx->pc != 0x55FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC68u; }
        if (ctx->pc != 0x55FC68u) { return; }
    }
    ctx->pc = 0x55FC68u;
label_55fc68:
    // 0x55fc68: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x55fc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55fc6c:
    // 0x55fc6c: 0x8e310050  lw          $s1, 0x50($s1)
    ctx->pc = 0x55fc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_55fc70:
    // 0x55fc70: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x55fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55fc74:
    // 0x55fc74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55fc78:
    // 0x55fc78: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x55fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fc7c:
    // 0x55fc7c: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x55fc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55fc80:
    // 0x55fc80: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x55fc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_55fc84:
    // 0x55fc84: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x55fc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_55fc88:
    // 0x55fc88: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x55fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_55fc8c:
    // 0x55fc8c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x55fc8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_55fc90:
    // 0x55fc90: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x55fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fc94:
    // 0x55fc94: 0xc089638  jal         func_2258E0
label_55fc98:
    if (ctx->pc == 0x55FC98u) {
        ctx->pc = 0x55FC98u;
            // 0x55fc98: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x55FC9Cu;
        goto label_55fc9c;
    }
    ctx->pc = 0x55FC94u;
    SET_GPR_U32(ctx, 31, 0x55FC9Cu);
    ctx->pc = 0x55FC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FC94u;
            // 0x55fc98: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC9Cu; }
        if (ctx->pc != 0x55FC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FC9Cu; }
        if (ctx->pc != 0x55FC9Cu) { return; }
    }
    ctx->pc = 0x55FC9Cu;
label_55fc9c:
    // 0x55fc9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55fca0:
    // 0x55fca0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x55fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55fca4:
    // 0x55fca4: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x55fca4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_55fca8:
    // 0x55fca8: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x55fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55fcac:
    // 0x55fcac: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x55fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55fcb0:
    // 0x55fcb0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x55fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55fcb4:
    // 0x55fcb4: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x55fcb4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_55fcb8:
    // 0x55fcb8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x55fcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55fcbc:
    // 0x55fcbc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x55fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fcc0:
    // 0x55fcc0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x55fcc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_55fcc4:
    // 0x55fcc4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x55fcc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_55fcc8:
    // 0x55fcc8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x55fcc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_55fccc:
    // 0x55fccc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x55fcccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_55fcd0:
    // 0x55fcd0: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x55fcd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_55fcd4:
    // 0x55fcd4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x55fcd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_55fcd8:
    // 0x55fcd8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x55fcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_55fcdc:
    // 0x55fcdc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x55fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_55fce0:
    // 0x55fce0: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x55fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fce4:
    // 0x55fce4: 0xc088b74  jal         func_222DD0
label_55fce8:
    if (ctx->pc == 0x55FCE8u) {
        ctx->pc = 0x55FCE8u;
            // 0x55fce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FCECu;
        goto label_55fcec;
    }
    ctx->pc = 0x55FCE4u;
    SET_GPR_U32(ctx, 31, 0x55FCECu);
    ctx->pc = 0x55FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FCE4u;
            // 0x55fce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FCECu; }
        if (ctx->pc != 0x55FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FCECu; }
        if (ctx->pc != 0x55FCECu) { return; }
    }
    ctx->pc = 0x55FCECu;
label_55fcec:
    // 0x55fcec: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x55fcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_55fcf0:
    // 0x55fcf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55fcf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55fcf4:
    // 0x55fcf4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x55fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_55fcf8:
    // 0x55fcf8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x55fcf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_55fcfc:
    // 0x55fcfc: 0x320f809  jalr        $t9
label_55fd00:
    if (ctx->pc == 0x55FD00u) {
        ctx->pc = 0x55FD00u;
            // 0x55fd00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x55FD04u;
        goto label_55fd04;
    }
    ctx->pc = 0x55FCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55FD04u);
        ctx->pc = 0x55FD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FCFCu;
            // 0x55fd00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55FD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55FD04u; }
            if (ctx->pc != 0x55FD04u) { return; }
        }
        }
    }
    ctx->pc = 0x55FD04u;
label_55fd04:
    // 0x55fd04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x55fd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_55fd08:
    // 0x55fd08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fd0c:
    // 0x55fd0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55fd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55fd10:
    // 0x55fd10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55fd10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55fd14:
    // 0x55fd14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55fd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55fd18:
    // 0x55fd18: 0x3e00008  jr          $ra
label_55fd1c:
    if (ctx->pc == 0x55FD1Cu) {
        ctx->pc = 0x55FD1Cu;
            // 0x55fd1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55FD20u;
        goto label_fallthrough_0x55fd18;
    }
    ctx->pc = 0x55FD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FD18u;
            // 0x55fd1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x55fd18:
    ctx->pc = 0x55FD20u;
}
