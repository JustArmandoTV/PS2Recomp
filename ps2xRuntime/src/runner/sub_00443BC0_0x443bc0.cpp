#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443BC0
// Address: 0x443bc0 - 0x443cd0
void sub_00443BC0_0x443bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443BC0_0x443bc0");
#endif

    switch (ctx->pc) {
        case 0x443c58u: goto label_443c58;
        case 0x443c7cu: goto label_443c7c;
        case 0x443c8cu: goto label_443c8c;
        case 0x443c9cu: goto label_443c9c;
        case 0x443ca8u: goto label_443ca8;
        case 0x443cb8u: goto label_443cb8;
        default: break;
    }

    ctx->pc = 0x443bc0u;

    // 0x443bc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x443bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x443bc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x443bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x443bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x443bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x443bcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x443bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x443bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x443bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x443bd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x443bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443bd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x443bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443bdc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x443bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x443be0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x443be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443be4: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x443be4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x443be8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x443be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x443bec: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x443becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x443bf0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x443bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x443bf4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x443bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x443bf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x443bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x443bfc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x443bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x443c00: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x443c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x443c04: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x443c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x443c08: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x443c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x443c0c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x443c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x443c10: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x443c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x443c14: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x443c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x443c18: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x443c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x443c1c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x443c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x443c20: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x443c20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x443c24: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x443c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x443c28: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x443c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x443c2c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x443c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x443c30: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x443c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x443c34: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x443c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x443c38: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x443c38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x443c3c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x443c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x443c40: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x443c40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x443c44: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x443c44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x443c48: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x443c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x443c4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x443c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x443c50: 0xc08d1ac  jal         func_2346B0
    ctx->pc = 0x443C50u;
    SET_GPR_U32(ctx, 31, 0x443C58u);
    ctx->pc = 0x443C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443C50u;
            // 0x443c54: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346B0u;
    if (runtime->hasFunction(0x2346B0u)) {
        auto targetFn = runtime->lookupFunction(0x2346B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C58u; }
        if (ctx->pc != 0x443C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002346B0_0x2346b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C58u; }
        if (ctx->pc != 0x443C58u) { return; }
    }
    ctx->pc = 0x443C58u;
label_443c58:
    // 0x443c58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x443c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x443c5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x443c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x443c60: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x443C60u;
    {
        const bool branch_taken_0x443c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443c60) {
            ctx->pc = 0x443C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x443C60u;
            // 0x443c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443CB0u;
            goto label_443cb0;
        }
    }
    ctx->pc = 0x443C68u;
    // 0x443c68: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x443c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x443c6c: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x443c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x443c70: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x443c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x443c74: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x443C74u;
    SET_GPR_U32(ctx, 31, 0x443C7Cu);
    ctx->pc = 0x443C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443C74u;
            // 0x443c78: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C7Cu; }
        if (ctx->pc != 0x443C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C7Cu; }
        if (ctx->pc != 0x443C7Cu) { return; }
    }
    ctx->pc = 0x443C7Cu;
label_443c7c:
    // 0x443c7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x443c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443c80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x443c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x443c84: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x443C84u;
    SET_GPR_U32(ctx, 31, 0x443C8Cu);
    ctx->pc = 0x443C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443C84u;
            // 0x443c88: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C8Cu; }
        if (ctx->pc != 0x443C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C8Cu; }
        if (ctx->pc != 0x443C8Cu) { return; }
    }
    ctx->pc = 0x443C8Cu;
label_443c8c:
    // 0x443c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x443c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443c90: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x443c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x443c94: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x443C94u;
    SET_GPR_U32(ctx, 31, 0x443C9Cu);
    ctx->pc = 0x443C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443C94u;
            // 0x443c98: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C9Cu; }
        if (ctx->pc != 0x443C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443C9Cu; }
        if (ctx->pc != 0x443C9Cu) { return; }
    }
    ctx->pc = 0x443C9Cu;
label_443c9c:
    // 0x443c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x443c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443ca0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x443CA0u;
    SET_GPR_U32(ctx, 31, 0x443CA8u);
    ctx->pc = 0x443CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443CA0u;
            // 0x443ca4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443CA8u; }
        if (ctx->pc != 0x443CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443CA8u; }
        if (ctx->pc != 0x443CA8u) { return; }
    }
    ctx->pc = 0x443CA8u;
label_443ca8:
    // 0x443ca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x443CA8u;
    {
        const bool branch_taken_0x443ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443CA8u;
            // 0x443cac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ca8) {
            ctx->pc = 0x443CBCu;
            goto label_443cbc;
        }
    }
    ctx->pc = 0x443CB0u;
label_443cb0:
    // 0x443cb0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x443CB0u;
    SET_GPR_U32(ctx, 31, 0x443CB8u);
    ctx->pc = 0x443CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443CB0u;
            // 0x443cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443CB8u; }
        if (ctx->pc != 0x443CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443CB8u; }
        if (ctx->pc != 0x443CB8u) { return; }
    }
    ctx->pc = 0x443CB8u;
label_443cb8:
    // 0x443cb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x443cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_443cbc:
    // 0x443cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x443cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x443CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443CC4u;
            // 0x443cc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443CCCu;
    // 0x443ccc: 0x0  nop
    ctx->pc = 0x443cccu;
    // NOP
}
